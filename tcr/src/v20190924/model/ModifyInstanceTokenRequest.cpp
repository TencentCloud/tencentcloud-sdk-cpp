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

#include <tencentcloud/tcr/v20190924/model/ModifyInstanceTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyInstanceTokenRequest::ModifyInstanceTokenRequest() :
    m_tokenIdHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descHasBeenSet(false),
    m_modifyFlagHasBeenSet(false)
{
}

string ModifyInstanceTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tokenId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceTokenRequest::GetTokenId() const
{
    return m_tokenId;
}

void ModifyInstanceTokenRequest::SetTokenId(const string& _tokenId)
{
    m_tokenId = _tokenId;
    m_tokenIdHasBeenSet = true;
}

bool ModifyInstanceTokenRequest::TokenIdHasBeenSet() const
{
    return m_tokenIdHasBeenSet;
}

string ModifyInstanceTokenRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifyInstanceTokenRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifyInstanceTokenRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

bool ModifyInstanceTokenRequest::GetEnable() const
{
    return m_enable;
}

void ModifyInstanceTokenRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyInstanceTokenRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyInstanceTokenRequest::GetDesc() const
{
    return m_desc;
}

void ModifyInstanceTokenRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModifyInstanceTokenRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t ModifyInstanceTokenRequest::GetModifyFlag() const
{
    return m_modifyFlag;
}

void ModifyInstanceTokenRequest::SetModifyFlag(const int64_t& _modifyFlag)
{
    m_modifyFlag = _modifyFlag;
    m_modifyFlagHasBeenSet = true;
}

bool ModifyInstanceTokenRequest::ModifyFlagHasBeenSet() const
{
    return m_modifyFlagHasBeenSet;
}


