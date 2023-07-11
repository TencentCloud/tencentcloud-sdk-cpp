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

#include <tencentcloud/ess/v20201111/model/FlowGroupOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowGroupOptions::FlowGroupOptions() :
    m_approverVerifyTypeHasBeenSet(false),
    m_selfOrganizationApproverNotifyTypeHasBeenSet(false),
    m_otherApproverNotifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApproverVerifyType") && !value["ApproverVerifyType"].IsNull())
    {
        if (!value["ApproverVerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.ApproverVerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approverVerifyType = string(value["ApproverVerifyType"].GetString());
        m_approverVerifyTypeHasBeenSet = true;
    }

    if (value.HasMember("SelfOrganizationApproverNotifyType") && !value["SelfOrganizationApproverNotifyType"].IsNull())
    {
        if (!value["SelfOrganizationApproverNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.SelfOrganizationApproverNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selfOrganizationApproverNotifyType = string(value["SelfOrganizationApproverNotifyType"].GetString());
        m_selfOrganizationApproverNotifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OtherApproverNotifyType") && !value["OtherApproverNotifyType"].IsNull())
    {
        if (!value["OtherApproverNotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.OtherApproverNotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otherApproverNotifyType = string(value["OtherApproverNotifyType"].GetString());
        m_otherApproverNotifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowGroupOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approverVerifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproverVerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approverVerifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_selfOrganizationApproverNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOrganizationApproverNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selfOrganizationApproverNotifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_otherApproverNotifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherApproverNotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otherApproverNotifyType.c_str(), allocator).Move(), allocator);
    }

}


string FlowGroupOptions::GetApproverVerifyType() const
{
    return m_approverVerifyType;
}

void FlowGroupOptions::SetApproverVerifyType(const string& _approverVerifyType)
{
    m_approverVerifyType = _approverVerifyType;
    m_approverVerifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::ApproverVerifyTypeHasBeenSet() const
{
    return m_approverVerifyTypeHasBeenSet;
}

string FlowGroupOptions::GetSelfOrganizationApproverNotifyType() const
{
    return m_selfOrganizationApproverNotifyType;
}

void FlowGroupOptions::SetSelfOrganizationApproverNotifyType(const string& _selfOrganizationApproverNotifyType)
{
    m_selfOrganizationApproverNotifyType = _selfOrganizationApproverNotifyType;
    m_selfOrganizationApproverNotifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::SelfOrganizationApproverNotifyTypeHasBeenSet() const
{
    return m_selfOrganizationApproverNotifyTypeHasBeenSet;
}

string FlowGroupOptions::GetOtherApproverNotifyType() const
{
    return m_otherApproverNotifyType;
}

void FlowGroupOptions::SetOtherApproverNotifyType(const string& _otherApproverNotifyType)
{
    m_otherApproverNotifyType = _otherApproverNotifyType;
    m_otherApproverNotifyTypeHasBeenSet = true;
}

bool FlowGroupOptions::OtherApproverNotifyTypeHasBeenSet() const
{
    return m_otherApproverNotifyTypeHasBeenSet;
}

