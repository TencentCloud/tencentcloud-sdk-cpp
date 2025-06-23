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

#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DBEndpointInfo::DBEndpointInfo() :
    m_regionHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_databaseTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_supplierHasBeenSet(false),
    m_extraAttrHasBeenSet(false),
    m_databaseNetEnvHasBeenSet(false),
    m_connectTypeHasBeenSet(false),
    m_ccnOwnerUinHasBeenSet(false)
{
}

CoreInternalOutcome DBEndpointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("DatabaseType") && !value["DatabaseType"].IsNull())
    {
        if (!value["DatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.DatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseType = string(value["DatabaseType"].GetString());
        m_databaseTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.Info` is not array type"));

        const rapidjson::Value &tmpValue = value["Info"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_info.push_back(item);
        }
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Supplier") && !value["Supplier"].IsNull())
    {
        if (!value["Supplier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.Supplier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supplier = string(value["Supplier"].GetString());
        m_supplierHasBeenSet = true;
    }

    if (value.HasMember("ExtraAttr") && !value["ExtraAttr"].IsNull())
    {
        if (!value["ExtraAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.ExtraAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValuePairOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttr.push_back(item);
        }
        m_extraAttrHasBeenSet = true;
    }

    if (value.HasMember("DatabaseNetEnv") && !value["DatabaseNetEnv"].IsNull())
    {
        if (!value["DatabaseNetEnv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.DatabaseNetEnv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseNetEnv = string(value["DatabaseNetEnv"].GetString());
        m_databaseNetEnvHasBeenSet = true;
    }

    if (value.HasMember("ConnectType") && !value["ConnectType"].IsNull())
    {
        if (!value["ConnectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.ConnectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectType = string(value["ConnectType"].GetString());
        m_connectTypeHasBeenSet = true;
    }

    if (value.HasMember("CcnOwnerUin") && !value["CcnOwnerUin"].IsNull())
    {
        if (!value["CcnOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBEndpointInfo.CcnOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnOwnerUin = string(value["CcnOwnerUin"].GetString());
        m_ccnOwnerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBEndpointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_info.begin(); itr != m_info.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Supplier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supplier.c_str(), allocator).Move(), allocator);
    }

    if (m_extraAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttr.begin(); itr != m_extraAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_databaseNetEnvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseNetEnv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseNetEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectType.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnOwnerUin.c_str(), allocator).Move(), allocator);
    }

}


string DBEndpointInfo::GetRegion() const
{
    return m_region;
}

void DBEndpointInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBEndpointInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBEndpointInfo::GetAccessType() const
{
    return m_accessType;
}

void DBEndpointInfo::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DBEndpointInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DBEndpointInfo::GetDatabaseType() const
{
    return m_databaseType;
}

void DBEndpointInfo::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool DBEndpointInfo::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}

string DBEndpointInfo::GetNodeType() const
{
    return m_nodeType;
}

void DBEndpointInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DBEndpointInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

vector<DBInfo> DBEndpointInfo::GetInfo() const
{
    return m_info;
}

void DBEndpointInfo::SetInfo(const vector<DBInfo>& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool DBEndpointInfo::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string DBEndpointInfo::GetSupplier() const
{
    return m_supplier;
}

void DBEndpointInfo::SetSupplier(const string& _supplier)
{
    m_supplier = _supplier;
    m_supplierHasBeenSet = true;
}

bool DBEndpointInfo::SupplierHasBeenSet() const
{
    return m_supplierHasBeenSet;
}

vector<KeyValuePairOption> DBEndpointInfo::GetExtraAttr() const
{
    return m_extraAttr;
}

void DBEndpointInfo::SetExtraAttr(const vector<KeyValuePairOption>& _extraAttr)
{
    m_extraAttr = _extraAttr;
    m_extraAttrHasBeenSet = true;
}

bool DBEndpointInfo::ExtraAttrHasBeenSet() const
{
    return m_extraAttrHasBeenSet;
}

string DBEndpointInfo::GetDatabaseNetEnv() const
{
    return m_databaseNetEnv;
}

void DBEndpointInfo::SetDatabaseNetEnv(const string& _databaseNetEnv)
{
    m_databaseNetEnv = _databaseNetEnv;
    m_databaseNetEnvHasBeenSet = true;
}

bool DBEndpointInfo::DatabaseNetEnvHasBeenSet() const
{
    return m_databaseNetEnvHasBeenSet;
}

string DBEndpointInfo::GetConnectType() const
{
    return m_connectType;
}

void DBEndpointInfo::SetConnectType(const string& _connectType)
{
    m_connectType = _connectType;
    m_connectTypeHasBeenSet = true;
}

bool DBEndpointInfo::ConnectTypeHasBeenSet() const
{
    return m_connectTypeHasBeenSet;
}

string DBEndpointInfo::GetCcnOwnerUin() const
{
    return m_ccnOwnerUin;
}

void DBEndpointInfo::SetCcnOwnerUin(const string& _ccnOwnerUin)
{
    m_ccnOwnerUin = _ccnOwnerUin;
    m_ccnOwnerUinHasBeenSet = true;
}

bool DBEndpointInfo::CcnOwnerUinHasBeenSet() const
{
    return m_ccnOwnerUinHasBeenSet;
}

