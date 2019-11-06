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

#include <tencentcloud/organization/v20181225/model/GetOrganizationMemberResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20181225::Model;
using namespace rapidjson;
using namespace std;

GetOrganizationMemberResponse::GetOrganizationMemberResponse() :
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_joinTimeHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_parentNodeIdHasBeenSet(false)
{
}

CoreInternalOutcome GetOrganizationMemberResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = rsp["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("JoinTime") && !rsp["JoinTime"].IsNull())
    {
        if (!rsp["JoinTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `JoinTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_joinTime = string(rsp["JoinTime"].GetString());
        m_joinTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeId") && !rsp["NodeId"].IsNull())
    {
        if (!rsp["NodeId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = rsp["NodeId"].GetUint64();
        m_nodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("ParentNodeId") && !rsp["ParentNodeId"].IsNull())
    {
        if (!rsp["ParentNodeId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ParentNodeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentNodeId = rsp["ParentNodeId"].GetUint64();
        m_parentNodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t GetOrganizationMemberResponse::GetUin() const
{
    return m_uin;
}

bool GetOrganizationMemberResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string GetOrganizationMemberResponse::GetName() const
{
    return m_name;
}

bool GetOrganizationMemberResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetOrganizationMemberResponse::GetRemark() const
{
    return m_remark;
}

bool GetOrganizationMemberResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string GetOrganizationMemberResponse::GetJoinTime() const
{
    return m_joinTime;
}

bool GetOrganizationMemberResponse::JoinTimeHasBeenSet() const
{
    return m_joinTimeHasBeenSet;
}

uint64_t GetOrganizationMemberResponse::GetNodeId() const
{
    return m_nodeId;
}

bool GetOrganizationMemberResponse::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string GetOrganizationMemberResponse::GetNodeName() const
{
    return m_nodeName;
}

bool GetOrganizationMemberResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t GetOrganizationMemberResponse::GetParentNodeId() const
{
    return m_parentNodeId;
}

bool GetOrganizationMemberResponse::ParentNodeIdHasBeenSet() const
{
    return m_parentNodeIdHasBeenSet;
}


