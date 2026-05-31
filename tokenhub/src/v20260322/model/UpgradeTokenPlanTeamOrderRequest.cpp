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

#include <tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

UpgradeTokenPlanTeamOrderRequest::UpgradeTokenPlanTeamOrderRequest() :
    m_teamIdHasBeenSet(false),
    m_newCreditOrTokenHasBeenSet(false)
{
}

string UpgradeTokenPlanTeamOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_newCreditOrTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCreditOrToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newCreditOrToken, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeTokenPlanTeamOrderRequest::GetTeamId() const
{
    return m_teamId;
}

void UpgradeTokenPlanTeamOrderRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool UpgradeTokenPlanTeamOrderRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

int64_t UpgradeTokenPlanTeamOrderRequest::GetNewCreditOrToken() const
{
    return m_newCreditOrToken;
}

void UpgradeTokenPlanTeamOrderRequest::SetNewCreditOrToken(const int64_t& _newCreditOrToken)
{
    m_newCreditOrToken = _newCreditOrToken;
    m_newCreditOrTokenHasBeenSet = true;
}

bool UpgradeTokenPlanTeamOrderRequest::NewCreditOrTokenHasBeenSet() const
{
    return m_newCreditOrTokenHasBeenSet;
}


