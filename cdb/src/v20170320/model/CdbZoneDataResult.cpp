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

#include <tencentcloud/cdb/v20170320/model/CdbZoneDataResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CdbZoneDataResult::CdbZoneDataResult() :
    m_configsHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

CoreInternalOutcome CdbZoneDataResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Configs") && !value["Configs"].IsNull())
    {
        if (!value["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneDataResult.Configs` is not array type"));

        const rapidjson::Value &tmpValue = value["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdbSellConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configs.push_back(item);
        }
        m_configsHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdbZoneDataResult.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdbRegionSellConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regions.push_back(item);
        }
        m_regionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbZoneDataResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CdbSellConfig> CdbZoneDataResult::GetConfigs() const
{
    return m_configs;
}

void CdbZoneDataResult::SetConfigs(const vector<CdbSellConfig>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool CdbZoneDataResult::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

vector<CdbRegionSellConf> CdbZoneDataResult::GetRegions() const
{
    return m_regions;
}

void CdbZoneDataResult::SetRegions(const vector<CdbRegionSellConf>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool CdbZoneDataResult::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

