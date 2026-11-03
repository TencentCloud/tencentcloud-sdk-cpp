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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailCapabilityLimits.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailCapabilityLimits::CustomGuardrailCapabilityLimits() :
    m_maxHeaderAllowListHasBeenSet(false),
    m_maxKeywordsPerDirectionHasBeenSet(false),
    m_inlineBodyBytesHasBeenSet(false),
    m_maxAcceptedBodyBytesHasBeenSet(false),
    m_transferChunkBytesHasBeenSet(false),
    m_maxTransferChunkBytesHasBeenSet(false),
    m_transferTargetMaxChunksHasBeenSet(false),
    m_maxResponseBodyBytesHasBeenSet(false),
    m_maxStreamEventBytesHasBeenSet(false),
    m_streamRelayMaxConcurrentRequestsHasBeenSet(false),
    m_minTimeoutMsHasBeenSet(false),
    m_maxTimeoutMsHasBeenSet(false),
    m_defaultTimeoutMsHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailCapabilityLimits::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxHeaderAllowList") && !value["MaxHeaderAllowList"].IsNull())
    {
        if (!value["MaxHeaderAllowList"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxHeaderAllowList` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxHeaderAllowList = value["MaxHeaderAllowList"].GetInt64();
        m_maxHeaderAllowListHasBeenSet = true;
    }

    if (value.HasMember("MaxKeywordsPerDirection") && !value["MaxKeywordsPerDirection"].IsNull())
    {
        if (!value["MaxKeywordsPerDirection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxKeywordsPerDirection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxKeywordsPerDirection = value["MaxKeywordsPerDirection"].GetInt64();
        m_maxKeywordsPerDirectionHasBeenSet = true;
    }

    if (value.HasMember("InlineBodyBytes") && !value["InlineBodyBytes"].IsNull())
    {
        if (!value["InlineBodyBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.InlineBodyBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inlineBodyBytes = value["InlineBodyBytes"].GetInt64();
        m_inlineBodyBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxAcceptedBodyBytes") && !value["MaxAcceptedBodyBytes"].IsNull())
    {
        if (!value["MaxAcceptedBodyBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxAcceptedBodyBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAcceptedBodyBytes = value["MaxAcceptedBodyBytes"].GetInt64();
        m_maxAcceptedBodyBytesHasBeenSet = true;
    }

    if (value.HasMember("TransferChunkBytes") && !value["TransferChunkBytes"].IsNull())
    {
        if (!value["TransferChunkBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.TransferChunkBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferChunkBytes = value["TransferChunkBytes"].GetInt64();
        m_transferChunkBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxTransferChunkBytes") && !value["MaxTransferChunkBytes"].IsNull())
    {
        if (!value["MaxTransferChunkBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxTransferChunkBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTransferChunkBytes = value["MaxTransferChunkBytes"].GetInt64();
        m_maxTransferChunkBytesHasBeenSet = true;
    }

    if (value.HasMember("TransferTargetMaxChunks") && !value["TransferTargetMaxChunks"].IsNull())
    {
        if (!value["TransferTargetMaxChunks"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.TransferTargetMaxChunks` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferTargetMaxChunks = value["TransferTargetMaxChunks"].GetInt64();
        m_transferTargetMaxChunksHasBeenSet = true;
    }

    if (value.HasMember("MaxResponseBodyBytes") && !value["MaxResponseBodyBytes"].IsNull())
    {
        if (!value["MaxResponseBodyBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxResponseBodyBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResponseBodyBytes = value["MaxResponseBodyBytes"].GetInt64();
        m_maxResponseBodyBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxStreamEventBytes") && !value["MaxStreamEventBytes"].IsNull())
    {
        if (!value["MaxStreamEventBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxStreamEventBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStreamEventBytes = value["MaxStreamEventBytes"].GetInt64();
        m_maxStreamEventBytesHasBeenSet = true;
    }

    if (value.HasMember("StreamRelayMaxConcurrentRequests") && !value["StreamRelayMaxConcurrentRequests"].IsNull())
    {
        if (!value["StreamRelayMaxConcurrentRequests"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.StreamRelayMaxConcurrentRequests` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamRelayMaxConcurrentRequests = value["StreamRelayMaxConcurrentRequests"].GetInt64();
        m_streamRelayMaxConcurrentRequestsHasBeenSet = true;
    }

    if (value.HasMember("MinTimeoutMs") && !value["MinTimeoutMs"].IsNull())
    {
        if (!value["MinTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MinTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minTimeoutMs = value["MinTimeoutMs"].GetInt64();
        m_minTimeoutMsHasBeenSet = true;
    }

    if (value.HasMember("MaxTimeoutMs") && !value["MaxTimeoutMs"].IsNull())
    {
        if (!value["MaxTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.MaxTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTimeoutMs = value["MaxTimeoutMs"].GetInt64();
        m_maxTimeoutMsHasBeenSet = true;
    }

    if (value.HasMember("DefaultTimeoutMs") && !value["DefaultTimeoutMs"].IsNull())
    {
        if (!value["DefaultTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailCapabilityLimits.DefaultTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultTimeoutMs = value["DefaultTimeoutMs"].GetInt64();
        m_defaultTimeoutMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailCapabilityLimits::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxHeaderAllowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxHeaderAllowList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxHeaderAllowList, allocator);
    }

    if (m_maxKeywordsPerDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxKeywordsPerDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxKeywordsPerDirection, allocator);
    }

    if (m_inlineBodyBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InlineBodyBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inlineBodyBytes, allocator);
    }

    if (m_maxAcceptedBodyBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAcceptedBodyBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAcceptedBodyBytes, allocator);
    }

    if (m_transferChunkBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferChunkBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferChunkBytes, allocator);
    }

    if (m_maxTransferChunkBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTransferChunkBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTransferChunkBytes, allocator);
    }

    if (m_transferTargetMaxChunksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferTargetMaxChunks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferTargetMaxChunks, allocator);
    }

    if (m_maxResponseBodyBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResponseBodyBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResponseBodyBytes, allocator);
    }

    if (m_maxStreamEventBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStreamEventBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStreamEventBytes, allocator);
    }

    if (m_streamRelayMaxConcurrentRequestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamRelayMaxConcurrentRequests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamRelayMaxConcurrentRequests, allocator);
    }

    if (m_minTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minTimeoutMs, allocator);
    }

    if (m_maxTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTimeoutMs, allocator);
    }

    if (m_defaultTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultTimeoutMs, allocator);
    }

}


int64_t CustomGuardrailCapabilityLimits::GetMaxHeaderAllowList() const
{
    return m_maxHeaderAllowList;
}

void CustomGuardrailCapabilityLimits::SetMaxHeaderAllowList(const int64_t& _maxHeaderAllowList)
{
    m_maxHeaderAllowList = _maxHeaderAllowList;
    m_maxHeaderAllowListHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxHeaderAllowListHasBeenSet() const
{
    return m_maxHeaderAllowListHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxKeywordsPerDirection() const
{
    return m_maxKeywordsPerDirection;
}

void CustomGuardrailCapabilityLimits::SetMaxKeywordsPerDirection(const int64_t& _maxKeywordsPerDirection)
{
    m_maxKeywordsPerDirection = _maxKeywordsPerDirection;
    m_maxKeywordsPerDirectionHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxKeywordsPerDirectionHasBeenSet() const
{
    return m_maxKeywordsPerDirectionHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetInlineBodyBytes() const
{
    return m_inlineBodyBytes;
}

void CustomGuardrailCapabilityLimits::SetInlineBodyBytes(const int64_t& _inlineBodyBytes)
{
    m_inlineBodyBytes = _inlineBodyBytes;
    m_inlineBodyBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::InlineBodyBytesHasBeenSet() const
{
    return m_inlineBodyBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxAcceptedBodyBytes() const
{
    return m_maxAcceptedBodyBytes;
}

void CustomGuardrailCapabilityLimits::SetMaxAcceptedBodyBytes(const int64_t& _maxAcceptedBodyBytes)
{
    m_maxAcceptedBodyBytes = _maxAcceptedBodyBytes;
    m_maxAcceptedBodyBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxAcceptedBodyBytesHasBeenSet() const
{
    return m_maxAcceptedBodyBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetTransferChunkBytes() const
{
    return m_transferChunkBytes;
}

void CustomGuardrailCapabilityLimits::SetTransferChunkBytes(const int64_t& _transferChunkBytes)
{
    m_transferChunkBytes = _transferChunkBytes;
    m_transferChunkBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::TransferChunkBytesHasBeenSet() const
{
    return m_transferChunkBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxTransferChunkBytes() const
{
    return m_maxTransferChunkBytes;
}

void CustomGuardrailCapabilityLimits::SetMaxTransferChunkBytes(const int64_t& _maxTransferChunkBytes)
{
    m_maxTransferChunkBytes = _maxTransferChunkBytes;
    m_maxTransferChunkBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxTransferChunkBytesHasBeenSet() const
{
    return m_maxTransferChunkBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetTransferTargetMaxChunks() const
{
    return m_transferTargetMaxChunks;
}

void CustomGuardrailCapabilityLimits::SetTransferTargetMaxChunks(const int64_t& _transferTargetMaxChunks)
{
    m_transferTargetMaxChunks = _transferTargetMaxChunks;
    m_transferTargetMaxChunksHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::TransferTargetMaxChunksHasBeenSet() const
{
    return m_transferTargetMaxChunksHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxResponseBodyBytes() const
{
    return m_maxResponseBodyBytes;
}

void CustomGuardrailCapabilityLimits::SetMaxResponseBodyBytes(const int64_t& _maxResponseBodyBytes)
{
    m_maxResponseBodyBytes = _maxResponseBodyBytes;
    m_maxResponseBodyBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxResponseBodyBytesHasBeenSet() const
{
    return m_maxResponseBodyBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxStreamEventBytes() const
{
    return m_maxStreamEventBytes;
}

void CustomGuardrailCapabilityLimits::SetMaxStreamEventBytes(const int64_t& _maxStreamEventBytes)
{
    m_maxStreamEventBytes = _maxStreamEventBytes;
    m_maxStreamEventBytesHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxStreamEventBytesHasBeenSet() const
{
    return m_maxStreamEventBytesHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetStreamRelayMaxConcurrentRequests() const
{
    return m_streamRelayMaxConcurrentRequests;
}

void CustomGuardrailCapabilityLimits::SetStreamRelayMaxConcurrentRequests(const int64_t& _streamRelayMaxConcurrentRequests)
{
    m_streamRelayMaxConcurrentRequests = _streamRelayMaxConcurrentRequests;
    m_streamRelayMaxConcurrentRequestsHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::StreamRelayMaxConcurrentRequestsHasBeenSet() const
{
    return m_streamRelayMaxConcurrentRequestsHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMinTimeoutMs() const
{
    return m_minTimeoutMs;
}

void CustomGuardrailCapabilityLimits::SetMinTimeoutMs(const int64_t& _minTimeoutMs)
{
    m_minTimeoutMs = _minTimeoutMs;
    m_minTimeoutMsHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MinTimeoutMsHasBeenSet() const
{
    return m_minTimeoutMsHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetMaxTimeoutMs() const
{
    return m_maxTimeoutMs;
}

void CustomGuardrailCapabilityLimits::SetMaxTimeoutMs(const int64_t& _maxTimeoutMs)
{
    m_maxTimeoutMs = _maxTimeoutMs;
    m_maxTimeoutMsHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::MaxTimeoutMsHasBeenSet() const
{
    return m_maxTimeoutMsHasBeenSet;
}

int64_t CustomGuardrailCapabilityLimits::GetDefaultTimeoutMs() const
{
    return m_defaultTimeoutMs;
}

void CustomGuardrailCapabilityLimits::SetDefaultTimeoutMs(const int64_t& _defaultTimeoutMs)
{
    m_defaultTimeoutMs = _defaultTimeoutMs;
    m_defaultTimeoutMsHasBeenSet = true;
}

bool CustomGuardrailCapabilityLimits::DefaultTimeoutMsHasBeenSet() const
{
    return m_defaultTimeoutMsHasBeenSet;
}

