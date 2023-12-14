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

#include <tencentcloud/essbasic/v20210526/model/CreateSealByImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateSealByImageRequest::CreateSealByImageRequest() :
    m_agentHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_sealImageHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_generateSourceHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_sealHorizontalTextHasBeenSet(false),
    m_sealStyleHasBeenSet(false),
    m_sealSizeHasBeenSet(false),
    m_taxIdentifyCodeHasBeenSet(false)
{
}

string CreateSealByImageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_sealImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealImage.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_generateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateSource.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_sealHorizontalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealHorizontalText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealHorizontalText.c_str(), allocator).Move(), allocator);
    }

    if (m_sealStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealStyle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_sealSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealSize.c_str(), allocator).Move(), allocator);
    }

    if (m_taxIdentifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxIdentifyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxIdentifyCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateSealByImageRequest::GetAgent() const
{
    return m_agent;
}

void CreateSealByImageRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateSealByImageRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateSealByImageRequest::GetSealName() const
{
    return m_sealName;
}

void CreateSealByImageRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool CreateSealByImageRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

string CreateSealByImageRequest::GetSealImage() const
{
    return m_sealImage;
}

void CreateSealByImageRequest::SetSealImage(const string& _sealImage)
{
    m_sealImage = _sealImage;
    m_sealImageHasBeenSet = true;
}

bool CreateSealByImageRequest::SealImageHasBeenSet() const
{
    return m_sealImageHasBeenSet;
}

UserInfo CreateSealByImageRequest::GetOperator() const
{
    return m_operator;
}

void CreateSealByImageRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSealByImageRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateSealByImageRequest::GetGenerateSource() const
{
    return m_generateSource;
}

void CreateSealByImageRequest::SetGenerateSource(const string& _generateSource)
{
    m_generateSource = _generateSource;
    m_generateSourceHasBeenSet = true;
}

bool CreateSealByImageRequest::GenerateSourceHasBeenSet() const
{
    return m_generateSourceHasBeenSet;
}

string CreateSealByImageRequest::GetSealType() const
{
    return m_sealType;
}

void CreateSealByImageRequest::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool CreateSealByImageRequest::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string CreateSealByImageRequest::GetSealHorizontalText() const
{
    return m_sealHorizontalText;
}

void CreateSealByImageRequest::SetSealHorizontalText(const string& _sealHorizontalText)
{
    m_sealHorizontalText = _sealHorizontalText;
    m_sealHorizontalTextHasBeenSet = true;
}

bool CreateSealByImageRequest::SealHorizontalTextHasBeenSet() const
{
    return m_sealHorizontalTextHasBeenSet;
}

string CreateSealByImageRequest::GetSealStyle() const
{
    return m_sealStyle;
}

void CreateSealByImageRequest::SetSealStyle(const string& _sealStyle)
{
    m_sealStyle = _sealStyle;
    m_sealStyleHasBeenSet = true;
}

bool CreateSealByImageRequest::SealStyleHasBeenSet() const
{
    return m_sealStyleHasBeenSet;
}

string CreateSealByImageRequest::GetSealSize() const
{
    return m_sealSize;
}

void CreateSealByImageRequest::SetSealSize(const string& _sealSize)
{
    m_sealSize = _sealSize;
    m_sealSizeHasBeenSet = true;
}

bool CreateSealByImageRequest::SealSizeHasBeenSet() const
{
    return m_sealSizeHasBeenSet;
}

string CreateSealByImageRequest::GetTaxIdentifyCode() const
{
    return m_taxIdentifyCode;
}

void CreateSealByImageRequest::SetTaxIdentifyCode(const string& _taxIdentifyCode)
{
    m_taxIdentifyCode = _taxIdentifyCode;
    m_taxIdentifyCodeHasBeenSet = true;
}

bool CreateSealByImageRequest::TaxIdentifyCodeHasBeenSet() const
{
    return m_taxIdentifyCodeHasBeenSet;
}


