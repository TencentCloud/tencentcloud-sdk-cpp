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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPURLRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxDLPURLRuleItem::TrafficSandboxDLPURLRuleItem() :
    m_uRLHasBeenSet(false),
    m_uRLExceptHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxDLPURLRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPURLRuleItem.URL` is not array type"));

        const rapidjson::Value &tmpValue = value["URL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRL.push_back((*itr).GetString());
        }
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("URLExcept") && !value["URLExcept"].IsNull())
    {
        if (!value["URLExcept"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPURLRuleItem.URLExcept` is not array type"));

        const rapidjson::Value &tmpValue = value["URLExcept"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRLExcept.push_back((*itr).GetString());
        }
        m_uRLExceptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxDLPURLRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRL.begin(); itr != m_uRL.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uRLExceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLExcept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRLExcept.begin(); itr != m_uRLExcept.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> TrafficSandboxDLPURLRuleItem::GetURL() const
{
    return m_uRL;
}

void TrafficSandboxDLPURLRuleItem::SetURL(const vector<string>& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool TrafficSandboxDLPURLRuleItem::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

vector<string> TrafficSandboxDLPURLRuleItem::GetURLExcept() const
{
    return m_uRLExcept;
}

void TrafficSandboxDLPURLRuleItem::SetURLExcept(const vector<string>& _uRLExcept)
{
    m_uRLExcept = _uRLExcept;
    m_uRLExceptHasBeenSet = true;
}

bool TrafficSandboxDLPURLRuleItem::URLExceptHasBeenSet() const
{
    return m_uRLExceptHasBeenSet;
}

