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

#include <tencentcloud/essbasic/v20201222/model/GenerateOrganizationSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

GenerateOrganizationSealRequest::GenerateOrganizationSealRequest() :
    m_callerHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_sealHorizontalTextHasBeenSet(false),
    m_isDefaultHasBeenSet(false)
{
}

string GenerateOrganizationSealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_sealHorizontalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealHorizontalText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealHorizontalText.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefault, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller GenerateOrganizationSealRequest::GetCaller() const
{
    return m_caller;
}

void GenerateOrganizationSealRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string GenerateOrganizationSealRequest::GetSealType() const
{
    return m_sealType;
}

void GenerateOrganizationSealRequest::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string GenerateOrganizationSealRequest::GetSourceIp() const
{
    return m_sourceIp;
}

void GenerateOrganizationSealRequest::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string GenerateOrganizationSealRequest::GetSealName() const
{
    return m_sealName;
}

void GenerateOrganizationSealRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

string GenerateOrganizationSealRequest::GetSealHorizontalText() const
{
    return m_sealHorizontalText;
}

void GenerateOrganizationSealRequest::SetSealHorizontalText(const string& _sealHorizontalText)
{
    m_sealHorizontalText = _sealHorizontalText;
    m_sealHorizontalTextHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::SealHorizontalTextHasBeenSet() const
{
    return m_sealHorizontalTextHasBeenSet;
}

bool GenerateOrganizationSealRequest::GetIsDefault() const
{
    return m_isDefault;
}

void GenerateOrganizationSealRequest::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool GenerateOrganizationSealRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}


