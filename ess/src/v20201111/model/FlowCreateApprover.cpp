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

#include <tencentcloud/ess/v20201111/model/FlowCreateApprover.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowCreateApprover::FlowCreateApprover() :
    m_approverTypeHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_approverNameHasBeenSet(false),
    m_approverMobileHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_recipientIdHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_isFullTextHasBeenSet(false),
    m_preReadTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_approverSourceHasBeenSet(false),
    m_customApproverTagHasBeenSet(false),
    m_registerInfoHasBeenSet(false),
    m_approverOptionHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_signIdHasBeenSet(false),
    m_approverNeedSignReviewHasBeenSet(false),
    m_signComponentsHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_componentLimitTypeHasBeenSet(false),
    m_approverVerifyTypesHasBeenSet(false),
    m_approverSignTypesHasBeenSet(false),
    m_signTypeSelectorHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_intentionHasBeenSet(false),
    m_signEndpointsHasBeenSet(false)
{
}

CoreInternalOutcome FlowCreateApprover::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverType") && !value["ApproverType"].IsNull())
    {
        if (!value["ApproverType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approverType = value["ApproverType"].GetInt64();
        m_approverTypeHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverName") && !value["ApproverName"].IsNull())
    {
        if (!value["ApproverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverName = string(value["ApproverName"].GetString());
        m_approverNameHasBeenSet = true;
    }

    if (value.HasMember("ApproverMobile") && !value["ApproverMobile"].IsNull())
    {
        if (!value["ApproverMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverMobile = string(value["ApproverMobile"].GetString());
        m_approverMobileHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverIdCardNumber") && !value["ApproverIdCardNumber"].IsNull())
    {
        if (!value["ApproverIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardNumber = string(value["ApproverIdCardNumber"].GetString());
        m_approverIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("RecipientId") && !value["RecipientId"].IsNull())
    {
        if (!value["RecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.RecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recipientId = string(value["RecipientId"].GetString());
        m_recipientIdHasBeenSet = true;
    }

    if (value.HasMember("VerifyChannel") && !value["VerifyChannel"].IsNull())
    {
        if (!value["VerifyChannel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.VerifyChannel` is not array type"));

        const rapidjson::Value &tmpValue = value["VerifyChannel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_verifyChannel.push_back((*itr).GetString());
        }
        m_verifyChannelHasBeenSet = true;
    }

    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }

    if (value.HasMember("IsFullText") && !value["IsFullText"].IsNull())
    {
        if (!value["IsFullText"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.IsFullText` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFullText = value["IsFullText"].GetBool();
        m_isFullTextHasBeenSet = true;
    }

    if (value.HasMember("PreReadTime") && !value["PreReadTime"].IsNull())
    {
        if (!value["PreReadTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.PreReadTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReadTime = value["PreReadTime"].GetUint64();
        m_preReadTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("ApproverSource") && !value["ApproverSource"].IsNull())
    {
        if (!value["ApproverSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverSource = string(value["ApproverSource"].GetString());
        m_approverSourceHasBeenSet = true;
    }

    if (value.HasMember("CustomApproverTag") && !value["CustomApproverTag"].IsNull())
    {
        if (!value["CustomApproverTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.CustomApproverTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customApproverTag = string(value["CustomApproverTag"].GetString());
        m_customApproverTagHasBeenSet = true;
    }

    if (value.HasMember("RegisterInfo") && !value["RegisterInfo"].IsNull())
    {
        if (!value["RegisterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.RegisterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_registerInfo.Deserialize(value["RegisterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_registerInfoHasBeenSet = true;
    }

    if (value.HasMember("ApproverOption") && !value["ApproverOption"].IsNull())
    {
        if (!value["ApproverOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approverOption.Deserialize(value["ApproverOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approverOptionHasBeenSet = true;
    }

    if (value.HasMember("JumpUrl") && !value["JumpUrl"].IsNull())
    {
        if (!value["JumpUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.JumpUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jumpUrl = string(value["JumpUrl"].GetString());
        m_jumpUrlHasBeenSet = true;
    }

    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.SignId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signId = string(value["SignId"].GetString());
        m_signIdHasBeenSet = true;
    }

    if (value.HasMember("ApproverNeedSignReview") && !value["ApproverNeedSignReview"].IsNull())
    {
        if (!value["ApproverNeedSignReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverNeedSignReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_approverNeedSignReview = value["ApproverNeedSignReview"].GetBool();
        m_approverNeedSignReviewHasBeenSet = true;
    }

    if (value.HasMember("SignComponents") && !value["SignComponents"].IsNull())
    {
        if (!value["SignComponents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.SignComponents` is not array type"));

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

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.Components` is not array type"));

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

    if (value.HasMember("ComponentLimitType") && !value["ComponentLimitType"].IsNull())
    {
        if (!value["ComponentLimitType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ComponentLimitType` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentLimitType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_componentLimitType.push_back((*itr).GetString());
        }
        m_componentLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("ApproverVerifyTypes") && !value["ApproverVerifyTypes"].IsNull())
    {
        if (!value["ApproverVerifyTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverVerifyTypes` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.ApproverSignTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ApproverSignTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_approverSignTypes.push_back((*itr).GetUint64());
        }
        m_approverSignTypesHasBeenSet = true;
    }

    if (value.HasMember("SignTypeSelector") && !value["SignTypeSelector"].IsNull())
    {
        if (!value["SignTypeSelector"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.SignTypeSelector` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signTypeSelector = value["SignTypeSelector"].GetUint64();
        m_signTypeSelectorHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("Intention") && !value["Intention"].IsNull())
    {
        if (!value["Intention"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.Intention` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `FlowCreateApprover.SignEndpoints` is not array type"));

        const rapidjson::Value &tmpValue = value["SignEndpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_signEndpoints.push_back((*itr).GetString());
        }
        m_signEndpointsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowCreateApprover::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverType, allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
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

    if (m_recipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recipientId.c_str(), allocator).Move(), allocator);
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

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_isFullTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFullText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFullText, allocator);
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

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
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

    if (m_registerInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registerInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_approverOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approverOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_signIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signId.c_str(), allocator).Move(), allocator);
    }

    if (m_approverNeedSignReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverNeedSignReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approverNeedSignReview, allocator);
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
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_signTypeSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignTypeSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signTypeSelector, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
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


int64_t FlowCreateApprover::GetApproverType() const
{
    return m_approverType;
}

void FlowCreateApprover::SetApproverType(const int64_t& _approverType)
{
    m_approverType = _approverType;
    m_approverTypeHasBeenSet = true;
}

bool FlowCreateApprover::ApproverTypeHasBeenSet() const
{
    return m_approverTypeHasBeenSet;
}

string FlowCreateApprover::GetOrganizationName() const
{
    return m_organizationName;
}

void FlowCreateApprover::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool FlowCreateApprover::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string FlowCreateApprover::GetApproverName() const
{
    return m_approverName;
}

void FlowCreateApprover::SetApproverName(const string& _approverName)
{
    m_approverName = _approverName;
    m_approverNameHasBeenSet = true;
}

bool FlowCreateApprover::ApproverNameHasBeenSet() const
{
    return m_approverNameHasBeenSet;
}

string FlowCreateApprover::GetApproverMobile() const
{
    return m_approverMobile;
}

void FlowCreateApprover::SetApproverMobile(const string& _approverMobile)
{
    m_approverMobile = _approverMobile;
    m_approverMobileHasBeenSet = true;
}

bool FlowCreateApprover::ApproverMobileHasBeenSet() const
{
    return m_approverMobileHasBeenSet;
}

string FlowCreateApprover::GetApproverIdCardType() const
{
    return m_approverIdCardType;
}

void FlowCreateApprover::SetApproverIdCardType(const string& _approverIdCardType)
{
    m_approverIdCardType = _approverIdCardType;
    m_approverIdCardTypeHasBeenSet = true;
}

bool FlowCreateApprover::ApproverIdCardTypeHasBeenSet() const
{
    return m_approverIdCardTypeHasBeenSet;
}

string FlowCreateApprover::GetApproverIdCardNumber() const
{
    return m_approverIdCardNumber;
}

void FlowCreateApprover::SetApproverIdCardNumber(const string& _approverIdCardNumber)
{
    m_approverIdCardNumber = _approverIdCardNumber;
    m_approverIdCardNumberHasBeenSet = true;
}

bool FlowCreateApprover::ApproverIdCardNumberHasBeenSet() const
{
    return m_approverIdCardNumberHasBeenSet;
}

string FlowCreateApprover::GetRecipientId() const
{
    return m_recipientId;
}

void FlowCreateApprover::SetRecipientId(const string& _recipientId)
{
    m_recipientId = _recipientId;
    m_recipientIdHasBeenSet = true;
}

bool FlowCreateApprover::RecipientIdHasBeenSet() const
{
    return m_recipientIdHasBeenSet;
}

vector<string> FlowCreateApprover::GetVerifyChannel() const
{
    return m_verifyChannel;
}

void FlowCreateApprover::SetVerifyChannel(const vector<string>& _verifyChannel)
{
    m_verifyChannel = _verifyChannel;
    m_verifyChannelHasBeenSet = true;
}

bool FlowCreateApprover::VerifyChannelHasBeenSet() const
{
    return m_verifyChannelHasBeenSet;
}

string FlowCreateApprover::GetNotifyType() const
{
    return m_notifyType;
}

void FlowCreateApprover::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool FlowCreateApprover::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

bool FlowCreateApprover::GetIsFullText() const
{
    return m_isFullText;
}

void FlowCreateApprover::SetIsFullText(const bool& _isFullText)
{
    m_isFullText = _isFullText;
    m_isFullTextHasBeenSet = true;
}

bool FlowCreateApprover::IsFullTextHasBeenSet() const
{
    return m_isFullTextHasBeenSet;
}

uint64_t FlowCreateApprover::GetPreReadTime() const
{
    return m_preReadTime;
}

void FlowCreateApprover::SetPreReadTime(const uint64_t& _preReadTime)
{
    m_preReadTime = _preReadTime;
    m_preReadTimeHasBeenSet = true;
}

bool FlowCreateApprover::PreReadTimeHasBeenSet() const
{
    return m_preReadTimeHasBeenSet;
}

string FlowCreateApprover::GetUserId() const
{
    return m_userId;
}

void FlowCreateApprover::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FlowCreateApprover::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

bool FlowCreateApprover::GetRequired() const
{
    return m_required;
}

void FlowCreateApprover::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool FlowCreateApprover::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

string FlowCreateApprover::GetApproverSource() const
{
    return m_approverSource;
}

void FlowCreateApprover::SetApproverSource(const string& _approverSource)
{
    m_approverSource = _approverSource;
    m_approverSourceHasBeenSet = true;
}

bool FlowCreateApprover::ApproverSourceHasBeenSet() const
{
    return m_approverSourceHasBeenSet;
}

string FlowCreateApprover::GetCustomApproverTag() const
{
    return m_customApproverTag;
}

void FlowCreateApprover::SetCustomApproverTag(const string& _customApproverTag)
{
    m_customApproverTag = _customApproverTag;
    m_customApproverTagHasBeenSet = true;
}

bool FlowCreateApprover::CustomApproverTagHasBeenSet() const
{
    return m_customApproverTagHasBeenSet;
}

RegisterInfo FlowCreateApprover::GetRegisterInfo() const
{
    return m_registerInfo;
}

void FlowCreateApprover::SetRegisterInfo(const RegisterInfo& _registerInfo)
{
    m_registerInfo = _registerInfo;
    m_registerInfoHasBeenSet = true;
}

bool FlowCreateApprover::RegisterInfoHasBeenSet() const
{
    return m_registerInfoHasBeenSet;
}

ApproverOption FlowCreateApprover::GetApproverOption() const
{
    return m_approverOption;
}

void FlowCreateApprover::SetApproverOption(const ApproverOption& _approverOption)
{
    m_approverOption = _approverOption;
    m_approverOptionHasBeenSet = true;
}

bool FlowCreateApprover::ApproverOptionHasBeenSet() const
{
    return m_approverOptionHasBeenSet;
}

string FlowCreateApprover::GetJumpUrl() const
{
    return m_jumpUrl;
}

void FlowCreateApprover::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool FlowCreateApprover::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string FlowCreateApprover::GetSignId() const
{
    return m_signId;
}

void FlowCreateApprover::SetSignId(const string& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool FlowCreateApprover::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

bool FlowCreateApprover::GetApproverNeedSignReview() const
{
    return m_approverNeedSignReview;
}

void FlowCreateApprover::SetApproverNeedSignReview(const bool& _approverNeedSignReview)
{
    m_approverNeedSignReview = _approverNeedSignReview;
    m_approverNeedSignReviewHasBeenSet = true;
}

bool FlowCreateApprover::ApproverNeedSignReviewHasBeenSet() const
{
    return m_approverNeedSignReviewHasBeenSet;
}

vector<Component> FlowCreateApprover::GetSignComponents() const
{
    return m_signComponents;
}

void FlowCreateApprover::SetSignComponents(const vector<Component>& _signComponents)
{
    m_signComponents = _signComponents;
    m_signComponentsHasBeenSet = true;
}

bool FlowCreateApprover::SignComponentsHasBeenSet() const
{
    return m_signComponentsHasBeenSet;
}

vector<Component> FlowCreateApprover::GetComponents() const
{
    return m_components;
}

void FlowCreateApprover::SetComponents(const vector<Component>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool FlowCreateApprover::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

vector<string> FlowCreateApprover::GetComponentLimitType() const
{
    return m_componentLimitType;
}

void FlowCreateApprover::SetComponentLimitType(const vector<string>& _componentLimitType)
{
    m_componentLimitType = _componentLimitType;
    m_componentLimitTypeHasBeenSet = true;
}

bool FlowCreateApprover::ComponentLimitTypeHasBeenSet() const
{
    return m_componentLimitTypeHasBeenSet;
}

vector<int64_t> FlowCreateApprover::GetApproverVerifyTypes() const
{
    return m_approverVerifyTypes;
}

void FlowCreateApprover::SetApproverVerifyTypes(const vector<int64_t>& _approverVerifyTypes)
{
    m_approverVerifyTypes = _approverVerifyTypes;
    m_approverVerifyTypesHasBeenSet = true;
}

bool FlowCreateApprover::ApproverVerifyTypesHasBeenSet() const
{
    return m_approverVerifyTypesHasBeenSet;
}

vector<uint64_t> FlowCreateApprover::GetApproverSignTypes() const
{
    return m_approverSignTypes;
}

void FlowCreateApprover::SetApproverSignTypes(const vector<uint64_t>& _approverSignTypes)
{
    m_approverSignTypes = _approverSignTypes;
    m_approverSignTypesHasBeenSet = true;
}

bool FlowCreateApprover::ApproverSignTypesHasBeenSet() const
{
    return m_approverSignTypesHasBeenSet;
}

uint64_t FlowCreateApprover::GetSignTypeSelector() const
{
    return m_signTypeSelector;
}

void FlowCreateApprover::SetSignTypeSelector(const uint64_t& _signTypeSelector)
{
    m_signTypeSelector = _signTypeSelector;
    m_signTypeSelectorHasBeenSet = true;
}

bool FlowCreateApprover::SignTypeSelectorHasBeenSet() const
{
    return m_signTypeSelectorHasBeenSet;
}

int64_t FlowCreateApprover::GetDeadline() const
{
    return m_deadline;
}

void FlowCreateApprover::SetDeadline(const int64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool FlowCreateApprover::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

Intention FlowCreateApprover::GetIntention() const
{
    return m_intention;
}

void FlowCreateApprover::SetIntention(const Intention& _intention)
{
    m_intention = _intention;
    m_intentionHasBeenSet = true;
}

bool FlowCreateApprover::IntentionHasBeenSet() const
{
    return m_intentionHasBeenSet;
}

vector<string> FlowCreateApprover::GetSignEndpoints() const
{
    return m_signEndpoints;
}

void FlowCreateApprover::SetSignEndpoints(const vector<string>& _signEndpoints)
{
    m_signEndpoints = _signEndpoints;
    m_signEndpointsHasBeenSet = true;
}

bool FlowCreateApprover::SignEndpointsHasBeenSet() const
{
    return m_signEndpointsHasBeenSet;
}

