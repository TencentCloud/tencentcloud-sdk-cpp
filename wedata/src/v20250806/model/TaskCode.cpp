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

#include <tencentcloud/wedata/v20250806/model/TaskCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskCode::TaskCode() :
    m_codeContentHasBeenSet(false),
    m_codeFileSizeHasBeenSet(false)
{
}

CoreInternalOutcome TaskCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeContent") && !value["CodeContent"].IsNull())
    {
        if (!value["CodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCode.CodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeContent = string(value["CodeContent"].GetString());
        m_codeContentHasBeenSet = true;
    }

    if (value.HasMember("CodeFileSize") && !value["CodeFileSize"].IsNull())
    {
        if (!value["CodeFileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCode.CodeFileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileSize = value["CodeFileSize"].GetUint64();
        m_codeFileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeFileSize, allocator);
    }

}


string TaskCode::GetCodeContent() const
{
    return m_codeContent;
}

void TaskCode::SetCodeContent(const string& _codeContent)
{
    m_codeContent = _codeContent;
    m_codeContentHasBeenSet = true;
}

bool TaskCode::CodeContentHasBeenSet() const
{
    return m_codeContentHasBeenSet;
}

uint64_t TaskCode::GetCodeFileSize() const
{
    return m_codeFileSize;
}

void TaskCode::SetCodeFileSize(const uint64_t& _codeFileSize)
{
    m_codeFileSize = _codeFileSize;
    m_codeFileSizeHasBeenSet = true;
}

bool TaskCode::CodeFileSizeHasBeenSet() const
{
    return m_codeFileSizeHasBeenSet;
}

