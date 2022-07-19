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

#include <tencentcloud/iotvideo/v20211125/model/DescribeAIModelChannelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DescribeAIModelChannelResponse::DescribeAIModelChannelResponse() :
    m_typeHasBeenSet(false),
    m_forwardAddressHasBeenSet(false),
    m_forwardKeyHasBeenSet(false),
    m_cKafkaRegionHasBeenSet(false),
    m_cKafkaInstanceHasBeenSet(false),
    m_cKafkaTopicHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAIModelChannelResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("ForwardAddress") && !rsp["ForwardAddress"].IsNull())
    {
        if (!rsp["ForwardAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardAddress = string(rsp["ForwardAddress"].GetString());
        m_forwardAddressHasBeenSet = true;
    }

    if (rsp.HasMember("ForwardKey") && !rsp["ForwardKey"].IsNull())
    {
        if (!rsp["ForwardKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardKey = string(rsp["ForwardKey"].GetString());
        m_forwardKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CKafkaRegion") && !rsp["CKafkaRegion"].IsNull())
    {
        if (!rsp["CKafkaRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaRegion = string(rsp["CKafkaRegion"].GetString());
        m_cKafkaRegionHasBeenSet = true;
    }

    if (rsp.HasMember("CKafkaInstance") && !rsp["CKafkaInstance"].IsNull())
    {
        if (!rsp["CKafkaInstance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaInstance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaInstance = string(rsp["CKafkaInstance"].GetString());
        m_cKafkaInstanceHasBeenSet = true;
    }

    if (rsp.HasMember("CKafkaTopic") && !rsp["CKafkaTopic"].IsNull())
    {
        if (!rsp["CKafkaTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CKafkaTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cKafkaTopic = string(rsp["CKafkaTopic"].GetString());
        m_cKafkaTopicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAIModelChannelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cKafkaTopic.c_str(), allocator).Move(), allocator);
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


string DescribeAIModelChannelResponse::GetType() const
{
    return m_type;
}

bool DescribeAIModelChannelResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAIModelChannelResponse::GetForwardAddress() const
{
    return m_forwardAddress;
}

bool DescribeAIModelChannelResponse::ForwardAddressHasBeenSet() const
{
    return m_forwardAddressHasBeenSet;
}

string DescribeAIModelChannelResponse::GetForwardKey() const
{
    return m_forwardKey;
}

bool DescribeAIModelChannelResponse::ForwardKeyHasBeenSet() const
{
    return m_forwardKeyHasBeenSet;
}

string DescribeAIModelChannelResponse::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

bool DescribeAIModelChannelResponse::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string DescribeAIModelChannelResponse::GetCKafkaInstance() const
{
    return m_cKafkaInstance;
}

bool DescribeAIModelChannelResponse::CKafkaInstanceHasBeenSet() const
{
    return m_cKafkaInstanceHasBeenSet;
}

string DescribeAIModelChannelResponse::GetCKafkaTopic() const
{
    return m_cKafkaTopic;
}

bool DescribeAIModelChannelResponse::CKafkaTopicHasBeenSet() const
{
    return m_cKafkaTopicHasBeenSet;
}


