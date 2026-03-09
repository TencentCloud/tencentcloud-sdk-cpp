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

#include <tencentcloud/vod/v20180717/model/AdvancedElementInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AdvancedElementInfo::AdvancedElementInfo() :
    m_elementIdHasBeenSet(false),
    m_elementInfoHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedElementInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedElementInfo.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("ElementInfo") && !value["ElementInfo"].IsNull())
    {
        if (!value["ElementInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedElementInfo.ElementInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementInfo = string(value["ElementInfo"].GetString());
        m_elementInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedElementInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementInfo.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedElementInfo::GetElementId() const
{
    return m_elementId;
}

void AdvancedElementInfo::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool AdvancedElementInfo::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string AdvancedElementInfo::GetElementInfo() const
{
    return m_elementInfo;
}

void AdvancedElementInfo::SetElementInfo(const string& _elementInfo)
{
    m_elementInfo = _elementInfo;
    m_elementInfoHasBeenSet = true;
}

bool AdvancedElementInfo::ElementInfoHasBeenSet() const
{
    return m_elementInfoHasBeenSet;
}

