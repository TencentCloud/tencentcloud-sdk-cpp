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

#include <tencentcloud/cls/v20201016/model/LogContextInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

LogContextInfo::LogContextInfo() :
    m_sourceHasBeenSet(false),
    m_filenameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_pkgLogIdHasBeenSet(false),
    m_bTimeHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_rawLogHasBeenSet(false),
    m_indexStatusHasBeenSet(false),
    m_highLightsHasBeenSet(false)
{
}

CoreInternalOutcome LogContextInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Filename") && !value["Filename"].IsNull())
    {
        if (!value["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(value["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgLogId") && !value["PkgLogId"].IsNull())
    {
        if (!value["PkgLogId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.PkgLogId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgLogId = value["PkgLogId"].GetInt64();
        m_pkgLogIdHasBeenSet = true;
    }

    if (value.HasMember("BTime") && !value["BTime"].IsNull())
    {
        if (!value["BTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.BTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bTime = value["BTime"].GetInt64();
        m_bTimeHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("RawLog") && !value["RawLog"].IsNull())
    {
        if (!value["RawLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.RawLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawLog = string(value["RawLog"].GetString());
        m_rawLogHasBeenSet = true;
    }

    if (value.HasMember("IndexStatus") && !value["IndexStatus"].IsNull())
    {
        if (!value["IndexStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.IndexStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexStatus = string(value["IndexStatus"].GetString());
        m_indexStatusHasBeenSet = true;
    }

    if (value.HasMember("HighLights") && !value["HighLights"].IsNull())
    {
        if (!value["HighLights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogContextInfo.HighLights` is not array type"));

        const rapidjson::Value &tmpValue = value["HighLights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HighLightItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highLights.push_back(item);
        }
        m_highLightsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogContextInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgLogId, allocator);
    }

    if (m_bTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bTime, allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_rawLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawLog.c_str(), allocator).Move(), allocator);
    }

    if (m_indexStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_highLightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highLights.begin(); itr != m_highLights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LogContextInfo::GetSource() const
{
    return m_source;
}

void LogContextInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool LogContextInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string LogContextInfo::GetFilename() const
{
    return m_filename;
}

void LogContextInfo::SetFilename(const string& _filename)
{
    m_filename = _filename;
    m_filenameHasBeenSet = true;
}

bool LogContextInfo::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

string LogContextInfo::GetContent() const
{
    return m_content;
}

void LogContextInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool LogContextInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string LogContextInfo::GetPkgId() const
{
    return m_pkgId;
}

void LogContextInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool LogContextInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

int64_t LogContextInfo::GetPkgLogId() const
{
    return m_pkgLogId;
}

void LogContextInfo::SetPkgLogId(const int64_t& _pkgLogId)
{
    m_pkgLogId = _pkgLogId;
    m_pkgLogIdHasBeenSet = true;
}

bool LogContextInfo::PkgLogIdHasBeenSet() const
{
    return m_pkgLogIdHasBeenSet;
}

int64_t LogContextInfo::GetBTime() const
{
    return m_bTime;
}

void LogContextInfo::SetBTime(const int64_t& _bTime)
{
    m_bTime = _bTime;
    m_bTimeHasBeenSet = true;
}

bool LogContextInfo::BTimeHasBeenSet() const
{
    return m_bTimeHasBeenSet;
}

string LogContextInfo::GetHostName() const
{
    return m_hostName;
}

void LogContextInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool LogContextInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string LogContextInfo::GetRawLog() const
{
    return m_rawLog;
}

void LogContextInfo::SetRawLog(const string& _rawLog)
{
    m_rawLog = _rawLog;
    m_rawLogHasBeenSet = true;
}

bool LogContextInfo::RawLogHasBeenSet() const
{
    return m_rawLogHasBeenSet;
}

string LogContextInfo::GetIndexStatus() const
{
    return m_indexStatus;
}

void LogContextInfo::SetIndexStatus(const string& _indexStatus)
{
    m_indexStatus = _indexStatus;
    m_indexStatusHasBeenSet = true;
}

bool LogContextInfo::IndexStatusHasBeenSet() const
{
    return m_indexStatusHasBeenSet;
}

vector<HighLightItem> LogContextInfo::GetHighLights() const
{
    return m_highLights;
}

void LogContextInfo::SetHighLights(const vector<HighLightItem>& _highLights)
{
    m_highLights = _highLights;
    m_highLightsHasBeenSet = true;
}

bool LogContextInfo::HighLightsHasBeenSet() const
{
    return m_highLightsHasBeenSet;
}

