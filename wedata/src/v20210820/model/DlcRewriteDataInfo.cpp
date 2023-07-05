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

#include <tencentcloud/wedata/v20210820/model/DlcRewriteDataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DlcRewriteDataInfo::DlcRewriteDataInfo() :
    m_rewriteDataEnableHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_minInputFilesHasBeenSet(false),
    m_targetFileSizeBytesHasBeenSet(false),
    m_intervalMinHasBeenSet(false)
{
}

CoreInternalOutcome DlcRewriteDataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RewriteDataEnable") && !value["RewriteDataEnable"].IsNull())
    {
        if (!value["RewriteDataEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRewriteDataInfo.RewriteDataEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteDataEnable = string(value["RewriteDataEnable"].GetString());
        m_rewriteDataEnableHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRewriteDataInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("MinInputFiles") && !value["MinInputFiles"].IsNull())
    {
        if (!value["MinInputFiles"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRewriteDataInfo.MinInputFiles` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minInputFiles = value["MinInputFiles"].GetUint64();
        m_minInputFilesHasBeenSet = true;
    }

    if (value.HasMember("TargetFileSizeBytes") && !value["TargetFileSizeBytes"].IsNull())
    {
        if (!value["TargetFileSizeBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRewriteDataInfo.TargetFileSizeBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetFileSizeBytes = value["TargetFileSizeBytes"].GetUint64();
        m_targetFileSizeBytesHasBeenSet = true;
    }

    if (value.HasMember("IntervalMin") && !value["IntervalMin"].IsNull())
    {
        if (!value["IntervalMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DlcRewriteDataInfo.IntervalMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_intervalMin = value["IntervalMin"].GetUint64();
        m_intervalMinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcRewriteDataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rewriteDataEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteDataEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewriteDataEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_minInputFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinInputFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minInputFiles, allocator);
    }

    if (m_targetFileSizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetFileSizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetFileSizeBytes, allocator);
    }

    if (m_intervalMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intervalMin, allocator);
    }

}


string DlcRewriteDataInfo::GetRewriteDataEnable() const
{
    return m_rewriteDataEnable;
}

void DlcRewriteDataInfo::SetRewriteDataEnable(const string& _rewriteDataEnable)
{
    m_rewriteDataEnable = _rewriteDataEnable;
    m_rewriteDataEnableHasBeenSet = true;
}

bool DlcRewriteDataInfo::RewriteDataEnableHasBeenSet() const
{
    return m_rewriteDataEnableHasBeenSet;
}

string DlcRewriteDataInfo::GetEngine() const
{
    return m_engine;
}

void DlcRewriteDataInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool DlcRewriteDataInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

uint64_t DlcRewriteDataInfo::GetMinInputFiles() const
{
    return m_minInputFiles;
}

void DlcRewriteDataInfo::SetMinInputFiles(const uint64_t& _minInputFiles)
{
    m_minInputFiles = _minInputFiles;
    m_minInputFilesHasBeenSet = true;
}

bool DlcRewriteDataInfo::MinInputFilesHasBeenSet() const
{
    return m_minInputFilesHasBeenSet;
}

uint64_t DlcRewriteDataInfo::GetTargetFileSizeBytes() const
{
    return m_targetFileSizeBytes;
}

void DlcRewriteDataInfo::SetTargetFileSizeBytes(const uint64_t& _targetFileSizeBytes)
{
    m_targetFileSizeBytes = _targetFileSizeBytes;
    m_targetFileSizeBytesHasBeenSet = true;
}

bool DlcRewriteDataInfo::TargetFileSizeBytesHasBeenSet() const
{
    return m_targetFileSizeBytesHasBeenSet;
}

uint64_t DlcRewriteDataInfo::GetIntervalMin() const
{
    return m_intervalMin;
}

void DlcRewriteDataInfo::SetIntervalMin(const uint64_t& _intervalMin)
{
    m_intervalMin = _intervalMin;
    m_intervalMinHasBeenSet = true;
}

bool DlcRewriteDataInfo::IntervalMinHasBeenSet() const
{
    return m_intervalMinHasBeenSet;
}

