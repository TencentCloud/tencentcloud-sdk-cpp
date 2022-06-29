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

#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeClusterPublicLB::EdgeClusterPublicLB() :
    m_enabledHasBeenSet(false),
    m_allowFromCidrsHasBeenSet(false)
{
}

CoreInternalOutcome EdgeClusterPublicLB::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeClusterPublicLB.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("AllowFromCidrs") && !value["AllowFromCidrs"].IsNull())
    {
        if (!value["AllowFromCidrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeClusterPublicLB.AllowFromCidrs` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowFromCidrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowFromCidrs.push_back((*itr).GetString());
        }
        m_allowFromCidrsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeClusterPublicLB::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_allowFromCidrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFromCidrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowFromCidrs.begin(); itr != m_allowFromCidrs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool EdgeClusterPublicLB::GetEnabled() const
{
    return m_enabled;
}

void EdgeClusterPublicLB::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool EdgeClusterPublicLB::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> EdgeClusterPublicLB::GetAllowFromCidrs() const
{
    return m_allowFromCidrs;
}

void EdgeClusterPublicLB::SetAllowFromCidrs(const vector<string>& _allowFromCidrs)
{
    m_allowFromCidrs = _allowFromCidrs;
    m_allowFromCidrsHasBeenSet = true;
}

bool EdgeClusterPublicLB::AllowFromCidrsHasBeenSet() const
{
    return m_allowFromCidrsHasBeenSet;
}

