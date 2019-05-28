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

#include <tencentcloud/vod/v20180717/model/ModifyPersonSampleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ModifyPersonSampleRequest::ModifyPersonSampleRequest() :
    m_personIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_usagesHasBeenSet(false),
    m_faceOperationInfoHasBeenSet(false),
    m_tagOperationInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ModifyPersonSampleRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_usagesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Usages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_usages.begin(); itr != m_usages.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_faceOperationInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_faceOperationInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagOperationInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagOperationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tagOperationInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPersonSampleRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyPersonSampleRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyPersonSampleRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string ModifyPersonSampleRequest::GetName() const
{
    return m_name;
}

void ModifyPersonSampleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyPersonSampleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyPersonSampleRequest::GetDescription() const
{
    return m_description;
}

void ModifyPersonSampleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyPersonSampleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyPersonSampleRequest::GetUsages() const
{
    return m_usages;
}

void ModifyPersonSampleRequest::SetUsages(const vector<string>& _usages)
{
    m_usages = _usages;
    m_usagesHasBeenSet = true;
}

bool ModifyPersonSampleRequest::UsagesHasBeenSet() const
{
    return m_usagesHasBeenSet;
}

AiSampleFaceOperation ModifyPersonSampleRequest::GetFaceOperationInfo() const
{
    return m_faceOperationInfo;
}

void ModifyPersonSampleRequest::SetFaceOperationInfo(const AiSampleFaceOperation& _faceOperationInfo)
{
    m_faceOperationInfo = _faceOperationInfo;
    m_faceOperationInfoHasBeenSet = true;
}

bool ModifyPersonSampleRequest::FaceOperationInfoHasBeenSet() const
{
    return m_faceOperationInfoHasBeenSet;
}

AiSampleTagOperation ModifyPersonSampleRequest::GetTagOperationInfo() const
{
    return m_tagOperationInfo;
}

void ModifyPersonSampleRequest::SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo)
{
    m_tagOperationInfo = _tagOperationInfo;
    m_tagOperationInfoHasBeenSet = true;
}

bool ModifyPersonSampleRequest::TagOperationInfoHasBeenSet() const
{
    return m_tagOperationInfoHasBeenSet;
}

uint64_t ModifyPersonSampleRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyPersonSampleRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyPersonSampleRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


