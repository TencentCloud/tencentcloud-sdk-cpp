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

#include <tencentcloud/dts/v20180330/model/SubscribeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SubscribeInfo::SubscribeInfo() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_subsStatusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_consumeStartTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sdkConsumedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SubscribeInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SubscribeId") && !value["SubscribeId"].IsNull())
    {
        if (!value["SubscribeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.SubscribeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeId = string(value["SubscribeId"].GetString());
        m_subscribeIdHasBeenSet = true;
    }

    if (value.HasMember("SubscribeName") && !value["SubscribeName"].IsNull())
    {
        if (!value["SubscribeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.SubscribeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeName = string(value["SubscribeName"].GetString());
        m_subscribeNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("SubsStatus") && !value["SubsStatus"].IsNull())
    {
        if (!value["SubsStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.SubsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subsStatus = string(value["SubsStatus"].GetString());
        m_subsStatusHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsumeStartTime") && !value["ConsumeStartTime"].IsNull())
    {
        if (!value["ConsumeStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.ConsumeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeStartTime = string(value["ConsumeStartTime"].GetString());
        m_consumeStartTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.PayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = value["PayType"].GetInt64();
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SdkConsumedTime") && !value["SdkConsumedTime"].IsNull())
    {
        if (!value["SdkConsumedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeInfo.SdkConsumedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkConsumedTime = string(value["SdkConsumedTime"].GetString());
        m_sdkConsumedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribeInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_subscribeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscribeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subscribeName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_subsStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsumeStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_consumeStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_vipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkConsumedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkConsumedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sdkConsumedTime.c_str(), allocator).Move(), allocator);
    }

}


string SubscribeInfo::GetSubscribeId() const
{
    return m_subscribeId;
}

void SubscribeInfo::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool SubscribeInfo::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string SubscribeInfo::GetSubscribeName() const
{
    return m_subscribeName;
}

void SubscribeInfo::SetSubscribeName(const string& _subscribeName)
{
    m_subscribeName = _subscribeName;
    m_subscribeNameHasBeenSet = true;
}

bool SubscribeInfo::SubscribeNameHasBeenSet() const
{
    return m_subscribeNameHasBeenSet;
}

string SubscribeInfo::GetChannelId() const
{
    return m_channelId;
}

void SubscribeInfo::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool SubscribeInfo::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string SubscribeInfo::GetProduct() const
{
    return m_product;
}

void SubscribeInfo::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool SubscribeInfo::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string SubscribeInfo::GetInstanceId() const
{
    return m_instanceId;
}

void SubscribeInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SubscribeInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SubscribeInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void SubscribeInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool SubscribeInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string SubscribeInfo::GetSubsStatus() const
{
    return m_subsStatus;
}

void SubscribeInfo::SetSubsStatus(const string& _subsStatus)
{
    m_subsStatus = _subsStatus;
    m_subsStatusHasBeenSet = true;
}

bool SubscribeInfo::SubsStatusHasBeenSet() const
{
    return m_subsStatusHasBeenSet;
}

string SubscribeInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void SubscribeInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool SubscribeInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string SubscribeInfo::GetCreateTime() const
{
    return m_createTime;
}

void SubscribeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubscribeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SubscribeInfo::GetIsolateTime() const
{
    return m_isolateTime;
}

void SubscribeInfo::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool SubscribeInfo::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string SubscribeInfo::GetExpireTime() const
{
    return m_expireTime;
}

void SubscribeInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SubscribeInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string SubscribeInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void SubscribeInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool SubscribeInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string SubscribeInfo::GetConsumeStartTime() const
{
    return m_consumeStartTime;
}

void SubscribeInfo::SetConsumeStartTime(const string& _consumeStartTime)
{
    m_consumeStartTime = _consumeStartTime;
    m_consumeStartTimeHasBeenSet = true;
}

bool SubscribeInfo::ConsumeStartTimeHasBeenSet() const
{
    return m_consumeStartTimeHasBeenSet;
}

string SubscribeInfo::GetRegion() const
{
    return m_region;
}

void SubscribeInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SubscribeInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t SubscribeInfo::GetPayType() const
{
    return m_payType;
}

void SubscribeInfo::SetPayType(const int64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool SubscribeInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string SubscribeInfo::GetVip() const
{
    return m_vip;
}

void SubscribeInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool SubscribeInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t SubscribeInfo::GetVport() const
{
    return m_vport;
}

void SubscribeInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool SubscribeInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string SubscribeInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void SubscribeInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool SubscribeInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string SubscribeInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void SubscribeInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool SubscribeInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string SubscribeInfo::GetStatus() const
{
    return m_status;
}

void SubscribeInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubscribeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SubscribeInfo::GetSdkConsumedTime() const
{
    return m_sdkConsumedTime;
}

void SubscribeInfo::SetSdkConsumedTime(const string& _sdkConsumedTime)
{
    m_sdkConsumedTime = _sdkConsumedTime;
    m_sdkConsumedTimeHasBeenSet = true;
}

bool SubscribeInfo::SdkConsumedTimeHasBeenSet() const
{
    return m_sdkConsumedTimeHasBeenSet;
}

