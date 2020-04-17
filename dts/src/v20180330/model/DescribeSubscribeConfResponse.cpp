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

#include <tencentcloud/dts/v20180330/model/DescribeSubscribeConfResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

DescribeSubscribeConfResponse::DescribeSubscribeConfResponse() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_subsStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_consumeStartTimeHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_sdkConsumedTimeHasBeenSet(false),
    m_sdkHostHasBeenSet(false),
    m_subscribeObjectTypeHasBeenSet(false),
    m_subscribeObjectsHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubscribeConfResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("SubscribeId") && !rsp["SubscribeId"].IsNull())
    {
        if (!rsp["SubscribeId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeId = string(rsp["SubscribeId"].GetString());
        m_subscribeIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeName") && !rsp["SubscribeName"].IsNull())
    {
        if (!rsp["SubscribeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubscribeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeName = string(rsp["SubscribeName"].GetString());
        m_subscribeNameHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelId") && !rsp["ChannelId"].IsNull())
    {
        if (!rsp["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(rsp["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (rsp.HasMember("Product") && !rsp["Product"].IsNull())
    {
        if (!rsp["Product"].IsString())
        {
            return CoreInternalOutcome(Error("response `Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(rsp["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(rsp["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SubsStatus") && !rsp["SubsStatus"].IsNull())
    {
        if (!rsp["SubsStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `SubsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subsStatus = string(rsp["SubsStatus"].GetString());
        m_subsStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateTime") && !rsp["IsolateTime"].IsNull())
    {
        if (!rsp["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(rsp["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineTime") && !rsp["OfflineTime"].IsNull())
    {
        if (!rsp["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(rsp["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumeStartTime") && !rsp["ConsumeStartTime"].IsNull())
    {
        if (!rsp["ConsumeStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsumeStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeStartTime = string(rsp["ConsumeStartTime"].GetString());
        m_consumeStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PayType") && !rsp["PayType"].IsNull())
    {
        if (!rsp["PayType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = rsp["PayType"].GetInt64();
        m_payTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Vip") && !rsp["Vip"].IsNull())
    {
        if (!rsp["Vip"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(rsp["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (rsp.HasMember("Vport") && !rsp["Vport"].IsNull())
    {
        if (!rsp["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = rsp["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (rsp.HasMember("UniqVpcId") && !rsp["UniqVpcId"].IsNull())
    {
        if (!rsp["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(rsp["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("UniqSubnetId") && !rsp["UniqSubnetId"].IsNull())
    {
        if (!rsp["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(rsp["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("SdkConsumedTime") && !rsp["SdkConsumedTime"].IsNull())
    {
        if (!rsp["SdkConsumedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SdkConsumedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkConsumedTime = string(rsp["SdkConsumedTime"].GetString());
        m_sdkConsumedTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SdkHost") && !rsp["SdkHost"].IsNull())
    {
        if (!rsp["SdkHost"].IsString())
        {
            return CoreInternalOutcome(Error("response `SdkHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkHost = string(rsp["SdkHost"].GetString());
        m_sdkHostHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeObjectType") && !rsp["SubscribeObjectType"].IsNull())
    {
        if (!rsp["SubscribeObjectType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SubscribeObjectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeObjectType = rsp["SubscribeObjectType"].GetInt64();
        m_subscribeObjectTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeObjects") && !rsp["SubscribeObjects"].IsNull())
    {
        if (!rsp["SubscribeObjects"].IsArray())
            return CoreInternalOutcome(Error("response `SubscribeObjects` is not array type"));

        const Value &tmpValue = rsp["SubscribeObjects"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribeObjects.push_back(item);
        }
        m_subscribeObjectsHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeSubscribeConfResponse::GetSubscribeId() const
{
    return m_subscribeId;
}

bool DescribeSubscribeConfResponse::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string DescribeSubscribeConfResponse::GetSubscribeName() const
{
    return m_subscribeName;
}

bool DescribeSubscribeConfResponse::SubscribeNameHasBeenSet() const
{
    return m_subscribeNameHasBeenSet;
}

string DescribeSubscribeConfResponse::GetChannelId() const
{
    return m_channelId;
}

bool DescribeSubscribeConfResponse::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeSubscribeConfResponse::GetProduct() const
{
    return m_product;
}

bool DescribeSubscribeConfResponse::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeSubscribeConfResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeSubscribeConfResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSubscribeConfResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribeSubscribeConfResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string DescribeSubscribeConfResponse::GetSubsStatus() const
{
    return m_subsStatus;
}

bool DescribeSubscribeConfResponse::SubsStatusHasBeenSet() const
{
    return m_subsStatusHasBeenSet;
}

string DescribeSubscribeConfResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSubscribeConfResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSubscribeConfResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSubscribeConfResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetIsolateTime() const
{
    return m_isolateTime;
}

bool DescribeSubscribeConfResponse::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeSubscribeConfResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetOfflineTime() const
{
    return m_offlineTime;
}

bool DescribeSubscribeConfResponse::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetConsumeStartTime() const
{
    return m_consumeStartTime;
}

bool DescribeSubscribeConfResponse::ConsumeStartTimeHasBeenSet() const
{
    return m_consumeStartTimeHasBeenSet;
}

int64_t DescribeSubscribeConfResponse::GetPayType() const
{
    return m_payType;
}

bool DescribeSubscribeConfResponse::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetVip() const
{
    return m_vip;
}

bool DescribeSubscribeConfResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DescribeSubscribeConfResponse::GetVport() const
{
    return m_vport;
}

bool DescribeSubscribeConfResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DescribeSubscribeConfResponse::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

bool DescribeSubscribeConfResponse::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string DescribeSubscribeConfResponse::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

bool DescribeSubscribeConfResponse::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string DescribeSubscribeConfResponse::GetSdkConsumedTime() const
{
    return m_sdkConsumedTime;
}

bool DescribeSubscribeConfResponse::SdkConsumedTimeHasBeenSet() const
{
    return m_sdkConsumedTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetSdkHost() const
{
    return m_sdkHost;
}

bool DescribeSubscribeConfResponse::SdkHostHasBeenSet() const
{
    return m_sdkHostHasBeenSet;
}

int64_t DescribeSubscribeConfResponse::GetSubscribeObjectType() const
{
    return m_subscribeObjectType;
}

bool DescribeSubscribeConfResponse::SubscribeObjectTypeHasBeenSet() const
{
    return m_subscribeObjectTypeHasBeenSet;
}

vector<SubscribeObject> DescribeSubscribeConfResponse::GetSubscribeObjects() const
{
    return m_subscribeObjects;
}

bool DescribeSubscribeConfResponse::SubscribeObjectsHasBeenSet() const
{
    return m_subscribeObjectsHasBeenSet;
}

string DescribeSubscribeConfResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeSubscribeConfResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DescribeSubscribeConfResponse::GetRegion() const
{
    return m_region;
}

bool DescribeSubscribeConfResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}


