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

#include <tencentcloud/vpc/v20170312/model/HighPriorityModifyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HighPriorityModifyItem::HighPriorityModifyItem() :
    m_highPriorityRouteIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome HighPriorityModifyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighPriorityRouteId") && !value["HighPriorityRouteId"].IsNull())
    {
        if (!value["HighPriorityRouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityModifyItem.HighPriorityRouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityRouteId = string(value["HighPriorityRouteId"].GetString());
        m_highPriorityRouteIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityModifyItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighPriorityModifyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highPriorityRouteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highPriorityRouteId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string HighPriorityModifyItem::GetHighPriorityRouteId() const
{
    return m_highPriorityRouteId;
}

void HighPriorityModifyItem::SetHighPriorityRouteId(const string& _highPriorityRouteId)
{
    m_highPriorityRouteId = _highPriorityRouteId;
    m_highPriorityRouteIdHasBeenSet = true;
}

bool HighPriorityModifyItem::HighPriorityRouteIdHasBeenSet() const
{
    return m_highPriorityRouteIdHasBeenSet;
}

string HighPriorityModifyItem::GetDescription() const
{
    return m_description;
}

void HighPriorityModifyItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HighPriorityModifyItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

