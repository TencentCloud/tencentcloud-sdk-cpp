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

#include <tencentcloud/gaap/v20180529/model/DescribeGroupDomainConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

DescribeGroupDomainConfigResponse::DescribeGroupDomainConfigResponse() :
    m_accessRegionListHasBeenSet(false),
    m_defaultDnsIpHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_accessRegionCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGroupDomainConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AccessRegionList") && !rsp["AccessRegionList"].IsNull())
    {
        if (!rsp["AccessRegionList"].IsArray())
            return CoreInternalOutcome(Error("response `AccessRegionList` is not array type"));

        const Value &tmpValue = rsp["AccessRegionList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainAccessRegionDict item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessRegionList.push_back(item);
        }
        m_accessRegionListHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultDnsIp") && !rsp["DefaultDnsIp"].IsNull())
    {
        if (!rsp["DefaultDnsIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `DefaultDnsIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDnsIp = string(rsp["DefaultDnsIp"].GetString());
        m_defaultDnsIpHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("AccessRegionCount") && !rsp["AccessRegionCount"].IsNull())
    {
        if (!rsp["AccessRegionCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AccessRegionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessRegionCount = rsp["AccessRegionCount"].GetInt64();
        m_accessRegionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<DomainAccessRegionDict> DescribeGroupDomainConfigResponse::GetAccessRegionList() const
{
    return m_accessRegionList;
}

bool DescribeGroupDomainConfigResponse::AccessRegionListHasBeenSet() const
{
    return m_accessRegionListHasBeenSet;
}

string DescribeGroupDomainConfigResponse::GetDefaultDnsIp() const
{
    return m_defaultDnsIp;
}

bool DescribeGroupDomainConfigResponse::DefaultDnsIpHasBeenSet() const
{
    return m_defaultDnsIpHasBeenSet;
}

string DescribeGroupDomainConfigResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeGroupDomainConfigResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t DescribeGroupDomainConfigResponse::GetAccessRegionCount() const
{
    return m_accessRegionCount;
}

bool DescribeGroupDomainConfigResponse::AccessRegionCountHasBeenSet() const
{
    return m_accessRegionCountHasBeenSet;
}


