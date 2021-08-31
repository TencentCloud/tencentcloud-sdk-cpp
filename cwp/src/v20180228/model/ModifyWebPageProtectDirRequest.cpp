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

#include <tencentcloud/cwp/v20180228/model/ModifyWebPageProtectDirRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyWebPageProtectDirRequest::ModifyWebPageProtectDirRequest() :
    m_protectDirAddrHasBeenSet(false),
    m_protectDirNameHasBeenSet(false),
    m_protectFileTypeHasBeenSet(false),
    m_hostConfigHasBeenSet(false)
{
}

string ModifyWebPageProtectDirRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectDirAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDirAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectDirAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_protectDirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDirName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectDirName.c_str(), allocator).Move(), allocator);
    }

    if (m_protectFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostConfig.begin(); itr != m_hostConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWebPageProtectDirRequest::GetProtectDirAddr() const
{
    return m_protectDirAddr;
}

void ModifyWebPageProtectDirRequest::SetProtectDirAddr(const string& _protectDirAddr)
{
    m_protectDirAddr = _protectDirAddr;
    m_protectDirAddrHasBeenSet = true;
}

bool ModifyWebPageProtectDirRequest::ProtectDirAddrHasBeenSet() const
{
    return m_protectDirAddrHasBeenSet;
}

string ModifyWebPageProtectDirRequest::GetProtectDirName() const
{
    return m_protectDirName;
}

void ModifyWebPageProtectDirRequest::SetProtectDirName(const string& _protectDirName)
{
    m_protectDirName = _protectDirName;
    m_protectDirNameHasBeenSet = true;
}

bool ModifyWebPageProtectDirRequest::ProtectDirNameHasBeenSet() const
{
    return m_protectDirNameHasBeenSet;
}

string ModifyWebPageProtectDirRequest::GetProtectFileType() const
{
    return m_protectFileType;
}

void ModifyWebPageProtectDirRequest::SetProtectFileType(const string& _protectFileType)
{
    m_protectFileType = _protectFileType;
    m_protectFileTypeHasBeenSet = true;
}

bool ModifyWebPageProtectDirRequest::ProtectFileTypeHasBeenSet() const
{
    return m_protectFileTypeHasBeenSet;
}

vector<ProtectHostConfig> ModifyWebPageProtectDirRequest::GetHostConfig() const
{
    return m_hostConfig;
}

void ModifyWebPageProtectDirRequest::SetHostConfig(const vector<ProtectHostConfig>& _hostConfig)
{
    m_hostConfig = _hostConfig;
    m_hostConfigHasBeenSet = true;
}

bool ModifyWebPageProtectDirRequest::HostConfigHasBeenSet() const
{
    return m_hostConfigHasBeenSet;
}


