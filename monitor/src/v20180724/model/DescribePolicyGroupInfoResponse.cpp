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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyGroupInfoResponse::DescribePolicyGroupInfoResponse() :
    m_groupNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_viewNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_showNameHasBeenSet(false),
    m_lastEditUinHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dimensionGroupHasBeenSet(false),
    m_conditionsConfigHasBeenSet(false),
    m_eventConfigHasBeenSet(false),
    m_receiverInfosHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_conditionsTempHasBeenSet(false),
    m_canSetDefaultHasBeenSet(false),
    m_isUnionRuleHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyGroupInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GroupName") && !rsp["GroupName"].IsNull())
    {
        if (!rsp["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(rsp["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = rsp["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsDefault") && !rsp["IsDefault"].IsNull())
    {
        if (!rsp["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = rsp["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (rsp.HasMember("ViewName") && !rsp["ViewName"].IsNull())
    {
        if (!rsp["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(rsp["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("ShowName") && !rsp["ShowName"].IsNull())
    {
        if (!rsp["ShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showName = string(rsp["ShowName"].GetString());
        m_showNameHasBeenSet = true;
    }

    if (rsp.HasMember("LastEditUin") && !rsp["LastEditUin"].IsNull())
    {
        if (!rsp["LastEditUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastEditUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastEditUin = string(rsp["LastEditUin"].GetString());
        m_lastEditUinHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Region` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_region.push_back((*itr).GetString());
        }
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("DimensionGroup") && !rsp["DimensionGroup"].IsNull())
    {
        if (!rsp["DimensionGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DimensionGroup` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DimensionGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dimensionGroup.push_back((*itr).GetString());
        }
        m_dimensionGroupHasBeenSet = true;
    }

    if (rsp.HasMember("ConditionsConfig") && !rsp["ConditionsConfig"].IsNull())
    {
        if (!rsp["ConditionsConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConditionsConfig` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ConditionsConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditionsConfig.push_back(item);
        }
        m_conditionsConfigHasBeenSet = true;
    }

    if (rsp.HasMember("EventConfig") && !rsp["EventConfig"].IsNull())
    {
        if (!rsp["EventConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventConfig` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EventConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoEventCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventConfig.push_back(item);
        }
        m_eventConfigHasBeenSet = true;
    }

    if (rsp.HasMember("ReceiverInfos") && !rsp["ReceiverInfos"].IsNull())
    {
        if (!rsp["ReceiverInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiverInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReceiverInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribePolicyGroupInfoReceiverInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiverInfos.push_back(item);
        }
        m_receiverInfosHasBeenSet = true;
    }

    if (rsp.HasMember("Callback") && !rsp["Callback"].IsNull())
    {
        if (!rsp["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(rsp["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (rsp.HasMember("ConditionsTemp") && !rsp["ConditionsTemp"].IsNull())
    {
        if (!rsp["ConditionsTemp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConditionsTemp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conditionsTemp.Deserialize(rsp["ConditionsTemp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conditionsTempHasBeenSet = true;
    }

    if (rsp.HasMember("CanSetDefault") && !rsp["CanSetDefault"].IsNull())
    {
        if (!rsp["CanSetDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CanSetDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSetDefault = rsp["CanSetDefault"].GetBool();
        m_canSetDefaultHasBeenSet = true;
    }

    if (rsp.HasMember("IsUnionRule") && !rsp["IsUnionRule"].IsNull())
    {
        if (!rsp["IsUnionRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsUnionRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnionRule = rsp["IsUnionRule"].GetInt64();
        m_isUnionRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePolicyGroupInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_showNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastEditUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastEditUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastEditUin.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dimensionGroup.begin(); itr != m_dimensionGroup.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_conditionsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditionsConfig.begin(); itr != m_conditionsConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventConfig.begin(); itr != m_eventConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiverInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiverInfos.begin(); itr != m_receiverInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conditionsTempHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionsTemp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditionsTemp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_canSetDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSetDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSetDefault, allocator);
    }

    if (m_isUnionRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnionRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnionRule, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribePolicyGroupInfoResponse::GetGroupName() const
{
    return m_groupName;
}

bool DescribePolicyGroupInfoResponse::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t DescribePolicyGroupInfoResponse::GetProjectId() const
{
    return m_projectId;
}

bool DescribePolicyGroupInfoResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribePolicyGroupInfoResponse::GetIsDefault() const
{
    return m_isDefault;
}

bool DescribePolicyGroupInfoResponse::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string DescribePolicyGroupInfoResponse::GetViewName() const
{
    return m_viewName;
}

bool DescribePolicyGroupInfoResponse::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

string DescribePolicyGroupInfoResponse::GetRemark() const
{
    return m_remark;
}

bool DescribePolicyGroupInfoResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribePolicyGroupInfoResponse::GetShowName() const
{
    return m_showName;
}

bool DescribePolicyGroupInfoResponse::ShowNameHasBeenSet() const
{
    return m_showNameHasBeenSet;
}

string DescribePolicyGroupInfoResponse::GetLastEditUin() const
{
    return m_lastEditUin;
}

bool DescribePolicyGroupInfoResponse::LastEditUinHasBeenSet() const
{
    return m_lastEditUinHasBeenSet;
}

string DescribePolicyGroupInfoResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribePolicyGroupInfoResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> DescribePolicyGroupInfoResponse::GetRegion() const
{
    return m_region;
}

bool DescribePolicyGroupInfoResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> DescribePolicyGroupInfoResponse::GetDimensionGroup() const
{
    return m_dimensionGroup;
}

bool DescribePolicyGroupInfoResponse::DimensionGroupHasBeenSet() const
{
    return m_dimensionGroupHasBeenSet;
}

vector<DescribePolicyGroupInfoCondition> DescribePolicyGroupInfoResponse::GetConditionsConfig() const
{
    return m_conditionsConfig;
}

bool DescribePolicyGroupInfoResponse::ConditionsConfigHasBeenSet() const
{
    return m_conditionsConfigHasBeenSet;
}

vector<DescribePolicyGroupInfoEventCondition> DescribePolicyGroupInfoResponse::GetEventConfig() const
{
    return m_eventConfig;
}

bool DescribePolicyGroupInfoResponse::EventConfigHasBeenSet() const
{
    return m_eventConfigHasBeenSet;
}

vector<DescribePolicyGroupInfoReceiverInfo> DescribePolicyGroupInfoResponse::GetReceiverInfos() const
{
    return m_receiverInfos;
}

bool DescribePolicyGroupInfoResponse::ReceiverInfosHasBeenSet() const
{
    return m_receiverInfosHasBeenSet;
}

DescribePolicyGroupInfoCallback DescribePolicyGroupInfoResponse::GetCallback() const
{
    return m_callback;
}

bool DescribePolicyGroupInfoResponse::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

DescribePolicyGroupInfoConditionTpl DescribePolicyGroupInfoResponse::GetConditionsTemp() const
{
    return m_conditionsTemp;
}

bool DescribePolicyGroupInfoResponse::ConditionsTempHasBeenSet() const
{
    return m_conditionsTempHasBeenSet;
}

bool DescribePolicyGroupInfoResponse::GetCanSetDefault() const
{
    return m_canSetDefault;
}

bool DescribePolicyGroupInfoResponse::CanSetDefaultHasBeenSet() const
{
    return m_canSetDefaultHasBeenSet;
}

int64_t DescribePolicyGroupInfoResponse::GetIsUnionRule() const
{
    return m_isUnionRule;
}

bool DescribePolicyGroupInfoResponse::IsUnionRuleHasBeenSet() const
{
    return m_isUnionRuleHasBeenSet;
}


