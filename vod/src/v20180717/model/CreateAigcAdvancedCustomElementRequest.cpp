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

#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAdvancedCustomElementRequest::CreateAigcAdvancedCustomElementRequest() :
    m_subAppIdHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_elementDescriptionHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_elementVoiceIdHasBeenSet(false),
    m_elementVideoListHasBeenSet(false),
    m_elementImageListHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string CreateAigcAdvancedCustomElementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_elementNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementName.c_str(), allocator).Move(), allocator);
    }

    if (m_elementDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_elementVoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementVoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementVoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementVideoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementVideoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementVideoList.c_str(), allocator).Move(), allocator);
    }

    if (m_elementImageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementImageList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementImageList.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagList.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcAdvancedCustomElementRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcAdvancedCustomElementRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetElementName() const
{
    return m_elementName;
}

void CreateAigcAdvancedCustomElementRequest::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetElementDescription() const
{
    return m_elementDescription;
}

void CreateAigcAdvancedCustomElementRequest::SetElementDescription(const string& _elementDescription)
{
    m_elementDescription = _elementDescription;
    m_elementDescriptionHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ElementDescriptionHasBeenSet() const
{
    return m_elementDescriptionHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetReferenceType() const
{
    return m_referenceType;
}

void CreateAigcAdvancedCustomElementRequest::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetElementVoiceId() const
{
    return m_elementVoiceId;
}

void CreateAigcAdvancedCustomElementRequest::SetElementVoiceId(const string& _elementVoiceId)
{
    m_elementVoiceId = _elementVoiceId;
    m_elementVoiceIdHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ElementVoiceIdHasBeenSet() const
{
    return m_elementVoiceIdHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetElementVideoList() const
{
    return m_elementVideoList;
}

void CreateAigcAdvancedCustomElementRequest::SetElementVideoList(const string& _elementVideoList)
{
    m_elementVideoList = _elementVideoList;
    m_elementVideoListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ElementVideoListHasBeenSet() const
{
    return m_elementVideoListHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetElementImageList() const
{
    return m_elementImageList;
}

void CreateAigcAdvancedCustomElementRequest::SetElementImageList(const string& _elementImageList)
{
    m_elementImageList = _elementImageList;
    m_elementImageListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::ElementImageListHasBeenSet() const
{
    return m_elementImageListHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetTagList() const
{
    return m_tagList;
}

void CreateAigcAdvancedCustomElementRequest::SetTagList(const string& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcAdvancedCustomElementRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcAdvancedCustomElementRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcAdvancedCustomElementRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcAdvancedCustomElementRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcAdvancedCustomElementRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


