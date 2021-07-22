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

#include <tencentcloud/bm/v20180423/model/DescribeDevicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DescribeDevicesRequest::DescribeDevicesRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_wanIpsHasBeenSet(false),
    m_lanIpsHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_vagueIpHasBeenSet(false),
    m_deadlineStartTimeHasBeenSet(false),
    m_deadlineEndTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_isLuckyDeviceHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_maintainStatusHasBeenSet(false)
{
}

string DescribeDevicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_wanIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wanIps.begin(); itr != m_wanIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lanIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_lanIps.begin(); itr != m_lanIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_vagueIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VagueIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vagueIp.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadlineStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadlineEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_isLuckyDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLuckyDevice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isLuckyDevice, allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_order, allocator);
    }

    if (m_maintainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maintainStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeDevicesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDevicesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDevicesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDevicesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDevicesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDevicesRequest::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DescribeDevicesRequest::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DescribeDevicesRequest::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

vector<string> DescribeDevicesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeDevicesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeDevicesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeDevicesRequest::GetWanIps() const
{
    return m_wanIps;
}

void DescribeDevicesRequest::SetWanIps(const vector<string>& _wanIps)
{
    m_wanIps = _wanIps;
    m_wanIpsHasBeenSet = true;
}

bool DescribeDevicesRequest::WanIpsHasBeenSet() const
{
    return m_wanIpsHasBeenSet;
}

vector<string> DescribeDevicesRequest::GetLanIps() const
{
    return m_lanIps;
}

void DescribeDevicesRequest::SetLanIps(const vector<string>& _lanIps)
{
    m_lanIps = _lanIps;
    m_lanIpsHasBeenSet = true;
}

bool DescribeDevicesRequest::LanIpsHasBeenSet() const
{
    return m_lanIpsHasBeenSet;
}

string DescribeDevicesRequest::GetAlias() const
{
    return m_alias;
}

void DescribeDevicesRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool DescribeDevicesRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string DescribeDevicesRequest::GetVagueIp() const
{
    return m_vagueIp;
}

void DescribeDevicesRequest::SetVagueIp(const string& _vagueIp)
{
    m_vagueIp = _vagueIp;
    m_vagueIpHasBeenSet = true;
}

bool DescribeDevicesRequest::VagueIpHasBeenSet() const
{
    return m_vagueIpHasBeenSet;
}

string DescribeDevicesRequest::GetDeadlineStartTime() const
{
    return m_deadlineStartTime;
}

void DescribeDevicesRequest::SetDeadlineStartTime(const string& _deadlineStartTime)
{
    m_deadlineStartTime = _deadlineStartTime;
    m_deadlineStartTimeHasBeenSet = true;
}

bool DescribeDevicesRequest::DeadlineStartTimeHasBeenSet() const
{
    return m_deadlineStartTimeHasBeenSet;
}

string DescribeDevicesRequest::GetDeadlineEndTime() const
{
    return m_deadlineEndTime;
}

void DescribeDevicesRequest::SetDeadlineEndTime(const string& _deadlineEndTime)
{
    m_deadlineEndTime = _deadlineEndTime;
    m_deadlineEndTimeHasBeenSet = true;
}

bool DescribeDevicesRequest::DeadlineEndTimeHasBeenSet() const
{
    return m_deadlineEndTimeHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DescribeDevicesRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DescribeDevicesRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeDevicesRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeDevicesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeDevicesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDevicesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeDevicesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeDevicesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<Tag> DescribeDevicesRequest::GetTags() const
{
    return m_tags;
}

void DescribeDevicesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeDevicesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeDevicesRequest::GetDeviceType() const
{
    return m_deviceType;
}

void DescribeDevicesRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool DescribeDevicesRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetIsLuckyDevice() const
{
    return m_isLuckyDevice;
}

void DescribeDevicesRequest::SetIsLuckyDevice(const uint64_t& _isLuckyDevice)
{
    m_isLuckyDevice = _isLuckyDevice;
    m_isLuckyDeviceHasBeenSet = true;
}

bool DescribeDevicesRequest::IsLuckyDeviceHasBeenSet() const
{
    return m_isLuckyDeviceHasBeenSet;
}

string DescribeDevicesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDevicesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDevicesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

uint64_t DescribeDevicesRequest::GetOrder() const
{
    return m_order;
}

void DescribeDevicesRequest::SetOrder(const uint64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDevicesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDevicesRequest::GetMaintainStatus() const
{
    return m_maintainStatus;
}

void DescribeDevicesRequest::SetMaintainStatus(const string& _maintainStatus)
{
    m_maintainStatus = _maintainStatus;
    m_maintainStatusHasBeenSet = true;
}

bool DescribeDevicesRequest::MaintainStatusHasBeenSet() const
{
    return m_maintainStatusHasBeenSet;
}


