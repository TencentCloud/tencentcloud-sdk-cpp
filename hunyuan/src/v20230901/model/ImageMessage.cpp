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

#include <tencentcloud/hunyuan/v20230901/model/ImageMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ImageMessage::ImageMessage() :
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

CoreInternalOutcome ImageMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMessage.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMessage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageMessage.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Content item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ImageMessage::GetRole() const
{
    return m_role;
}

void ImageMessage::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ImageMessage::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ImageMessage::GetContent() const
{
    return m_content;
}

void ImageMessage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ImageMessage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<Content> ImageMessage::GetContents() const
{
    return m_contents;
}

void ImageMessage::SetContents(const vector<Content>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool ImageMessage::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

