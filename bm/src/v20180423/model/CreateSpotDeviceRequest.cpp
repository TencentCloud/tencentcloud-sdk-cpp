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

#include <tencentcloud/bm/v20180423/model/CreateSpotDeviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

CreateSpotDeviceRequest::CreateSpotDeviceRequest() :
    m_zoneHasBeenSet(false),
    m_computeTypeHasBeenSet(false),
    m_osTypeIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_spotStrategyHasBeenSet(false),
    m_spotPriceLimitHasBeenSet(false),
    m_passwdHasBeenSet(false)
{
}

string CreateSpotDeviceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_computeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeType.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osTypeId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_spotStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spotStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_spotPriceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotPriceLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_spotPriceLimit, allocator);
    }

    if (m_passwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passwd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSpotDeviceRequest::GetZone() const
{
    return m_zone;
}

void CreateSpotDeviceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateSpotDeviceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CreateSpotDeviceRequest::GetComputeType() const
{
    return m_computeType;
}

void CreateSpotDeviceRequest::SetComputeType(const string& _computeType)
{
    m_computeType = _computeType;
    m_computeTypeHasBeenSet = true;
}

bool CreateSpotDeviceRequest::ComputeTypeHasBeenSet() const
{
    return m_computeTypeHasBeenSet;
}

uint64_t CreateSpotDeviceRequest::GetOsTypeId() const
{
    return m_osTypeId;
}

void CreateSpotDeviceRequest::SetOsTypeId(const uint64_t& _osTypeId)
{
    m_osTypeId = _osTypeId;
    m_osTypeIdHasBeenSet = true;
}

bool CreateSpotDeviceRequest::OsTypeIdHasBeenSet() const
{
    return m_osTypeIdHasBeenSet;
}

string CreateSpotDeviceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateSpotDeviceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateSpotDeviceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateSpotDeviceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateSpotDeviceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateSpotDeviceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t CreateSpotDeviceRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void CreateSpotDeviceRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool CreateSpotDeviceRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string CreateSpotDeviceRequest::GetSpotStrategy() const
{
    return m_spotStrategy;
}

void CreateSpotDeviceRequest::SetSpotStrategy(const string& _spotStrategy)
{
    m_spotStrategy = _spotStrategy;
    m_spotStrategyHasBeenSet = true;
}

bool CreateSpotDeviceRequest::SpotStrategyHasBeenSet() const
{
    return m_spotStrategyHasBeenSet;
}

double CreateSpotDeviceRequest::GetSpotPriceLimit() const
{
    return m_spotPriceLimit;
}

void CreateSpotDeviceRequest::SetSpotPriceLimit(const double& _spotPriceLimit)
{
    m_spotPriceLimit = _spotPriceLimit;
    m_spotPriceLimitHasBeenSet = true;
}

bool CreateSpotDeviceRequest::SpotPriceLimitHasBeenSet() const
{
    return m_spotPriceLimitHasBeenSet;
}

string CreateSpotDeviceRequest::GetPasswd() const
{
    return m_passwd;
}

void CreateSpotDeviceRequest::SetPasswd(const string& _passwd)
{
    m_passwd = _passwd;
    m_passwdHasBeenSet = true;
}

bool CreateSpotDeviceRequest::PasswdHasBeenSet() const
{
    return m_passwdHasBeenSet;
}


