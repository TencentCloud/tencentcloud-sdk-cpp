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

#include <tencentcloud/alb/v20251030/model/SecurityPolicyRelations.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

SecurityPolicyRelations::SecurityPolicyRelations() :
    m_relatedListenersHasBeenSet(false),
    m_securityPolicyIdHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyRelations::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelatedListeners") && !value["RelatedListeners"].IsNull())
    {
        if (!value["RelatedListeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRelations.RelatedListeners` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedListeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RelatedListener item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedListeners.push_back(item);
        }
        m_relatedListenersHasBeenSet = true;
    }

    if (value.HasMember("SecurityPolicyId") && !value["SecurityPolicyId"].IsNull())
    {
        if (!value["SecurityPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyRelations.SecurityPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityPolicyId = string(value["SecurityPolicyId"].GetString());
        m_securityPolicyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyRelations::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relatedListenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedListeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedListeners.begin(); itr != m_relatedListeners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_securityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityPolicyId.c_str(), allocator).Move(), allocator);
    }

}


vector<RelatedListener> SecurityPolicyRelations::GetRelatedListeners() const
{
    return m_relatedListeners;
}

void SecurityPolicyRelations::SetRelatedListeners(const vector<RelatedListener>& _relatedListeners)
{
    m_relatedListeners = _relatedListeners;
    m_relatedListenersHasBeenSet = true;
}

bool SecurityPolicyRelations::RelatedListenersHasBeenSet() const
{
    return m_relatedListenersHasBeenSet;
}

string SecurityPolicyRelations::GetSecurityPolicyId() const
{
    return m_securityPolicyId;
}

void SecurityPolicyRelations::SetSecurityPolicyId(const string& _securityPolicyId)
{
    m_securityPolicyId = _securityPolicyId;
    m_securityPolicyIdHasBeenSet = true;
}

bool SecurityPolicyRelations::SecurityPolicyIdHasBeenSet() const
{
    return m_securityPolicyIdHasBeenSet;
}

