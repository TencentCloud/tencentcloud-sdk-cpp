/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tdid/v20210519/model/ChainTransaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

ChainTransaction::ChainTransaction() :
    m_transactionHashHasBeenSet(false)
{
}

CoreInternalOutcome ChainTransaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransactionHash") && !value["TransactionHash"].IsNull())
    {
        if (!value["TransactionHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChainTransaction.TransactionHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transactionHash = string(value["TransactionHash"].GetString());
        m_transactionHashHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChainTransaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transactionHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransactionHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transactionHash.c_str(), allocator).Move(), allocator);
    }

}


string ChainTransaction::GetTransactionHash() const
{
    return m_transactionHash;
}

void ChainTransaction::SetTransactionHash(const string& _transactionHash)
{
    m_transactionHash = _transactionHash;
    m_transactionHashHasBeenSet = true;
}

bool ChainTransaction::TransactionHashHasBeenSet() const
{
    return m_transactionHashHasBeenSet;
}

