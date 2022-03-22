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

#include <tencentcloud/tcm/v20210413/model/InjectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

InjectConfig::InjectConfig() :
    m_excludeIPRangesHasBeenSet(false),
    m_holdApplicationUntilProxyStartsHasBeenSet(false),
    m_holdProxyUntilApplicationEndsHasBeenSet(false)
{
}

CoreInternalOutcome InjectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExcludeIPRanges") && !value["ExcludeIPRanges"].IsNull())
    {
        if (!value["ExcludeIPRanges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InjectConfig.ExcludeIPRanges` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeIPRanges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeIPRanges.push_back((*itr).GetString());
        }
        m_excludeIPRangesHasBeenSet = true;
    }

    if (value.HasMember("HoldApplicationUntilProxyStarts") && !value["HoldApplicationUntilProxyStarts"].IsNull())
    {
        if (!value["HoldApplicationUntilProxyStarts"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InjectConfig.HoldApplicationUntilProxyStarts` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_holdApplicationUntilProxyStarts = value["HoldApplicationUntilProxyStarts"].GetBool();
        m_holdApplicationUntilProxyStartsHasBeenSet = true;
    }

    if (value.HasMember("HoldProxyUntilApplicationEnds") && !value["HoldProxyUntilApplicationEnds"].IsNull())
    {
        if (!value["HoldProxyUntilApplicationEnds"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InjectConfig.HoldProxyUntilApplicationEnds` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_holdProxyUntilApplicationEnds = value["HoldProxyUntilApplicationEnds"].GetBool();
        m_holdProxyUntilApplicationEndsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InjectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_excludeIPRangesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeIPRanges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeIPRanges.begin(); itr != m_excludeIPRanges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_holdApplicationUntilProxyStartsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HoldApplicationUntilProxyStarts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_holdApplicationUntilProxyStarts, allocator);
    }

    if (m_holdProxyUntilApplicationEndsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HoldProxyUntilApplicationEnds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_holdProxyUntilApplicationEnds, allocator);
    }

}


vector<string> InjectConfig::GetExcludeIPRanges() const
{
    return m_excludeIPRanges;
}

void InjectConfig::SetExcludeIPRanges(const vector<string>& _excludeIPRanges)
{
    m_excludeIPRanges = _excludeIPRanges;
    m_excludeIPRangesHasBeenSet = true;
}

bool InjectConfig::ExcludeIPRangesHasBeenSet() const
{
    return m_excludeIPRangesHasBeenSet;
}

bool InjectConfig::GetHoldApplicationUntilProxyStarts() const
{
    return m_holdApplicationUntilProxyStarts;
}

void InjectConfig::SetHoldApplicationUntilProxyStarts(const bool& _holdApplicationUntilProxyStarts)
{
    m_holdApplicationUntilProxyStarts = _holdApplicationUntilProxyStarts;
    m_holdApplicationUntilProxyStartsHasBeenSet = true;
}

bool InjectConfig::HoldApplicationUntilProxyStartsHasBeenSet() const
{
    return m_holdApplicationUntilProxyStartsHasBeenSet;
}

bool InjectConfig::GetHoldProxyUntilApplicationEnds() const
{
    return m_holdProxyUntilApplicationEnds;
}

void InjectConfig::SetHoldProxyUntilApplicationEnds(const bool& _holdProxyUntilApplicationEnds)
{
    m_holdProxyUntilApplicationEnds = _holdProxyUntilApplicationEnds;
    m_holdProxyUntilApplicationEndsHasBeenSet = true;
}

bool InjectConfig::HoldProxyUntilApplicationEndsHasBeenSet() const
{
    return m_holdProxyUntilApplicationEndsHasBeenSet;
}

