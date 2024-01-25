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

#include <tencentcloud/wedata/v20210820/model/DescribeTestRunBatchItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTestRunBatchItem::DescribeTestRunBatchItem() :
    m_instanceKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_finishedHasBeenSet(false),
    m_logContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTestRunBatchItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTestRunBatchItem.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTestRunBatchItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Finished") && !value["Finished"].IsNull())
    {
        if (!value["Finished"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTestRunBatchItem.Finished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_finished = value["Finished"].GetBool();
        m_finishedHasBeenSet = true;
    }

    if (value.HasMember("LogContent") && !value["LogContent"].IsNull())
    {
        if (!value["LogContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeTestRunBatchItem.LogContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logContent = string(value["LogContent"].GetString());
        m_logContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeTestRunBatchItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Finished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_finished, allocator);
    }

    if (m_logContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logContent.c_str(), allocator).Move(), allocator);
    }

}


string DescribeTestRunBatchItem::GetInstanceKey() const
{
    return m_instanceKey;
}

void DescribeTestRunBatchItem::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool DescribeTestRunBatchItem::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string DescribeTestRunBatchItem::GetStatus() const
{
    return m_status;
}

void DescribeTestRunBatchItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTestRunBatchItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool DescribeTestRunBatchItem::GetFinished() const
{
    return m_finished;
}

void DescribeTestRunBatchItem::SetFinished(const bool& _finished)
{
    m_finished = _finished;
    m_finishedHasBeenSet = true;
}

bool DescribeTestRunBatchItem::FinishedHasBeenSet() const
{
    return m_finishedHasBeenSet;
}

string DescribeTestRunBatchItem::GetLogContent() const
{
    return m_logContent;
}

void DescribeTestRunBatchItem::SetLogContent(const string& _logContent)
{
    m_logContent = _logContent;
    m_logContentHasBeenSet = true;
}

bool DescribeTestRunBatchItem::LogContentHasBeenSet() const
{
    return m_logContentHasBeenSet;
}

