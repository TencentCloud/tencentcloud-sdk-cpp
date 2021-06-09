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

#include <tencentcloud/bizlive/v20190313/model/DescribeWorkersResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

DescribeWorkersResponse::DescribeWorkersResponse() :
    m_regionDetailHasBeenSet(false),
    m_idleHasBeenSet(false),
    m_regionNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkersResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("RegionDetail") && !rsp["RegionDetail"].IsNull())
    {
        if (!rsp["RegionDetail"].IsArray())
            return CoreInternalOutcome(Error("response `RegionDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkerRegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionDetail.push_back(item);
        }
        m_regionDetailHasBeenSet = true;
    }

    if (rsp.HasMember("Idle") && !rsp["Idle"].IsNull())
    {
        if (!rsp["Idle"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Idle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idle = rsp["Idle"].GetUint64();
        m_idleHasBeenSet = true;
    }

    if (rsp.HasMember("RegionNum") && !rsp["RegionNum"].IsNull())
    {
        if (!rsp["RegionNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RegionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionNum = rsp["RegionNum"].GetUint64();
        m_regionNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<WorkerRegionInfo> DescribeWorkersResponse::GetRegionDetail() const
{
    return m_regionDetail;
}

bool DescribeWorkersResponse::RegionDetailHasBeenSet() const
{
    return m_regionDetailHasBeenSet;
}

uint64_t DescribeWorkersResponse::GetIdle() const
{
    return m_idle;
}

bool DescribeWorkersResponse::IdleHasBeenSet() const
{
    return m_idleHasBeenSet;
}

uint64_t DescribeWorkersResponse::GetRegionNum() const
{
    return m_regionNum;
}

bool DescribeWorkersResponse::RegionNumHasBeenSet() const
{
    return m_regionNumHasBeenSet;
}


