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

#include <tencentcloud/eiam/v20210420/model/ListUsersInOrgNodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

ListUsersInOrgNodeResponse::ListUsersInOrgNodeResponse() :
    m_orgNodeChildUserInfoHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_totalUserNumHasBeenSet(false),
    m_orgNodeIdPathHasBeenSet(false),
    m_orgNodeNamePathHasBeenSet(false)
{
}

CoreInternalOutcome ListUsersInOrgNodeResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OrgNodeChildUserInfo") && !rsp["OrgNodeChildUserInfo"].IsNull())
    {
        if (!rsp["OrgNodeChildUserInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildUserInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OrgNodeChildUserInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgNodeChildUserInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgNodeChildUserInfo.push_back(item);
        }
        m_orgNodeChildUserInfoHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserInfo") && !rsp["UserInfo"].IsNull())
    {
        if (!rsp["UserInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserInfo"];
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

    if (rsp.HasMember("TotalUserNum") && !rsp["TotalUserNum"].IsNull())
    {
        if (!rsp["TotalUserNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalUserNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUserNum = rsp["TotalUserNum"].GetInt64();
        m_totalUserNumHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeIdPath") && !rsp["OrgNodeIdPath"].IsNull())
    {
        if (!rsp["OrgNodeIdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeIdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeIdPath = string(rsp["OrgNodeIdPath"].GetString());
        m_orgNodeIdPathHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeNamePath") && !rsp["OrgNodeNamePath"].IsNull())
    {
        if (!rsp["OrgNodeNamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeNamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeNamePath = string(rsp["OrgNodeNamePath"].GetString());
        m_orgNodeNamePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListUsersInOrgNodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_orgNodeChildUserInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeChildUserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orgNodeChildUserInfo.begin(); itr != m_orgNodeChildUserInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<OrgNodeChildUserInfo> ListUsersInOrgNodeResponse::GetOrgNodeChildUserInfo() const
{
    return m_orgNodeChildUserInfo;
}

bool ListUsersInOrgNodeResponse::OrgNodeChildUserInfoHasBeenSet() const
{
    return m_orgNodeChildUserInfoHasBeenSet;
}

string ListUsersInOrgNodeResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool ListUsersInOrgNodeResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

vector<UserInfo> ListUsersInOrgNodeResponse::GetUserInfo() const
{
    return m_userInfo;
}

bool ListUsersInOrgNodeResponse::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

int64_t ListUsersInOrgNodeResponse::GetTotalUserNum() const
{
    return m_totalUserNum;
}

bool ListUsersInOrgNodeResponse::TotalUserNumHasBeenSet() const
{
    return m_totalUserNumHasBeenSet;
}

string ListUsersInOrgNodeResponse::GetOrgNodeIdPath() const
{
    return m_orgNodeIdPath;
}

bool ListUsersInOrgNodeResponse::OrgNodeIdPathHasBeenSet() const
{
    return m_orgNodeIdPathHasBeenSet;
}

string ListUsersInOrgNodeResponse::GetOrgNodeNamePath() const
{
    return m_orgNodeNamePath;
}

bool ListUsersInOrgNodeResponse::OrgNodeNamePathHasBeenSet() const
{
    return m_orgNodeNamePathHasBeenSet;
}


