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

#include <tencentcloud/bm/v20180423/model/ModifyUserCmdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

ModifyUserCmdRequest::ModifyUserCmdRequest() :
    m_cmdIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string ModifyUserCmdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cmdIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cmdId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserCmdRequest::GetCmdId() const
{
    return m_cmdId;
}

void ModifyUserCmdRequest::SetCmdId(const string& _cmdId)
{
    m_cmdId = _cmdId;
    m_cmdIdHasBeenSet = true;
}

bool ModifyUserCmdRequest::CmdIdHasBeenSet() const
{
    return m_cmdIdHasBeenSet;
}

string ModifyUserCmdRequest::GetAlias() const
{
    return m_alias;
}

void ModifyUserCmdRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ModifyUserCmdRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string ModifyUserCmdRequest::GetOsType() const
{
    return m_osType;
}

void ModifyUserCmdRequest::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ModifyUserCmdRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string ModifyUserCmdRequest::GetContent() const
{
    return m_content;
}

void ModifyUserCmdRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyUserCmdRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


