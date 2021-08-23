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

#include <tencentcloud/ecm/v20190719/model/PeakNetworkRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PeakNetworkRegionInfo::PeakNetworkRegionInfo() :
    m_regionHasBeenSet(false),
    m_peakNetworkSetHasBeenSet(false)
{
}

CoreInternalOutcome PeakNetworkRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeakNetworkRegionInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PeakNetworkSet") && !value["PeakNetworkSet"].IsNull())
    {
        if (!value["PeakNetworkSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PeakNetworkRegionInfo.PeakNetworkSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PeakNetworkSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PeakNetwork item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_peakNetworkSet.push_back(item);
        }
        m_peakNetworkSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PeakNetworkRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_peakNetworkSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakNetworkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_peakNetworkSet.begin(); itr != m_peakNetworkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PeakNetworkRegionInfo::GetRegion() const
{
    return m_region;
}

void PeakNetworkRegionInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PeakNetworkRegionInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<PeakNetwork> PeakNetworkRegionInfo::GetPeakNetworkSet() const
{
    return m_peakNetworkSet;
}

void PeakNetworkRegionInfo::SetPeakNetworkSet(const vector<PeakNetwork>& _peakNetworkSet)
{
    m_peakNetworkSet = _peakNetworkSet;
    m_peakNetworkSetHasBeenSet = true;
}

bool PeakNetworkRegionInfo::PeakNetworkSetHasBeenSet() const
{
    return m_peakNetworkSetHasBeenSet;
}

