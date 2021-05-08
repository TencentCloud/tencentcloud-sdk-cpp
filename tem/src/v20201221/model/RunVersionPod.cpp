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

#include <tencentcloud/tem/v20201221/model/RunVersionPod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

RunVersionPod::RunVersionPod() :
    m_webshellHasBeenSet(false),
    m_podIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_podIpHasBeenSet(false)
{
}

CoreInternalOutcome RunVersionPod::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Webshell") && !value["Webshell"].IsNull())
    {
        if (!value["Webshell"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunVersionPod.Webshell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webshell = string(value["Webshell"].GetString());
        m_webshellHasBeenSet = true;
    }

    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunVersionPod.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunVersionPod.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunVersionPod.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `RunVersionPod.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunVersionPod::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_webshellHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Webshell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_webshell.c_str(), allocator).Move(), allocator);
    }

    if (m_podIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_podIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

}


string RunVersionPod::GetWebshell() const
{
    return m_webshell;
}

void RunVersionPod::SetWebshell(const string& _webshell)
{
    m_webshell = _webshell;
    m_webshellHasBeenSet = true;
}

bool RunVersionPod::WebshellHasBeenSet() const
{
    return m_webshellHasBeenSet;
}

string RunVersionPod::GetPodId() const
{
    return m_podId;
}

void RunVersionPod::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool RunVersionPod::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

string RunVersionPod::GetStatus() const
{
    return m_status;
}

void RunVersionPod::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunVersionPod::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RunVersionPod::GetCreateTime() const
{
    return m_createTime;
}

void RunVersionPod::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RunVersionPod::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RunVersionPod::GetPodIp() const
{
    return m_podIp;
}

void RunVersionPod::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RunVersionPod::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

