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

#include <tencentcloud/tse/v20201207/model/ZookeeperRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ZookeeperRegionInfo::ZookeeperRegionInfo() :
    m_deployModeHasBeenSet(false),
    m_mainRegionHasBeenSet(false),
    m_otherRegionsHasBeenSet(false)
{
}

CoreInternalOutcome ZookeeperRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionInfo.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("MainRegion") && !value["MainRegion"].IsNull())
    {
        if (!value["MainRegion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionInfo.MainRegion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainRegion.Deserialize(value["MainRegion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainRegionHasBeenSet = true;
    }

    if (value.HasMember("OtherRegions") && !value["OtherRegions"].IsNull())
    {
        if (!value["OtherRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZookeeperRegionInfo.OtherRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZookeeperRegionMyIdInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherRegions.push_back(item);
        }
        m_otherRegionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZookeeperRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mainRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainRegion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherRegions.begin(); itr != m_otherRegions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ZookeeperRegionInfo::GetDeployMode() const
{
    return m_deployMode;
}

void ZookeeperRegionInfo::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool ZookeeperRegionInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

ZookeeperRegionMyIdInfo ZookeeperRegionInfo::GetMainRegion() const
{
    return m_mainRegion;
}

void ZookeeperRegionInfo::SetMainRegion(const ZookeeperRegionMyIdInfo& _mainRegion)
{
    m_mainRegion = _mainRegion;
    m_mainRegionHasBeenSet = true;
}

bool ZookeeperRegionInfo::MainRegionHasBeenSet() const
{
    return m_mainRegionHasBeenSet;
}

vector<ZookeeperRegionMyIdInfo> ZookeeperRegionInfo::GetOtherRegions() const
{
    return m_otherRegions;
}

void ZookeeperRegionInfo::SetOtherRegions(const vector<ZookeeperRegionMyIdInfo>& _otherRegions)
{
    m_otherRegions = _otherRegions;
    m_otherRegionsHasBeenSet = true;
}

bool ZookeeperRegionInfo::OtherRegionsHasBeenSet() const
{
    return m_otherRegionsHasBeenSet;
}

