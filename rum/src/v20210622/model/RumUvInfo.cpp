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

#include <tencentcloud/rum/v20210622/model/RumUvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

RumUvInfo::RumUvInfo() :
    m_projectIdHasBeenSet(false),
    m_uvHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome RumUvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumUvInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Uv") && !value["Uv"].IsNull())
    {
        if (!value["Uv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumUvInfo.Uv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uv = string(value["Uv"].GetString());
        m_uvHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumUvInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RumUvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_uvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uv.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t RumUvInfo::GetProjectId() const
{
    return m_projectId;
}

void RumUvInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RumUvInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RumUvInfo::GetUv() const
{
    return m_uv;
}

void RumUvInfo::SetUv(const string& _uv)
{
    m_uv = _uv;
    m_uvHasBeenSet = true;
}

bool RumUvInfo::UvHasBeenSet() const
{
    return m_uvHasBeenSet;
}

string RumUvInfo::GetCreateTime() const
{
    return m_createTime;
}

void RumUvInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RumUvInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

