/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cpdp/v20190820/model/QueryMerchantBalanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryMerchantBalanceResult::QueryMerchantBalanceResult() :
    m_codeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome QueryMerchantBalanceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMerchantBalanceResult.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMerchantBalanceResult.Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(value["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryMerchantBalanceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(value[key.c_str()], allocator);
    }

}


string QueryMerchantBalanceResult::GetCode() const
{
    return m_code;
}

void QueryMerchantBalanceResult::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool QueryMerchantBalanceResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

QueryMerchantBalanceData QueryMerchantBalanceResult::GetData() const
{
    return m_data;
}

void QueryMerchantBalanceResult::SetData(const QueryMerchantBalanceData& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool QueryMerchantBalanceResult::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

