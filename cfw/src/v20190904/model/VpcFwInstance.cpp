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

#include <tencentcloud/cfw/v20190904/model/VpcFwInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

VpcFwInstance::VpcFwInstance() :
    m_nameHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_fwDeployHasBeenSet(false),
    m_fwInsIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcFwInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VpcIds") && !value["VpcIds"].IsNull())
    {
        if (!value["VpcIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcFwInstance.VpcIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIds.push_back((*itr).GetString());
        }
        m_vpcIdsHasBeenSet = true;
    }

    if (value.HasMember("FwDeploy") && !value["FwDeploy"].IsNull())
    {
        if (!value["FwDeploy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstance.FwDeploy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fwDeploy.Deserialize(value["FwDeploy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fwDeployHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcFwInstance.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcFwInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fwDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fwDeploy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

}


string VpcFwInstance::GetName() const
{
    return m_name;
}

void VpcFwInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VpcFwInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> VpcFwInstance::GetVpcIds() const
{
    return m_vpcIds;
}

void VpcFwInstance::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool VpcFwInstance::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

FwDeploy VpcFwInstance::GetFwDeploy() const
{
    return m_fwDeploy;
}

void VpcFwInstance::SetFwDeploy(const FwDeploy& _fwDeploy)
{
    m_fwDeploy = _fwDeploy;
    m_fwDeployHasBeenSet = true;
}

bool VpcFwInstance::FwDeployHasBeenSet() const
{
    return m_fwDeployHasBeenSet;
}

string VpcFwInstance::GetFwInsId() const
{
    return m_fwInsId;
}

void VpcFwInstance::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool VpcFwInstance::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

