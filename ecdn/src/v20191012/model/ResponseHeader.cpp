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

#include <tencentcloud/ecdn/v20191012/model/ResponseHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace std;

ResponseHeader::ResponseHeader() :
    m_switchHasBeenSet(false),
    m_headerRulesHasBeenSet(false)
{
}

CoreInternalOutcome ResponseHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseHeader.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("HeaderRules") && !value["HeaderRules"].IsNull())
    {
        if (!value["HeaderRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResponseHeader.HeaderRules` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpHeaderPathRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerRules.push_back(item);
        }
        m_headerRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_headerRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerRules.begin(); itr != m_headerRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResponseHeader::GetSwitch() const
{
    return m_switch;
}

void ResponseHeader::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ResponseHeader::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<HttpHeaderPathRule> ResponseHeader::GetHeaderRules() const
{
    return m_headerRules;
}

void ResponseHeader::SetHeaderRules(const vector<HttpHeaderPathRule>& _headerRules)
{
    m_headerRules = _headerRules;
    m_headerRulesHasBeenSet = true;
}

bool ResponseHeader::HeaderRulesHasBeenSet() const
{
    return m_headerRulesHasBeenSet;
}

