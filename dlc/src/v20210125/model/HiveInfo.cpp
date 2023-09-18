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

#include <tencentcloud/dlc/v20210125/model/HiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

HiveInfo::HiveInfo() :
    m_metaStoreUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_userHasBeenSet(false),
    m_highAvailabilityHasBeenSet(false),
    m_bucketUrlHasBeenSet(false),
    m_hdfsPropertiesHasBeenSet(false),
    m_mysqlHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_hiveVersionHasBeenSet(false),
    m_kerberosInfoHasBeenSet(false),
    m_kerberosEnableHasBeenSet(false)
{
}

CoreInternalOutcome HiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaStoreUrl") && !value["MetaStoreUrl"].IsNull())
    {
        if (!value["MetaStoreUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.MetaStoreUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaStoreUrl = string(value["MetaStoreUrl"].GetString());
        m_metaStoreUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("HighAvailability") && !value["HighAvailability"].IsNull())
    {
        if (!value["HighAvailability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.HighAvailability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_highAvailability = value["HighAvailability"].GetBool();
        m_highAvailabilityHasBeenSet = true;
    }

    if (value.HasMember("BucketUrl") && !value["BucketUrl"].IsNull())
    {
        if (!value["BucketUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.BucketUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketUrl = string(value["BucketUrl"].GetString());
        m_bucketUrlHasBeenSet = true;
    }

    if (value.HasMember("HdfsProperties") && !value["HdfsProperties"].IsNull())
    {
        if (!value["HdfsProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.HdfsProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hdfsProperties = string(value["HdfsProperties"].GetString());
        m_hdfsPropertiesHasBeenSet = true;
    }

    if (value.HasMember("Mysql") && !value["Mysql"].IsNull())
    {
        if (!value["Mysql"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.Mysql` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mysql.Deserialize(value["Mysql"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mysqlHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("HiveVersion") && !value["HiveVersion"].IsNull())
    {
        if (!value["HiveVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.HiveVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveVersion = string(value["HiveVersion"].GetString());
        m_hiveVersionHasBeenSet = true;
    }

    if (value.HasMember("KerberosInfo") && !value["KerberosInfo"].IsNull())
    {
        if (!value["KerberosInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.KerberosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kerberosInfo.Deserialize(value["KerberosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kerberosInfoHasBeenSet = true;
    }

    if (value.HasMember("KerberosEnable") && !value["KerberosEnable"].IsNull())
    {
        if (!value["KerberosEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HiveInfo.KerberosEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_kerberosEnable = value["KerberosEnable"].GetBool();
        m_kerberosEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaStoreUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaStoreUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaStoreUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_highAvailabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighAvailability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highAvailability, allocator);
    }

    if (m_bucketUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_hdfsPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HdfsProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hdfsProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_mysqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mysql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mysql.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_hiveVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kerberosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KerberosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kerberosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kerberosEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KerberosEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kerberosEnable, allocator);
    }

}


string HiveInfo::GetMetaStoreUrl() const
{
    return m_metaStoreUrl;
}

void HiveInfo::SetMetaStoreUrl(const string& _metaStoreUrl)
{
    m_metaStoreUrl = _metaStoreUrl;
    m_metaStoreUrlHasBeenSet = true;
}

bool HiveInfo::MetaStoreUrlHasBeenSet() const
{
    return m_metaStoreUrlHasBeenSet;
}

string HiveInfo::GetType() const
{
    return m_type;
}

void HiveInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HiveInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DatasourceConnectionLocation HiveInfo::GetLocation() const
{
    return m_location;
}

void HiveInfo::SetLocation(const DatasourceConnectionLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool HiveInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string HiveInfo::GetUser() const
{
    return m_user;
}

void HiveInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool HiveInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

bool HiveInfo::GetHighAvailability() const
{
    return m_highAvailability;
}

void HiveInfo::SetHighAvailability(const bool& _highAvailability)
{
    m_highAvailability = _highAvailability;
    m_highAvailabilityHasBeenSet = true;
}

bool HiveInfo::HighAvailabilityHasBeenSet() const
{
    return m_highAvailabilityHasBeenSet;
}

string HiveInfo::GetBucketUrl() const
{
    return m_bucketUrl;
}

void HiveInfo::SetBucketUrl(const string& _bucketUrl)
{
    m_bucketUrl = _bucketUrl;
    m_bucketUrlHasBeenSet = true;
}

bool HiveInfo::BucketUrlHasBeenSet() const
{
    return m_bucketUrlHasBeenSet;
}

string HiveInfo::GetHdfsProperties() const
{
    return m_hdfsProperties;
}

void HiveInfo::SetHdfsProperties(const string& _hdfsProperties)
{
    m_hdfsProperties = _hdfsProperties;
    m_hdfsPropertiesHasBeenSet = true;
}

bool HiveInfo::HdfsPropertiesHasBeenSet() const
{
    return m_hdfsPropertiesHasBeenSet;
}

MysqlInfo HiveInfo::GetMysql() const
{
    return m_mysql;
}

void HiveInfo::SetMysql(const MysqlInfo& _mysql)
{
    m_mysql = _mysql;
    m_mysqlHasBeenSet = true;
}

bool HiveInfo::MysqlHasBeenSet() const
{
    return m_mysqlHasBeenSet;
}

string HiveInfo::GetInstanceId() const
{
    return m_instanceId;
}

void HiveInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HiveInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HiveInfo::GetInstanceName() const
{
    return m_instanceName;
}

void HiveInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool HiveInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string HiveInfo::GetHiveVersion() const
{
    return m_hiveVersion;
}

void HiveInfo::SetHiveVersion(const string& _hiveVersion)
{
    m_hiveVersion = _hiveVersion;
    m_hiveVersionHasBeenSet = true;
}

bool HiveInfo::HiveVersionHasBeenSet() const
{
    return m_hiveVersionHasBeenSet;
}

KerberosInfo HiveInfo::GetKerberosInfo() const
{
    return m_kerberosInfo;
}

void HiveInfo::SetKerberosInfo(const KerberosInfo& _kerberosInfo)
{
    m_kerberosInfo = _kerberosInfo;
    m_kerberosInfoHasBeenSet = true;
}

bool HiveInfo::KerberosInfoHasBeenSet() const
{
    return m_kerberosInfoHasBeenSet;
}

bool HiveInfo::GetKerberosEnable() const
{
    return m_kerberosEnable;
}

void HiveInfo::SetKerberosEnable(const bool& _kerberosEnable)
{
    m_kerberosEnable = _kerberosEnable;
    m_kerberosEnableHasBeenSet = true;
}

bool HiveInfo::KerberosEnableHasBeenSet() const
{
    return m_kerberosEnableHasBeenSet;
}

