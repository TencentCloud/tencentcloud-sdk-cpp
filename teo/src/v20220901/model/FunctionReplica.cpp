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

#include <tencentcloud/teo/v20220901/model/FunctionReplica.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FunctionReplica::FunctionReplica() :
    m_functionIdHasBeenSet(false),
    m_replicaNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false)
{
}

CoreInternalOutcome FunctionReplica::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FunctionId") && !value["FunctionId"].IsNull())
    {
        if (!value["FunctionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.FunctionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionId = string(value["FunctionId"].GetString());
        m_functionIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicaName") && !value["ReplicaName"].IsNull())
    {
        if (!value["ReplicaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.ReplicaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicaName = string(value["ReplicaName"].GetString());
        m_replicaNameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunctionReplica.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunctionReplica::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicaName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

}


string FunctionReplica::GetFunctionId() const
{
    return m_functionId;
}

void FunctionReplica::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool FunctionReplica::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string FunctionReplica::GetReplicaName() const
{
    return m_replicaName;
}

void FunctionReplica::SetReplicaName(const string& _replicaName)
{
    m_replicaName = _replicaName;
    m_replicaNameHasBeenSet = true;
}

bool FunctionReplica::ReplicaNameHasBeenSet() const
{
    return m_replicaNameHasBeenSet;
}

string FunctionReplica::GetContent() const
{
    return m_content;
}

void FunctionReplica::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool FunctionReplica::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string FunctionReplica::GetRemark() const
{
    return m_remark;
}

void FunctionReplica::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FunctionReplica::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string FunctionReplica::GetCreatedOn() const
{
    return m_createdOn;
}

void FunctionReplica::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool FunctionReplica::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string FunctionReplica::GetModifiedOn() const
{
    return m_modifiedOn;
}

void FunctionReplica::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool FunctionReplica::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

