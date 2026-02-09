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

#include <tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCreateMySQLResult::DescribeCreateMySQLResult() :
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_freezeStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCreateMySQLResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCreateMySQLResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCreateMySQLResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("FreezeStatus") && !value["FreezeStatus"].IsNull())
    {
        if (!value["FreezeStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCreateMySQLResult.FreezeStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_freezeStatus = value["FreezeStatus"].GetBool();
        m_freezeStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCreateMySQLResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_freezeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreezeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freezeStatus, allocator);
    }

}


string DescribeCreateMySQLResult::GetStatus() const
{
    return m_status;
}

void DescribeCreateMySQLResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCreateMySQLResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCreateMySQLResult::GetFailReason() const
{
    return m_failReason;
}

void DescribeCreateMySQLResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool DescribeCreateMySQLResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

bool DescribeCreateMySQLResult::GetFreezeStatus() const
{
    return m_freezeStatus;
}

void DescribeCreateMySQLResult::SetFreezeStatus(const bool& _freezeStatus)
{
    m_freezeStatus = _freezeStatus;
    m_freezeStatusHasBeenSet = true;
}

bool DescribeCreateMySQLResult::FreezeStatusHasBeenSet() const
{
    return m_freezeStatusHasBeenSet;
}

