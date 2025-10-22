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

#include <tencentcloud/csip/v20221121/model/SourceIPVpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SourceIPVpcInfo::SourceIPVpcInfo() :
    m_nameHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_vpcIDHasBeenSet(false),
    m_vpcNameHasBeenSet(false)
{
}

CoreInternalOutcome SourceIPVpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPVpcInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPVpcInfo.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("VpcID") && !value["VpcID"].IsNull())
    {
        if (!value["VpcID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPVpcInfo.VpcID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcID = string(value["VpcID"].GetString());
        m_vpcIDHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceIPVpcInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceIPVpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_vpcIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcID.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

}


string SourceIPVpcInfo::GetName() const
{
    return m_name;
}

void SourceIPVpcInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SourceIPVpcInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t SourceIPVpcInfo::GetAppID() const
{
    return m_appID;
}

void SourceIPVpcInfo::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool SourceIPVpcInfo::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string SourceIPVpcInfo::GetVpcID() const
{
    return m_vpcID;
}

void SourceIPVpcInfo::SetVpcID(const string& _vpcID)
{
    m_vpcID = _vpcID;
    m_vpcIDHasBeenSet = true;
}

bool SourceIPVpcInfo::VpcIDHasBeenSet() const
{
    return m_vpcIDHasBeenSet;
}

string SourceIPVpcInfo::GetVpcName() const
{
    return m_vpcName;
}

void SourceIPVpcInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool SourceIPVpcInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

