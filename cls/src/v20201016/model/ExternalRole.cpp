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

#include <tencentcloud/cls/v20201016/model/ExternalRole.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ExternalRole::ExternalRole() :
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

CoreInternalOutcome ExternalRole::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRole.RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(value["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (value.HasMember("ExternalId") && !value["ExternalId"].IsNull())
    {
        if (!value["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRole.ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(value["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalRole::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }

}


string ExternalRole::GetRoleArn() const
{
    return m_roleArn;
}

void ExternalRole::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool ExternalRole::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string ExternalRole::GetExternalId() const
{
    return m_externalId;
}

void ExternalRole::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool ExternalRole::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

