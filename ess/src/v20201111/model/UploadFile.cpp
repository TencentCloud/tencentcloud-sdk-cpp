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

#include <tencentcloud/ess/v20201111/model/UploadFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

UploadFile::UploadFile() :
    m_fileBodyHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

CoreInternalOutcome UploadFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileBody") && !value["FileBody"].IsNull())
    {
        if (!value["FileBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFile.FileBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileBody = string(value["FileBody"].GetString());
        m_fileBodyHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileBody.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

}


string UploadFile::GetFileBody() const
{
    return m_fileBody;
}

void UploadFile::SetFileBody(const string& _fileBody)
{
    m_fileBody = _fileBody;
    m_fileBodyHasBeenSet = true;
}

bool UploadFile::FileBodyHasBeenSet() const
{
    return m_fileBodyHasBeenSet;
}

string UploadFile::GetFileName() const
{
    return m_fileName;
}

void UploadFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

