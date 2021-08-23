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

#include <tencentcloud/dc/v20180410/model/InternetAddressDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

InternetAddressDetail::InternetAddressDetail() :
    m_instanceIdHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_maskLenHasBeenSet(false),
    m_addrTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_releaseTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_addrProtoHasBeenSet(false),
    m_reserveTimeHasBeenSet(false)
{
}

CoreInternalOutcome InternetAddressDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Subnet") && !value["Subnet"].IsNull())
    {
        if (!value["Subnet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.Subnet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnet = string(value["Subnet"].GetString());
        m_subnetHasBeenSet = true;
    }

    if (value.HasMember("MaskLen") && !value["MaskLen"].IsNull())
    {
        if (!value["MaskLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.MaskLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maskLen = value["MaskLen"].GetInt64();
        m_maskLenHasBeenSet = true;
    }

    if (value.HasMember("AddrType") && !value["AddrType"].IsNull())
    {
        if (!value["AddrType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.AddrType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addrType = value["AddrType"].GetInt64();
        m_addrTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.StopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = string(value["StopTime"].GetString());
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.ReleaseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = string(value["ReleaseTime"].GetString());
        m_releaseTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AddrProto") && !value["AddrProto"].IsNull())
    {
        if (!value["AddrProto"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.AddrProto` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addrProto = value["AddrProto"].GetInt64();
        m_addrProtoHasBeenSet = true;
    }

    if (value.HasMember("ReserveTime") && !value["ReserveTime"].IsNull())
    {
        if (!value["ReserveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InternetAddressDetail.ReserveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reserveTime = value["ReserveTime"].GetInt64();
        m_reserveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InternetAddressDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnet.c_str(), allocator).Move(), allocator);
    }

    if (m_maskLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maskLen, allocator);
    }

    if (m_addrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addrType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_addrProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addrProto, allocator);
    }

    if (m_reserveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReserveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reserveTime, allocator);
    }

}


string InternetAddressDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InternetAddressDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InternetAddressDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InternetAddressDetail::GetSubnet() const
{
    return m_subnet;
}

void InternetAddressDetail::SetSubnet(const string& _subnet)
{
    m_subnet = _subnet;
    m_subnetHasBeenSet = true;
}

bool InternetAddressDetail::SubnetHasBeenSet() const
{
    return m_subnetHasBeenSet;
}

int64_t InternetAddressDetail::GetMaskLen() const
{
    return m_maskLen;
}

void InternetAddressDetail::SetMaskLen(const int64_t& _maskLen)
{
    m_maskLen = _maskLen;
    m_maskLenHasBeenSet = true;
}

bool InternetAddressDetail::MaskLenHasBeenSet() const
{
    return m_maskLenHasBeenSet;
}

int64_t InternetAddressDetail::GetAddrType() const
{
    return m_addrType;
}

void InternetAddressDetail::SetAddrType(const int64_t& _addrType)
{
    m_addrType = _addrType;
    m_addrTypeHasBeenSet = true;
}

bool InternetAddressDetail::AddrTypeHasBeenSet() const
{
    return m_addrTypeHasBeenSet;
}

int64_t InternetAddressDetail::GetStatus() const
{
    return m_status;
}

void InternetAddressDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InternetAddressDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InternetAddressDetail::GetApplyTime() const
{
    return m_applyTime;
}

void InternetAddressDetail::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool InternetAddressDetail::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string InternetAddressDetail::GetStopTime() const
{
    return m_stopTime;
}

void InternetAddressDetail::SetStopTime(const string& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool InternetAddressDetail::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

string InternetAddressDetail::GetReleaseTime() const
{
    return m_releaseTime;
}

void InternetAddressDetail::SetReleaseTime(const string& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool InternetAddressDetail::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

string InternetAddressDetail::GetRegion() const
{
    return m_region;
}

void InternetAddressDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InternetAddressDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t InternetAddressDetail::GetAppId() const
{
    return m_appId;
}

void InternetAddressDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InternetAddressDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t InternetAddressDetail::GetAddrProto() const
{
    return m_addrProto;
}

void InternetAddressDetail::SetAddrProto(const int64_t& _addrProto)
{
    m_addrProto = _addrProto;
    m_addrProtoHasBeenSet = true;
}

bool InternetAddressDetail::AddrProtoHasBeenSet() const
{
    return m_addrProtoHasBeenSet;
}

int64_t InternetAddressDetail::GetReserveTime() const
{
    return m_reserveTime;
}

void InternetAddressDetail::SetReserveTime(const int64_t& _reserveTime)
{
    m_reserveTime = _reserveTime;
    m_reserveTimeHasBeenSet = true;
}

bool InternetAddressDetail::ReserveTimeHasBeenSet() const
{
    return m_reserveTimeHasBeenSet;
}

