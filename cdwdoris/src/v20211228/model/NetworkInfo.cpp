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

#include <tencentcloud/cdwdoris/v20211228/model/NetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

NetworkInfo::NetworkInfo() :
    m_zoneHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetIpNumHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIpNum") && !value["SubnetIpNum"].IsNull())
    {
        if (!value["SubnetIpNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.SubnetIpNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetIpNum = value["SubnetIpNum"].GetInt64();
        m_subnetIpNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetIpNum, allocator);
    }

}


string NetworkInfo::GetZone() const
{
    return m_zone;
}

void NetworkInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NetworkInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NetworkInfo::GetSubnetId() const
{
    return m_subnetId;
}

void NetworkInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetworkInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t NetworkInfo::GetSubnetIpNum() const
{
    return m_subnetIpNum;
}

void NetworkInfo::SetSubnetIpNum(const int64_t& _subnetIpNum)
{
    m_subnetIpNum = _subnetIpNum;
    m_subnetIpNumHasBeenSet = true;
}

bool NetworkInfo::SubnetIpNumHasBeenSet() const
{
    return m_subnetIpNumHasBeenSet;
}

