/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeVulFixedHostDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeVulFixedHostDetailResponse::DescribeVulFixedHostDetailResponse() :
    m_vulNameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_fixTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_componentDetailsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulFixedHostDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulName") && !rsp["VulName"].IsNull())
    {
        if (!rsp["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(rsp["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (rsp.HasMember("CveId") && !rsp["CveId"].IsNull())
    {
        if (!rsp["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(rsp["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (rsp.HasMember("VulCategory") && !rsp["VulCategory"].IsNull())
    {
        if (!rsp["VulCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = string(rsp["VulCategory"].GetString());
        m_vulCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("FixTime") && !rsp["FixTime"].IsNull())
    {
        if (!rsp["FixTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FixTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixTime = string(rsp["FixTime"].GetString());
        m_fixTimeHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("MachineName") && !rsp["MachineName"].IsNull())
    {
        if (!rsp["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(rsp["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIp") && !rsp["PublicIp"].IsNull())
    {
        if (!rsp["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(rsp["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateIp") && !rsp["PrivateIp"].IsNull())
    {
        if (!rsp["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(rsp["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentDetails") && !rsp["ComponentDetails"].IsNull())
    {
        if (!rsp["ComponentDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ComponentDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentDetails.push_back(item);
        }
        m_componentDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulFixedHostDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_fixTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_componentDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentDetails.begin(); itr != m_componentDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


string DescribeVulFixedHostDetailResponse::GetVulName() const
{
    return m_vulName;
}

bool DescribeVulFixedHostDetailResponse::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetCveId() const
{
    return m_cveId;
}

bool DescribeVulFixedHostDetailResponse::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetVulCategory() const
{
    return m_vulCategory;
}

bool DescribeVulFixedHostDetailResponse::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetFixTime() const
{
    return m_fixTime;
}

bool DescribeVulFixedHostDetailResponse::FixTimeHasBeenSet() const
{
    return m_fixTimeHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeVulFixedHostDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetMachineName() const
{
    return m_machineName;
}

bool DescribeVulFixedHostDetailResponse::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetPublicIp() const
{
    return m_publicIp;
}

bool DescribeVulFixedHostDetailResponse::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string DescribeVulFixedHostDetailResponse::GetPrivateIp() const
{
    return m_privateIp;
}

bool DescribeVulFixedHostDetailResponse::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

vector<ComponentDetailItem> DescribeVulFixedHostDetailResponse::GetComponentDetails() const
{
    return m_componentDetails;
}

bool DescribeVulFixedHostDetailResponse::ComponentDetailsHasBeenSet() const
{
    return m_componentDetailsHasBeenSet;
}

int64_t DescribeVulFixedHostDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeVulFixedHostDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


