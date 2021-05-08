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

#include <tencentcloud/tem/v20201221/model/CreateCosTokenV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

CreateCosTokenV2Request::CreateCosTokenV2Request() :
    m_serviceIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_optTypeHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string CreateCosTokenV2Request::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_optTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_optType, allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCosTokenV2Request::GetServiceId() const
{
    return m_serviceId;
}

void CreateCosTokenV2Request::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateCosTokenV2Request::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateCosTokenV2Request::GetPkgName() const
{
    return m_pkgName;
}

void CreateCosTokenV2Request::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool CreateCosTokenV2Request::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

int64_t CreateCosTokenV2Request::GetOptType() const
{
    return m_optType;
}

void CreateCosTokenV2Request::SetOptType(const int64_t& _optType)
{
    m_optType = _optType;
    m_optTypeHasBeenSet = true;
}

bool CreateCosTokenV2Request::OptTypeHasBeenSet() const
{
    return m_optTypeHasBeenSet;
}

int64_t CreateCosTokenV2Request::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateCosTokenV2Request::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateCosTokenV2Request::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}


