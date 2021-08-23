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

#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

CreateMmsInstanceItem::CreateMmsInstanceItem() :
    m_contentTypeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome CreateMmsInstanceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMmsInstanceItem.ContentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetInt64();
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateMmsInstanceItem.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateMmsInstanceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


int64_t CreateMmsInstanceItem::GetContentType() const
{
    return m_contentType;
}

void CreateMmsInstanceItem::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateMmsInstanceItem::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string CreateMmsInstanceItem::GetContent() const
{
    return m_content;
}

void CreateMmsInstanceItem::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateMmsInstanceItem::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

