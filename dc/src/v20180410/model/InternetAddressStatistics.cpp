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

#include <tencentcloud/dc/v20180410/model/InternetAddressStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

InternetAddressStatistics::InternetAddressStatistics() :
    m_regionHasBeenSet(false),
    m_subnetNumHasBeenSet(false)
{
}

CoreInternalOutcome InternetAddressStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressStatistics.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SubnetNum") && !value["SubnetNum"].IsNull())
    {
        if (!value["SubnetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressStatistics.SubnetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetNum = value["SubnetNum"].GetInt64();
        m_subnetNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAddressStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetNum, allocator);
    }

}


string InternetAddressStatistics::GetRegion() const
{
    return m_region;
}

void InternetAddressStatistics::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InternetAddressStatistics::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t InternetAddressStatistics::GetSubnetNum() const
{
    return m_subnetNum;
}

void InternetAddressStatistics::SetSubnetNum(const int64_t& _subnetNum)
{
    m_subnetNum = _subnetNum;
    m_subnetNumHasBeenSet = true;
}

bool InternetAddressStatistics::SubnetNumHasBeenSet() const
{
    return m_subnetNumHasBeenSet;
}

