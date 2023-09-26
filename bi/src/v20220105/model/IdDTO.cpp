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

#include <tencentcloud/bi/v20220105/model/IdDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

IdDTO::IdDTO() :
    m_idHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tranIdHasBeenSet(false),
    m_tranStatusHasBeenSet(false)
{
}

CoreInternalOutcome IdDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdDTO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdDTO.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdDTO.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TranId") && !value["TranId"].IsNull())
    {
        if (!value["TranId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdDTO.TranId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tranId = string(value["TranId"].GetString());
        m_tranIdHasBeenSet = true;
    }

    if (value.HasMember("TranStatus") && !value["TranStatus"].IsNull())
    {
        if (!value["TranStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdDTO.TranStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tranStatus = value["TranStatus"].GetInt64();
        m_tranStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tranIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tranId.c_str(), allocator).Move(), allocator);
    }

    if (m_tranStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tranStatus, allocator);
    }

}


int64_t IdDTO::GetId() const
{
    return m_id;
}

void IdDTO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IdDTO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IdDTO::GetAccessKey() const
{
    return m_accessKey;
}

void IdDTO::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool IdDTO::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

uint64_t IdDTO::GetProjectId() const
{
    return m_projectId;
}

void IdDTO::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool IdDTO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string IdDTO::GetTranId() const
{
    return m_tranId;
}

void IdDTO::SetTranId(const string& _tranId)
{
    m_tranId = _tranId;
    m_tranIdHasBeenSet = true;
}

bool IdDTO::TranIdHasBeenSet() const
{
    return m_tranIdHasBeenSet;
}

int64_t IdDTO::GetTranStatus() const
{
    return m_tranStatus;
}

void IdDTO::SetTranStatus(const int64_t& _tranStatus)
{
    m_tranStatus = _tranStatus;
    m_tranStatusHasBeenSet = true;
}

bool IdDTO::TranStatusHasBeenSet() const
{
    return m_tranStatusHasBeenSet;
}

