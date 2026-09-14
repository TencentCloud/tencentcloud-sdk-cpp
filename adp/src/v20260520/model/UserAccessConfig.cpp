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

#include <tencentcloud/adp/v20260520/model/UserAccessConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

UserAccessConfig::UserAccessConfig() :
    m_customerKnowledgeIdHasBeenSet(false),
    m_isPublicHasBeenSet(false)
{
}

CoreInternalOutcome UserAccessConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerKnowledgeId") && !value["CustomerKnowledgeId"].IsNull())
    {
        if (!value["CustomerKnowledgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserAccessConfig.CustomerKnowledgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerKnowledgeId = string(value["CustomerKnowledgeId"].GetString());
        m_customerKnowledgeIdHasBeenSet = true;
    }

    if (value.HasMember("IsPublic") && !value["IsPublic"].IsNull())
    {
        if (!value["IsPublic"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UserAccessConfig.IsPublic` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublic = value["IsPublic"].GetBool();
        m_isPublicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserAccessConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerKnowledgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerKnowledgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerKnowledgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublic, allocator);
    }

}


string UserAccessConfig::GetCustomerKnowledgeId() const
{
    return m_customerKnowledgeId;
}

void UserAccessConfig::SetCustomerKnowledgeId(const string& _customerKnowledgeId)
{
    m_customerKnowledgeId = _customerKnowledgeId;
    m_customerKnowledgeIdHasBeenSet = true;
}

bool UserAccessConfig::CustomerKnowledgeIdHasBeenSet() const
{
    return m_customerKnowledgeIdHasBeenSet;
}

bool UserAccessConfig::GetIsPublic() const
{
    return m_isPublic;
}

void UserAccessConfig::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool UserAccessConfig::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

