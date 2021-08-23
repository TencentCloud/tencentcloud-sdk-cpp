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

#include <tencentcloud/tdid/v20210519/model/TransactionArg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

TransactionArg::TransactionArg() :
    m_invokerTDidHasBeenSet(false)
{
}

CoreInternalOutcome TransactionArg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokerTDid") && !value["InvokerTDid"].IsNull())
    {
        if (!value["InvokerTDid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransactionArg.InvokerTDid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokerTDid = string(value["InvokerTDid"].GetString());
        m_invokerTDidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransactionArg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokerTDidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokerTDid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokerTDid.c_str(), allocator).Move(), allocator);
    }

}


string TransactionArg::GetInvokerTDid() const
{
    return m_invokerTDid;
}

void TransactionArg::SetInvokerTDid(const string& _invokerTDid)
{
    m_invokerTDid = _invokerTDid;
    m_invokerTDidHasBeenSet = true;
}

bool TransactionArg::InvokerTDidHasBeenSet() const
{
    return m_invokerTDidHasBeenSet;
}

