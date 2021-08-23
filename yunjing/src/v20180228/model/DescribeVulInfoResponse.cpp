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

#include <tencentcloud/yunjing/v20180228/model/DescribeVulInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DescribeVulInfoResponse::DescribeVulInfoResponse() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulLevelHasBeenSet(false),
    m_vulTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_repairPlanHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("VulId") && !rsp["VulId"].IsNull())
    {
        if (!rsp["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = rsp["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
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

    if (rsp.HasMember("VulLevel") && !rsp["VulLevel"].IsNull())
    {
        if (!rsp["VulLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulLevel = string(rsp["VulLevel"].GetString());
        m_vulLevelHasBeenSet = true;
    }

    if (rsp.HasMember("VulType") && !rsp["VulType"].IsNull())
    {
        if (!rsp["VulType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulType = string(rsp["VulType"].GetString());
        m_vulTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RepairPlan") && !rsp["RepairPlan"].IsNull())
    {
        if (!rsp["RepairPlan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepairPlan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repairPlan = string(rsp["RepairPlan"].GetString());
        m_repairPlanHasBeenSet = true;
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

    if (rsp.HasMember("Reference") && !rsp["Reference"].IsNull())
    {
        if (!rsp["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(rsp["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_repairPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairPlan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repairPlan.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeVulInfoResponse::GetVulId() const
{
    return m_vulId;
}

bool DescribeVulInfoResponse::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string DescribeVulInfoResponse::GetVulName() const
{
    return m_vulName;
}

bool DescribeVulInfoResponse::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string DescribeVulInfoResponse::GetVulLevel() const
{
    return m_vulLevel;
}

bool DescribeVulInfoResponse::VulLevelHasBeenSet() const
{
    return m_vulLevelHasBeenSet;
}

string DescribeVulInfoResponse::GetVulType() const
{
    return m_vulType;
}

bool DescribeVulInfoResponse::VulTypeHasBeenSet() const
{
    return m_vulTypeHasBeenSet;
}

string DescribeVulInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeVulInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeVulInfoResponse::GetRepairPlan() const
{
    return m_repairPlan;
}

bool DescribeVulInfoResponse::RepairPlanHasBeenSet() const
{
    return m_repairPlanHasBeenSet;
}

string DescribeVulInfoResponse::GetCveId() const
{
    return m_cveId;
}

bool DescribeVulInfoResponse::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string DescribeVulInfoResponse::GetReference() const
{
    return m_reference;
}

bool DescribeVulInfoResponse::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}


