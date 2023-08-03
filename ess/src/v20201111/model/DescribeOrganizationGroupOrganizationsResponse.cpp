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

#include <tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

DescribeOrganizationGroupOrganizationsResponse::DescribeOrganizationGroupOrganizationsResponse() :
    m_totalHasBeenSet(false),
    m_joinedTotalHasBeenSet(false),
    m_activedTotalHasBeenSet(false),
    m_exportUrlHasBeenSet(false),
    m_listHasBeenSet(false),
    m_activatedTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrganizationGroupOrganizationsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("JoinedTotal") && !rsp["JoinedTotal"].IsNull())
    {
        if (!rsp["JoinedTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JoinedTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_joinedTotal = rsp["JoinedTotal"].GetUint64();
        m_joinedTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ActivedTotal") && !rsp["ActivedTotal"].IsNull())
    {
        if (!rsp["ActivedTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivedTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activedTotal = rsp["ActivedTotal"].GetUint64();
        m_activedTotalHasBeenSet = true;
    }

    if (rsp.HasMember("ExportUrl") && !rsp["ExportUrl"].IsNull())
    {
        if (!rsp["ExportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportUrl = string(rsp["ExportUrl"].GetString());
        m_exportUrlHasBeenSet = true;
    }

    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupOrganization item;
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

    if (rsp.HasMember("ActivatedTotal") && !rsp["ActivatedTotal"].IsNull())
    {
        if (!rsp["ActivatedTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActivatedTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activatedTotal = rsp["ActivatedTotal"].GetUint64();
        m_activatedTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOrganizationGroupOrganizationsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_joinedTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinedTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_joinedTotal, allocator);
    }

    if (m_activedTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivedTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activedTotal, allocator);
    }

    if (m_exportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_activatedTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivatedTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activatedTotal, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeOrganizationGroupOrganizationsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeOrganizationGroupOrganizationsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsResponse::GetJoinedTotal() const
{
    return m_joinedTotal;
}

bool DescribeOrganizationGroupOrganizationsResponse::JoinedTotalHasBeenSet() const
{
    return m_joinedTotalHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsResponse::GetActivedTotal() const
{
    return m_activedTotal;
}

bool DescribeOrganizationGroupOrganizationsResponse::ActivedTotalHasBeenSet() const
{
    return m_activedTotalHasBeenSet;
}

string DescribeOrganizationGroupOrganizationsResponse::GetExportUrl() const
{
    return m_exportUrl;
}

bool DescribeOrganizationGroupOrganizationsResponse::ExportUrlHasBeenSet() const
{
    return m_exportUrlHasBeenSet;
}

vector<GroupOrganization> DescribeOrganizationGroupOrganizationsResponse::GetList() const
{
    return m_list;
}

bool DescribeOrganizationGroupOrganizationsResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

uint64_t DescribeOrganizationGroupOrganizationsResponse::GetActivatedTotal() const
{
    return m_activatedTotal;
}

bool DescribeOrganizationGroupOrganizationsResponse::ActivatedTotalHasBeenSet() const
{
    return m_activatedTotalHasBeenSet;
}


