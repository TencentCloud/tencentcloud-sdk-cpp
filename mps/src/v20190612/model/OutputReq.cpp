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

#include <tencentcloud/mps/v20190612/model/OutputReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

OutputReq::OutputReq() :
    m_typeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_manifestConfHasBeenSet(false),
    m_dashManifestConfHasBeenSet(false)
{
}

CoreInternalOutcome OutputReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReq.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReq.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ManifestName") && !value["ManifestName"].IsNull())
    {
        if (!value["ManifestName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReq.ManifestName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manifestName = string(value["ManifestName"].GetString());
        m_manifestNameHasBeenSet = true;
    }

    if (value.HasMember("ManifestConf") && !value["ManifestConf"].IsNull())
    {
        if (!value["ManifestConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReq.ManifestConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_manifestConf.Deserialize(value["ManifestConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_manifestConfHasBeenSet = true;
    }

    if (value.HasMember("DashManifestConf") && !value["DashManifestConf"].IsNull())
    {
        if (!value["DashManifestConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OutputReq.DashManifestConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dashManifestConf.Deserialize(value["DashManifestConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dashManifestConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManifestName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manifestName.c_str(), allocator).Move(), allocator);
    }

    if (m_manifestConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManifestConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_manifestConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dashManifestConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashManifestConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dashManifestConf.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OutputReq::GetType() const
{
    return m_type;
}

void OutputReq::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OutputReq::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string OutputReq::GetGroupName() const
{
    return m_groupName;
}

void OutputReq::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool OutputReq::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string OutputReq::GetManifestName() const
{
    return m_manifestName;
}

void OutputReq::SetManifestName(const string& _manifestName)
{
    m_manifestName = _manifestName;
    m_manifestNameHasBeenSet = true;
}

bool OutputReq::ManifestNameHasBeenSet() const
{
    return m_manifestNameHasBeenSet;
}

ManifestInfo OutputReq::GetManifestConf() const
{
    return m_manifestConf;
}

void OutputReq::SetManifestConf(const ManifestInfo& _manifestConf)
{
    m_manifestConf = _manifestConf;
    m_manifestConfHasBeenSet = true;
}

bool OutputReq::ManifestConfHasBeenSet() const
{
    return m_manifestConfHasBeenSet;
}

DashManifestInfo OutputReq::GetDashManifestConf() const
{
    return m_dashManifestConf;
}

void OutputReq::SetDashManifestConf(const DashManifestInfo& _dashManifestConf)
{
    m_dashManifestConf = _dashManifestConf;
    m_dashManifestConfHasBeenSet = true;
}

bool OutputReq::DashManifestConfHasBeenSet() const
{
    return m_dashManifestConfHasBeenSet;
}

