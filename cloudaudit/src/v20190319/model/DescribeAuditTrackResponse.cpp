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

#include <tencentcloud/cloudaudit/v20190319/model/DescribeAuditTrackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

DescribeAuditTrackResponse::DescribeAuditTrackResponse() :
    m_nameHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventNamesHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_trackForAllMembersHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAuditTrackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ActionType") && !rsp["ActionType"].IsNull())
    {
        if (!rsp["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(rsp["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceType") && !rsp["ResourceType"].IsNull())
    {
        if (!rsp["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(rsp["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("EventNames") && !rsp["EventNames"].IsNull())
    {
        if (!rsp["EventNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventNames` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EventNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eventNames.push_back((*itr).GetString());
        }
        m_eventNamesHasBeenSet = true;
    }

    if (rsp.HasMember("Storage") && !rsp["Storage"].IsNull())
    {
        if (!rsp["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(rsp["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TrackForAllMembers") && !rsp["TrackForAllMembers"].IsNull())
    {
        if (!rsp["TrackForAllMembers"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrackForAllMembers` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trackForAllMembers = rsp["TrackForAllMembers"].GetUint64();
        m_trackForAllMembersHasBeenSet = true;
    }

    if (rsp.HasMember("Filters") && !rsp["Filters"].IsNull())
    {
        if (!rsp["Filters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Filters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filters.Deserialize(rsp["Filters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filtersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAuditTrackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_eventNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventNames.begin(); itr != m_eventNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trackForAllMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackForAllMembers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackForAllMembers, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeAuditTrackResponse::GetName() const
{
    return m_name;
}

bool DescribeAuditTrackResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAuditTrackResponse::GetActionType() const
{
    return m_actionType;
}

bool DescribeAuditTrackResponse::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string DescribeAuditTrackResponse::GetResourceType() const
{
    return m_resourceType;
}

bool DescribeAuditTrackResponse::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t DescribeAuditTrackResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAuditTrackResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeAuditTrackResponse::GetEventNames() const
{
    return m_eventNames;
}

bool DescribeAuditTrackResponse::EventNamesHasBeenSet() const
{
    return m_eventNamesHasBeenSet;
}

Storage DescribeAuditTrackResponse::GetStorage() const
{
    return m_storage;
}

bool DescribeAuditTrackResponse::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DescribeAuditTrackResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAuditTrackResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeAuditTrackResponse::GetTrackForAllMembers() const
{
    return m_trackForAllMembers;
}

bool DescribeAuditTrackResponse::TrackForAllMembersHasBeenSet() const
{
    return m_trackForAllMembersHasBeenSet;
}

Filter DescribeAuditTrackResponse::GetFilters() const
{
    return m_filters;
}

bool DescribeAuditTrackResponse::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


