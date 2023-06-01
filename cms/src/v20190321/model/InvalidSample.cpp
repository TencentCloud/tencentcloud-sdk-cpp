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

#include <tencentcloud/cms/v20190321/model/InvalidSample.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

InvalidSample::InvalidSample() :
    m_contentHasBeenSet(false),
    m_invalidCodeHasBeenSet(false),
    m_invalidMessageHasBeenSet(false)
{
}

CoreInternalOutcome InvalidSample::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvalidSample.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("InvalidCode") && !value["InvalidCode"].IsNull())
    {
        if (!value["InvalidCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvalidSample.InvalidCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidCode = value["InvalidCode"].GetInt64();
        m_invalidCodeHasBeenSet = true;
    }

    if (value.HasMember("InvalidMessage") && !value["InvalidMessage"].IsNull())
    {
        if (!value["InvalidMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvalidSample.InvalidMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invalidMessage = string(value["InvalidMessage"].GetString());
        m_invalidMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvalidSample::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_invalidCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidCode, allocator);
    }

    if (m_invalidMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invalidMessage.c_str(), allocator).Move(), allocator);
    }

}


string InvalidSample::GetContent() const
{
    return m_content;
}

void InvalidSample::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool InvalidSample::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t InvalidSample::GetInvalidCode() const
{
    return m_invalidCode;
}

void InvalidSample::SetInvalidCode(const int64_t& _invalidCode)
{
    m_invalidCode = _invalidCode;
    m_invalidCodeHasBeenSet = true;
}

bool InvalidSample::InvalidCodeHasBeenSet() const
{
    return m_invalidCodeHasBeenSet;
}

string InvalidSample::GetInvalidMessage() const
{
    return m_invalidMessage;
}

void InvalidSample::SetInvalidMessage(const string& _invalidMessage)
{
    m_invalidMessage = _invalidMessage;
    m_invalidMessageHasBeenSet = true;
}

bool InvalidSample::InvalidMessageHasBeenSet() const
{
    return m_invalidMessageHasBeenSet;
}

