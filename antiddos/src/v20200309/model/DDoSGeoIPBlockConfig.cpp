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

#include <tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DDoSGeoIPBlockConfig::DDoSGeoIPBlockConfig() :
    m_regionTypeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_areaListHasBeenSet(false)
{
}

CoreInternalOutcome DDoSGeoIPBlockConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionType") && !value["RegionType"].IsNull())
    {
        if (!value["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfig.RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(value["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfig.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AreaList") && !value["AreaList"].IsNull())
    {
        if (!value["AreaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfig.AreaList` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaList.push_back((*itr).GetInt64());
        }
        m_areaListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSGeoIPBlockConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_areaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaList.begin(); itr != m_areaList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string DDoSGeoIPBlockConfig::GetRegionType() const
{
    return m_regionType;
}

void DDoSGeoIPBlockConfig::SetRegionType(const string& _regionType)
{
    m_regionType = _regionType;
    m_regionTypeHasBeenSet = true;
}

bool DDoSGeoIPBlockConfig::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string DDoSGeoIPBlockConfig::GetAction() const
{
    return m_action;
}

void DDoSGeoIPBlockConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool DDoSGeoIPBlockConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string DDoSGeoIPBlockConfig::GetId() const
{
    return m_id;
}

void DDoSGeoIPBlockConfig::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DDoSGeoIPBlockConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<int64_t> DDoSGeoIPBlockConfig::GetAreaList() const
{
    return m_areaList;
}

void DDoSGeoIPBlockConfig::SetAreaList(const vector<int64_t>& _areaList)
{
    m_areaList = _areaList;
    m_areaListHasBeenSet = true;
}

bool DDoSGeoIPBlockConfig::AreaListHasBeenSet() const
{
    return m_areaListHasBeenSet;
}

