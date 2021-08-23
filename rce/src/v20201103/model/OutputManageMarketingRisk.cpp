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

#include <tencentcloud/rce/v20201103/model/OutputManageMarketingRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputManageMarketingRisk::OutputManageMarketingRisk() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_uUidHasBeenSet(false)
{
}

CoreInternalOutcome OutputManageMarketingRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRisk.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRisk.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRisk.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }

    if (value.HasMember("UUid") && !value["UUid"].IsNull())
    {
        if (!value["UUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputManageMarketingRisk.UUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUid = string(value["UUid"].GetString());
        m_uUidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputManageMarketingRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUid.c_str(), allocator).Move(), allocator);
    }

}


int64_t OutputManageMarketingRisk::GetCode() const
{
    return m_code;
}

void OutputManageMarketingRisk::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool OutputManageMarketingRisk::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string OutputManageMarketingRisk::GetMessage() const
{
    return m_message;
}

void OutputManageMarketingRisk::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool OutputManageMarketingRisk::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

OutputManageMarketingRiskValue OutputManageMarketingRisk::GetValue() const
{
    return m_value;
}

void OutputManageMarketingRisk::SetValue(const OutputManageMarketingRiskValue& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OutputManageMarketingRisk::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string OutputManageMarketingRisk::GetUUid() const
{
    return m_uUid;
}

void OutputManageMarketingRisk::SetUUid(const string& _uUid)
{
    m_uUid = _uUid;
    m_uUidHasBeenSet = true;
}

bool OutputManageMarketingRisk::UUidHasBeenSet() const
{
    return m_uUidHasBeenSet;
}

