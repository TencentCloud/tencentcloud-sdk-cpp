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

#include <tencentcloud/iotcloud/v20180614/model/DescribeMultiDevicesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

DescribeMultiDevicesResponse::DescribeMultiDevicesResponse() :
    m_taskIdHasBeenSet(false),
    m_devicesInfoHasBeenSet(false),
    m_totalDevNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMultiDevicesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("DevicesInfo") && !rsp["DevicesInfo"].IsNull())
    {
        if (!rsp["DevicesInfo"].IsArray())
            return CoreInternalOutcome(Error("response `DevicesInfo` is not array type"));

        const Value &tmpValue = rsp["DevicesInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiDevicesInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_devicesInfo.push_back(item);
        }
        m_devicesInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TotalDevNum") && !rsp["TotalDevNum"].IsNull())
    {
        if (!rsp["TotalDevNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TotalDevNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDevNum = rsp["TotalDevNum"].GetUint64();
        m_totalDevNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeMultiDevicesResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeMultiDevicesResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<MultiDevicesInfo> DescribeMultiDevicesResponse::GetDevicesInfo() const
{
    return m_devicesInfo;
}

bool DescribeMultiDevicesResponse::DevicesInfoHasBeenSet() const
{
    return m_devicesInfoHasBeenSet;
}

uint64_t DescribeMultiDevicesResponse::GetTotalDevNum() const
{
    return m_totalDevNum;
}

bool DescribeMultiDevicesResponse::TotalDevNumHasBeenSet() const
{
    return m_totalDevNumHasBeenSet;
}


