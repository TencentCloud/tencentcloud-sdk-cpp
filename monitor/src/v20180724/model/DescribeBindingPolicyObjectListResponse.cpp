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

#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace rapidjson;
using namespace std;

DescribeBindingPolicyObjectListResponse::DescribeBindingPolicyObjectListResponse() :
    m_listHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_noShieldedSumHasBeenSet(false),
    m_instanceGroupHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBindingPolicyObjectListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Error("response `List` is not array type"));

        const Value &tmpValue = rsp["List"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeBindingPolicyObjectListInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("NoShieldedSum") && !rsp["NoShieldedSum"].IsNull())
    {
        if (!rsp["NoShieldedSum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `NoShieldedSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noShieldedSum = rsp["NoShieldedSum"].GetInt64();
        m_noShieldedSumHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceGroup") && !rsp["InstanceGroup"].IsNull())
    {
        if (!rsp["InstanceGroup"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InstanceGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceGroup.Deserialize(rsp["InstanceGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<DescribeBindingPolicyObjectListInstance> DescribeBindingPolicyObjectListResponse::GetList() const
{
    return m_list;
}

bool DescribeBindingPolicyObjectListResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeBindingPolicyObjectListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeBindingPolicyObjectListResponse::GetNoShieldedSum() const
{
    return m_noShieldedSum;
}

bool DescribeBindingPolicyObjectListResponse::NoShieldedSumHasBeenSet() const
{
    return m_noShieldedSumHasBeenSet;
}

DescribeBindingPolicyObjectListInstanceGroup DescribeBindingPolicyObjectListResponse::GetInstanceGroup() const
{
    return m_instanceGroup;
}

bool DescribeBindingPolicyObjectListResponse::InstanceGroupHasBeenSet() const
{
    return m_instanceGroupHasBeenSet;
}


