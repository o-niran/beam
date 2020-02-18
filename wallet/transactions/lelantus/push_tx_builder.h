// Copyright 2020 The Beam Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "base_lelantus_tx_builder.h"

namespace beam::wallet::lelantus
{
    class PushTxBuilder : public BaseLelantusTxBuilder
    {
    public:
        PushTxBuilder(BaseTransaction& tx, const AmountList& amount, Amount fee);
        Transaction::Ptr CreateTransaction() override;
    };
} // namespace beam::wallet::lelantus