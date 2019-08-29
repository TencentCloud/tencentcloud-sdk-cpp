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

#include <tencentcloud/gaap/v20180529/model/DeleteListenersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DeleteListenersResponse::DeleteListenersResponse() :
    m_operationFailedListenerSetHasBeenSet(false),
    m_operationSucceedListenerSetHasBeenSet(false),
    m_invalidStatusListenerSetHasBeenSet(false)
{
}

CoreInternalOutcome DeleteListenersResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OperationFailedListenerSet") && !rsp["OperationFailedListenerSet"].IsNull())
    {
        if (!rsp["OperationFailedListenerSet"].IsArray())
            return CoreInternalOutcome(Error("response `OperationFailedListenerSet` is not array type"));

        const Value &tmpValue = rsp["OperationFailedListenerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operationFailedListenerSet.push_back((*itr).GetString());
        }
        m_operationFailedListenerSetHasBeenSet = true;
    }

    if (rsp.HasMember("OperationSucceedListenerSet") && !rsp["OperationSucceedListenerSet"].IsNull())
    {
        if (!rsp["OperationSucceedListenerSet"].IsArray())
            return CoreInternalOutcome(Error("response `OperationSucceedListenerSet` is not array type"));

        const Value &tmpValue = rsp["OperationSucceedListenerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operationSucceedListenerSet.push_back((*itr).GetString());
        }
        m_operationSucceedListenerSetHasBeenSet = true;
    }

    if (rsp.HasMember("InvalidStatusListenerSet") && !rsp["InvalidStatusListenerSet"].IsNull())
    {
        if (!rsp["InvalidStatusListenerSet"].IsArray())
            return CoreInternalOutcome(Error("response `InvalidStatusListenerSet` is not array type"));

        const Value &tmpValue = rsp["InvalidStatusListenerSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_invalidStatusListenerSet.push_back((*itr).GetString());
        }
        m_invalidStatusListenerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DeleteListenersResponse::GetOperationFailedListenerSet() const
{
    return m_operationFailedListenerSet;
}

bool DeleteListenersResponse::OperationFailedListenerSetHasBeenSet() const
{
    return m_operationFailedListenerSetHasBeenSet;
}

vector<string> DeleteListenersResponse::GetOperationSucceedListenerSet() const
{
    return m_operationSucceedListenerSet;
}

bool DeleteListenersResponse::OperationSucceedListenerSetHasBeenSet() const
{
    return m_operationSucceedListenerSetHasBeenSet;
}

vector<string> DeleteListenersResponse::GetInvalidStatusListenerSet() const
{
    return m_invalidStatusListenerSet;
}

bool DeleteListenersResponse::InvalidStatusListenerSetHasBeenSet() const
{
    return m_invalidStatusListenerSetHasBeenSet;
}


