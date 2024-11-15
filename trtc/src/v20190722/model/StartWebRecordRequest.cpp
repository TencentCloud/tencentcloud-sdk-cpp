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

#include <tencentcloud/trtc/v20190722/model/StartWebRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartWebRecordRequest::StartWebRecordRequest() :
    m_recordUrlHasBeenSet(false),
    m_maxDurationLimitHasBeenSet(false),
    m_storageParamsHasBeenSet(false),
    m_webRecordVideoParamsHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_publishCdnParamsHasBeenSet(false),
    m_readyTimeoutHasBeenSet(false),
    m_emulateMobileParamsHasBeenSet(false)
{
}

string StartWebRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDurationLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDurationLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDurationLimit, allocator);
    }

    if (m_storageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_webRecordVideoParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebRecordVideoParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webRecordVideoParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishCdnParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishCdnParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishCdnParams.begin(); itr != m_publishCdnParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_readyTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadyTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readyTimeout, allocator);
    }

    if (m_emulateMobileParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmulateMobileParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emulateMobileParams.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartWebRecordRequest::GetRecordUrl() const
{
    return m_recordUrl;
}

void StartWebRecordRequest::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool StartWebRecordRequest::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

uint64_t StartWebRecordRequest::GetMaxDurationLimit() const
{
    return m_maxDurationLimit;
}

void StartWebRecordRequest::SetMaxDurationLimit(const uint64_t& _maxDurationLimit)
{
    m_maxDurationLimit = _maxDurationLimit;
    m_maxDurationLimitHasBeenSet = true;
}

bool StartWebRecordRequest::MaxDurationLimitHasBeenSet() const
{
    return m_maxDurationLimitHasBeenSet;
}

StorageParams StartWebRecordRequest::GetStorageParams() const
{
    return m_storageParams;
}

void StartWebRecordRequest::SetStorageParams(const StorageParams& _storageParams)
{
    m_storageParams = _storageParams;
    m_storageParamsHasBeenSet = true;
}

bool StartWebRecordRequest::StorageParamsHasBeenSet() const
{
    return m_storageParamsHasBeenSet;
}

WebRecordVideoParams StartWebRecordRequest::GetWebRecordVideoParams() const
{
    return m_webRecordVideoParams;
}

void StartWebRecordRequest::SetWebRecordVideoParams(const WebRecordVideoParams& _webRecordVideoParams)
{
    m_webRecordVideoParams = _webRecordVideoParams;
    m_webRecordVideoParamsHasBeenSet = true;
}

bool StartWebRecordRequest::WebRecordVideoParamsHasBeenSet() const
{
    return m_webRecordVideoParamsHasBeenSet;
}

int64_t StartWebRecordRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartWebRecordRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartWebRecordRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartWebRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void StartWebRecordRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool StartWebRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

vector<McuPublishCdnParam> StartWebRecordRequest::GetPublishCdnParams() const
{
    return m_publishCdnParams;
}

void StartWebRecordRequest::SetPublishCdnParams(const vector<McuPublishCdnParam>& _publishCdnParams)
{
    m_publishCdnParams = _publishCdnParams;
    m_publishCdnParamsHasBeenSet = true;
}

bool StartWebRecordRequest::PublishCdnParamsHasBeenSet() const
{
    return m_publishCdnParamsHasBeenSet;
}

uint64_t StartWebRecordRequest::GetReadyTimeout() const
{
    return m_readyTimeout;
}

void StartWebRecordRequest::SetReadyTimeout(const uint64_t& _readyTimeout)
{
    m_readyTimeout = _readyTimeout;
    m_readyTimeoutHasBeenSet = true;
}

bool StartWebRecordRequest::ReadyTimeoutHasBeenSet() const
{
    return m_readyTimeoutHasBeenSet;
}

EmulateMobileParams StartWebRecordRequest::GetEmulateMobileParams() const
{
    return m_emulateMobileParams;
}

void StartWebRecordRequest::SetEmulateMobileParams(const EmulateMobileParams& _emulateMobileParams)
{
    m_emulateMobileParams = _emulateMobileParams;
    m_emulateMobileParamsHasBeenSet = true;
}

bool StartWebRecordRequest::EmulateMobileParamsHasBeenSet() const
{
    return m_emulateMobileParamsHasBeenSet;
}


