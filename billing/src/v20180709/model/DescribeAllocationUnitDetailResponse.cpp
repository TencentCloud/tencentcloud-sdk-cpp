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

#include <tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocationUnitDetailResponse::DescribeAllocationUnitDetailResponse() :
    m_idHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_treeNodeUniqKeyHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllocationUnitDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ParentId") && !rsp["ParentId"].IsNull())
    {
        if (!rsp["ParentId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ParentId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = rsp["ParentId"].GetUint64();
        m_parentIdHasBeenSet = true;
    }

    if (rsp.HasMember("SourceName") && !rsp["SourceName"].IsNull())
    {
        if (!rsp["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(rsp["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("SourceId") && !rsp["SourceId"].IsNull())
    {
        if (!rsp["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(rsp["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("TreeNodeUniqKey") && !rsp["TreeNodeUniqKey"].IsNull())
    {
        if (!rsp["TreeNodeUniqKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TreeNodeUniqKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treeNodeUniqKey = string(rsp["TreeNodeUniqKey"].GetString());
        m_treeNodeUniqKeyHasBeenSet = true;
    }

    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = rsp["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAllocationUnitDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_treeNodeUniqKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreeNodeUniqKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treeNodeUniqKey.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
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


uint64_t DescribeAllocationUnitDetailResponse::GetId() const
{
    return m_id;
}

bool DescribeAllocationUnitDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetUin() const
{
    return m_uin;
}

bool DescribeAllocationUnitDetailResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeAllocationUnitDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAllocationUnitDetailResponse::GetParentId() const
{
    return m_parentId;
}

bool DescribeAllocationUnitDetailResponse::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetSourceName() const
{
    return m_sourceName;
}

bool DescribeAllocationUnitDetailResponse::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetSourceId() const
{
    return m_sourceId;
}

bool DescribeAllocationUnitDetailResponse::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeAllocationUnitDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeAllocationUnitDetailResponse::GetTreeNodeUniqKey() const
{
    return m_treeNodeUniqKey;
}

bool DescribeAllocationUnitDetailResponse::TreeNodeUniqKeyHasBeenSet() const
{
    return m_treeNodeUniqKeyHasBeenSet;
}

uint64_t DescribeAllocationUnitDetailResponse::GetRuleId() const
{
    return m_ruleId;
}

bool DescribeAllocationUnitDetailResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


