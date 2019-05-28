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

#include <tencentcloud/bm/v20180423/model/DescribeHardwareSpecificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

DescribeHardwareSpecificationResponse::DescribeHardwareSpecificationResponse() :
    m_cpuInfoSetHasBeenSet(false),
    m_memSetHasBeenSet(false),
    m_diskInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeHardwareSpecificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CpuInfoSet") && !rsp["CpuInfoSet"].IsNull())
    {
        if (!rsp["CpuInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `CpuInfoSet` is not array type"));

        const Value &tmpValue = rsp["CpuInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CpuInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cpuInfoSet.push_back(item);
        }
        m_cpuInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("MemSet") && !rsp["MemSet"].IsNull())
    {
        if (!rsp["MemSet"].IsArray())
            return CoreInternalOutcome(Error("response `MemSet` is not array type"));

        const Value &tmpValue = rsp["MemSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memSet.push_back((*itr).GetUint64());
        }
        m_memSetHasBeenSet = true;
    }

    if (rsp.HasMember("DiskInfoSet") && !rsp["DiskInfoSet"].IsNull())
    {
        if (!rsp["DiskInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `DiskInfoSet` is not array type"));

        const Value &tmpValue = rsp["DiskInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diskInfoSet.push_back(item);
        }
        m_diskInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<CpuInfo> DescribeHardwareSpecificationResponse::GetCpuInfoSet() const
{
    return m_cpuInfoSet;
}

bool DescribeHardwareSpecificationResponse::CpuInfoSetHasBeenSet() const
{
    return m_cpuInfoSetHasBeenSet;
}

vector<uint64_t> DescribeHardwareSpecificationResponse::GetMemSet() const
{
    return m_memSet;
}

bool DescribeHardwareSpecificationResponse::MemSetHasBeenSet() const
{
    return m_memSetHasBeenSet;
}

vector<DiskInfo> DescribeHardwareSpecificationResponse::GetDiskInfoSet() const
{
    return m_diskInfoSet;
}

bool DescribeHardwareSpecificationResponse::DiskInfoSetHasBeenSet() const
{
    return m_diskInfoSetHasBeenSet;
}


