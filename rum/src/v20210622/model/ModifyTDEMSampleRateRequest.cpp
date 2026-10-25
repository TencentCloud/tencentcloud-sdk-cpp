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

#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleRateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyTDEMSampleRateRequest::ModifyTDEMSampleRateRequest() :
    m_appIdHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_replaySampleRateHasBeenSet(false)
{
}

string ModifyTDEMSampleRateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_replaySampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaySampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_replaySampleRate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTDEMSampleRateRequest::GetAppId() const
{
    return m_appId;
}

void ModifyTDEMSampleRateRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ModifyTDEMSampleRateRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

double ModifyTDEMSampleRateRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void ModifyTDEMSampleRateRequest::SetSampleRate(const double& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ModifyTDEMSampleRateRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

double ModifyTDEMSampleRateRequest::GetReplaySampleRate() const
{
    return m_replaySampleRate;
}

void ModifyTDEMSampleRateRequest::SetReplaySampleRate(const double& _replaySampleRate)
{
    m_replaySampleRate = _replaySampleRate;
    m_replaySampleRateHasBeenSet = true;
}

bool ModifyTDEMSampleRateRequest::ReplaySampleRateHasBeenSet() const
{
    return m_replaySampleRateHasBeenSet;
}


