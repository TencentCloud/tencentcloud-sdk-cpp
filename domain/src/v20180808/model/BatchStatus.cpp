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

#include <tencentcloud/domain/v20180808/model/BatchStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

BatchStatus::BatchStatus() :
    m_logIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_batchActionHasBeenSet(false)
{
}

CoreInternalOutcome BatchStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchStatus.LogId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logId = value["LogId"].GetUint64();
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BatchAction") && !value["BatchAction"].IsNull())
    {
        if (!value["BatchAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchStatus.BatchAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchAction = string(value["BatchAction"].GetString());
        m_batchActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_batchActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchAction.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BatchStatus::GetLogId() const
{
    return m_logId;
}

void BatchStatus::SetLogId(const uint64_t& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool BatchStatus::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string BatchStatus::GetStatus() const
{
    return m_status;
}

void BatchStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BatchStatus::GetBatchAction() const
{
    return m_batchAction;
}

void BatchStatus::SetBatchAction(const string& _batchAction)
{
    m_batchAction = _batchAction;
    m_batchActionHasBeenSet = true;
}

bool BatchStatus::BatchActionHasBeenSet() const
{
    return m_batchActionHasBeenSet;
}

