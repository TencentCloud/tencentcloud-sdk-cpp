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

#include <tencentcloud/tke/v20180525/model/SubnetInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

SubnetInfos::SubnetInfos() :
    m_subnetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_osHasBeenSet(false),
    m_archHasBeenSet(false)
{
}

CoreInternalOutcome SubnetInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfos.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfos.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroups") && !value["SecurityGroups"].IsNull())
    {
        if (!value["SecurityGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubnetInfos.SecurityGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroups.push_back((*itr).GetString());
        }
        m_securityGroupsHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfos.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("Arch") && !value["Arch"].IsNull())
    {
        if (!value["Arch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetInfos.Arch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arch = string(value["Arch"].GetString());
        m_archHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubnetInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroups.begin(); itr != m_securityGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_archHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arch.c_str(), allocator).Move(), allocator);
    }

}


string SubnetInfos::GetSubnetId() const
{
    return m_subnetId;
}

void SubnetInfos::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool SubnetInfos::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string SubnetInfos::GetName() const
{
    return m_name;
}

void SubnetInfos::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubnetInfos::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> SubnetInfos::GetSecurityGroups() const
{
    return m_securityGroups;
}

void SubnetInfos::SetSecurityGroups(const vector<string>& _securityGroups)
{
    m_securityGroups = _securityGroups;
    m_securityGroupsHasBeenSet = true;
}

bool SubnetInfos::SecurityGroupsHasBeenSet() const
{
    return m_securityGroupsHasBeenSet;
}

string SubnetInfos::GetOs() const
{
    return m_os;
}

void SubnetInfos::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool SubnetInfos::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string SubnetInfos::GetArch() const
{
    return m_arch;
}

void SubnetInfos::SetArch(const string& _arch)
{
    m_arch = _arch;
    m_archHasBeenSet = true;
}

bool SubnetInfos::ArchHasBeenSet() const
{
    return m_archHasBeenSet;
}

