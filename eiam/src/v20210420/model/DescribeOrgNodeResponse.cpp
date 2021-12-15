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

#include <tencentcloud/eiam/v20210420/model/DescribeOrgNodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeOrgNodeResponse::DescribeOrgNodeResponse() :
    m_displayNameHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customizedOrgNodeIdHasBeenSet(false),
    m_parentOrgNodeIdHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_orgNodeChildInfoHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOrgNodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DisplayName") && !rsp["DisplayName"].IsNull())
    {
        if (!rsp["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(rsp["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (rsp.HasMember("LastModifiedDate") && !rsp["LastModifiedDate"].IsNull())
    {
        if (!rsp["LastModifiedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastModifiedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = string(rsp["LastModifiedDate"].GetString());
        m_lastModifiedDateHasBeenSet = true;
    }

    if (rsp.HasMember("CustomizedOrgNodeId") && !rsp["CustomizedOrgNodeId"].IsNull())
    {
        if (!rsp["CustomizedOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomizedOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customizedOrgNodeId = string(rsp["CustomizedOrgNodeId"].GetString());
        m_customizedOrgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("ParentOrgNodeId") && !rsp["ParentOrgNodeId"].IsNull())
    {
        if (!rsp["ParentOrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentOrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgNodeId = string(rsp["ParentOrgNodeId"].GetString());
        m_parentOrgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataSource") && !rsp["DataSource"].IsNull())
    {
        if (!rsp["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(rsp["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedDate") && !rsp["CreatedDate"].IsNull())
    {
        if (!rsp["CreatedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = string(rsp["CreatedDate"].GetString());
        m_createdDateHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeChildInfo") && !rsp["OrgNodeChildInfo"].IsNull())
    {
        if (!rsp["OrgNodeChildInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrgNodeChildInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OrgNodeChildInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrgNodeChildInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_orgNodeChildInfo.push_back(item);
        }
        m_orgNodeChildInfoHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeOrgNodeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_customizedOrgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizedOrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customizedOrgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentOrgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentOrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentOrgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdDate.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeChildInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeChildInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orgNodeChildInfo.begin(); itr != m_orgNodeChildInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


string DescribeOrgNodeResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeOrgNodeResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeOrgNodeResponse::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

bool DescribeOrgNodeResponse::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

string DescribeOrgNodeResponse::GetCustomizedOrgNodeId() const
{
    return m_customizedOrgNodeId;
}

bool DescribeOrgNodeResponse::CustomizedOrgNodeIdHasBeenSet() const
{
    return m_customizedOrgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetParentOrgNodeId() const
{
    return m_parentOrgNodeId;
}

bool DescribeOrgNodeResponse::ParentOrgNodeIdHasBeenSet() const
{
    return m_parentOrgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool DescribeOrgNodeResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string DescribeOrgNodeResponse::GetDataSource() const
{
    return m_dataSource;
}

bool DescribeOrgNodeResponse::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DescribeOrgNodeResponse::GetCreatedDate() const
{
    return m_createdDate;
}

bool DescribeOrgNodeResponse::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

vector<OrgNodeChildInfo> DescribeOrgNodeResponse::GetOrgNodeChildInfo() const
{
    return m_orgNodeChildInfo;
}

bool DescribeOrgNodeResponse::OrgNodeChildInfoHasBeenSet() const
{
    return m_orgNodeChildInfoHasBeenSet;
}

string DescribeOrgNodeResponse::GetDescription() const
{
    return m_description;
}

bool DescribeOrgNodeResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


