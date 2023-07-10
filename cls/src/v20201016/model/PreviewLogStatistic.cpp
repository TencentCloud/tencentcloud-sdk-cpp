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

#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

PreviewLogStatistic::PreviewLogStatistic() :
    m_logContentHasBeenSet(false),
    m_lineNumHasBeenSet(false),
    m_dstTopicIdHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_dstTopicNameHasBeenSet(false)
{
}

CoreInternalOutcome PreviewLogStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogContent") && !value["LogContent"].IsNull())
    {
        if (!value["LogContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.LogContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logContent = string(value["LogContent"].GetString());
        m_logContentHasBeenSet = true;
    }

    if (value.HasMember("LineNum") && !value["LineNum"].IsNull())
    {
        if (!value["LineNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.LineNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineNum = value["LineNum"].GetInt64();
        m_lineNumHasBeenSet = true;
    }

    if (value.HasMember("DstTopicId") && !value["DstTopicId"].IsNull())
    {
        if (!value["DstTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.DstTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTopicId = string(value["DstTopicId"].GetString());
        m_dstTopicIdHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("DstTopicName") && !value["DstTopicName"].IsNull())
    {
        if (!value["DstTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PreviewLogStatistic.DstTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTopicName = string(value["DstTopicName"].GetString());
        m_dstTopicNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PreviewLogStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logContent.c_str(), allocator).Move(), allocator);
    }

    if (m_lineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineNum, allocator);
    }

    if (m_dstTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTopicName.c_str(), allocator).Move(), allocator);
    }

}


string PreviewLogStatistic::GetLogContent() const
{
    return m_logContent;
}

void PreviewLogStatistic::SetLogContent(const string& _logContent)
{
    m_logContent = _logContent;
    m_logContentHasBeenSet = true;
}

bool PreviewLogStatistic::LogContentHasBeenSet() const
{
    return m_logContentHasBeenSet;
}

int64_t PreviewLogStatistic::GetLineNum() const
{
    return m_lineNum;
}

void PreviewLogStatistic::SetLineNum(const int64_t& _lineNum)
{
    m_lineNum = _lineNum;
    m_lineNumHasBeenSet = true;
}

bool PreviewLogStatistic::LineNumHasBeenSet() const
{
    return m_lineNumHasBeenSet;
}

string PreviewLogStatistic::GetDstTopicId() const
{
    return m_dstTopicId;
}

void PreviewLogStatistic::SetDstTopicId(const string& _dstTopicId)
{
    m_dstTopicId = _dstTopicId;
    m_dstTopicIdHasBeenSet = true;
}

bool PreviewLogStatistic::DstTopicIdHasBeenSet() const
{
    return m_dstTopicIdHasBeenSet;
}

string PreviewLogStatistic::GetFailReason() const
{
    return m_failReason;
}

void PreviewLogStatistic::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool PreviewLogStatistic::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string PreviewLogStatistic::GetTime() const
{
    return m_time;
}

void PreviewLogStatistic::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool PreviewLogStatistic::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string PreviewLogStatistic::GetDstTopicName() const
{
    return m_dstTopicName;
}

void PreviewLogStatistic::SetDstTopicName(const string& _dstTopicName)
{
    m_dstTopicName = _dstTopicName;
    m_dstTopicNameHasBeenSet = true;
}

bool PreviewLogStatistic::DstTopicNameHasBeenSet() const
{
    return m_dstTopicNameHasBeenSet;
}

