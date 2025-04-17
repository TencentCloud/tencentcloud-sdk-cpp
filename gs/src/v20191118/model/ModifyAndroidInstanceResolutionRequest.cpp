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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstanceResolutionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidInstanceResolutionRequest::ModifyAndroidInstanceResolutionRequest() :
    m_androidInstanceIdHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_dPIHasBeenSet(false),
    m_fPSHasBeenSet(false),
    m_resolutionTypeHasBeenSet(false)
{
}

string ModifyAndroidInstanceResolutionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
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


string ModifyAndroidInstanceResolutionRequest::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void ModifyAndroidInstanceResolutionRequest::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

uint64_t ModifyAndroidInstanceResolutionRequest::GetWidth() const
{
    return m_width;
}

void ModifyAndroidInstanceResolutionRequest::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ModifyAndroidInstanceResolutionRequest::GetHeight() const
{
    return m_height;
}

void ModifyAndroidInstanceResolutionRequest::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ModifyAndroidInstanceResolutionRequest::GetDPI() const
{
    return m_dPI;
}

void ModifyAndroidInstanceResolutionRequest::SetDPI(const uint64_t& _dPI)
{
    m_dPI = _dPI;
    m_dPIHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::DPIHasBeenSet() const
{
    return m_dPIHasBeenSet;
}

uint64_t ModifyAndroidInstanceResolutionRequest::GetFPS() const
{
    return m_fPS;
}

void ModifyAndroidInstanceResolutionRequest::SetFPS(const uint64_t& _fPS)
{
    m_fPS = _fPS;
    m_fPSHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::FPSHasBeenSet() const
{
    return m_fPSHasBeenSet;
}

string ModifyAndroidInstanceResolutionRequest::GetResolutionType() const
{
    return m_resolutionType;
}

void ModifyAndroidInstanceResolutionRequest::SetResolutionType(const string& _resolutionType)
{
    m_resolutionType = _resolutionType;
    m_resolutionTypeHasBeenSet = true;
}

bool ModifyAndroidInstanceResolutionRequest::ResolutionTypeHasBeenSet() const
{
    return m_resolutionTypeHasBeenSet;
}


