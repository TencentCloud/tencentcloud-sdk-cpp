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

#include <tencentcloud/trocket/v20230308/model/DescribeMQTTInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeMQTTInstanceResponse::DescribeMQTTInstanceResponse() :
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_subscriptionNumLimitHasBeenSet(false),
    m_clientNumLimitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMQTTInstanceResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNum") && !rsp["TopicNum"].IsNull())
    {
        if (!rsp["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = rsp["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (rsp.HasMember("TopicNumLimit") && !rsp["TopicNumLimit"].IsNull())
    {
        if (!rsp["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = rsp["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("TpsLimit") && !rsp["TpsLimit"].IsNull())
    {
        if (!rsp["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = rsp["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedTime") && !rsp["CreatedTime"].IsNull())
    {
        if (!rsp["CreatedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = rsp["CreatedTime"].GetInt64();
        m_createdTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(rsp["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("SkuCode") && !rsp["SkuCode"].IsNull())
    {
        if (!rsp["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(rsp["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (rsp.HasMember("SubscriptionNumLimit") && !rsp["SubscriptionNumLimit"].IsNull())
    {
        if (!rsp["SubscriptionNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubscriptionNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionNumLimit = rsp["SubscriptionNumLimit"].GetInt64();
        m_subscriptionNumLimitHasBeenSet = true;
    }

    if (rsp.HasMember("ClientNumLimit") && !rsp["ClientNumLimit"].IsNull())
    {
        if (!rsp["ClientNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNumLimit = rsp["ClientNumLimit"].GetInt64();
        m_clientNumLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMQTTInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionNumLimit, allocator);
    }

    if (m_clientNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientNumLimit, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeMQTTInstanceResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeMQTTInstanceResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeMQTTInstanceResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeMQTTInstanceResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMQTTInstanceResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeMQTTInstanceResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetTopicNum() const
{
    return m_topicNum;
}

bool DescribeMQTTInstanceResponse::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

bool DescribeMQTTInstanceResponse::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetTpsLimit() const
{
    return m_tpsLimit;
}

bool DescribeMQTTInstanceResponse::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeMQTTInstanceResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string DescribeMQTTInstanceResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeMQTTInstanceResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeMQTTInstanceResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribeMQTTInstanceResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string DescribeMQTTInstanceResponse::GetSkuCode() const
{
    return m_skuCode;
}

bool DescribeMQTTInstanceResponse::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetSubscriptionNumLimit() const
{
    return m_subscriptionNumLimit;
}

bool DescribeMQTTInstanceResponse::SubscriptionNumLimitHasBeenSet() const
{
    return m_subscriptionNumLimitHasBeenSet;
}

int64_t DescribeMQTTInstanceResponse::GetClientNumLimit() const
{
    return m_clientNumLimit;
}

bool DescribeMQTTInstanceResponse::ClientNumLimitHasBeenSet() const
{
    return m_clientNumLimitHasBeenSet;
}


