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

#include <tencentcloud/chc/v20230418/model/Campus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Campus::Campus() :
    m_campusIdHasBeenSet(false),
    m_campusNameHasBeenSet(false)
{
}

CoreInternalOutcome Campus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CampusId") && !value["CampusId"].IsNull())
    {
        if (!value["CampusId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Campus.CampusId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_campusId = value["CampusId"].GetUint64();
        m_campusIdHasBeenSet = true;
    }

    if (value.HasMember("CampusName") && !value["CampusName"].IsNull())
    {
        if (!value["CampusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Campus.CampusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_campusName = string(value["CampusName"].GetString());
        m_campusNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Campus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_campusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_campusId, allocator);
    }

    if (m_campusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_campusName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Campus::GetCampusId() const
{
    return m_campusId;
}

void Campus::SetCampusId(const uint64_t& _campusId)
{
    m_campusId = _campusId;
    m_campusIdHasBeenSet = true;
}

bool Campus::CampusIdHasBeenSet() const
{
    return m_campusIdHasBeenSet;
}

string Campus::GetCampusName() const
{
    return m_campusName;
}

void Campus::SetCampusName(const string& _campusName)
{
    m_campusName = _campusName;
    m_campusNameHasBeenSet = true;
}

bool Campus::CampusNameHasBeenSet() const
{
    return m_campusNameHasBeenSet;
}

