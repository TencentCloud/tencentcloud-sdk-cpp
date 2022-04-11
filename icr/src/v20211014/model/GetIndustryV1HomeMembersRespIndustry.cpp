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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespIndustry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRespIndustry::GetIndustryV1HomeMembersRespIndustry() :
    m_iDHasBeenSet(false),
    m_industryNameHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersRespIndustry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespIndustry.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("IndustryName") && !value["IndustryName"].IsNull())
    {
        if (!value["IndustryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespIndustry.IndustryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryName = string(value["IndustryName"].GetString());
        m_industryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetIndustryV1HomeMembersRespIndustry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_industryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryName.c_str(), allocator).Move(), allocator);
    }

}


string GetIndustryV1HomeMembersRespIndustry::GetID() const
{
    return m_iD;
}

void GetIndustryV1HomeMembersRespIndustry::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespIndustry::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GetIndustryV1HomeMembersRespIndustry::GetIndustryName() const
{
    return m_industryName;
}

void GetIndustryV1HomeMembersRespIndustry::SetIndustryName(const string& _industryName)
{
    m_industryName = _industryName;
    m_industryNameHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespIndustry::IndustryNameHasBeenSet() const
{
    return m_industryNameHasBeenSet;
}

