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

#include <tencentcloud/cwp/v20180228/model/RegionListDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RegionListDetail::RegionListDetail() :
    m_machineTypeHasBeenSet(false),
    m_cloudFromHasBeenSet(false),
    m_regionListHasBeenSet(false)
{
}

CoreInternalOutcome RegionListDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionListDetail.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudFrom") && !value["CloudFrom"].IsNull())
    {
        if (!value["CloudFrom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionListDetail.CloudFrom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudFrom = value["CloudFrom"].GetUint64();
        m_cloudFromHasBeenSet = true;
    }

    if (value.HasMember("RegionList") && !value["RegionList"].IsNull())
    {
        if (!value["RegionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionListDetail.RegionList` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionList.push_back(item);
        }
        m_regionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionListDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudFrom, allocator);
    }

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RegionListDetail::GetMachineType() const
{
    return m_machineType;
}

void RegionListDetail::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool RegionListDetail::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

uint64_t RegionListDetail::GetCloudFrom() const
{
    return m_cloudFrom;
}

void RegionListDetail::SetCloudFrom(const uint64_t& _cloudFrom)
{
    m_cloudFrom = _cloudFrom;
    m_cloudFromHasBeenSet = true;
}

bool RegionListDetail::CloudFromHasBeenSet() const
{
    return m_cloudFromHasBeenSet;
}

vector<RegionInfo> RegionListDetail::GetRegionList() const
{
    return m_regionList;
}

void RegionListDetail::SetRegionList(const vector<RegionInfo>& _regionList)
{
    m_regionList = _regionList;
    m_regionListHasBeenSet = true;
}

bool RegionListDetail::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

