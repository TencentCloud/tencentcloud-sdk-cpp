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

#include <tencentcloud/eiam/v20210420/model/OrgNodeChildUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

OrgNodeChildUserInfo::OrgNodeChildUserInfo() :
    m_orgNodeIdHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_totalUserNumHasBeenSet(false),
    m_orgNodeIdPathHasBeenSet(false),
    m_orgNodeNamePathHasBeenSet(false)
{
}

CoreInternalOutcome OrgNodeChildUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrgNodeId") && !value["OrgNodeId"].IsNull())
    {
        if (!value["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo.OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(value["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo.UserInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["UserInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userInfo.push_back(item);
        }
        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("TotalUserNum") && !value["TotalUserNum"].IsNull())
    {
        if (!value["TotalUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo.TotalUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUserNum = value["TotalUserNum"].GetInt64();
        m_totalUserNumHasBeenSet = true;
    }

    if (value.HasMember("OrgNodeIdPath") && !value["OrgNodeIdPath"].IsNull())
    {
        if (!value["OrgNodeIdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo.OrgNodeIdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeIdPath = string(value["OrgNodeIdPath"].GetString());
        m_orgNodeIdPathHasBeenSet = true;
    }

    if (value.HasMember("OrgNodeNamePath") && !value["OrgNodeNamePath"].IsNull())
    {
        if (!value["OrgNodeNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo.OrgNodeNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeNamePath = string(value["OrgNodeNamePath"].GetString());
        m_orgNodeNamePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrgNodeChildUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userInfo.begin(); itr != m_userInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalUserNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUserNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUserNum, allocator);
    }

    if (m_orgNodeIdPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeIdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeIdPath.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeNamePath.c_str(), allocator).Move(), allocator);
    }

}


string OrgNodeChildUserInfo::GetOrgNodeId() const
{
    return m_orgNodeId;
}

void OrgNodeChildUserInfo::SetOrgNodeId(const string& _orgNodeId)
{
    m_orgNodeId = _orgNodeId;
    m_orgNodeIdHasBeenSet = true;
}

bool OrgNodeChildUserInfo::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

vector<UserInfo> OrgNodeChildUserInfo::GetUserInfo() const
{
    return m_userInfo;
}

void OrgNodeChildUserInfo::SetUserInfo(const vector<UserInfo>& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool OrgNodeChildUserInfo::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

int64_t OrgNodeChildUserInfo::GetTotalUserNum() const
{
    return m_totalUserNum;
}

void OrgNodeChildUserInfo::SetTotalUserNum(const int64_t& _totalUserNum)
{
    m_totalUserNum = _totalUserNum;
    m_totalUserNumHasBeenSet = true;
}

bool OrgNodeChildUserInfo::TotalUserNumHasBeenSet() const
{
    return m_totalUserNumHasBeenSet;
}

string OrgNodeChildUserInfo::GetOrgNodeIdPath() const
{
    return m_orgNodeIdPath;
}

void OrgNodeChildUserInfo::SetOrgNodeIdPath(const string& _orgNodeIdPath)
{
    m_orgNodeIdPath = _orgNodeIdPath;
    m_orgNodeIdPathHasBeenSet = true;
}

bool OrgNodeChildUserInfo::OrgNodeIdPathHasBeenSet() const
{
    return m_orgNodeIdPathHasBeenSet;
}

string OrgNodeChildUserInfo::GetOrgNodeNamePath() const
{
    return m_orgNodeNamePath;
}

void OrgNodeChildUserInfo::SetOrgNodeNamePath(const string& _orgNodeNamePath)
{
    m_orgNodeNamePath = _orgNodeNamePath;
    m_orgNodeNamePathHasBeenSet = true;
}

bool OrgNodeChildUserInfo::OrgNodeNamePathHasBeenSet() const
{
    return m_orgNodeNamePathHasBeenSet;
}

