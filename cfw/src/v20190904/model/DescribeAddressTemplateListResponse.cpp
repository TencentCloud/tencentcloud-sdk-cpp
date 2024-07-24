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

#include <tencentcloud/cfw/v20190904/model/DescribeAddressTemplateListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeAddressTemplateListResponse::DescribeAddressTemplateListResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_nameListHasBeenSet(false),
    m_ipTemplateCountHasBeenSet(false),
    m_domainTemplateCountHasBeenSet(false),
    m_portTemplateCountHasBeenSet(false),
    m_usedTemplateCountHasBeenSet(false),
    m_templateQuotaCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAddressTemplateListResponse::Deserialize(const string &payload)
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
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateListInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("NameList") && !rsp["NameList"].IsNull())
    {
        if (!rsp["NameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NameList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nameList.push_back((*itr).GetString());
        }
        m_nameListHasBeenSet = true;
    }

    if (rsp.HasMember("IpTemplateCount") && !rsp["IpTemplateCount"].IsNull())
    {
        if (!rsp["IpTemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpTemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipTemplateCount = rsp["IpTemplateCount"].GetInt64();
        m_ipTemplateCountHasBeenSet = true;
    }

    if (rsp.HasMember("DomainTemplateCount") && !rsp["DomainTemplateCount"].IsNull())
    {
        if (!rsp["DomainTemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainTemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domainTemplateCount = rsp["DomainTemplateCount"].GetInt64();
        m_domainTemplateCountHasBeenSet = true;
    }

    if (rsp.HasMember("PortTemplateCount") && !rsp["PortTemplateCount"].IsNull())
    {
        if (!rsp["PortTemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PortTemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_portTemplateCount = rsp["PortTemplateCount"].GetInt64();
        m_portTemplateCountHasBeenSet = true;
    }

    if (rsp.HasMember("UsedTemplateCount") && !rsp["UsedTemplateCount"].IsNull())
    {
        if (!rsp["UsedTemplateCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedTemplateCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTemplateCount = rsp["UsedTemplateCount"].GetInt64();
        m_usedTemplateCountHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateQuotaCount") && !rsp["TemplateQuotaCount"].IsNull())
    {
        if (!rsp["TemplateQuotaCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateQuotaCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateQuotaCount = rsp["TemplateQuotaCount"].GetInt64();
        m_templateQuotaCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAddressTemplateListResponse::ToJsonString() const
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

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nameList.begin(); itr != m_nameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipTemplateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipTemplateCount, allocator);
    }

    if (m_domainTemplateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainTemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainTemplateCount, allocator);
    }

    if (m_portTemplateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortTemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portTemplateCount, allocator);
    }

    if (m_usedTemplateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTemplateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTemplateCount, allocator);
    }

    if (m_templateQuotaCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateQuotaCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateQuotaCount, allocator);
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


int64_t DescribeAddressTemplateListResponse::GetTotal() const
{
    return m_total;
}

bool DescribeAddressTemplateListResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<TemplateListInfo> DescribeAddressTemplateListResponse::GetData() const
{
    return m_data;
}

bool DescribeAddressTemplateListResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<string> DescribeAddressTemplateListResponse::GetNameList() const
{
    return m_nameList;
}

bool DescribeAddressTemplateListResponse::NameListHasBeenSet() const
{
    return m_nameListHasBeenSet;
}

int64_t DescribeAddressTemplateListResponse::GetIpTemplateCount() const
{
    return m_ipTemplateCount;
}

bool DescribeAddressTemplateListResponse::IpTemplateCountHasBeenSet() const
{
    return m_ipTemplateCountHasBeenSet;
}

int64_t DescribeAddressTemplateListResponse::GetDomainTemplateCount() const
{
    return m_domainTemplateCount;
}

bool DescribeAddressTemplateListResponse::DomainTemplateCountHasBeenSet() const
{
    return m_domainTemplateCountHasBeenSet;
}

int64_t DescribeAddressTemplateListResponse::GetPortTemplateCount() const
{
    return m_portTemplateCount;
}

bool DescribeAddressTemplateListResponse::PortTemplateCountHasBeenSet() const
{
    return m_portTemplateCountHasBeenSet;
}

int64_t DescribeAddressTemplateListResponse::GetUsedTemplateCount() const
{
    return m_usedTemplateCount;
}

bool DescribeAddressTemplateListResponse::UsedTemplateCountHasBeenSet() const
{
    return m_usedTemplateCountHasBeenSet;
}

int64_t DescribeAddressTemplateListResponse::GetTemplateQuotaCount() const
{
    return m_templateQuotaCount;
}

bool DescribeAddressTemplateListResponse::TemplateQuotaCountHasBeenSet() const
{
    return m_templateQuotaCountHasBeenSet;
}


