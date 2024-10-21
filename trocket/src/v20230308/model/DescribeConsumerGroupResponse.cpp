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

#include <tencentcloud/trocket/v20230308/model/DescribeConsumerGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeConsumerGroupResponse::DescribeConsumerGroupResponse() :
    m_consumerNumHasBeenSet(false),
    m_tpsHasBeenSet(false),
    m_consumerLagHasBeenSet(false),
    m_consumeTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false),
    m_consumeEnableHasBeenSet(false),
    m_maxRetryTimesHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_messageModelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConsumerGroupResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ConsumerNum") && !rsp["ConsumerNum"].IsNull())
    {
        if (!rsp["ConsumerNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerNum = rsp["ConsumerNum"].GetInt64();
        m_consumerNumHasBeenSet = true;
    }

    if (rsp.HasMember("Tps") && !rsp["Tps"].IsNull())
    {
        if (!rsp["Tps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tps = rsp["Tps"].GetInt64();
        m_tpsHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumerLag") && !rsp["ConsumerLag"].IsNull())
    {
        if (!rsp["ConsumerLag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerLag = rsp["ConsumerLag"].GetInt64();
        m_consumerLagHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumeType") && !rsp["ConsumeType"].IsNull())
    {
        if (!rsp["ConsumeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumeType = string(rsp["ConsumeType"].GetString());
        m_consumeTypeHasBeenSet = true;
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

    if (rsp.HasMember("ConsumeMessageOrderly") && !rsp["ConsumeMessageOrderly"].IsNull())
    {
        if (!rsp["ConsumeMessageOrderly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeMessageOrderly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeMessageOrderly = rsp["ConsumeMessageOrderly"].GetBool();
        m_consumeMessageOrderlyHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumeEnable") && !rsp["ConsumeEnable"].IsNull())
    {
        if (!rsp["ConsumeEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumeEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeEnable = rsp["ConsumeEnable"].GetBool();
        m_consumeEnableHasBeenSet = true;
    }

    if (rsp.HasMember("MaxRetryTimes") && !rsp["MaxRetryTimes"].IsNull())
    {
        if (!rsp["MaxRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryTimes = rsp["MaxRetryTimes"].GetInt64();
        m_maxRetryTimesHasBeenSet = true;
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

    if (rsp.HasMember("MessageModel") && !rsp["MessageModel"].IsNull())
    {
        if (!rsp["MessageModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageModel = string(rsp["MessageModel"].GetString());
        m_messageModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConsumerGroupResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_consumerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerNum, allocator);
    }

    if (m_tpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tps, allocator);
    }

    if (m_consumerLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerLag, allocator);
    }

    if (m_consumeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumeType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTime, allocator);
    }

    if (m_consumeMessageOrderlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeMessageOrderly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeMessageOrderly, allocator);
    }

    if (m_consumeEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeEnable, allocator);
    }

    if (m_maxRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryTimes, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_messageModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageModel.c_str(), allocator).Move(), allocator);
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


int64_t DescribeConsumerGroupResponse::GetConsumerNum() const
{
    return m_consumerNum;
}

bool DescribeConsumerGroupResponse::ConsumerNumHasBeenSet() const
{
    return m_consumerNumHasBeenSet;
}

int64_t DescribeConsumerGroupResponse::GetTps() const
{
    return m_tps;
}

bool DescribeConsumerGroupResponse::TpsHasBeenSet() const
{
    return m_tpsHasBeenSet;
}

int64_t DescribeConsumerGroupResponse::GetConsumerLag() const
{
    return m_consumerLag;
}

bool DescribeConsumerGroupResponse::ConsumerLagHasBeenSet() const
{
    return m_consumerLagHasBeenSet;
}

string DescribeConsumerGroupResponse::GetConsumeType() const
{
    return m_consumeType;
}

bool DescribeConsumerGroupResponse::ConsumeTypeHasBeenSet() const
{
    return m_consumeTypeHasBeenSet;
}

int64_t DescribeConsumerGroupResponse::GetCreatedTime() const
{
    return m_createdTime;
}

bool DescribeConsumerGroupResponse::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

bool DescribeConsumerGroupResponse::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

bool DescribeConsumerGroupResponse::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

bool DescribeConsumerGroupResponse::GetConsumeEnable() const
{
    return m_consumeEnable;
}

bool DescribeConsumerGroupResponse::ConsumeEnableHasBeenSet() const
{
    return m_consumeEnableHasBeenSet;
}

int64_t DescribeConsumerGroupResponse::GetMaxRetryTimes() const
{
    return m_maxRetryTimes;
}

bool DescribeConsumerGroupResponse::MaxRetryTimesHasBeenSet() const
{
    return m_maxRetryTimesHasBeenSet;
}

string DescribeConsumerGroupResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeConsumerGroupResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeConsumerGroupResponse::GetMessageModel() const
{
    return m_messageModel;
}

bool DescribeConsumerGroupResponse::MessageModelHasBeenSet() const
{
    return m_messageModelHasBeenSet;
}


