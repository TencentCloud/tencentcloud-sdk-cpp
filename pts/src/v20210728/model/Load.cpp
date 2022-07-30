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

#include <tencentcloud/pts/v20210728/model/Load.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

Load::Load() :
    m_loadSpecHasBeenSet(false),
    m_vpcLoadDistributionHasBeenSet(false),
    m_geoRegionsLoadDistributionHasBeenSet(false)
{
}

CoreInternalOutcome Load::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadSpec") && !value["LoadSpec"].IsNull())
    {
        if (!value["LoadSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Load.LoadSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loadSpec.Deserialize(value["LoadSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadSpecHasBeenSet = true;
    }

    if (value.HasMember("VpcLoadDistribution") && !value["VpcLoadDistribution"].IsNull())
    {
        if (!value["VpcLoadDistribution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Load.VpcLoadDistribution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcLoadDistribution.Deserialize(value["VpcLoadDistribution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcLoadDistributionHasBeenSet = true;
    }

    if (value.HasMember("GeoRegionsLoadDistribution") && !value["GeoRegionsLoadDistribution"].IsNull())
    {
        if (!value["GeoRegionsLoadDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Load.GeoRegionsLoadDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["GeoRegionsLoadDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GeoRegionsLoadItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_geoRegionsLoadDistribution.push_back(item);
        }
        m_geoRegionsLoadDistributionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Load::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loadSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcLoadDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcLoadDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcLoadDistribution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_geoRegionsLoadDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeoRegionsLoadDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_geoRegionsLoadDistribution.begin(); itr != m_geoRegionsLoadDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


LoadSpec Load::GetLoadSpec() const
{
    return m_loadSpec;
}

void Load::SetLoadSpec(const LoadSpec& _loadSpec)
{
    m_loadSpec = _loadSpec;
    m_loadSpecHasBeenSet = true;
}

bool Load::LoadSpecHasBeenSet() const
{
    return m_loadSpecHasBeenSet;
}

VpcLoadDistribution Load::GetVpcLoadDistribution() const
{
    return m_vpcLoadDistribution;
}

void Load::SetVpcLoadDistribution(const VpcLoadDistribution& _vpcLoadDistribution)
{
    m_vpcLoadDistribution = _vpcLoadDistribution;
    m_vpcLoadDistributionHasBeenSet = true;
}

bool Load::VpcLoadDistributionHasBeenSet() const
{
    return m_vpcLoadDistributionHasBeenSet;
}

vector<GeoRegionsLoadItem> Load::GetGeoRegionsLoadDistribution() const
{
    return m_geoRegionsLoadDistribution;
}

void Load::SetGeoRegionsLoadDistribution(const vector<GeoRegionsLoadItem>& _geoRegionsLoadDistribution)
{
    m_geoRegionsLoadDistribution = _geoRegionsLoadDistribution;
    m_geoRegionsLoadDistributionHasBeenSet = true;
}

bool Load::GeoRegionsLoadDistributionHasBeenSet() const
{
    return m_geoRegionsLoadDistributionHasBeenSet;
}

