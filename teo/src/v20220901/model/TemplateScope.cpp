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

#include <tencentcloud/teo/v20220901/model/TemplateScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

TemplateScope::TemplateScope() :
    m_zoneIdHasBeenSet(false),
    m_entityStatusHasBeenSet(false)
{
}

CoreInternalOutcome TemplateScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateScope.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("EntityStatus") && !value["EntityStatus"].IsNull())
    {
        if (!value["EntityStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TemplateScope.EntityStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["EntityStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EntityStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_entityStatus.push_back(item);
        }
        m_entityStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_entityStatus.begin(); itr != m_entityStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TemplateScope::GetZoneId() const
{
    return m_zoneId;
}

void TemplateScope::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool TemplateScope::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<EntityStatus> TemplateScope::GetEntityStatus() const
{
    return m_entityStatus;
}

void TemplateScope::SetEntityStatus(const vector<EntityStatus>& _entityStatus)
{
    m_entityStatus = _entityStatus;
    m_entityStatusHasBeenSet = true;
}

bool TemplateScope::EntityStatusHasBeenSet() const
{
    return m_entityStatusHasBeenSet;
}

