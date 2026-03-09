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

#include <tencentcloud/vod/v20180717/model/CreateAigcAdvancedCustomElementInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAdvancedCustomElementInput::CreateAigcAdvancedCustomElementInput() :
    m_elementNameHasBeenSet(false),
    m_elementDescriptionHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_elementVoiceIdHasBeenSet(false),
    m_elementVideoListHasBeenSet(false),
    m_elementImageListHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome CreateAigcAdvancedCustomElementInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("ElementDescription") && !value["ElementDescription"].IsNull())
    {
        if (!value["ElementDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ElementDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementDescription = string(value["ElementDescription"].GetString());
        m_elementDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ReferenceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = string(value["ReferenceType"].GetString());
        m_referenceTypeHasBeenSet = true;
    }

    if (value.HasMember("ElementVoiceId") && !value["ElementVoiceId"].IsNull())
    {
        if (!value["ElementVoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ElementVoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementVoiceId = string(value["ElementVoiceId"].GetString());
        m_elementVoiceIdHasBeenSet = true;
    }

    if (value.HasMember("ElementVideoList") && !value["ElementVideoList"].IsNull())
    {
        if (!value["ElementVideoList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ElementVideoList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementVideoList = string(value["ElementVideoList"].GetString());
        m_elementVideoListHasBeenSet = true;
    }

    if (value.HasMember("ElementImageList") && !value["ElementImageList"].IsNull())
    {
        if (!value["ElementImageList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.ElementImageList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementImageList = string(value["ElementImageList"].GetString());
        m_elementImageListHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAigcAdvancedCustomElementInput.TagList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagList = string(value["TagList"].GetString());
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAigcAdvancedCustomElementInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elementNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementName.c_str(), allocator).Move(), allocator);
    }

    if (m_elementDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_elementVoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementVoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementVoiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementVideoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementVideoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementVideoList.c_str(), allocator).Move(), allocator);
    }

    if (m_elementImageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementImageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementImageList.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagList.c_str(), allocator).Move(), allocator);
    }

}


string CreateAigcAdvancedCustomElementInput::GetElementName() const
{
    return m_elementName;
}

void CreateAigcAdvancedCustomElementInput::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetElementDescription() const
{
    return m_elementDescription;
}

void CreateAigcAdvancedCustomElementInput::SetElementDescription(const string& _elementDescription)
{
    m_elementDescription = _elementDescription;
    m_elementDescriptionHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ElementDescriptionHasBeenSet() const
{
    return m_elementDescriptionHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetReferenceType() const
{
    return m_referenceType;
}

void CreateAigcAdvancedCustomElementInput::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetElementVoiceId() const
{
    return m_elementVoiceId;
}

void CreateAigcAdvancedCustomElementInput::SetElementVoiceId(const string& _elementVoiceId)
{
    m_elementVoiceId = _elementVoiceId;
    m_elementVoiceIdHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ElementVoiceIdHasBeenSet() const
{
    return m_elementVoiceIdHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetElementVideoList() const
{
    return m_elementVideoList;
}

void CreateAigcAdvancedCustomElementInput::SetElementVideoList(const string& _elementVideoList)
{
    m_elementVideoList = _elementVideoList;
    m_elementVideoListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ElementVideoListHasBeenSet() const
{
    return m_elementVideoListHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetElementImageList() const
{
    return m_elementImageList;
}

void CreateAigcAdvancedCustomElementInput::SetElementImageList(const string& _elementImageList)
{
    m_elementImageList = _elementImageList;
    m_elementImageListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::ElementImageListHasBeenSet() const
{
    return m_elementImageListHasBeenSet;
}

string CreateAigcAdvancedCustomElementInput::GetTagList() const
{
    return m_tagList;
}

void CreateAigcAdvancedCustomElementInput::SetTagList(const string& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateAigcAdvancedCustomElementInput::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

