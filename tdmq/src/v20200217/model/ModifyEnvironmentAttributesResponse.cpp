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

#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

ModifyEnvironmentAttributesResponse::ModifyEnvironmentAttributesResponse() :
    m_environmentIdHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ModifyEnvironmentAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnvironmentId") && !rsp["EnvironmentId"].IsNull())
    {
        if (!rsp["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(rsp["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (rsp.HasMember("MsgTTL") && !rsp["MsgTTL"].IsNull())
    {
        if (!rsp["MsgTTL"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MsgTTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTTL = rsp["MsgTTL"].GetUint64();
        m_msgTTLHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}


string ModifyEnvironmentAttributesResponse::GetEnvironmentId() const
{
    return m_environmentId;
}

bool ModifyEnvironmentAttributesResponse::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

uint64_t ModifyEnvironmentAttributesResponse::GetMsgTTL() const
{
    return m_msgTTL;
}

bool ModifyEnvironmentAttributesResponse::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string ModifyEnvironmentAttributesResponse::GetRemark() const
{
    return m_remark;
}

bool ModifyEnvironmentAttributesResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


