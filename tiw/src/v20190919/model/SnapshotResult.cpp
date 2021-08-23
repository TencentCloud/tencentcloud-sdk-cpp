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

#include <tencentcloud/tiw/v20190919/model/SnapshotResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

SnapshotResult::SnapshotResult() :
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_snapshotsHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Snapshots") && !value["Snapshots"].IsNull())
    {
        if (!value["Snapshots"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SnapshotResult.Snapshots` is not array type"));

        const rapidjson::Value &tmpValue = value["Snapshots"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_snapshots.push_back((*itr).GetString());
        }
        m_snapshotsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_snapshotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_snapshots.begin(); itr != m_snapshots.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SnapshotResult::GetErrorCode() const
{
    return m_errorCode;
}

void SnapshotResult::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool SnapshotResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string SnapshotResult::GetErrorMessage() const
{
    return m_errorMessage;
}

void SnapshotResult::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool SnapshotResult::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

uint64_t SnapshotResult::GetTotal() const
{
    return m_total;
}

void SnapshotResult::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SnapshotResult::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<string> SnapshotResult::GetSnapshots() const
{
    return m_snapshots;
}

void SnapshotResult::SetSnapshots(const vector<string>& _snapshots)
{
    m_snapshots = _snapshots;
    m_snapshotsHasBeenSet = true;
}

bool SnapshotResult::SnapshotsHasBeenSet() const
{
    return m_snapshotsHasBeenSet;
}

