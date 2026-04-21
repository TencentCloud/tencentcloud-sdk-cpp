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

#include <tencentcloud/vclm/v20240523/model/CreateAigcElementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

CreateAigcElementRequest::CreateAigcElementRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_elementImageListHasBeenSet(false),
    m_videoListHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_elementVoiceIdHasBeenSet(false)
{
}

string CreateAigcElementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_elementImageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementImageList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_elementImageList.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoList.begin(); itr != m_videoList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_provider.begin(); itr != m_provider.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_elementVoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementVoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementVoiceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAigcElementRequest::GetName() const
{
    return m_name;
}

void CreateAigcElementRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAigcElementRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAigcElementRequest::GetDescription() const
{
    return m_description;
}

void CreateAigcElementRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAigcElementRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAigcElementRequest::GetReferenceType() const
{
    return m_referenceType;
}

void CreateAigcElementRequest::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool CreateAigcElementRequest::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

ElementImageList CreateAigcElementRequest::GetElementImageList() const
{
    return m_elementImageList;
}

void CreateAigcElementRequest::SetElementImageList(const ElementImageList& _elementImageList)
{
    m_elementImageList = _elementImageList;
    m_elementImageListHasBeenSet = true;
}

bool CreateAigcElementRequest::ElementImageListHasBeenSet() const
{
    return m_elementImageListHasBeenSet;
}

vector<string> CreateAigcElementRequest::GetVideoList() const
{
    return m_videoList;
}

void CreateAigcElementRequest::SetVideoList(const vector<string>& _videoList)
{
    m_videoList = _videoList;
    m_videoListHasBeenSet = true;
}

bool CreateAigcElementRequest::VideoListHasBeenSet() const
{
    return m_videoListHasBeenSet;
}

vector<string> CreateAigcElementRequest::GetProvider() const
{
    return m_provider;
}

void CreateAigcElementRequest::SetProvider(const vector<string>& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateAigcElementRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

vector<TagList> CreateAigcElementRequest::GetTagList() const
{
    return m_tagList;
}

void CreateAigcElementRequest::SetTagList(const vector<TagList>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateAigcElementRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string CreateAigcElementRequest::GetElementVoiceId() const
{
    return m_elementVoiceId;
}

void CreateAigcElementRequest::SetElementVoiceId(const string& _elementVoiceId)
{
    m_elementVoiceId = _elementVoiceId;
    m_elementVoiceIdHasBeenSet = true;
}

bool CreateAigcElementRequest::ElementVoiceIdHasBeenSet() const
{
    return m_elementVoiceIdHasBeenSet;
}


