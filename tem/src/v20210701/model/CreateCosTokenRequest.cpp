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

#include <tencentcloud/tem/v20210701/model/CreateCosTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CreateCosTokenRequest::CreateCosTokenRequest() :
    m_applicationIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_optTypeHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_timeVersionHasBeenSet(false)
{
}

string CreateCosTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_optTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_optType, allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_timeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCosTokenRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateCosTokenRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateCosTokenRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateCosTokenRequest::GetPkgName() const
{
    return m_pkgName;
}

void CreateCosTokenRequest::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool CreateCosTokenRequest::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

int64_t CreateCosTokenRequest::GetOptType() const
{
    return m_optType;
}

void CreateCosTokenRequest::SetOptType(const int64_t& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool CreateCosTokenRequest::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

int64_t CreateCosTokenRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateCosTokenRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateCosTokenRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string CreateCosTokenRequest::GetTimeVersion() const
{
    return m_timeVersion;
}

void CreateCosTokenRequest::SetTimeVersion(const string& _timeVersion)
{
    m_timeVersion = _timeVersion;
    m_timeVersionHasBeenSet = true;
}

bool CreateCosTokenRequest::TimeVersionHasBeenSet() const
{
    return m_timeVersionHasBeenSet;
}


