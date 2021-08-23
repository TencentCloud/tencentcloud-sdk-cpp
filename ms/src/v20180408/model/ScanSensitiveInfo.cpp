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

#include <tencentcloud/ms/v20180408/model/ScanSensitiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ScanSensitiveInfo::ScanSensitiveInfo() :
    m_wordListHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileShaHasBeenSet(false)
{
}

CoreInternalOutcome ScanSensitiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WordList") && !value["WordList"].IsNull())
    {
        if (!value["WordList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanSensitiveInfo.WordList` is not array type"));

        const rapidjson::Value &tmpValue = value["WordList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_wordList.push_back((*itr).GetString());
        }
        m_wordListHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanSensitiveInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileSha") && !value["FileSha"].IsNull())
    {
        if (!value["FileSha"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanSensitiveInfo.FileSha` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSha = string(value["FileSha"].GetString());
        m_fileShaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanSensitiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wordList.begin(); itr != m_wordList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileShaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSha.c_str(), allocator).Move(), allocator);
    }

}


vector<string> ScanSensitiveInfo::GetWordList() const
{
    return m_wordList;
}

void ScanSensitiveInfo::SetWordList(const vector<string>& _wordList)
{
    m_wordList = _wordList;
    m_wordListHasBeenSet = true;
}

bool ScanSensitiveInfo::WordListHasBeenSet() const
{
    return m_wordListHasBeenSet;
}

string ScanSensitiveInfo::GetFilePath() const
{
    return m_filePath;
}

void ScanSensitiveInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool ScanSensitiveInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string ScanSensitiveInfo::GetFileSha() const
{
    return m_fileSha;
}

void ScanSensitiveInfo::SetFileSha(const string& _fileSha)
{
    m_fileSha = _fileSha;
    m_fileShaHasBeenSet = true;
}

bool ScanSensitiveInfo::FileShaHasBeenSet() const
{
    return m_fileShaHasBeenSet;
}

