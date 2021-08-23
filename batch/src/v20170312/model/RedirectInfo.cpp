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

#include <tencentcloud/batch/v20170312/model/RedirectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

RedirectInfo::RedirectInfo() :
    m_stdoutRedirectPathHasBeenSet(false),
    m_stderrRedirectPathHasBeenSet(false),
    m_stdoutRedirectFileNameHasBeenSet(false),
    m_stderrRedirectFileNameHasBeenSet(false)
{
}

CoreInternalOutcome RedirectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StdoutRedirectPath") && !value["StdoutRedirectPath"].IsNull())
    {
        if (!value["StdoutRedirectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectInfo.StdoutRedirectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutRedirectPath = string(value["StdoutRedirectPath"].GetString());
        m_stdoutRedirectPathHasBeenSet = true;
    }

    if (value.HasMember("StderrRedirectPath") && !value["StderrRedirectPath"].IsNull())
    {
        if (!value["StderrRedirectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectInfo.StderrRedirectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrRedirectPath = string(value["StderrRedirectPath"].GetString());
        m_stderrRedirectPathHasBeenSet = true;
    }

    if (value.HasMember("StdoutRedirectFileName") && !value["StdoutRedirectFileName"].IsNull())
    {
        if (!value["StdoutRedirectFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectInfo.StdoutRedirectFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutRedirectFileName = string(value["StdoutRedirectFileName"].GetString());
        m_stdoutRedirectFileNameHasBeenSet = true;
    }

    if (value.HasMember("StderrRedirectFileName") && !value["StderrRedirectFileName"].IsNull())
    {
        if (!value["StderrRedirectFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RedirectInfo.StderrRedirectFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrRedirectFileName = string(value["StderrRedirectFileName"].GetString());
        m_stderrRedirectFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RedirectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stdoutRedirectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutRedirectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutRedirectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrRedirectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrRedirectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrRedirectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stdoutRedirectFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutRedirectFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutRedirectFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrRedirectFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrRedirectFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrRedirectFileName.c_str(), allocator).Move(), allocator);
    }

}


string RedirectInfo::GetStdoutRedirectPath() const
{
    return m_stdoutRedirectPath;
}

void RedirectInfo::SetStdoutRedirectPath(const string& _stdoutRedirectPath)
{
    m_stdoutRedirectPath = _stdoutRedirectPath;
    m_stdoutRedirectPathHasBeenSet = true;
}

bool RedirectInfo::StdoutRedirectPathHasBeenSet() const
{
    return m_stdoutRedirectPathHasBeenSet;
}

string RedirectInfo::GetStderrRedirectPath() const
{
    return m_stderrRedirectPath;
}

void RedirectInfo::SetStderrRedirectPath(const string& _stderrRedirectPath)
{
    m_stderrRedirectPath = _stderrRedirectPath;
    m_stderrRedirectPathHasBeenSet = true;
}

bool RedirectInfo::StderrRedirectPathHasBeenSet() const
{
    return m_stderrRedirectPathHasBeenSet;
}

string RedirectInfo::GetStdoutRedirectFileName() const
{
    return m_stdoutRedirectFileName;
}

void RedirectInfo::SetStdoutRedirectFileName(const string& _stdoutRedirectFileName)
{
    m_stdoutRedirectFileName = _stdoutRedirectFileName;
    m_stdoutRedirectFileNameHasBeenSet = true;
}

bool RedirectInfo::StdoutRedirectFileNameHasBeenSet() const
{
    return m_stdoutRedirectFileNameHasBeenSet;
}

string RedirectInfo::GetStderrRedirectFileName() const
{
    return m_stderrRedirectFileName;
}

void RedirectInfo::SetStderrRedirectFileName(const string& _stderrRedirectFileName)
{
    m_stderrRedirectFileName = _stderrRedirectFileName;
    m_stderrRedirectFileNameHasBeenSet = true;
}

bool RedirectInfo::StderrRedirectFileNameHasBeenSet() const
{
    return m_stderrRedirectFileNameHasBeenSet;
}

