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

#include <tencentcloud/mqtt/v20240516/model/DescribeWillMessageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeWillMessageResponse::DescribeWillMessageResponse() :
    m_topicHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_retainedHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_willDelayIntervalHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_responseTopicHasBeenSet(false),
    m_correlationDataHasBeenSet(false),
    m_messageExpiryIntervalHasBeenSet(false),
    m_payloadFormatIndicatorHasBeenSet(false),
    m_userPropertiesHasBeenSet(false),
    m_publishAfterHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWillMessageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Topic") && !rsp["Topic"].IsNull())
    {
        if (!rsp["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(rsp["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (rsp.HasMember("Qos") && !rsp["Qos"].IsNull())
    {
        if (!rsp["Qos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Qos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qos = rsp["Qos"].GetInt64();
        m_qosHasBeenSet = true;
    }

    if (rsp.HasMember("Retained") && !rsp["Retained"].IsNull())
    {
        if (!rsp["Retained"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Retained` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_retained = rsp["Retained"].GetBool();
        m_retainedHasBeenSet = true;
    }

    if (rsp.HasMember("Payload") && !rsp["Payload"].IsNull())
    {
        if (!rsp["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(rsp["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WillDelayInterval") && !rsp["WillDelayInterval"].IsNull())
    {
        if (!rsp["WillDelayInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WillDelayInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_willDelayInterval = rsp["WillDelayInterval"].GetInt64();
        m_willDelayIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("ContentType") && !rsp["ContentType"].IsNull())
    {
        if (!rsp["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(rsp["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseTopic") && !rsp["ResponseTopic"].IsNull())
    {
        if (!rsp["ResponseTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseTopic = string(rsp["ResponseTopic"].GetString());
        m_responseTopicHasBeenSet = true;
    }

    if (rsp.HasMember("CorrelationData") && !rsp["CorrelationData"].IsNull())
    {
        if (!rsp["CorrelationData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorrelationData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_correlationData = string(rsp["CorrelationData"].GetString());
        m_correlationDataHasBeenSet = true;
    }

    if (rsp.HasMember("MessageExpiryInterval") && !rsp["MessageExpiryInterval"].IsNull())
    {
        if (!rsp["MessageExpiryInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageExpiryInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageExpiryInterval = rsp["MessageExpiryInterval"].GetInt64();
        m_messageExpiryIntervalHasBeenSet = true;
    }

    if (rsp.HasMember("PayloadFormatIndicator") && !rsp["PayloadFormatIndicator"].IsNull())
    {
        if (!rsp["PayloadFormatIndicator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayloadFormatIndicator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payloadFormatIndicator = rsp["PayloadFormatIndicator"].GetInt64();
        m_payloadFormatIndicatorHasBeenSet = true;
    }

    if (rsp.HasMember("UserProperties") && !rsp["UserProperties"].IsNull())
    {
        if (!rsp["UserProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserProperties` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userProperties.push_back(item);
        }
        m_userPropertiesHasBeenSet = true;
    }

    if (rsp.HasMember("PublishAfter") && !rsp["PublishAfter"].IsNull())
    {
        if (!rsp["PublishAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublishAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishAfter = rsp["PublishAfter"].GetInt64();
        m_publishAfterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWillMessageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qos, allocator);
    }

    if (m_retainedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retained";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retained, allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_willDelayIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WillDelayInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_willDelayInterval, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_correlationDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorrelationData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_correlationData.c_str(), allocator).Move(), allocator);
    }

    if (m_messageExpiryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageExpiryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageExpiryInterval, allocator);
    }

    if (m_payloadFormatIndicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayloadFormatIndicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payloadFormatIndicator, allocator);
    }

    if (m_userPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userProperties.begin(); itr != m_userProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publishAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishAfter, allocator);
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


string DescribeWillMessageResponse::GetTopic() const
{
    return m_topic;
}

bool DescribeWillMessageResponse::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetQos() const
{
    return m_qos;
}

bool DescribeWillMessageResponse::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

bool DescribeWillMessageResponse::GetRetained() const
{
    return m_retained;
}

bool DescribeWillMessageResponse::RetainedHasBeenSet() const
{
    return m_retainedHasBeenSet;
}

string DescribeWillMessageResponse::GetPayload() const
{
    return m_payload;
}

bool DescribeWillMessageResponse::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeWillMessageResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeWillMessageResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetWillDelayInterval() const
{
    return m_willDelayInterval;
}

bool DescribeWillMessageResponse::WillDelayIntervalHasBeenSet() const
{
    return m_willDelayIntervalHasBeenSet;
}

string DescribeWillMessageResponse::GetContentType() const
{
    return m_contentType;
}

bool DescribeWillMessageResponse::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string DescribeWillMessageResponse::GetResponseTopic() const
{
    return m_responseTopic;
}

bool DescribeWillMessageResponse::ResponseTopicHasBeenSet() const
{
    return m_responseTopicHasBeenSet;
}

string DescribeWillMessageResponse::GetCorrelationData() const
{
    return m_correlationData;
}

bool DescribeWillMessageResponse::CorrelationDataHasBeenSet() const
{
    return m_correlationDataHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetMessageExpiryInterval() const
{
    return m_messageExpiryInterval;
}

bool DescribeWillMessageResponse::MessageExpiryIntervalHasBeenSet() const
{
    return m_messageExpiryIntervalHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetPayloadFormatIndicator() const
{
    return m_payloadFormatIndicator;
}

bool DescribeWillMessageResponse::PayloadFormatIndicatorHasBeenSet() const
{
    return m_payloadFormatIndicatorHasBeenSet;
}

vector<UserProperty> DescribeWillMessageResponse::GetUserProperties() const
{
    return m_userProperties;
}

bool DescribeWillMessageResponse::UserPropertiesHasBeenSet() const
{
    return m_userPropertiesHasBeenSet;
}

int64_t DescribeWillMessageResponse::GetPublishAfter() const
{
    return m_publishAfter;
}

bool DescribeWillMessageResponse::PublishAfterHasBeenSet() const
{
    return m_publishAfterHasBeenSet;
}


