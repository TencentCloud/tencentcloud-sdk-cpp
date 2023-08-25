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

#include <tencentcloud/dsgc/v20190723/model/AccountRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AccountRisk::AccountRisk() :
    m_idHasBeenSet(false),
    m_riskAccountHasBeenSet(false)
{
}

CoreInternalOutcome AccountRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RiskAccount") && !value["RiskAccount"].IsNull())
    {
        if (!value["RiskAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountRisk.RiskAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskAccount = string(value["RiskAccount"].GetString());
        m_riskAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_riskAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskAccount.c_str(), allocator).Move(), allocator);
    }

}


string AccountRisk::GetId() const
{
    return m_id;
}

void AccountRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AccountRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AccountRisk::GetRiskAccount() const
{
    return m_riskAccount;
}

void AccountRisk::SetRiskAccount(const string& _riskAccount)
{
    m_riskAccount = _riskAccount;
    m_riskAccountHasBeenSet = true;
}

bool AccountRisk::RiskAccountHasBeenSet() const
{
    return m_riskAccountHasBeenSet;
}

