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

#include <tencentcloud/workbuddyenterprise/v20260709/model/RoutingItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

RoutingItem::RoutingItem() :
    m_versionIdHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome RoutingItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingItem.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RoutingItem.Weight` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetDouble();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutingItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string RoutingItem::GetVersionId() const
{
    return m_versionId;
}

void RoutingItem::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool RoutingItem::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

double RoutingItem::GetWeight() const
{
    return m_weight;
}

void RoutingItem::SetWeight(const double& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool RoutingItem::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

