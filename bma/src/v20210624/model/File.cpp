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

#include <tencentcloud/bma/v20210624/model/File.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

File::File() :
    m_fileUrlHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_validStartDateHasBeenSet(false),
    m_validEndDateHasBeenSet(false)
{
}

CoreInternalOutcome File::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `File.FileType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = value["FileType"].GetInt64();
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("ValidStartDate") && !value["ValidStartDate"].IsNull())
    {
        if (!value["ValidStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.ValidStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validStartDate = string(value["ValidStartDate"].GetString());
        m_validStartDateHasBeenSet = true;
    }

    if (value.HasMember("ValidEndDate") && !value["ValidEndDate"].IsNull())
    {
        if (!value["ValidEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File.ValidEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validEndDate = string(value["ValidEndDate"].GetString());
        m_validEndDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void File::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileType, allocator);
    }

    if (m_validStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_validEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validEndDate.c_str(), allocator).Move(), allocator);
    }

}


string File::GetFileUrl() const
{
    return m_fileUrl;
}

void File::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool File::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

int64_t File::GetFileType() const
{
    return m_fileType;
}

void File::SetFileType(const int64_t& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool File::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string File::GetValidStartDate() const
{
    return m_validStartDate;
}

void File::SetValidStartDate(const string& _validStartDate)
{
    m_validStartDate = _validStartDate;
    m_validStartDateHasBeenSet = true;
}

bool File::ValidStartDateHasBeenSet() const
{
    return m_validStartDateHasBeenSet;
}

string File::GetValidEndDate() const
{
    return m_validEndDate;
}

void File::SetValidEndDate(const string& _validEndDate)
{
    m_validEndDate = _validEndDate;
    m_validEndDateHasBeenSet = true;
}

bool File::ValidEndDateHasBeenSet() const
{
    return m_validEndDateHasBeenSet;
}

