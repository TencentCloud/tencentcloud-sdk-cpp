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

#include <tencentcloud/cdwch/v20200915/model/ConfigSubmitContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

ConfigSubmitContext::ConfigSubmitContext() :
    m_fileNameHasBeenSet(false),
    m_oldConfValueHasBeenSet(false),
    m_newConfValueHasBeenSet(false),
    m_filePathHasBeenSet(false)
{
}

CoreInternalOutcome ConfigSubmitContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigSubmitContext.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("OldConfValue") && !value["OldConfValue"].IsNull())
    {
        if (!value["OldConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigSubmitContext.OldConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldConfValue = string(value["OldConfValue"].GetString());
        m_oldConfValueHasBeenSet = true;
    }

    if (value.HasMember("NewConfValue") && !value["NewConfValue"].IsNull())
    {
        if (!value["NewConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigSubmitContext.NewConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newConfValue = string(value["NewConfValue"].GetString());
        m_newConfValueHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigSubmitContext.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigSubmitContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_oldConfValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldConfValue.c_str(), allocator).Move(), allocator);
    }

    if (m_newConfValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newConfValue.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

}


string ConfigSubmitContext::GetFileName() const
{
    return m_fileName;
}

void ConfigSubmitContext::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ConfigSubmitContext::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ConfigSubmitContext::GetOldConfValue() const
{
    return m_oldConfValue;
}

void ConfigSubmitContext::SetOldConfValue(const string& _oldConfValue)
{
    m_oldConfValue = _oldConfValue;
    m_oldConfValueHasBeenSet = true;
}

bool ConfigSubmitContext::OldConfValueHasBeenSet() const
{
    return m_oldConfValueHasBeenSet;
}

string ConfigSubmitContext::GetNewConfValue() const
{
    return m_newConfValue;
}

void ConfigSubmitContext::SetNewConfValue(const string& _newConfValue)
{
    m_newConfValue = _newConfValue;
    m_newConfValueHasBeenSet = true;
}

bool ConfigSubmitContext::NewConfValueHasBeenSet() const
{
    return m_newConfValueHasBeenSet;
}

string ConfigSubmitContext::GetFilePath() const
{
    return m_filePath;
}

void ConfigSubmitContext::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ConfigSubmitContext::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

