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

#include <tencentcloud/tse/v20201207/model/ConfigFilePersistent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ConfigFilePersistent::ConfigFilePersistent() :
    m_encodingHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_postCmdHasBeenSet(false)
{
}

CoreInternalOutcome ConfigFilePersistent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Encoding") && !value["Encoding"].IsNull())
    {
        if (!value["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePersistent.Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(value["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePersistent.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("PostCmd") && !value["PostCmd"].IsNull())
    {
        if (!value["PostCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigFilePersistent.PostCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postCmd = string(value["PostCmd"].GetString());
        m_postCmdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigFilePersistent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_postCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postCmd.c_str(), allocator).Move(), allocator);
    }

}


string ConfigFilePersistent::GetEncoding() const
{
    return m_encoding;
}

void ConfigFilePersistent::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool ConfigFilePersistent::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string ConfigFilePersistent::GetPath() const
{
    return m_path;
}

void ConfigFilePersistent::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ConfigFilePersistent::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ConfigFilePersistent::GetPostCmd() const
{
    return m_postCmd;
}

void ConfigFilePersistent::SetPostCmd(const string& _postCmd)
{
    m_postCmd = _postCmd;
    m_postCmdHasBeenSet = true;
}

bool ConfigFilePersistent::PostCmdHasBeenSet() const
{
    return m_postCmdHasBeenSet;
}

