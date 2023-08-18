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

#include <tencentcloud/essbasic/v20210526/model/FlowGroupOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

FlowGroupOptions::FlowGroupOptions() :
    m_selfOrganizationApproverSignEachHasBeenSet(false),
    m_otherApproverSignEachHasBeenSet(false)
{
}

CoreInternalOutcome FlowGroupOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SelfOrganizationApproverSignEach") && !value["SelfOrganizationApproverSignEach"].IsNull())
    {
        if (!value["SelfOrganizationApproverSignEach"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.SelfOrganizationApproverSignEach` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfOrganizationApproverSignEach = value["SelfOrganizationApproverSignEach"].GetBool();
        m_selfOrganizationApproverSignEachHasBeenSet = true;
    }

    if (value.HasMember("OtherApproverSignEach") && !value["OtherApproverSignEach"].IsNull())
    {
        if (!value["OtherApproverSignEach"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowGroupOptions.OtherApproverSignEach` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_otherApproverSignEach = value["OtherApproverSignEach"].GetBool();
        m_otherApproverSignEachHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowGroupOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_selfOrganizationApproverSignEachHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfOrganizationApproverSignEach";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfOrganizationApproverSignEach, allocator);
    }

    if (m_otherApproverSignEachHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherApproverSignEach";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherApproverSignEach, allocator);
    }

}


bool FlowGroupOptions::GetSelfOrganizationApproverSignEach() const
{
    return m_selfOrganizationApproverSignEach;
}

void FlowGroupOptions::SetSelfOrganizationApproverSignEach(const bool& _selfOrganizationApproverSignEach)
{
    m_selfOrganizationApproverSignEach = _selfOrganizationApproverSignEach;
    m_selfOrganizationApproverSignEachHasBeenSet = true;
}

bool FlowGroupOptions::SelfOrganizationApproverSignEachHasBeenSet() const
{
    return m_selfOrganizationApproverSignEachHasBeenSet;
}

bool FlowGroupOptions::GetOtherApproverSignEach() const
{
    return m_otherApproverSignEach;
}

void FlowGroupOptions::SetOtherApproverSignEach(const bool& _otherApproverSignEach)
{
    m_otherApproverSignEach = _otherApproverSignEach;
    m_otherApproverSignEachHasBeenSet = true;
}

bool FlowGroupOptions::OtherApproverSignEachHasBeenSet() const
{
    return m_otherApproverSignEachHasBeenSet;
}

