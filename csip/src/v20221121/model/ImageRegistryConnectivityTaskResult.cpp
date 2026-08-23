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

#include <tencentcloud/csip/v20221121/model/ImageRegistryConnectivityTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageRegistryConnectivityTaskResult::ImageRegistryConnectivityTaskResult() :
    m_connDetectMessageHasBeenSet(false),
    m_connDetectStatusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome ImageRegistryConnectivityTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnDetectMessage") && !value["ConnDetectMessage"].IsNull())
    {
        if (!value["ConnDetectMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.ConnDetectMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connDetectMessage = string(value["ConnDetectMessage"].GetString());
        m_connDetectMessageHasBeenSet = true;
    }

    if (value.HasMember("ConnDetectStatus") && !value["ConnDetectStatus"].IsNull())
    {
        if (!value["ConnDetectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.ConnDetectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connDetectStatus = string(value["ConnDetectStatus"].GetString());
        m_connDetectStatusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryConnectivityTaskResult.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRegistryConnectivityTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connDetectMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connDetectMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_connDetectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnDetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connDetectStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


string ImageRegistryConnectivityTaskResult::GetConnDetectMessage() const
{
    return m_connDetectMessage;
}

void ImageRegistryConnectivityTaskResult::SetConnDetectMessage(const string& _connDetectMessage)
{
    m_connDetectMessage = _connDetectMessage;
    m_connDetectMessageHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::ConnDetectMessageHasBeenSet() const
{
    return m_connDetectMessageHasBeenSet;
}

string ImageRegistryConnectivityTaskResult::GetConnDetectStatus() const
{
    return m_connDetectStatus;
}

void ImageRegistryConnectivityTaskResult::SetConnDetectStatus(const string& _connDetectStatus)
{
    m_connDetectStatus = _connDetectStatus;
    m_connDetectStatusHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::ConnDetectStatusHasBeenSet() const
{
    return m_connDetectStatusHasBeenSet;
}

string ImageRegistryConnectivityTaskResult::GetFailReason() const
{
    return m_failReason;
}

void ImageRegistryConnectivityTaskResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string ImageRegistryConnectivityTaskResult::GetQuuid() const
{
    return m_quuid;
}

void ImageRegistryConnectivityTaskResult::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string ImageRegistryConnectivityTaskResult::GetSolution() const
{
    return m_solution;
}

void ImageRegistryConnectivityTaskResult::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string ImageRegistryConnectivityTaskResult::GetUuid() const
{
    return m_uuid;
}

void ImageRegistryConnectivityTaskResult::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ImageRegistryConnectivityTaskResult::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

