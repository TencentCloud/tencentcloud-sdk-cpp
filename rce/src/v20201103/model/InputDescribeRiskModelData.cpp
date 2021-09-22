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

#include <tencentcloud/rce/v20201103/model/InputDescribeRiskModelData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputDescribeRiskModelData::InputDescribeRiskModelData() :
    m_userDataHasBeenSet(false),
    m_applyDateHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome InputDescribeRiskModelData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeRiskModelData.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }

    if (value.HasMember("ApplyDate") && !value["ApplyDate"].IsNull())
    {
        if (!value["ApplyDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeRiskModelData.ApplyDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyDate = value["ApplyDate"].GetUint64();
        m_applyDateHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeRiskModelData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDescribeRiskModelData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_applyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyDate, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string InputDescribeRiskModelData::GetUserData() const
{
    return m_userData;
}

void InputDescribeRiskModelData::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool InputDescribeRiskModelData::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

uint64_t InputDescribeRiskModelData::GetApplyDate() const
{
    return m_applyDate;
}

void InputDescribeRiskModelData::SetApplyDate(const uint64_t& _applyDate)
{
    m_applyDate = _applyDate;
    m_applyDateHasBeenSet = true;
}

bool InputDescribeRiskModelData::ApplyDateHasBeenSet() const
{
    return m_applyDateHasBeenSet;
}

string InputDescribeRiskModelData::GetUserId() const
{
    return m_userId;
}

void InputDescribeRiskModelData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InputDescribeRiskModelData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

