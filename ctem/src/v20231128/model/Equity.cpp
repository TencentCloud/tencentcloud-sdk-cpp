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

#include <tencentcloud/ctem/v20231128/model/Equity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

Equity::Equity() :
    m_enterpriseUidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shareholdingRatioHasBeenSet(false)
{
}

CoreInternalOutcome Equity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnterpriseUid") && !value["EnterpriseUid"].IsNull())
    {
        if (!value["EnterpriseUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Equity.EnterpriseUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enterpriseUid = string(value["EnterpriseUid"].GetString());
        m_enterpriseUidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Equity.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ShareholdingRatio") && !value["ShareholdingRatio"].IsNull())
    {
        if (!value["ShareholdingRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Equity.ShareholdingRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareholdingRatio = string(value["ShareholdingRatio"].GetString());
        m_shareholdingRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Equity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_shareholdingRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareholdingRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareholdingRatio.c_str(), allocator).Move(), allocator);
    }

}


string Equity::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void Equity::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool Equity::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string Equity::GetName() const
{
    return m_name;
}

void Equity::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Equity::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Equity::GetShareholdingRatio() const
{
    return m_shareholdingRatio;
}

void Equity::SetShareholdingRatio(const string& _shareholdingRatio)
{
    m_shareholdingRatio = _shareholdingRatio;
    m_shareholdingRatioHasBeenSet = true;
}

bool Equity::ShareholdingRatioHasBeenSet() const
{
    return m_shareholdingRatioHasBeenSet;
}

