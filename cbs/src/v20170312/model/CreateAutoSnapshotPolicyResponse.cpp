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

#include <tencentcloud/cbs/v20170312/model/CreateAutoSnapshotPolicyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateAutoSnapshotPolicyResponse::CreateAutoSnapshotPolicyResponse() :
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_nextTriggerTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateAutoSnapshotPolicyResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AutoSnapshotPolicyId") && !rsp["AutoSnapshotPolicyId"].IsNull())
    {
        if (!rsp["AutoSnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AutoSnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoSnapshotPolicyId = string(rsp["AutoSnapshotPolicyId"].GetString());
        m_autoSnapshotPolicyIdHasBeenSet = true;
    }

    if (rsp.HasMember("NextTriggerTime") && !rsp["NextTriggerTime"].IsNull())
    {
        if (!rsp["NextTriggerTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NextTriggerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextTriggerTime = string(rsp["NextTriggerTime"].GetString());
        m_nextTriggerTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateAutoSnapshotPolicyResponse::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

bool CreateAutoSnapshotPolicyResponse::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

string CreateAutoSnapshotPolicyResponse::GetNextTriggerTime() const
{
    return m_nextTriggerTime;
}

bool CreateAutoSnapshotPolicyResponse::NextTriggerTimeHasBeenSet() const
{
    return m_nextTriggerTimeHasBeenSet;
}


