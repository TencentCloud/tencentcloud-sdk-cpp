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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceUploadFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceUploadFile::AndroidInstanceUploadFile() :
    m_androidInstanceIdHasBeenSet(false),
    m_fileURLHasBeenSet(false),
    m_destinationDirectoryHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceUploadFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceUploadFile.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("FileURL") && !value["FileURL"].IsNull())
    {
        if (!value["FileURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceUploadFile.FileURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileURL = string(value["FileURL"].GetString());
        m_fileURLHasBeenSet = true;
    }

    if (value.HasMember("DestinationDirectory") && !value["DestinationDirectory"].IsNull())
    {
        if (!value["DestinationDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceUploadFile.DestinationDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationDirectory = string(value["DestinationDirectory"].GetString());
        m_destinationDirectoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceUploadFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileURL.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationDirectory.c_str(), allocator).Move(), allocator);
    }

}


string AndroidInstanceUploadFile::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstanceUploadFile::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstanceUploadFile::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

string AndroidInstanceUploadFile::GetFileURL() const
{
    return m_fileURL;
}

void AndroidInstanceUploadFile::SetFileURL(const string& _fileURL)
{
    m_fileURL = _fileURL;
    m_fileURLHasBeenSet = true;
}

bool AndroidInstanceUploadFile::FileURLHasBeenSet() const
{
    return m_fileURLHasBeenSet;
}

string AndroidInstanceUploadFile::GetDestinationDirectory() const
{
    return m_destinationDirectory;
}

void AndroidInstanceUploadFile::SetDestinationDirectory(const string& _destinationDirectory)
{
    m_destinationDirectory = _destinationDirectory;
    m_destinationDirectoryHasBeenSet = true;
}

bool AndroidInstanceUploadFile::DestinationDirectoryHasBeenSet() const
{
    return m_destinationDirectoryHasBeenSet;
}

