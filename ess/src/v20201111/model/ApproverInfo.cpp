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
    m_signComponentsHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_approverIdCardNumberHasBeenSet(false),
    m_approverIdCardTypeHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_approverRoleHasBeenSet(false),
    m_verifyChannelHasBeenSet(false),
    m_preReadTimeHasBeenSet(false)
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

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
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

    if (value.HasMember("ApproverIdCardType") && !value["ApproverIdCardType"].IsNull())
    {
        if (!value["ApproverIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverInfo.ApproverIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverIdCardType = string(value["ApproverIdCardType"].GetString());
        m_approverIdCardTypeHasBeenSet = true;
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

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_approverIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverIdCardType.c_str(), allocator).Move(), allocator);
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

