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

#include <tencentcloud/cam/v20190116/model/UpdateUserSAMLConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

UpdateUserSAMLConfigRequest::UpdateUserSAMLConfigRequest() :
    m_operateHasBeenSet(false),
    m_sAMLMetadataDocumentHasBeenSet(false),
    m_auxiliaryDomainHasBeenSet(false)
{
}

string UpdateUserSAMLConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_sAMLMetadataDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SAMLMetadataDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sAMLMetadataDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_auxiliaryDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuxiliaryDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auxiliaryDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserSAMLConfigRequest::GetOperate() const
{
    return m_operate;
}

void UpdateUserSAMLConfigRequest::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool UpdateUserSAMLConfigRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string UpdateUserSAMLConfigRequest::GetSAMLMetadataDocument() const
{
    return m_sAMLMetadataDocument;
}

void UpdateUserSAMLConfigRequest::SetSAMLMetadataDocument(const string& _sAMLMetadataDocument)
{
    m_sAMLMetadataDocument = _sAMLMetadataDocument;
    m_sAMLMetadataDocumentHasBeenSet = true;
}

bool UpdateUserSAMLConfigRequest::SAMLMetadataDocumentHasBeenSet() const
{
    return m_sAMLMetadataDocumentHasBeenSet;
}

string UpdateUserSAMLConfigRequest::GetAuxiliaryDomain() const
{
    return m_auxiliaryDomain;
}

void UpdateUserSAMLConfigRequest::SetAuxiliaryDomain(const string& _auxiliaryDomain)
{
    m_auxiliaryDomain = _auxiliaryDomain;
    m_auxiliaryDomainHasBeenSet = true;
}

bool UpdateUserSAMLConfigRequest::AuxiliaryDomainHasBeenSet() const
{
    return m_auxiliaryDomainHasBeenSet;
}


