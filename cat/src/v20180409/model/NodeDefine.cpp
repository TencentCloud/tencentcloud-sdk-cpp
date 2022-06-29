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

#include <tencentcloud/cat/v20180409/model/NodeDefine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

NodeDefine::NodeDefine() :
    m_nameHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_netServiceHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_iPTypeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_codeTypeHasBeenSet(false),
    m_nodeDefineStatusHasBeenSet(false)
{
}

CoreInternalOutcome NodeDefine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NetService") && !value["NetService"].IsNull())
    {
        if (!value["NetService"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.NetService` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netService = string(value["NetService"].GetString());
        m_netServiceHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("IPType") && !value["IPType"].IsNull())
    {
        if (!value["IPType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.IPType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPType = value["IPType"].GetInt64();
        m_iPTypeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.Location` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_location = value["Location"].GetInt64();
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("CodeType") && !value["CodeType"].IsNull())
    {
        if (!value["CodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.CodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeType = string(value["CodeType"].GetString());
        m_codeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeDefineStatus") && !value["NodeDefineStatus"].IsNull())
    {
        if (!value["NodeDefineStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeDefine.NodeDefineStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeDefineStatus = value["NodeDefineStatus"].GetUint64();
        m_nodeDefineStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeDefine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_netServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netService.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_iPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPType, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_location, allocator);
    }

    if (m_codeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeDefineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDefineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeDefineStatus, allocator);
    }

}


string NodeDefine::GetName() const
{
    return m_name;
}

void NodeDefine::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeDefine::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeDefine::GetCode() const
{
    return m_code;
}

void NodeDefine::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool NodeDefine::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t NodeDefine::GetType() const
{
    return m_type;
}

void NodeDefine::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NodeDefine::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NodeDefine::GetNetService() const
{
    return m_netService;
}

void NodeDefine::SetNetService(const string& _netService)
{
    m_netService = _netService;
    m_netServiceHasBeenSet = true;
}

bool NodeDefine::NetServiceHasBeenSet() const
{
    return m_netServiceHasBeenSet;
}

string NodeDefine::GetDistrict() const
{
    return m_district;
}

void NodeDefine::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool NodeDefine::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string NodeDefine::GetCity() const
{
    return m_city;
}

void NodeDefine::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool NodeDefine::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t NodeDefine::GetIPType() const
{
    return m_iPType;
}

void NodeDefine::SetIPType(const int64_t& _iPType)
{
    m_iPType = _iPType;
    m_iPTypeHasBeenSet = true;
}

bool NodeDefine::IPTypeHasBeenSet() const
{
    return m_iPTypeHasBeenSet;
}

int64_t NodeDefine::GetLocation() const
{
    return m_location;
}

void NodeDefine::SetLocation(const int64_t& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool NodeDefine::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string NodeDefine::GetCodeType() const
{
    return m_codeType;
}

void NodeDefine::SetCodeType(const string& _codeType)
{
    m_codeType = _codeType;
    m_codeTypeHasBeenSet = true;
}

bool NodeDefine::CodeTypeHasBeenSet() const
{
    return m_codeTypeHasBeenSet;
}

uint64_t NodeDefine::GetNodeDefineStatus() const
{
    return m_nodeDefineStatus;
}

void NodeDefine::SetNodeDefineStatus(const uint64_t& _nodeDefineStatus)
{
    m_nodeDefineStatus = _nodeDefineStatus;
    m_nodeDefineStatusHasBeenSet = true;
}

bool NodeDefine::NodeDefineStatusHasBeenSet() const
{
    return m_nodeDefineStatusHasBeenSet;
}

