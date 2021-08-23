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

#include <tencentcloud/cfw/v20190904/model/NatFwFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatFwFilter::NatFwFilter() :
    m_filterTypeHasBeenSet(false),
    m_filterContentHasBeenSet(false)
{
}

CoreInternalOutcome NatFwFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwFilter.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("FilterContent") && !value["FilterContent"].IsNull())
    {
        if (!value["FilterContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatFwFilter.FilterContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterContent = string(value["FilterContent"].GetString());
        m_filterContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatFwFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterContent.c_str(), allocator).Move(), allocator);
    }

}


string NatFwFilter::GetFilterType() const
{
    return m_filterType;
}

void NatFwFilter::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool NatFwFilter::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string NatFwFilter::GetFilterContent() const
{
    return m_filterContent;
}

void NatFwFilter::SetFilterContent(const string& _filterContent)
{
    m_filterContent = _filterContent;
    m_filterContentHasBeenSet = true;
}

bool NatFwFilter::FilterContentHasBeenSet() const
{
    return m_filterContentHasBeenSet;
}

