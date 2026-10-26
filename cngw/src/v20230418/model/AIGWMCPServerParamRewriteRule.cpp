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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPServerParamRewriteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPServerParamRewriteRule::AIGWMCPServerParamRewriteRule() :
    m_operateHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPServerParamRewriteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerParamRewriteRule.Operate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operate = string(value["Operate"].GetString());
        m_operateHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerParamRewriteRule.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerParamRewriteRule.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPServerParamRewriteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPServerParamRewriteRule::GetOperate() const
{
    return m_operate;
}

void AIGWMCPServerParamRewriteRule::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool AIGWMCPServerParamRewriteRule::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string AIGWMCPServerParamRewriteRule::GetKey() const
{
    return m_key;
}

void AIGWMCPServerParamRewriteRule::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AIGWMCPServerParamRewriteRule::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string AIGWMCPServerParamRewriteRule::GetValue() const
{
    return m_value;
}

void AIGWMCPServerParamRewriteRule::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool AIGWMCPServerParamRewriteRule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

