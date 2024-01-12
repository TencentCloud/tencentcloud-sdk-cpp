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

#include <tencentcloud/tdid/v20210519/model/SetTDidAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

SetTDidAttributeRequest::SetTDidAttributeRequest() :
    m_didHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_dAPIdHasBeenSet(false),
    m_operateCredentialHasBeenSet(false)
{
}

string SetTDidAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }

    if (m_operateCredentialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateCredential";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateCredential.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetTDidAttributeRequest::GetDid() const
{
    return m_did;
}

void SetTDidAttributeRequest::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool SetTDidAttributeRequest::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

vector<DidAttribute> SetTDidAttributeRequest::GetAttributes() const
{
    return m_attributes;
}

void SetTDidAttributeRequest::SetAttributes(const vector<DidAttribute>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool SetTDidAttributeRequest::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

uint64_t SetTDidAttributeRequest::GetDAPId() const
{
    return m_dAPId;
}

void SetTDidAttributeRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool SetTDidAttributeRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

string SetTDidAttributeRequest::GetOperateCredential() const
{
    return m_operateCredential;
}

void SetTDidAttributeRequest::SetOperateCredential(const string& _operateCredential)
{
    m_operateCredential = _operateCredential;
    m_operateCredentialHasBeenSet = true;
}

bool SetTDidAttributeRequest::OperateCredentialHasBeenSet() const
{
    return m_operateCredentialHasBeenSet;
}


