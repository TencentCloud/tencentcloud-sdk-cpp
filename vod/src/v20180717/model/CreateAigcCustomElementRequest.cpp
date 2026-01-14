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

#include <tencentcloud/vod/v20180717/model/CreateAigcCustomElementRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcCustomElementRequest::CreateAigcCustomElementRequest() :
    m_elementNameHasBeenSet(false),
    m_elementDescriptionHasBeenSet(false),
    m_elementFrontalImageHasBeenSet(false),
    m_elementReferListHasBeenSet(false)
{
}

string CreateAigcCustomElementRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_elementFrontalImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementFrontalImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_elementFrontalImage.c_str(), allocator).Move(), allocator);
    }

    if (m_elementReferListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementReferList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_elementReferList.begin(); itr != m_elementReferList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAigcCustomElementRequest::GetElementName() const
{
    return m_elementName;
}

void CreateAigcCustomElementRequest::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool CreateAigcCustomElementRequest::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

string CreateAigcCustomElementRequest::GetElementDescription() const
{
    return m_elementDescription;
}

void CreateAigcCustomElementRequest::SetElementDescription(const string& _elementDescription)
{
    m_elementDescription = _elementDescription;
    m_elementDescriptionHasBeenSet = true;
}

bool CreateAigcCustomElementRequest::ElementDescriptionHasBeenSet() const
{
    return m_elementDescriptionHasBeenSet;
}

string CreateAigcCustomElementRequest::GetElementFrontalImage() const
{
    return m_elementFrontalImage;
}

void CreateAigcCustomElementRequest::SetElementFrontalImage(const string& _elementFrontalImage)
{
    m_elementFrontalImage = _elementFrontalImage;
    m_elementFrontalImageHasBeenSet = true;
}

bool CreateAigcCustomElementRequest::ElementFrontalImageHasBeenSet() const
{
    return m_elementFrontalImageHasBeenSet;
}

vector<ElementReferInfo> CreateAigcCustomElementRequest::GetElementReferList() const
{
    return m_elementReferList;
}

void CreateAigcCustomElementRequest::SetElementReferList(const vector<ElementReferInfo>& _elementReferList)
{
    m_elementReferList = _elementReferList;
    m_elementReferListHasBeenSet = true;
}

bool CreateAigcCustomElementRequest::ElementReferListHasBeenSet() const
{
    return m_elementReferListHasBeenSet;
}


