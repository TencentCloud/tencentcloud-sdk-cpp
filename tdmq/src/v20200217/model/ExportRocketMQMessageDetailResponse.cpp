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

#include <tencentcloud/tdmq/v20200217/model/ExportRocketMQMessageDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ExportRocketMQMessageDetailResponse::ExportRocketMQMessageDetailResponse() :
    m_msgIdHasBeenSet(false),
    m_bornTimestampHasBeenSet(false),
    m_storeTimestampHasBeenSet(false),
    m_bornHostHasBeenSet(false),
    m_msgTagHasBeenSet(false),
    m_msgKeyHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_reConsumeTimesHasBeenSet(false),
    m_msgBodyHasBeenSet(false),
    m_msgBodyCRCHasBeenSet(false),
    m_msgBodySizeHasBeenSet(false)
{
}

CoreInternalOutcome ExportRocketMQMessageDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MsgId") && !rsp["MsgId"].IsNull())
    {
        if (!rsp["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(rsp["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (rsp.HasMember("BornTimestamp") && !rsp["BornTimestamp"].IsNull())
    {
        if (!rsp["BornTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BornTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bornTimestamp = rsp["BornTimestamp"].GetInt64();
        m_bornTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("StoreTimestamp") && !rsp["StoreTimestamp"].IsNull())
    {
        if (!rsp["StoreTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StoreTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storeTimestamp = rsp["StoreTimestamp"].GetInt64();
        m_storeTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("BornHost") && !rsp["BornHost"].IsNull())
    {
        if (!rsp["BornHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BornHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bornHost = string(rsp["BornHost"].GetString());
        m_bornHostHasBeenSet = true;
    }

    if (rsp.HasMember("MsgTag") && !rsp["MsgTag"].IsNull())
    {
        if (!rsp["MsgTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgTag = string(rsp["MsgTag"].GetString());
        m_msgTagHasBeenSet = true;
    }

    if (rsp.HasMember("MsgKey") && !rsp["MsgKey"].IsNull())
    {
        if (!rsp["MsgKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgKey = string(rsp["MsgKey"].GetString());
        m_msgKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Properties") && !rsp["Properties"].IsNull())
    {
        if (!rsp["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(rsp["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (rsp.HasMember("ReConsumeTimes") && !rsp["ReConsumeTimes"].IsNull())
    {
        if (!rsp["ReConsumeTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReConsumeTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reConsumeTimes = rsp["ReConsumeTimes"].GetUint64();
        m_reConsumeTimesHasBeenSet = true;
    }

    if (rsp.HasMember("MsgBody") && !rsp["MsgBody"].IsNull())
    {
        if (!rsp["MsgBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgBody = string(rsp["MsgBody"].GetString());
        m_msgBodyHasBeenSet = true;
    }

    if (rsp.HasMember("MsgBodyCRC") && !rsp["MsgBodyCRC"].IsNull())
    {
        if (!rsp["MsgBodyCRC"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBodyCRC` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgBodyCRC = rsp["MsgBodyCRC"].GetInt64();
        m_msgBodyCRCHasBeenSet = true;
    }

    if (rsp.HasMember("MsgBodySize") && !rsp["MsgBodySize"].IsNull())
    {
        if (!rsp["MsgBodySize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBodySize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgBodySize = rsp["MsgBodySize"].GetUint64();
        m_msgBodySizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ExportRocketMQMessageDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_bornTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BornTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bornTimestamp, allocator);
    }

    if (m_storeTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeTimestamp, allocator);
    }

    if (m_bornHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BornHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bornHost.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgTag.c_str(), allocator).Move(), allocator);
    }

    if (m_msgKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgKey.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_reConsumeTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReConsumeTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reConsumeTimes, allocator);
    }

    if (m_msgBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgBody.c_str(), allocator).Move(), allocator);
    }

    if (m_msgBodyCRCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBodyCRC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgBodyCRC, allocator);
    }

    if (m_msgBodySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBodySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgBodySize, allocator);
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


string ExportRocketMQMessageDetailResponse::GetMsgId() const
{
    return m_msgId;
}

bool ExportRocketMQMessageDetailResponse::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

int64_t ExportRocketMQMessageDetailResponse::GetBornTimestamp() const
{
    return m_bornTimestamp;
}

bool ExportRocketMQMessageDetailResponse::BornTimestampHasBeenSet() const
{
    return m_bornTimestampHasBeenSet;
}

int64_t ExportRocketMQMessageDetailResponse::GetStoreTimestamp() const
{
    return m_storeTimestamp;
}

bool ExportRocketMQMessageDetailResponse::StoreTimestampHasBeenSet() const
{
    return m_storeTimestampHasBeenSet;
}

string ExportRocketMQMessageDetailResponse::GetBornHost() const
{
    return m_bornHost;
}

bool ExportRocketMQMessageDetailResponse::BornHostHasBeenSet() const
{
    return m_bornHostHasBeenSet;
}

string ExportRocketMQMessageDetailResponse::GetMsgTag() const
{
    return m_msgTag;
}

bool ExportRocketMQMessageDetailResponse::MsgTagHasBeenSet() const
{
    return m_msgTagHasBeenSet;
}

string ExportRocketMQMessageDetailResponse::GetMsgKey() const
{
    return m_msgKey;
}

bool ExportRocketMQMessageDetailResponse::MsgKeyHasBeenSet() const
{
    return m_msgKeyHasBeenSet;
}

string ExportRocketMQMessageDetailResponse::GetProperties() const
{
    return m_properties;
}

bool ExportRocketMQMessageDetailResponse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

uint64_t ExportRocketMQMessageDetailResponse::GetReConsumeTimes() const
{
    return m_reConsumeTimes;
}

bool ExportRocketMQMessageDetailResponse::ReConsumeTimesHasBeenSet() const
{
    return m_reConsumeTimesHasBeenSet;
}

string ExportRocketMQMessageDetailResponse::GetMsgBody() const
{
    return m_msgBody;
}

bool ExportRocketMQMessageDetailResponse::MsgBodyHasBeenSet() const
{
    return m_msgBodyHasBeenSet;
}

int64_t ExportRocketMQMessageDetailResponse::GetMsgBodyCRC() const
{
    return m_msgBodyCRC;
}

bool ExportRocketMQMessageDetailResponse::MsgBodyCRCHasBeenSet() const
{
    return m_msgBodyCRCHasBeenSet;
}

uint64_t ExportRocketMQMessageDetailResponse::GetMsgBodySize() const
{
    return m_msgBodySize;
}

bool ExportRocketMQMessageDetailResponse::MsgBodySizeHasBeenSet() const
{
    return m_msgBodySizeHasBeenSet;
}


