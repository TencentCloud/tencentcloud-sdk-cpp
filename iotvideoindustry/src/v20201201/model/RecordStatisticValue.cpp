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

#include <tencentcloud/iotvideoindustry/v20201201/model/RecordStatisticValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

RecordStatisticValue::RecordStatisticValue() :
    m_expectTimeLenHasBeenSet(false),
    m_recordTimeLenHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome RecordStatisticValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpectTimeLen") && !value["ExpectTimeLen"].IsNull())
    {
        if (!value["ExpectTimeLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStatisticValue.ExpectTimeLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expectTimeLen = value["ExpectTimeLen"].GetInt64();
        m_expectTimeLenHasBeenSet = true;
    }

    if (value.HasMember("RecordTimeLen") && !value["RecordTimeLen"].IsNull())
    {
        if (!value["RecordTimeLen"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStatisticValue.RecordTimeLen` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordTimeLen = value["RecordTimeLen"].GetInt64();
        m_recordTimeLenHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStatisticValue.FileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetDouble();
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordStatisticValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expectTimeLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTimeLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expectTimeLen, allocator);
    }

    if (m_recordTimeLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTimeLen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordTimeLen, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

}


int64_t RecordStatisticValue::GetExpectTimeLen() const
{
    return m_expectTimeLen;
}

void RecordStatisticValue::SetExpectTimeLen(const int64_t& _expectTimeLen)
{
    m_expectTimeLen = _expectTimeLen;
    m_expectTimeLenHasBeenSet = true;
}

bool RecordStatisticValue::ExpectTimeLenHasBeenSet() const
{
    return m_expectTimeLenHasBeenSet;
}

int64_t RecordStatisticValue::GetRecordTimeLen() const
{
    return m_recordTimeLen;
}

void RecordStatisticValue::SetRecordTimeLen(const int64_t& _recordTimeLen)
{
    m_recordTimeLen = _recordTimeLen;
    m_recordTimeLenHasBeenSet = true;
}

bool RecordStatisticValue::RecordTimeLenHasBeenSet() const
{
    return m_recordTimeLenHasBeenSet;
}

double RecordStatisticValue::GetFileSize() const
{
    return m_fileSize;
}

void RecordStatisticValue::SetFileSize(const double& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool RecordStatisticValue::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

