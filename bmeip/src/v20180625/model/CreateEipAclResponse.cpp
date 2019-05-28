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

#include <tencentcloud/bmeip/v20180625/model/CreateEipAclResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace rapidjson;
using namespace std;

CreateEipAclResponse::CreateEipAclResponse() :
    m_aclIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_aclNameHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome CreateEipAclResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AclId") && !rsp["AclId"].IsNull())
    {
        if (!rsp["AclId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AclId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclId = string(rsp["AclId"].GetString());
        m_aclIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("AclName") && !rsp["AclName"].IsNull())
    {
        if (!rsp["AclName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AclName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclName = string(rsp["AclName"].GetString());
        m_aclNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateEipAclResponse::GetAclId() const
{
    return m_aclId;
}

bool CreateEipAclResponse::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

uint64_t CreateEipAclResponse::GetStatus() const
{
    return m_status;
}

bool CreateEipAclResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateEipAclResponse::GetAclName() const
{
    return m_aclName;
}

bool CreateEipAclResponse::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

string CreateEipAclResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool CreateEipAclResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}


