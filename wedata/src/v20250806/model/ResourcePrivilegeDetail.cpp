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

#include <tencentcloud/wedata/v20250806/model/ResourcePrivilegeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ResourcePrivilegeDetail::ResourcePrivilegeDetail() :
    m_resourceHasBeenSet(false),
    m_subjectDetailsHasBeenSet(false),
    m_permissionDetailsHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePrivilegeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePrivilegeDetail.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("SubjectDetails") && !value["SubjectDetails"].IsNull())
    {
        if (!value["SubjectDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePrivilegeDetail.SubjectDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubjectInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subjectDetails.push_back(item);
        }
        m_subjectDetailsHasBeenSet = true;
    }

    if (value.HasMember("PermissionDetails") && !value["PermissionDetails"].IsNull())
    {
        if (!value["PermissionDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePrivilegeDetail.PermissionDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivilegeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissionDetails.push_back(item);
        }
        m_permissionDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePrivilegeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subjectDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subjectDetails.begin(); itr != m_subjectDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_permissionDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionDetails.begin(); itr != m_permissionDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


PrivilegeResource ResourcePrivilegeDetail::GetResource() const
{
    return m_resource;
}

void ResourcePrivilegeDetail::SetResource(const PrivilegeResource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourcePrivilegeDetail::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<SubjectInfo> ResourcePrivilegeDetail::GetSubjectDetails() const
{
    return m_subjectDetails;
}

void ResourcePrivilegeDetail::SetSubjectDetails(const vector<SubjectInfo>& _subjectDetails)
{
    m_subjectDetails = _subjectDetails;
    m_subjectDetailsHasBeenSet = true;
}

bool ResourcePrivilegeDetail::SubjectDetailsHasBeenSet() const
{
    return m_subjectDetailsHasBeenSet;
}

vector<PrivilegeInfo> ResourcePrivilegeDetail::GetPermissionDetails() const
{
    return m_permissionDetails;
}

void ResourcePrivilegeDetail::SetPermissionDetails(const vector<PrivilegeInfo>& _permissionDetails)
{
    m_permissionDetails = _permissionDetails;
    m_permissionDetailsHasBeenSet = true;
}

bool ResourcePrivilegeDetail::PermissionDetailsHasBeenSet() const
{
    return m_permissionDetailsHasBeenSet;
}

