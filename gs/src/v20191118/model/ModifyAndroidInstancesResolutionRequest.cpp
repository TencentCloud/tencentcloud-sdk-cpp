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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesResolutionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidInstancesResolutionRequest::ModifyAndroidInstancesResolutionRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_dPIHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_resolutionTypeHasBeenSet(false)
{
}

string ModifyAndroidInstancesResolutionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_dPIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DPI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dPI, allocator);
    }

    if (m_fPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FPS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fPS, allocator);
    }

    if (m_resolutionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolutionType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAndroidInstancesResolutionRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void ModifyAndroidInstancesResolutionRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

uint64_t ModifyAndroidInstancesResolutionRequest::GetWidth() const
{
    return m_width;
}

void ModifyAndroidInstancesResolutionRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifyAndroidInstancesResolutionRequest::GetHeight() const
{
    return m_height;
}

void ModifyAndroidInstancesResolutionRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ModifyAndroidInstancesResolutionRequest::GetDPI() const
{
    return m_dPI;
}

void ModifyAndroidInstancesResolutionRequest::SetDPI(const uint64_t& _dPI)
{
    m_dPI = _dPI;
    m_dPIHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::DPIHasBeenSet() const
{
    return m_dPIHasBeenSet;
}

uint64_t ModifyAndroidInstancesResolutionRequest::GetFPS() const
{
    return m_fPS;
}

void ModifyAndroidInstancesResolutionRequest::SetFPS(const uint64_t& _fPS)
{
    m_fPS = _fPS;
    m_fPSHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

string ModifyAndroidInstancesResolutionRequest::GetResolutionType() const
{
    return m_resolutionType;
}

void ModifyAndroidInstancesResolutionRequest::SetResolutionType(const string& _resolutionType)
{
    m_resolutionType = _resolutionType;
    m_resolutionTypeHasBeenSet = true;
}

bool ModifyAndroidInstancesResolutionRequest::ResolutionTypeHasBeenSet() const
{
    return m_resolutionTypeHasBeenSet;
}


