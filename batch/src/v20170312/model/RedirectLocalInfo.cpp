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

#include <tencentcloud/batch/v20170312/model/RedirectLocalInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

RedirectLocalInfo::RedirectLocalInfo() :
    m_stdoutLocalPathHasBeenSet(false),
    m_stderrLocalPathHasBeenSet(false),
    m_stdoutLocalFileNameHasBeenSet(false),
    m_stderrLocalFileNameHasBeenSet(false)
{
}

CoreInternalOutcome RedirectLocalInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StdoutLocalPath") && !value["StdoutLocalPath"].IsNull())
    {
        if (!value["StdoutLocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectLocalInfo.StdoutLocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutLocalPath = string(value["StdoutLocalPath"].GetString());
        m_stdoutLocalPathHasBeenSet = true;
    }

    if (value.HasMember("StderrLocalPath") && !value["StderrLocalPath"].IsNull())
    {
        if (!value["StderrLocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectLocalInfo.StderrLocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrLocalPath = string(value["StderrLocalPath"].GetString());
        m_stderrLocalPathHasBeenSet = true;
    }

    if (value.HasMember("StdoutLocalFileName") && !value["StdoutLocalFileName"].IsNull())
    {
        if (!value["StdoutLocalFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectLocalInfo.StdoutLocalFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutLocalFileName = string(value["StdoutLocalFileName"].GetString());
        m_stdoutLocalFileNameHasBeenSet = true;
    }

    if (value.HasMember("StderrLocalFileName") && !value["StderrLocalFileName"].IsNull())
    {
        if (!value["StderrLocalFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectLocalInfo.StderrLocalFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrLocalFileName = string(value["StderrLocalFileName"].GetString());
        m_stderrLocalFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedirectLocalInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stdoutLocalPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutLocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutLocalPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrLocalPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrLocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrLocalPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stdoutLocalFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutLocalFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutLocalFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrLocalFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrLocalFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrLocalFileName.c_str(), allocator).Move(), allocator);
    }

}


string RedirectLocalInfo::GetStdoutLocalPath() const
{
    return m_stdoutLocalPath;
}

void RedirectLocalInfo::SetStdoutLocalPath(const string& _stdoutLocalPath)
{
    m_stdoutLocalPath = _stdoutLocalPath;
    m_stdoutLocalPathHasBeenSet = true;
}

bool RedirectLocalInfo::StdoutLocalPathHasBeenSet() const
{
    return m_stdoutLocalPathHasBeenSet;
}

string RedirectLocalInfo::GetStderrLocalPath() const
{
    return m_stderrLocalPath;
}

void RedirectLocalInfo::SetStderrLocalPath(const string& _stderrLocalPath)
{
    m_stderrLocalPath = _stderrLocalPath;
    m_stderrLocalPathHasBeenSet = true;
}

bool RedirectLocalInfo::StderrLocalPathHasBeenSet() const
{
    return m_stderrLocalPathHasBeenSet;
}

string RedirectLocalInfo::GetStdoutLocalFileName() const
{
    return m_stdoutLocalFileName;
}

void RedirectLocalInfo::SetStdoutLocalFileName(const string& _stdoutLocalFileName)
{
    m_stdoutLocalFileName = _stdoutLocalFileName;
    m_stdoutLocalFileNameHasBeenSet = true;
}

bool RedirectLocalInfo::StdoutLocalFileNameHasBeenSet() const
{
    return m_stdoutLocalFileNameHasBeenSet;
}

string RedirectLocalInfo::GetStderrLocalFileName() const
{
    return m_stderrLocalFileName;
}

void RedirectLocalInfo::SetStderrLocalFileName(const string& _stderrLocalFileName)
{
    m_stderrLocalFileName = _stderrLocalFileName;
    m_stderrLocalFileNameHasBeenSet = true;
}

bool RedirectLocalInfo::StderrLocalFileNameHasBeenSet() const
{
    return m_stderrLocalFileNameHasBeenSet;
}

