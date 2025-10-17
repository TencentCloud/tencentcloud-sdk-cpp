/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeDLPFileDetectTaskResult::DescribeDLPFileDetectTaskResult() :
    m_fileMd5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detectResultHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDLPFileDetectTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectTaskResult.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectTaskResult.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectTaskResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DetectResult") && !value["DetectResult"].IsNull())
    {
        if (!value["DetectResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectTaskResult.DetectResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectResult = string(value["DetectResult"].GetString());
        m_detectResultHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDLPFileDetectTaskResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDLPFileDetectTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_detectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectResult.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDLPFileDetectTaskResult::GetFileMd5() const
{
    return m_fileMd5;
}

void DescribeDLPFileDetectTaskResult::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool DescribeDLPFileDetectTaskResult::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string DescribeDLPFileDetectTaskResult::GetFileName() const
{
    return m_fileName;
}

void DescribeDLPFileDetectTaskResult::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeDLPFileDetectTaskResult::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t DescribeDLPFileDetectTaskResult::GetStatus() const
{
    return m_status;
}

void DescribeDLPFileDetectTaskResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDLPFileDetectTaskResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDLPFileDetectTaskResult::GetDetectResult() const
{
    return m_detectResult;
}

void DescribeDLPFileDetectTaskResult::SetDetectResult(const string& _detectResult)
{
    m_detectResult = _detectResult;
    m_detectResultHasBeenSet = true;
}

bool DescribeDLPFileDetectTaskResult::DetectResultHasBeenSet() const
{
    return m_detectResultHasBeenSet;
}

string DescribeDLPFileDetectTaskResult::GetMessage() const
{
    return m_message;
}

void DescribeDLPFileDetectTaskResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DescribeDLPFileDetectTaskResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

