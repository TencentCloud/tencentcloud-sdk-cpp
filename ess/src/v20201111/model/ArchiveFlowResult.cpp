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

#include <tencentcloud/ess/v20201111/model/ArchiveFlowResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ArchiveFlowResult::ArchiveFlowResult() :
    m_flowIdHasBeenSet(false),
    m_archiveFlowStatusHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_resourceIdListHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome ArchiveFlowResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowResult.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("ArchiveFlowStatus") && !value["ArchiveFlowStatus"].IsNull())
    {
        if (!value["ArchiveFlowStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowResult.ArchiveFlowStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveFlowStatus = value["ArchiveFlowStatus"].GetInt64();
        m_archiveFlowStatusHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowResult.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceIdList") && !value["ResourceIdList"].IsNull())
    {
        if (!value["ResourceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowResult.ResourceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIdList.push_back((*itr).GetString());
        }
        m_resourceIdListHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ArchiveFlowResult.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ArchiveFlowResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveFlowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveFlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveFlowStatus, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdList.begin(); itr != m_resourceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


string ArchiveFlowResult::GetFlowId() const
{
    return m_flowId;
}

void ArchiveFlowResult::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ArchiveFlowResult::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

int64_t ArchiveFlowResult::GetArchiveFlowStatus() const
{
    return m_archiveFlowStatus;
}

void ArchiveFlowResult::SetArchiveFlowStatus(const int64_t& _archiveFlowStatus)
{
    m_archiveFlowStatus = _archiveFlowStatus;
    m_archiveFlowStatusHasBeenSet = true;
}

bool ArchiveFlowResult::ArchiveFlowStatusHasBeenSet() const
{
    return m_archiveFlowStatusHasBeenSet;
}

string ArchiveFlowResult::GetBusinessId() const
{
    return m_businessId;
}

void ArchiveFlowResult::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool ArchiveFlowResult::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

vector<string> ArchiveFlowResult::GetResourceIdList() const
{
    return m_resourceIdList;
}

void ArchiveFlowResult::SetResourceIdList(const vector<string>& _resourceIdList)
{
    m_resourceIdList = _resourceIdList;
    m_resourceIdListHasBeenSet = true;
}

bool ArchiveFlowResult::ResourceIdListHasBeenSet() const
{
    return m_resourceIdListHasBeenSet;
}

string ArchiveFlowResult::GetErrorMessage() const
{
    return m_errorMessage;
}

void ArchiveFlowResult::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ArchiveFlowResult::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

