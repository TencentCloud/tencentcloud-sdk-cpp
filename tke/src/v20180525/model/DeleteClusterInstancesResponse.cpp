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

#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

DeleteClusterInstancesResponse::DeleteClusterInstancesResponse() :
    m_succInstanceIdsHasBeenSet(false),
    m_failedInstanceIdsHasBeenSet(false),
    m_notFoundInstanceIdsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteClusterInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccInstanceIds") && !rsp["SuccInstanceIds"].IsNull())
    {
        if (!rsp["SuccInstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `SuccInstanceIds` is not array type"));

        const Value &tmpValue = rsp["SuccInstanceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_succInstanceIds.push_back((*itr).GetString());
        }
        m_succInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("FailedInstanceIds") && !rsp["FailedInstanceIds"].IsNull())
    {
        if (!rsp["FailedInstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `FailedInstanceIds` is not array type"));

        const Value &tmpValue = rsp["FailedInstanceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedInstanceIds.push_back((*itr).GetString());
        }
        m_failedInstanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("NotFoundInstanceIds") && !rsp["NotFoundInstanceIds"].IsNull())
    {
        if (!rsp["NotFoundInstanceIds"].IsArray())
            return CoreInternalOutcome(Error("response `NotFoundInstanceIds` is not array type"));

        const Value &tmpValue = rsp["NotFoundInstanceIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notFoundInstanceIds.push_back((*itr).GetString());
        }
        m_notFoundInstanceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DeleteClusterInstancesResponse::GetSuccInstanceIds() const
{
    return m_succInstanceIds;
}

bool DeleteClusterInstancesResponse::SuccInstanceIdsHasBeenSet() const
{
    return m_succInstanceIdsHasBeenSet;
}

vector<string> DeleteClusterInstancesResponse::GetFailedInstanceIds() const
{
    return m_failedInstanceIds;
}

bool DeleteClusterInstancesResponse::FailedInstanceIdsHasBeenSet() const
{
    return m_failedInstanceIdsHasBeenSet;
}

vector<string> DeleteClusterInstancesResponse::GetNotFoundInstanceIds() const
{
    return m_notFoundInstanceIds;
}

bool DeleteClusterInstancesResponse::NotFoundInstanceIdsHasBeenSet() const
{
    return m_notFoundInstanceIdsHasBeenSet;
}


