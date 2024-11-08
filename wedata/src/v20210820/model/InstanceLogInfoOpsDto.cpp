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

#include <tencentcloud/wedata/v20210820/model/InstanceLogInfoOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLogInfoOpsDto::InstanceLogInfoOpsDto() :
    m_logInfoHasBeenSet(false),
    m_yarnLogInfoHasBeenSet(false),
    m_dataLogInfoHasBeenSet(false),
    m_thirdTaskRunLogInfoHasBeenSet(false),
    m_thirdTaskLogUrlDescHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_fileSizeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLogInfoOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogInfo") && !value["LogInfo"].IsNull())
    {
        if (!value["LogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.LogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logInfo = string(value["LogInfo"].GetString());
        m_logInfoHasBeenSet = true;
    }

    if (value.HasMember("YarnLogInfo") && !value["YarnLogInfo"].IsNull())
    {
        if (!value["YarnLogInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.YarnLogInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["YarnLogInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_yarnLogInfo.push_back((*itr).GetString());
        }
        m_yarnLogInfoHasBeenSet = true;
    }

    if (value.HasMember("DataLogInfo") && !value["DataLogInfo"].IsNull())
    {
        if (!value["DataLogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.DataLogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataLogInfo = string(value["DataLogInfo"].GetString());
        m_dataLogInfoHasBeenSet = true;
    }

    if (value.HasMember("ThirdTaskRunLogInfo") && !value["ThirdTaskRunLogInfo"].IsNull())
    {
        if (!value["ThirdTaskRunLogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.ThirdTaskRunLogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdTaskRunLogInfo = string(value["ThirdTaskRunLogInfo"].GetString());
        m_thirdTaskRunLogInfoHasBeenSet = true;
    }

    if (value.HasMember("ThirdTaskLogUrlDesc") && !value["ThirdTaskLogUrlDesc"].IsNull())
    {
        if (!value["ThirdTaskLogUrlDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.ThirdTaskLogUrlDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdTaskLogUrlDesc = string(value["ThirdTaskLogUrlDesc"].GetString());
        m_thirdTaskLogUrlDescHasBeenSet = true;
    }

    if (value.HasMember("LineCount") && !value["LineCount"].IsNull())
    {
        if (!value["LineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.LineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineCount = value["LineCount"].GetInt64();
        m_lineCountHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("IsEnd") && !value["IsEnd"].IsNull())
    {
        if (!value["IsEnd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.IsEnd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnd = value["IsEnd"].GetBool();
        m_isEndHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfoOpsDto.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLogInfoOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_yarnLogInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YarnLogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_yarnLogInfo.begin(); itr != m_yarnLogInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataLogInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataLogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataLogInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdTaskRunLogInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdTaskRunLogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdTaskRunLogInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdTaskLogUrlDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdTaskLogUrlDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdTaskLogUrlDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLogInfoOpsDto::GetLogInfo() const
{
    return m_logInfo;
}

void InstanceLogInfoOpsDto::SetLogInfo(const string& _logInfo)
{
    m_logInfo = _logInfo;
    m_logInfoHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::LogInfoHasBeenSet() const
{
    return m_logInfoHasBeenSet;
}

vector<string> InstanceLogInfoOpsDto::GetYarnLogInfo() const
{
    return m_yarnLogInfo;
}

void InstanceLogInfoOpsDto::SetYarnLogInfo(const vector<string>& _yarnLogInfo)
{
    m_yarnLogInfo = _yarnLogInfo;
    m_yarnLogInfoHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::YarnLogInfoHasBeenSet() const
{
    return m_yarnLogInfoHasBeenSet;
}

string InstanceLogInfoOpsDto::GetDataLogInfo() const
{
    return m_dataLogInfo;
}

void InstanceLogInfoOpsDto::SetDataLogInfo(const string& _dataLogInfo)
{
    m_dataLogInfo = _dataLogInfo;
    m_dataLogInfoHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::DataLogInfoHasBeenSet() const
{
    return m_dataLogInfoHasBeenSet;
}

string InstanceLogInfoOpsDto::GetThirdTaskRunLogInfo() const
{
    return m_thirdTaskRunLogInfo;
}

void InstanceLogInfoOpsDto::SetThirdTaskRunLogInfo(const string& _thirdTaskRunLogInfo)
{
    m_thirdTaskRunLogInfo = _thirdTaskRunLogInfo;
    m_thirdTaskRunLogInfoHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::ThirdTaskRunLogInfoHasBeenSet() const
{
    return m_thirdTaskRunLogInfoHasBeenSet;
}

string InstanceLogInfoOpsDto::GetThirdTaskLogUrlDesc() const
{
    return m_thirdTaskLogUrlDesc;
}

void InstanceLogInfoOpsDto::SetThirdTaskLogUrlDesc(const string& _thirdTaskLogUrlDesc)
{
    m_thirdTaskLogUrlDesc = _thirdTaskLogUrlDesc;
    m_thirdTaskLogUrlDescHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::ThirdTaskLogUrlDescHasBeenSet() const
{
    return m_thirdTaskLogUrlDescHasBeenSet;
}

int64_t InstanceLogInfoOpsDto::GetLineCount() const
{
    return m_lineCount;
}

void InstanceLogInfoOpsDto::SetLineCount(const int64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

string InstanceLogInfoOpsDto::GetExtInfo() const
{
    return m_extInfo;
}

void InstanceLogInfoOpsDto::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

bool InstanceLogInfoOpsDto::GetIsEnd() const
{
    return m_isEnd;
}

void InstanceLogInfoOpsDto::SetIsEnd(const bool& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

string InstanceLogInfoOpsDto::GetFileSize() const
{
    return m_fileSize;
}

void InstanceLogInfoOpsDto::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool InstanceLogInfoOpsDto::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

