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

#include <tencentcloud/solar/v20181011/model/SubProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

SubProjectInfo::SubProjectInfo() :
    m_subProjectIdHasBeenSet(false),
    m_subProjectNameHasBeenSet(false),
    m_subProjectStatusHasBeenSet(false)
{
}

CoreInternalOutcome SubProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubProjectId") && !value["SubProjectId"].IsNull())
    {
        if (!value["SubProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubProjectInfo.SubProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProjectId = string(value["SubProjectId"].GetString());
        m_subProjectIdHasBeenSet = true;
    }

    if (value.HasMember("SubProjectName") && !value["SubProjectName"].IsNull())
    {
        if (!value["SubProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubProjectInfo.SubProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProjectName = string(value["SubProjectName"].GetString());
        m_subProjectNameHasBeenSet = true;
    }

    if (value.HasMember("SubProjectStatus") && !value["SubProjectStatus"].IsNull())
    {
        if (!value["SubProjectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubProjectInfo.SubProjectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProjectStatus = string(value["SubProjectStatus"].GetString());
        m_subProjectStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_subProjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_subProjectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProjectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProjectStatus.c_str(), allocator).Move(), allocator);
    }

}


string SubProjectInfo::GetSubProjectId() const
{
    return m_subProjectId;
}

void SubProjectInfo::SetSubProjectId(const string& _subProjectId)
{
    m_subProjectId = _subProjectId;
    m_subProjectIdHasBeenSet = true;
}

bool SubProjectInfo::SubProjectIdHasBeenSet() const
{
    return m_subProjectIdHasBeenSet;
}

string SubProjectInfo::GetSubProjectName() const
{
    return m_subProjectName;
}

void SubProjectInfo::SetSubProjectName(const string& _subProjectName)
{
    m_subProjectName = _subProjectName;
    m_subProjectNameHasBeenSet = true;
}

bool SubProjectInfo::SubProjectNameHasBeenSet() const
{
    return m_subProjectNameHasBeenSet;
}

string SubProjectInfo::GetSubProjectStatus() const
{
    return m_subProjectStatus;
}

void SubProjectInfo::SetSubProjectStatus(const string& _subProjectStatus)
{
    m_subProjectStatus = _subProjectStatus;
    m_subProjectStatusHasBeenSet = true;
}

bool SubProjectInfo::SubProjectStatusHasBeenSet() const
{
    return m_subProjectStatusHasBeenSet;
}

