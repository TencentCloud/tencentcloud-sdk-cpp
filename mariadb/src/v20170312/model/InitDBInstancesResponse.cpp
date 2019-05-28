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

#include <tencentcloud/mariadb/v20170312/model/InitDBInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace rapidjson;
using namespace std;

InitDBInstancesResponse::InitDBInstancesResponse() :
    m_flowIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome InitDBInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `FlowId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = rsp["FlowId"].GetInt64();
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIds") && !rsp["InstanceIds"].IsNull())
    {
        if (!rsp["InstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `InstanceIds` is not array type"));

        const Value &tmpValue = rsp["InstanceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


int64_t InitDBInstancesResponse::GetFlowId() const
{
    return m_flowId;
}

bool InitDBInstancesResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

vector<string> InitDBInstancesResponse::GetInstanceIds() const
{
    return m_instanceIds;
}

bool InitDBInstancesResponse::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}


