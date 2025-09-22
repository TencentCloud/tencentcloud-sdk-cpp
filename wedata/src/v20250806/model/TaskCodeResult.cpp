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

#include <tencentcloud/wedata/v20250806/model/TaskCodeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

TaskCodeResult::TaskCodeResult() :
    m_codeInfoHasBeenSet(false),
    m_codeFileSizeHasBeenSet(false)
{
}

CoreInternalOutcome TaskCodeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CodeInfo") && !value["CodeInfo"].IsNull())
    {
        if (!value["CodeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCodeResult.CodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeInfo = string(value["CodeInfo"].GetString());
        m_codeInfoHasBeenSet = true;
    }

    if (value.HasMember("CodeFileSize") && !value["CodeFileSize"].IsNull())
    {
        if (!value["CodeFileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCodeResult.CodeFileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileSize = string(value["CodeFileSize"].GetString());
        m_codeFileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskCodeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileSize.c_str(), allocator).Move(), allocator);
    }

}


string TaskCodeResult::GetCodeInfo() const
{
    return m_codeInfo;
}

void TaskCodeResult::SetCodeInfo(const string& _codeInfo)
{
    m_codeInfo = _codeInfo;
    m_codeInfoHasBeenSet = true;
}

bool TaskCodeResult::CodeInfoHasBeenSet() const
{
    return m_codeInfoHasBeenSet;
}

string TaskCodeResult::GetCodeFileSize() const
{
    return m_codeFileSize;
}

void TaskCodeResult::SetCodeFileSize(const string& _codeFileSize)
{
    m_codeFileSize = _codeFileSize;
    m_codeFileSizeHasBeenSet = true;
}

bool TaskCodeResult::CodeFileSizeHasBeenSet() const
{
    return m_codeFileSizeHasBeenSet;
}

