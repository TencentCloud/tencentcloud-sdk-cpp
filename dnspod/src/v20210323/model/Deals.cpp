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

#include <tencentcloud/dnspod/v20210323/model/Deals.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

Deals::Deals() :
    m_dealIdHasBeenSet(false),
    m_dealNameHasBeenSet(false)
{
}

CoreInternalOutcome Deals::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealId") && !value["DealId"].IsNull())
    {
        if (!value["DealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deals.DealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealId = string(value["DealId"].GetString());
        m_dealIdHasBeenSet = true;
    }

    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Deals.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Deals::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

}


string Deals::GetDealId() const
{
    return m_dealId;
}

void Deals::SetDealId(const string& _dealId)
{
    m_dealId = _dealId;
    m_dealIdHasBeenSet = true;
}

bool Deals::DealIdHasBeenSet() const
{
    return m_dealIdHasBeenSet;
}

string Deals::GetDealName() const
{
    return m_dealName;
}

void Deals::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool Deals::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

