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

#include <tencentcloud/cpdp/v20190820/model/ApplyReconciliationFileResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyReconciliationFileResult::ApplyReconciliationFileResult() :
    m_applyFileIdHasBeenSet(false),
    m_applyStatusHasBeenSet(false),
    m_applyMessageHasBeenSet(false)
{
}

CoreInternalOutcome ApplyReconciliationFileResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplyFileId") && !value["ApplyFileId"].IsNull())
    {
        if (!value["ApplyFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyReconciliationFileResult.ApplyFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyFileId = string(value["ApplyFileId"].GetString());
        m_applyFileIdHasBeenSet = true;
    }

    if (value.HasMember("ApplyStatus") && !value["ApplyStatus"].IsNull())
    {
        if (!value["ApplyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyReconciliationFileResult.ApplyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyStatus = string(value["ApplyStatus"].GetString());
        m_applyStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplyMessage") && !value["ApplyMessage"].IsNull())
    {
        if (!value["ApplyMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyReconciliationFileResult.ApplyMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyMessage = string(value["ApplyMessage"].GetString());
        m_applyMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyReconciliationFileResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applyFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applyMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyMessage.c_str(), allocator).Move(), allocator);
    }

}


string ApplyReconciliationFileResult::GetApplyFileId() const
{
    return m_applyFileId;
}

void ApplyReconciliationFileResult::SetApplyFileId(const string& _applyFileId)
{
    m_applyFileId = _applyFileId;
    m_applyFileIdHasBeenSet = true;
}

bool ApplyReconciliationFileResult::ApplyFileIdHasBeenSet() const
{
    return m_applyFileIdHasBeenSet;
}

string ApplyReconciliationFileResult::GetApplyStatus() const
{
    return m_applyStatus;
}

void ApplyReconciliationFileResult::SetApplyStatus(const string& _applyStatus)
{
    m_applyStatus = _applyStatus;
    m_applyStatusHasBeenSet = true;
}

bool ApplyReconciliationFileResult::ApplyStatusHasBeenSet() const
{
    return m_applyStatusHasBeenSet;
}

string ApplyReconciliationFileResult::GetApplyMessage() const
{
    return m_applyMessage;
}

void ApplyReconciliationFileResult::SetApplyMessage(const string& _applyMessage)
{
    m_applyMessage = _applyMessage;
    m_applyMessageHasBeenSet = true;
}

bool ApplyReconciliationFileResult::ApplyMessageHasBeenSet() const
{
    return m_applyMessageHasBeenSet;
}

