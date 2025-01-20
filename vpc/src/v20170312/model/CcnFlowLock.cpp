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

#include <tencentcloud/vpc/v20170312/model/CcnFlowLock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnFlowLock::CcnFlowLock() :
    m_ccnIdHasBeenSet(false),
    m_userAccountIDHasBeenSet(false),
    m_regionFlowControlIdHasBeenSet(false)
{
}

CoreInternalOutcome CcnFlowLock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnFlowLock.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("UserAccountID") && !value["UserAccountID"].IsNull())
    {
        if (!value["UserAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnFlowLock.UserAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccountID = string(value["UserAccountID"].GetString());
        m_userAccountIDHasBeenSet = true;
    }

    if (value.HasMember("RegionFlowControlId") && !value["RegionFlowControlId"].IsNull())
    {
        if (!value["RegionFlowControlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnFlowLock.RegionFlowControlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionFlowControlId = string(value["RegionFlowControlId"].GetString());
        m_regionFlowControlIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnFlowLock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAccountID.c_str(), allocator).Move(), allocator);
    }

    if (m_regionFlowControlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionFlowControlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionFlowControlId.c_str(), allocator).Move(), allocator);
    }

}


string CcnFlowLock::GetCcnId() const
{
    return m_ccnId;
}

void CcnFlowLock::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnFlowLock::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CcnFlowLock::GetUserAccountID() const
{
    return m_userAccountID;
}

void CcnFlowLock::SetUserAccountID(const string& _userAccountID)
{
    m_userAccountID = _userAccountID;
    m_userAccountIDHasBeenSet = true;
}

bool CcnFlowLock::UserAccountIDHasBeenSet() const
{
    return m_userAccountIDHasBeenSet;
}

string CcnFlowLock::GetRegionFlowControlId() const
{
    return m_regionFlowControlId;
}

void CcnFlowLock::SetRegionFlowControlId(const string& _regionFlowControlId)
{
    m_regionFlowControlId = _regionFlowControlId;
    m_regionFlowControlIdHasBeenSet = true;
}

bool CcnFlowLock::RegionFlowControlIdHasBeenSet() const
{
    return m_regionFlowControlIdHasBeenSet;
}

