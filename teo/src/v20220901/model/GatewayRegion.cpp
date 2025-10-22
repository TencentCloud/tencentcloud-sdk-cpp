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

#include <tencentcloud/teo/v20220901/model/GatewayRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

GatewayRegion::GatewayRegion() :
    m_regionIdHasBeenSet(false),
    m_cNNameHasBeenSet(false),
    m_eNNameHasBeenSet(false)
{
}

CoreInternalOutcome GatewayRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayRegion.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("CNName") && !value["CNName"].IsNull())
    {
        if (!value["CNName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayRegion.CNName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cNName = string(value["CNName"].GetString());
        m_cNNameHasBeenSet = true;
    }

    if (value.HasMember("ENName") && !value["ENName"].IsNull())
    {
        if (!value["ENName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayRegion.ENName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eNName = string(value["ENName"].GetString());
        m_eNNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_cNNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CNName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cNName.c_str(), allocator).Move(), allocator);
    }

    if (m_eNNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ENName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eNName.c_str(), allocator).Move(), allocator);
    }

}


string GatewayRegion::GetRegionId() const
{
    return m_regionId;
}

void GatewayRegion::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool GatewayRegion::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string GatewayRegion::GetCNName() const
{
    return m_cNName;
}

void GatewayRegion::SetCNName(const string& _cNName)
{
    m_cNName = _cNName;
    m_cNNameHasBeenSet = true;
}

bool GatewayRegion::CNNameHasBeenSet() const
{
    return m_cNNameHasBeenSet;
}

string GatewayRegion::GetENName() const
{
    return m_eNName;
}

void GatewayRegion::SetENName(const string& _eNName)
{
    m_eNName = _eNName;
    m_eNNameHasBeenSet = true;
}

bool GatewayRegion::ENNameHasBeenSet() const
{
    return m_eNNameHasBeenSet;
}

