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

#include <tencentcloud/tcss/v20201101/model/ProcessBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ProcessBaseInfo::ProcessBaseInfo() :
    m_processStartUserHasBeenSet(false),
    m_processUserGroupHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processParamHasBeenSet(false)
{
}

CoreInternalOutcome ProcessBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessStartUser") && !value["ProcessStartUser"].IsNull())
    {
        if (!value["ProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessBaseInfo.ProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartUser = string(value["ProcessStartUser"].GetString());
        m_processStartUserHasBeenSet = true;
    }

    if (value.HasMember("ProcessUserGroup") && !value["ProcessUserGroup"].IsNull())
    {
        if (!value["ProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessBaseInfo.ProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processUserGroup = string(value["ProcessUserGroup"].GetString());
        m_processUserGroupHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessBaseInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("ProcessParam") && !value["ProcessParam"].IsNull())
    {
        if (!value["ProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessBaseInfo.ProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processParam = string(value["ProcessParam"].GetString());
        m_processParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_processUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processParam.c_str(), allocator).Move(), allocator);
    }

}


string ProcessBaseInfo::GetProcessStartUser() const
{
    return m_processStartUser;
}

void ProcessBaseInfo::SetProcessStartUser(const string& _processStartUser)
{
    m_processStartUser = _processStartUser;
    m_processStartUserHasBeenSet = true;
}

bool ProcessBaseInfo::ProcessStartUserHasBeenSet() const
{
    return m_processStartUserHasBeenSet;
}

string ProcessBaseInfo::GetProcessUserGroup() const
{
    return m_processUserGroup;
}

void ProcessBaseInfo::SetProcessUserGroup(const string& _processUserGroup)
{
    m_processUserGroup = _processUserGroup;
    m_processUserGroupHasBeenSet = true;
}

bool ProcessBaseInfo::ProcessUserGroupHasBeenSet() const
{
    return m_processUserGroupHasBeenSet;
}

string ProcessBaseInfo::GetProcessPath() const
{
    return m_processPath;
}

void ProcessBaseInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool ProcessBaseInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string ProcessBaseInfo::GetProcessParam() const
{
    return m_processParam;
}

void ProcessBaseInfo::SetProcessParam(const string& _processParam)
{
    m_processParam = _processParam;
    m_processParamHasBeenSet = true;
}

bool ProcessBaseInfo::ProcessParamHasBeenSet() const
{
    return m_processParamHasBeenSet;
}

