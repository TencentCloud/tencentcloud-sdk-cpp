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

#include <tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfigRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DDoSGeoIPBlockConfigRelation::DDoSGeoIPBlockConfigRelation() :
    m_geoIPBlockConfigHasBeenSet(false),
    m_instanceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome DDoSGeoIPBlockConfigRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GeoIPBlockConfig") && !value["GeoIPBlockConfig"].IsNull())
    {
        if (!value["GeoIPBlockConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfigRelation.GeoIPBlockConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_geoIPBlockConfig.Deserialize(value["GeoIPBlockConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_geoIPBlockConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceDetailList") && !value["InstanceDetailList"].IsNull())
    {
        if (!value["InstanceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDoSGeoIPBlockConfigRelation.InstanceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceDetailList.push_back(item);
        }
        m_instanceDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSGeoIPBlockConfigRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_geoIPBlockConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeoIPBlockConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_geoIPBlockConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceDetailList.begin(); itr != m_instanceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


DDoSGeoIPBlockConfig DDoSGeoIPBlockConfigRelation::GetGeoIPBlockConfig() const
{
    return m_geoIPBlockConfig;
}

void DDoSGeoIPBlockConfigRelation::SetGeoIPBlockConfig(const DDoSGeoIPBlockConfig& _geoIPBlockConfig)
{
    m_geoIPBlockConfig = _geoIPBlockConfig;
    m_geoIPBlockConfigHasBeenSet = true;
}

bool DDoSGeoIPBlockConfigRelation::GeoIPBlockConfigHasBeenSet() const
{
    return m_geoIPBlockConfigHasBeenSet;
}

vector<InstanceRelation> DDoSGeoIPBlockConfigRelation::GetInstanceDetailList() const
{
    return m_instanceDetailList;
}

void DDoSGeoIPBlockConfigRelation::SetInstanceDetailList(const vector<InstanceRelation>& _instanceDetailList)
{
    m_instanceDetailList = _instanceDetailList;
    m_instanceDetailListHasBeenSet = true;
}

bool DDoSGeoIPBlockConfigRelation::InstanceDetailListHasBeenSet() const
{
    return m_instanceDetailListHasBeenSet;
}

