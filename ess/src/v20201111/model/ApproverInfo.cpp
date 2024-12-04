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

#include <tencentcloud/ess/v20201111/model/ApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ApproverInfo::ApproverInfo() :
    m_approverTypeHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_approverRoleHasBeenSet(false),
    m_approverRoleNameHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_approverSourceHasBeenSet(false),
    m_customApproverTagHasBeenSet(false),
    m_approverOptionHasBeenSet(false),
    m_approverVerifyTypesHasBeenSet(false),
    m_approverSignTypesHasBeenSet(false),
    m_approverNeedSignReviewHasBeenSet(false),
    m_addSignComponentsLimitsHasBeenSet(false),
    m_signInstructionContentHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_signEndpointsHasBeenSet(false)
{
}

CoreInternalOutcome ApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("SignComponents") && !value["SignComponents"].IsNull())
    {
        if (!value["SignComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.SignComponents` is not array type"));

        const rapidjson::Value &tmpValue = value["SignComponents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_signComponents.push_back(item);
        }
        m_signComponentsHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardNumber") && !value["ApproverIdCardNumber"].IsNull())
    {
        if (!value["ApproverIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardNumber = string(value["ApproverIdCardNumber"].GetString());
        m_approverIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverRole") && !value["ApproverRole"].IsNull())
    {
        if (!value["ApproverRole"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverRole` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverRole = value["ApproverRole"].GetInt64();
        m_approverRoleHasBeenSet = true;
    }

    if (value.HasMember("ApproverRoleName") && !value["ApproverRoleName"].IsNull())
    {
        if (!value["ApproverRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverRoleName = string(value["ApproverRoleName"].GetString());
        m_approverRoleNameHasBeenSet = true;
    }

    if (value.HasMember("VerifyChannel") && !value["VerifyChannel"].IsNull())
    {
        if (!value["VerifyChannel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.VerifyChannel` is not array type"));

        const rapidjson::Value &tmpValue = value["VerifyChannel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_verifyChannel.push_back((*itr).GetString());
        }
        m_verifyChannelHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.PreReadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetInt64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverSource") && !value["ApproverSource"].IsNull())
    {
        if (!value["ApproverSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSource = string(value["ApproverSource"].GetString());
        m_approverSourceHasBeenSet = true;
    }

    if (value.HasMember("CustomApproverTag") && !value["CustomApproverTag"].IsNull())
    {
        if (!value["CustomApproverTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.CustomApproverTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customApproverTag = string(value["CustomApproverTag"].GetString());
        m_customApproverTagHasBeenSet = true;
    }

    if (value.HasMember("ApproverOption") && !value["ApproverOption"].IsNull())
    {
        if (!value["ApproverOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approverOption.Deserialize(value["ApproverOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approverOptionHasBeenSet = true;
    }

    if (value.HasMember("ApproverVerifyTypes") && !value["ApproverVerifyTypes"].IsNull())
    {
        if (!value["ApproverVerifyTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverVerifyTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverVerifyTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverVerifyTypes.push_back((*itr).GetInt64());
        }
        m_approverVerifyTypesHasBeenSet = true;
    }

    if (value.HasMember("ApproverSignTypes") && !value["ApproverSignTypes"].IsNull())
    {
        if (!value["ApproverSignTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverSignTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverSignTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverSignTypes.push_back((*itr).GetInt64());
        }
        m_approverSignTypesHasBeenSet = true;
    }

    if (value.HasMember("ApproverNeedSignReview") && !value["ApproverNeedSignReview"].IsNull())
    {
        if (!value["ApproverNeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverNeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_approverNeedSignReview = value["ApproverNeedSignReview"].GetBool();
        m_approverNeedSignReviewHasBeenSet = true;
    }

    if (value.HasMember("AddSignComponentsLimits") && !value["AddSignComponentsLimits"].IsNull())
    {
        if (!value["AddSignComponentsLimits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.AddSignComponentsLimits` is not array type"));

        const rapidjson::Value &tmpValue = value["AddSignComponentsLimits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentLimit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addSignComponentsLimits.push_back(item);
        }
        m_addSignComponentsLimitsHasBeenSet = true;
    }

    if (value.HasMember("SignInstructionContent") && !value["SignInstructionContent"].IsNull())
    {
        if (!value["SignInstructionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.SignInstructionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signInstructionContent = string(value["SignInstructionContent"].GetString());
        m_signInstructionContentHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Component item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("SignEndpoints") && !value["SignEndpoints"].IsNull())
    {
        if (!value["SignEndpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.SignEndpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["SignEndpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signEndpoints.push_back((*itr).GetString());
        }
        m_signEndpointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_approverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_signComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signComponents.begin(); itr != m_signComponents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_approverIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_approverRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverRole, allocator);
    }

    if (m_approverRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_verifyChannel.begin(); itr != m_verifyChannel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_preReadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReadTime, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverSource.c_str(), allocator).Move(), allocator);
    }

    if (m_customApproverTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomApproverTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customApproverTag.c_str(), allocator).Move(), allocator);
    }

    if (m_approverOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approverVerifyTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverVerifyTypes.begin(); itr != m_approverVerifyTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_approverSignTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverSignTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_approverSignTypes.begin(); itr != m_approverSignTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_approverNeedSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverNeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverNeedSignReview, allocator);
    }

    if (m_addSignComponentsLimitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddSignComponentsLimits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addSignComponentsLimits.begin(); itr != m_addSignComponentsLimits.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signInstructionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignInstructionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signInstructionContent.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signEndpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignEndpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_signEndpoints.begin(); itr != m_signEndpoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t ApproverInfo::GetApproverType() const
{
    return m_approverType;
}

void ApproverInfo::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool ApproverInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string ApproverInfo::GetApproverName() const
{
    return m_approverName;
}

void ApproverInfo::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool ApproverInfo::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string ApproverInfo::GetApproverMobile() const
{
    return m_approverMobile;
}

void ApproverInfo::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool ApproverInfo::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string ApproverInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void ApproverInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ApproverInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

vector<Component> ApproverInfo::GetSignComponents() const
{
    return m_signComponents;
}

void ApproverInfo::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool ApproverInfo::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

string ApproverInfo::GetApproverIdCardType() const
{
    return m_approverIdCardType;
}

void ApproverInfo::SetApproverIdCardType(const string& _approverIdCardType)
{
    m_approverIdCardType = _approverIdCardType;
    m_approverIdCardTypeHasBeenSet = true;
}

bool ApproverInfo::ApproverIdCardTypeHasBeenSet() const
{
    return m_approverIdCardTypeHasBeenSet;
}

string ApproverInfo::GetApproverIdCardNumber() const
{
    return m_approverIdCardNumber;
}

void ApproverInfo::SetApproverIdCardNumber(const string& _approverIdCardNumber)
{
    m_approverIdCardNumber = _approverIdCardNumber;
    m_approverIdCardNumberHasBeenSet = true;
}

bool ApproverInfo::ApproverIdCardNumberHasBeenSet() const
{
    return m_approverIdCardNumberHasBeenSet;
}

string ApproverInfo::GetNotifyType() const
{
    return m_notifyType;
}

void ApproverInfo::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool ApproverInfo::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

int64_t ApproverInfo::GetApproverRole() const
{
    return m_approverRole;
}

void ApproverInfo::SetApproverRole(const int64_t& _approverRole)
{
    m_approverRole = _approverRole;
    m_approverRoleHasBeenSet = true;
}

bool ApproverInfo::ApproverRoleHasBeenSet() const
{
    return m_approverRoleHasBeenSet;
}

string ApproverInfo::GetApproverRoleName() const
{
    return m_approverRoleName;
}

void ApproverInfo::SetApproverRoleName(const string& _approverRoleName)
{
    m_approverRoleName = _approverRoleName;
    m_approverRoleNameHasBeenSet = true;
}

bool ApproverInfo::ApproverRoleNameHasBeenSet() const
{
    return m_approverRoleNameHasBeenSet;
}

vector<string> ApproverInfo::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void ApproverInfo::SetVerifyChannel(const vector<string>& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool ApproverInfo::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

int64_t ApproverInfo::GetPreReadTime() const
{
    return m_preReadTime;
}

void ApproverInfo::SetPreReadTime(const int64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool ApproverInfo::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

string ApproverInfo::GetUserId() const
{
    return m_userId;
}

void ApproverInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ApproverInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ApproverInfo::GetApproverSource() const
{
    return m_approverSource;
}

void ApproverInfo::SetApproverSource(const string& _approverSource)
{
    m_approverSource = _approverSource;
    m_approverSourceHasBeenSet = true;
}

bool ApproverInfo::ApproverSourceHasBeenSet() const
{
    return m_approverSourceHasBeenSet;
}

string ApproverInfo::GetCustomApproverTag() const
{
    return m_customApproverTag;
}

void ApproverInfo::SetCustomApproverTag(const string& _customApproverTag)
{
    m_customApproverTag = _customApproverTag;
    m_customApproverTagHasBeenSet = true;
}

bool ApproverInfo::CustomApproverTagHasBeenSet() const
{
    return m_customApproverTagHasBeenSet;
}

ApproverOption ApproverInfo::GetApproverOption() const
{
    return m_approverOption;
}

void ApproverInfo::SetApproverOption(const ApproverOption& _approverOption)
{
    m_approverOption = _approverOption;
    m_approverOptionHasBeenSet = true;
}

bool ApproverInfo::ApproverOptionHasBeenSet() const
{
    return m_approverOptionHasBeenSet;
}

vector<int64_t> ApproverInfo::GetApproverVerifyTypes() const
{
    return m_approverVerifyTypes;
}

void ApproverInfo::SetApproverVerifyTypes(const vector<int64_t>& _approverVerifyTypes)
{
    m_approverVerifyTypes = _approverVerifyTypes;
    m_approverVerifyTypesHasBeenSet = true;
}

bool ApproverInfo::ApproverVerifyTypesHasBeenSet() const
{
    return m_approverVerifyTypesHasBeenSet;
}

vector<int64_t> ApproverInfo::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void ApproverInfo::SetApproverSignTypes(const vector<int64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool ApproverInfo::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

bool ApproverInfo::GetApproverNeedSignReview() const
{
    return m_approverNeedSignReview;
}

void ApproverInfo::SetApproverNeedSignReview(const bool& _approverNeedSignReview)
{
    m_approverNeedSignReview = _approverNeedSignReview;
    m_approverNeedSignReviewHasBeenSet = true;
}

bool ApproverInfo::ApproverNeedSignReviewHasBeenSet() const
{
    return m_approverNeedSignReviewHasBeenSet;
}

vector<ComponentLimit> ApproverInfo::GetAddSignComponentsLimits() const
{
    return m_addSignComponentsLimits;
}

void ApproverInfo::SetAddSignComponentsLimits(const vector<ComponentLimit>& _addSignComponentsLimits)
{
    m_addSignComponentsLimits = _addSignComponentsLimits;
    m_addSignComponentsLimitsHasBeenSet = true;
}

bool ApproverInfo::AddSignComponentsLimitsHasBeenSet() const
{
    return m_addSignComponentsLimitsHasBeenSet;
}

string ApproverInfo::GetSignInstructionContent() const
{
    return m_signInstructionContent;
}

void ApproverInfo::SetSignInstructionContent(const string& _signInstructionContent)
{
    m_signInstructionContent = _signInstructionContent;
    m_signInstructionContentHasBeenSet = true;
}

bool ApproverInfo::SignInstructionContentHasBeenSet() const
{
    return m_signInstructionContentHasBeenSet;
}

int64_t ApproverInfo::GetDeadline() const
{
    return m_deadline;
}

void ApproverInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool ApproverInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

vector<Component> ApproverInfo::GetComponents() const
{
    return m_components;
}

void ApproverInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ApproverInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<string> ApproverInfo::GetSignEndpoints() const
{
    return m_signEndpoints;
}

void ApproverInfo::SetSignEndpoints(const vector<string>& _signEndpoints)
{
    m_signEndpoints = _signEndpoints;
    m_signEndpointsHasBeenSet = true;
}

bool ApproverInfo::SignEndpointsHasBeenSet() const
{
    return m_signEndpointsHasBeenSet;
}

