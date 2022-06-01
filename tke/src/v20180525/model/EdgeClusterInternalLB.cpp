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

#include <tencentcloud/tke/v20180525/model/EdgeClusterInternalLB.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

EdgeClusterInternalLB::EdgeClusterInternalLB() :
    m_enabledHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome EdgeClusterInternalLB::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeClusterInternalLB.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgeClusterInternalLB.SubnetId` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetId.push_back((*itr).GetString());
        }
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeClusterInternalLB::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetId.begin(); itr != m_subnetId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool EdgeClusterInternalLB::GetEnabled() const
{
    return m_enabled;
}

void EdgeClusterInternalLB::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool EdgeClusterInternalLB::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> EdgeClusterInternalLB::GetSubnetId() const
{
    return m_subnetId;
}

void EdgeClusterInternalLB::SetSubnetId(const vector<string>& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EdgeClusterInternalLB::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

