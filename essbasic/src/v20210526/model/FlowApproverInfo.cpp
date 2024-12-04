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

#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowApproverInfo::FlowApproverInfo() :
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_notChannelOrganizationHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_approverTypeHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_componentLimitTypeHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_approverOptionHasBeenSet(false),
    m_approverNeedSignReviewHasBeenSet(false),
    m_approverVerifyTypesHasBeenSet(false),
    m_approverSignTypesHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_addSignComponentsLimitsHasBeenSet(false),
    m_approverRoleNameHasBeenSet(false),
    m_signTypeSelectorHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_intentionHasBeenSet(false),
    m_signEndpointsHasBeenSet(false)
{
}

CoreInternalOutcome FlowApproverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("NotChannelOrganization") && !value["NotChannelOrganization"].IsNull())
    {
        if (!value["NotChannelOrganization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.NotChannelOrganization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notChannelOrganization = value["NotChannelOrganization"].GetBool();
        m_notChannelOrganizationHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = string(value["ApproverType"].GetString());
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("SignComponents") && !value["SignComponents"].IsNull())
    {
        if (!value["SignComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SignComponents` is not array type"));

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

    if (value.HasMember("ComponentLimitType") && !value["ComponentLimitType"].IsNull())
    {
        if (!value["ComponentLimitType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ComponentLimitType` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentLimitType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentLimitType.push_back((*itr).GetString());
        }
        m_componentLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.PreReadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetInt64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }

    if (value.HasMember("ApproverOption") && !value["ApproverOption"].IsNull())
    {
        if (!value["ApproverOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approverOption.Deserialize(value["ApproverOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approverOptionHasBeenSet = true;
    }

    if (value.HasMember("ApproverNeedSignReview") && !value["ApproverNeedSignReview"].IsNull())
    {
        if (!value["ApproverNeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverNeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_approverNeedSignReview = value["ApproverNeedSignReview"].GetBool();
        m_approverNeedSignReviewHasBeenSet = true;
    }

    if (value.HasMember("ApproverVerifyTypes") && !value["ApproverVerifyTypes"].IsNull())
    {
        if (!value["ApproverVerifyTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverVerifyTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverSignTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverSignTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverSignTypes.push_back((*itr).GetInt64());
        }
        m_approverSignTypesHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }

    if (value.HasMember("AddSignComponentsLimits") && !value["AddSignComponentsLimits"].IsNull())
    {
        if (!value["AddSignComponentsLimits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.AddSignComponentsLimits` is not array type"));

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

    if (value.HasMember("ApproverRoleName") && !value["ApproverRoleName"].IsNull())
    {
        if (!value["ApproverRoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.ApproverRoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverRoleName = string(value["ApproverRoleName"].GetString());
        m_approverRoleNameHasBeenSet = true;
    }

    if (value.HasMember("SignTypeSelector") && !value["SignTypeSelector"].IsNull())
    {
        if (!value["SignTypeSelector"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SignTypeSelector` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signTypeSelector = value["SignTypeSelector"].GetUint64();
        m_signTypeSelectorHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Components` is not array type"));

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

    if (value.HasMember("Intention") && !value["Intention"].IsNull())
    {
        if (!value["Intention"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.Intention` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intention.Deserialize(value["Intention"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intentionHasBeenSet = true;
    }

    if (value.HasMember("SignEndpoints") && !value["SignEndpoints"].IsNull())
    {
        if (!value["SignEndpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApproverInfo.SignEndpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["SignEndpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signEndpoints.push_back((*itr).GetString());
        }
        m_signEndpointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowApproverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_notChannelOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotChannelOrganization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notChannelOrganization, allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverType.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
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

    if (m_componentLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentLimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentLimitType.begin(); itr != m_componentLimitType.end(); ++itr)
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

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_approverOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approverNeedSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverNeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverNeedSignReview, allocator);
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

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
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

    if (m_approverRoleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverRoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverRoleName.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTypeSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signTypeSelector, allocator);
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

    if (m_intentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intention.ToJsonObject(value[key.c_str()], allocator);
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


string FlowApproverInfo::GetName() const
{
    return m_name;
}

void FlowApproverInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FlowApproverInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FlowApproverInfo::GetIdCardType() const
{
    return m_idCardType;
}

void FlowApproverInfo::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool FlowApproverInfo::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string FlowApproverInfo::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void FlowApproverInfo::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool FlowApproverInfo::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string FlowApproverInfo::GetMobile() const
{
    return m_mobile;
}

void FlowApproverInfo::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool FlowApproverInfo::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string FlowApproverInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void FlowApproverInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool FlowApproverInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

bool FlowApproverInfo::GetNotChannelOrganization() const
{
    return m_notChannelOrganization;
}

void FlowApproverInfo::SetNotChannelOrganization(const bool& _notChannelOrganization)
{
    m_notChannelOrganization = _notChannelOrganization;
    m_notChannelOrganizationHasBeenSet = true;
}

bool FlowApproverInfo::NotChannelOrganizationHasBeenSet() const
{
    return m_notChannelOrganizationHasBeenSet;
}

string FlowApproverInfo::GetOpenId() const
{
    return m_openId;
}

void FlowApproverInfo::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool FlowApproverInfo::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string FlowApproverInfo::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void FlowApproverInfo::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool FlowApproverInfo::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string FlowApproverInfo::GetApproverType() const
{
    return m_approverType;
}

void FlowApproverInfo::SetApproverType(const string& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowApproverInfo::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowApproverInfo::GetRecipientId() const
{
    return m_recipientId;
}

void FlowApproverInfo::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FlowApproverInfo::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

int64_t FlowApproverInfo::GetDeadline() const
{
    return m_deadline;
}

void FlowApproverInfo::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowApproverInfo::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string FlowApproverInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void FlowApproverInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool FlowApproverInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<Component> FlowApproverInfo::GetSignComponents() const
{
    return m_signComponents;
}

void FlowApproverInfo::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool FlowApproverInfo::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

vector<string> FlowApproverInfo::GetComponentLimitType() const
{
    return m_componentLimitType;
}

void FlowApproverInfo::SetComponentLimitType(const vector<string>& _componentLimitType)
{
    m_componentLimitType = _componentLimitType;
    m_componentLimitTypeHasBeenSet = true;
}

bool FlowApproverInfo::ComponentLimitTypeHasBeenSet() const
{
    return m_componentLimitTypeHasBeenSet;
}

int64_t FlowApproverInfo::GetPreReadTime() const
{
    return m_preReadTime;
}

void FlowApproverInfo::SetPreReadTime(const int64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool FlowApproverInfo::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

string FlowApproverInfo::GetJumpUrl() const
{
    return m_jumpUrl;
}

void FlowApproverInfo::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool FlowApproverInfo::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

ApproverOption FlowApproverInfo::GetApproverOption() const
{
    return m_approverOption;
}

void FlowApproverInfo::SetApproverOption(const ApproverOption& _approverOption)
{
    m_approverOption = _approverOption;
    m_approverOptionHasBeenSet = true;
}

bool FlowApproverInfo::ApproverOptionHasBeenSet() const
{
    return m_approverOptionHasBeenSet;
}

bool FlowApproverInfo::GetApproverNeedSignReview() const
{
    return m_approverNeedSignReview;
}

void FlowApproverInfo::SetApproverNeedSignReview(const bool& _approverNeedSignReview)
{
    m_approverNeedSignReview = _approverNeedSignReview;
    m_approverNeedSignReviewHasBeenSet = true;
}

bool FlowApproverInfo::ApproverNeedSignReviewHasBeenSet() const
{
    return m_approverNeedSignReviewHasBeenSet;
}

vector<int64_t> FlowApproverInfo::GetApproverVerifyTypes() const
{
    return m_approverVerifyTypes;
}

void FlowApproverInfo::SetApproverVerifyTypes(const vector<int64_t>& _approverVerifyTypes)
{
    m_approverVerifyTypes = _approverVerifyTypes;
    m_approverVerifyTypesHasBeenSet = true;
}

bool FlowApproverInfo::ApproverVerifyTypesHasBeenSet() const
{
    return m_approverVerifyTypesHasBeenSet;
}

vector<int64_t> FlowApproverInfo::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void FlowApproverInfo::SetApproverSignTypes(const vector<int64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool FlowApproverInfo::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

string FlowApproverInfo::GetSignId() const
{
    return m_signId;
}

void FlowApproverInfo::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool FlowApproverInfo::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

string FlowApproverInfo::GetNotifyType() const
{
    return m_notifyType;
}

void FlowApproverInfo::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool FlowApproverInfo::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

vector<ComponentLimit> FlowApproverInfo::GetAddSignComponentsLimits() const
{
    return m_addSignComponentsLimits;
}

void FlowApproverInfo::SetAddSignComponentsLimits(const vector<ComponentLimit>& _addSignComponentsLimits)
{
    m_addSignComponentsLimits = _addSignComponentsLimits;
    m_addSignComponentsLimitsHasBeenSet = true;
}

bool FlowApproverInfo::AddSignComponentsLimitsHasBeenSet() const
{
    return m_addSignComponentsLimitsHasBeenSet;
}

string FlowApproverInfo::GetApproverRoleName() const
{
    return m_approverRoleName;
}

void FlowApproverInfo::SetApproverRoleName(const string& _approverRoleName)
{
    m_approverRoleName = _approverRoleName;
    m_approverRoleNameHasBeenSet = true;
}

bool FlowApproverInfo::ApproverRoleNameHasBeenSet() const
{
    return m_approverRoleNameHasBeenSet;
}

uint64_t FlowApproverInfo::GetSignTypeSelector() const
{
    return m_signTypeSelector;
}

void FlowApproverInfo::SetSignTypeSelector(const uint64_t& _signTypeSelector)
{
    m_signTypeSelector = _signTypeSelector;
    m_signTypeSelectorHasBeenSet = true;
}

bool FlowApproverInfo::SignTypeSelectorHasBeenSet() const
{
    return m_signTypeSelectorHasBeenSet;
}

vector<Component> FlowApproverInfo::GetComponents() const
{
    return m_components;
}

void FlowApproverInfo::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool FlowApproverInfo::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

Intention FlowApproverInfo::GetIntention() const
{
    return m_intention;
}

void FlowApproverInfo::SetIntention(const Intention& _intention)
{
    m_intention = _intention;
    m_intentionHasBeenSet = true;
}

bool FlowApproverInfo::IntentionHasBeenSet() const
{
    return m_intentionHasBeenSet;
}

vector<string> FlowApproverInfo::GetSignEndpoints() const
{
    return m_signEndpoints;
}

void FlowApproverInfo::SetSignEndpoints(const vector<string>& _signEndpoints)
{
    m_signEndpoints = _signEndpoints;
    m_signEndpointsHasBeenSet = true;
}

bool FlowApproverInfo::SignEndpointsHasBeenSet() const
{
    return m_signEndpointsHasBeenSet;
}

