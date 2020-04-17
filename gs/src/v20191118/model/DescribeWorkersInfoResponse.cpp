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

#include <tencentcloud/gs/v20191118/model/DescribeWorkersInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace rapidjson;
using namespace std;

DescribeWorkersInfoResponse::DescribeWorkersInfoResponse() :
    m_workerNumHasBeenSet(false),
    m_workerDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkersInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WorkerNum") && !rsp["WorkerNum"].IsNull())
    {
        if (!rsp["WorkerNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `WorkerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_workerNum = rsp["WorkerNum"].GetUint64();
        m_workerNumHasBeenSet = true;
    }

    if (rsp.HasMember("WorkerDetail") && !rsp["WorkerDetail"].IsNull())
    {
        if (!rsp["WorkerDetail"].IsArray())
            return CoreInternalOutcome(Error("response `WorkerDetail` is not array type"));

        const Value &tmpValue = rsp["WorkerDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkerDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workerDetail.push_back(item);
        }
        m_workerDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeWorkersInfoResponse::GetWorkerNum() const
{
    return m_workerNum;
}

bool DescribeWorkersInfoResponse::WorkerNumHasBeenSet() const
{
    return m_workerNumHasBeenSet;
}

vector<WorkerDetail> DescribeWorkersInfoResponse::GetWorkerDetail() const
{
    return m_workerDetail;
}

bool DescribeWorkersInfoResponse::WorkerDetailHasBeenSet() const
{
    return m_workerDetailHasBeenSet;
}


