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

#include <tencentcloud/gme/v20180711/model/DescribeScanResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeScanResult::DescribeScanResult() :
    m_codeHasBeenSet(false),
    m_dataIdHasBeenSet(false),
    m_scanFinishTimeHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_liveHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_scanPieceHasBeenSet(false),
    m_scanStartTimeHasBeenSet(false),
    m_scenesHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bizIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("DataId") && !value["DataId"].IsNull())
    {
        if (!value["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(value["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (value.HasMember("ScanFinishTime") && !value["ScanFinishTime"].IsNull())
    {
        if (!value["ScanFinishTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.ScanFinishTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanFinishTime = value["ScanFinishTime"].GetUint64();
        m_scanFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.HitFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetBool();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("Live") && !value["Live"].IsNull())
    {
        if (!value["Live"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Live` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_live = value["Live"].GetBool();
        m_liveHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("ScanPiece") && !value["ScanPiece"].IsNull())
    {
        if (!value["ScanPiece"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.ScanPiece` is not array type"));

        const rapidjson::Value &tmpValue = value["ScanPiece"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanPiece item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_scanPiece.push_back(item);
        }
        m_scanPieceHasBeenSet = true;
    }

    if (value.HasMember("ScanStartTime") && !value["ScanStartTime"].IsNull())
    {
        if (!value["ScanStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.ScanStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStartTime = value["ScanStartTime"].GetUint64();
        m_scanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("Scenes") && !value["Scenes"].IsNull())
    {
        if (!value["Scenes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Scenes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scenes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scenes.push_back((*itr).GetString());
        }
        m_scenesHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeScanResult.BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeScanResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_scanFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanFinishTime, allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_liveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Live";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_live, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_scanPieceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPiece";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_scanPiece.begin(); itr != m_scanPiece.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStartTime, allocator);
    }

    if (m_scenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenes.begin(); itr != m_scenes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

}


int64_t DescribeScanResult::GetCode() const
{
    return m_code;
}

void DescribeScanResult::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DescribeScanResult::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DescribeScanResult::GetDataId() const
{
    return m_dataId;
}

void DescribeScanResult::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool DescribeScanResult::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

uint64_t DescribeScanResult::GetScanFinishTime() const
{
    return m_scanFinishTime;
}

void DescribeScanResult::SetScanFinishTime(const uint64_t& _scanFinishTime)
{
    m_scanFinishTime = _scanFinishTime;
    m_scanFinishTimeHasBeenSet = true;
}

bool DescribeScanResult::ScanFinishTimeHasBeenSet() const
{
    return m_scanFinishTimeHasBeenSet;
}

bool DescribeScanResult::GetHitFlag() const
{
    return m_hitFlag;
}

void DescribeScanResult::SetHitFlag(const bool& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool DescribeScanResult::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

bool DescribeScanResult::GetLive() const
{
    return m_live;
}

void DescribeScanResult::SetLive(const bool& _live)
{
    m_live = _live;
    m_liveHasBeenSet = true;
}

bool DescribeScanResult::LiveHasBeenSet() const
{
    return m_liveHasBeenSet;
}

string DescribeScanResult::GetMsg() const
{
    return m_msg;
}

void DescribeScanResult::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool DescribeScanResult::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

vector<ScanPiece> DescribeScanResult::GetScanPiece() const
{
    return m_scanPiece;
}

void DescribeScanResult::SetScanPiece(const vector<ScanPiece>& _scanPiece)
{
    m_scanPiece = _scanPiece;
    m_scanPieceHasBeenSet = true;
}

bool DescribeScanResult::ScanPieceHasBeenSet() const
{
    return m_scanPieceHasBeenSet;
}

uint64_t DescribeScanResult::GetScanStartTime() const
{
    return m_scanStartTime;
}

void DescribeScanResult::SetScanStartTime(const uint64_t& _scanStartTime)
{
    m_scanStartTime = _scanStartTime;
    m_scanStartTimeHasBeenSet = true;
}

bool DescribeScanResult::ScanStartTimeHasBeenSet() const
{
    return m_scanStartTimeHasBeenSet;
}

vector<string> DescribeScanResult::GetScenes() const
{
    return m_scenes;
}

void DescribeScanResult::SetScenes(const vector<string>& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool DescribeScanResult::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

string DescribeScanResult::GetTaskId() const
{
    return m_taskId;
}

void DescribeScanResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeScanResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeScanResult::GetUrl() const
{
    return m_url;
}

void DescribeScanResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeScanResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string DescribeScanResult::GetStatus() const
{
    return m_status;
}

void DescribeScanResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeScanResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeScanResult::GetBizId() const
{
    return m_bizId;
}

void DescribeScanResult::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool DescribeScanResult::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

