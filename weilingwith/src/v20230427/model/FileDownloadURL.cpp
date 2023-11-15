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

#include <tencentcloud/weilingwith/v20230427/model/FileDownloadURL.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

FileDownloadURL::FileDownloadURL() :
    m_fileURLHasBeenSet(false)
{
}

CoreInternalOutcome FileDownloadURL::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileURL") && !value["FileURL"].IsNull())
    {
        if (!value["FileURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileDownloadURL.FileURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileURL = string(value["FileURL"].GetString());
        m_fileURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileDownloadURL::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileURL.c_str(), allocator).Move(), allocator);
    }

}


string FileDownloadURL::GetFileURL() const
{
    return m_fileURL;
}

void FileDownloadURL::SetFileURL(const string& _fileURL)
{
    m_fileURL = _fileURL;
    m_fileURLHasBeenSet = true;
}

bool FileDownloadURL::FileURLHasBeenSet() const
{
    return m_fileURLHasBeenSet;
}

