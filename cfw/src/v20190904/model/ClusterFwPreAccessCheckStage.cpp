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

#include <tencentcloud/cfw/v20190904/model/ClusterFwPreAccessCheckStage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ClusterFwPreAccessCheckStage::ClusterFwPreAccessCheckStage() :
    m_stageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome ClusterFwPreAccessCheckStage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckStage.Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(value["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckStage.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckStage.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterFwPreAccessCheckStage.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterFwPreAccessCheckStage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

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

}


string ClusterFwPreAccessCheckStage::GetStage() const
{
    return m_stage;
}

void ClusterFwPreAccessCheckStage::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool ClusterFwPreAccessCheckStage::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

int64_t ClusterFwPreAccessCheckStage::GetStatus() const
{
    return m_status;
}

void ClusterFwPreAccessCheckStage::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterFwPreAccessCheckStage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterFwPreAccessCheckStage::GetErrorCode() const
{
    return m_errorCode;
}

void ClusterFwPreAccessCheckStage::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool ClusterFwPreAccessCheckStage::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string ClusterFwPreAccessCheckStage::GetErrorMessage() const
{
    return m_errorMessage;
}

void ClusterFwPreAccessCheckStage::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ClusterFwPreAccessCheckStage::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

