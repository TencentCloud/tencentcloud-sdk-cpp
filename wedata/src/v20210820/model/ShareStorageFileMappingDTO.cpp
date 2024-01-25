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

#include <tencentcloud/wedata/v20210820/model/ShareStorageFileMappingDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ShareStorageFileMappingDTO::ShareStorageFileMappingDTO() :
    m_originFileNameHasBeenSet(false),
    m_targetFileNameHasBeenSet(false),
    m_absoluteTargetFilePathHasBeenSet(false)
{
}

CoreInternalOutcome ShareStorageFileMappingDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginFileName") && !value["OriginFileName"].IsNull())
    {
        if (!value["OriginFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileMappingDTO.OriginFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originFileName = string(value["OriginFileName"].GetString());
        m_originFileNameHasBeenSet = true;
    }

    if (value.HasMember("TargetFileName") && !value["TargetFileName"].IsNull())
    {
        if (!value["TargetFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileMappingDTO.TargetFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetFileName = string(value["TargetFileName"].GetString());
        m_targetFileNameHasBeenSet = true;
    }

    if (value.HasMember("AbsoluteTargetFilePath") && !value["AbsoluteTargetFilePath"].IsNull())
    {
        if (!value["AbsoluteTargetFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareStorageFileMappingDTO.AbsoluteTargetFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_absoluteTargetFilePath = string(value["AbsoluteTargetFilePath"].GetString());
        m_absoluteTargetFilePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareStorageFileMappingDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_absoluteTargetFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbsoluteTargetFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_absoluteTargetFilePath.c_str(), allocator).Move(), allocator);
    }

}


string ShareStorageFileMappingDTO::GetOriginFileName() const
{
    return m_originFileName;
}

void ShareStorageFileMappingDTO::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool ShareStorageFileMappingDTO::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string ShareStorageFileMappingDTO::GetTargetFileName() const
{
    return m_targetFileName;
}

void ShareStorageFileMappingDTO::SetTargetFileName(const string& _targetFileName)
{
    m_targetFileName = _targetFileName;
    m_targetFileNameHasBeenSet = true;
}

bool ShareStorageFileMappingDTO::TargetFileNameHasBeenSet() const
{
    return m_targetFileNameHasBeenSet;
}

string ShareStorageFileMappingDTO::GetAbsoluteTargetFilePath() const
{
    return m_absoluteTargetFilePath;
}

void ShareStorageFileMappingDTO::SetAbsoluteTargetFilePath(const string& _absoluteTargetFilePath)
{
    m_absoluteTargetFilePath = _absoluteTargetFilePath;
    m_absoluteTargetFilePathHasBeenSet = true;
}

bool ShareStorageFileMappingDTO::AbsoluteTargetFilePathHasBeenSet() const
{
    return m_absoluteTargetFilePathHasBeenSet;
}

