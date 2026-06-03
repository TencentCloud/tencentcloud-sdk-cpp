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

#include <tencentcloud/ess/v20201111/model/CreateArchiveFlow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateArchiveFlow::CreateArchiveFlow() :
    m_resourceIdsHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_approverInfoHasBeenSet(false),
    m_ccInfoHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_approveTimeHasBeenSet(false),
    m_customCreatedOnHasBeenSet(false)
{
}

CoreInternalOutcome CreateArchiveFlow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowType") && !value["FlowType"].IsNull())
    {
        if (!value["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(value["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverInfo") && !value["ApproverInfo"].IsNull())
    {
        if (!value["ApproverInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.ApproverInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ArchiveFlowApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_approverInfo.push_back(item);
        }
        m_approverInfoHasBeenSet = true;
    }

    if (value.HasMember("CcInfo") && !value["CcInfo"].IsNull())
    {
        if (!value["CcInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.CcInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CcInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ArchiveFlowApproverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ccInfo.push_back(item);
        }
        m_ccInfoHasBeenSet = true;
    }

    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("FlowDescription") && !value["FlowDescription"].IsNull())
    {
        if (!value["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(value["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ApproveTime") && !value["ApproveTime"].IsNull())
    {
        if (!value["ApproveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.ApproveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approveTime = value["ApproveTime"].GetInt64();
        m_approveTimeHasBeenSet = true;
    }

    if (value.HasMember("CustomCreatedOn") && !value["CustomCreatedOn"].IsNull())
    {
        if (!value["CustomCreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateArchiveFlow.CustomCreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customCreatedOn = value["CustomCreatedOn"].GetInt64();
        m_customCreatedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateArchiveFlow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_approverInfo.begin(); itr != m_approverInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ccInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ccInfo.begin(); itr != m_ccInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_approveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approveTime, allocator);
    }

    if (m_customCreatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customCreatedOn, allocator);
    }

}


vector<string> CreateArchiveFlow::GetResourceIds() const
{
    return m_resourceIds;
}

void CreateArchiveFlow::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool CreateArchiveFlow::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string CreateArchiveFlow::GetFlowName() const
{
    return m_flowName;
}

void CreateArchiveFlow::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool CreateArchiveFlow::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string CreateArchiveFlow::GetFlowType() const
{
    return m_flowType;
}

void CreateArchiveFlow::SetFlowType(const string& _flowType)
{
    m_flowType = _flowType;
    m_flowTypeHasBeenSet = true;
}

bool CreateArchiveFlow::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

string CreateArchiveFlow::GetBusinessId() const
{
    return m_businessId;
}

void CreateArchiveFlow::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CreateArchiveFlow::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string CreateArchiveFlow::GetCreatorName() const
{
    return m_creatorName;
}

void CreateArchiveFlow::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool CreateArchiveFlow::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

vector<ArchiveFlowApproverInfo> CreateArchiveFlow::GetApproverInfo() const
{
    return m_approverInfo;
}

void CreateArchiveFlow::SetApproverInfo(const vector<ArchiveFlowApproverInfo>& _approverInfo)
{
    m_approverInfo = _approverInfo;
    m_approverInfoHasBeenSet = true;
}

bool CreateArchiveFlow::ApproverInfoHasBeenSet() const
{
    return m_approverInfoHasBeenSet;
}

vector<ArchiveFlowApproverInfo> CreateArchiveFlow::GetCcInfo() const
{
    return m_ccInfo;
}

void CreateArchiveFlow::SetCcInfo(const vector<ArchiveFlowApproverInfo>& _ccInfo)
{
    m_ccInfo = _ccInfo;
    m_ccInfoHasBeenSet = true;
}

bool CreateArchiveFlow::CcInfoHasBeenSet() const
{
    return m_ccInfoHasBeenSet;
}

string CreateArchiveFlow::GetUserData() const
{
    return m_userData;
}

void CreateArchiveFlow::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateArchiveFlow::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

string CreateArchiveFlow::GetFlowDescription() const
{
    return m_flowDescription;
}

void CreateArchiveFlow::SetFlowDescription(const string& _flowDescription)
{
    m_flowDescription = _flowDescription;
    m_flowDescriptionHasBeenSet = true;
}

bool CreateArchiveFlow::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

int64_t CreateArchiveFlow::GetApproveTime() const
{
    return m_approveTime;
}

void CreateArchiveFlow::SetApproveTime(const int64_t& _approveTime)
{
    m_approveTime = _approveTime;
    m_approveTimeHasBeenSet = true;
}

bool CreateArchiveFlow::ApproveTimeHasBeenSet() const
{
    return m_approveTimeHasBeenSet;
}

int64_t CreateArchiveFlow::GetCustomCreatedOn() const
{
    return m_customCreatedOn;
}

void CreateArchiveFlow::SetCustomCreatedOn(const int64_t& _customCreatedOn)
{
    m_customCreatedOn = _customCreatedOn;
    m_customCreatedOnHasBeenSet = true;
}

bool CreateArchiveFlow::CustomCreatedOnHasBeenSet() const
{
    return m_customCreatedOnHasBeenSet;
}

