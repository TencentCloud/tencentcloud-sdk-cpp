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

#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDLPFileDetectResultData::DescribeDLPFileDetectResultData() :
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detectResultHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDLPFileDetectResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectResultData.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectResultData.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectResultData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DetectResult") && !value["DetectResult"].IsNull())
    {
        if (!value["DetectResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectResultData.DetectResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectResult = string(value["DetectResult"].GetString());
        m_detectResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDLPFileDetectResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_detectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectResult.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDLPFileDetectResultData::GetFileMd5() const
{
    return m_fileMd5;
}

void DescribeDLPFileDetectResultData::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool DescribeDLPFileDetectResultData::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string DescribeDLPFileDetectResultData::GetFileName() const
{
    return m_fileName;
}

void DescribeDLPFileDetectResultData::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeDLPFileDetectResultData::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeDLPFileDetectResultData::GetStatus() const
{
    return m_status;
}

void DescribeDLPFileDetectResultData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDLPFileDetectResultData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDLPFileDetectResultData::GetDetectResult() const
{
    return m_detectResult;
}

void DescribeDLPFileDetectResultData::SetDetectResult(const string& _detectResult)
{
    m_detectResult = _detectResult;
    m_detectResultHasBeenSet = true;
}

bool DescribeDLPFileDetectResultData::DetectResultHasBeenSet() const
{
    return m_detectResultHasBeenSet;
}

