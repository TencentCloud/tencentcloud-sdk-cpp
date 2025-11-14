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

#include <tencentcloud/trocket/v20230308/model/ZoneScheduledItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ZoneScheduledItem::ZoneScheduledItem() :
    m_zoneIdHasBeenSet(false),
    m_nodePermWipeFlagHasBeenSet(false)
{
}

CoreInternalOutcome ZoneScheduledItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneScheduledItem.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("NodePermWipeFlag") && !value["NodePermWipeFlag"].IsNull())
    {
        if (!value["NodePermWipeFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneScheduledItem.NodePermWipeFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nodePermWipeFlag = value["NodePermWipeFlag"].GetBool();
        m_nodePermWipeFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneScheduledItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodePermWipeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodePermWipeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodePermWipeFlag, allocator);
    }

}


string ZoneScheduledItem::GetZoneId() const
{
    return m_zoneId;
}

void ZoneScheduledItem::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZoneScheduledItem::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

bool ZoneScheduledItem::GetNodePermWipeFlag() const
{
    return m_nodePermWipeFlag;
}

void ZoneScheduledItem::SetNodePermWipeFlag(const bool& _nodePermWipeFlag)
{
    m_nodePermWipeFlag = _nodePermWipeFlag;
    m_nodePermWipeFlagHasBeenSet = true;
}

bool ZoneScheduledItem::NodePermWipeFlagHasBeenSet() const
{
    return m_nodePermWipeFlagHasBeenSet;
}

