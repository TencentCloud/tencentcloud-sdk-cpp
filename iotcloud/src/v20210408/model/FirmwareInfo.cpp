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

#include <tencentcloud/iotcloud/v20210408/model/FirmwareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

FirmwareInfo::FirmwareInfo() :
    m_versionHasBeenSet(false),
    m_md5sumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_createUserIdHasBeenSet(false),
    m_userDefinedHasBeenSet(false)
{
}

CoreInternalOutcome FirmwareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Md5sum") && !value["Md5sum"].IsNull())
    {
        if (!value["Md5sum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.Md5sum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5sum = string(value["Md5sum"].GetString());
        m_md5sumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateUserId") && !value["CreateUserId"].IsNull())
    {
        if (!value["CreateUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.CreateUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUserId = value["CreateUserId"].GetUint64();
        m_createUserIdHasBeenSet = true;
    }

    if (value.HasMember("UserDefined") && !value["UserDefined"].IsNull())
    {
        if (!value["UserDefined"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirmwareInfo.UserDefined` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefined = string(value["UserDefined"].GetString());
        m_userDefinedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirmwareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_md5sumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5sum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5sum.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUserId, allocator);
    }

    if (m_userDefinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefined.c_str(), allocator).Move(), allocator);
    }

}


string FirmwareInfo::GetVersion() const
{
    return m_version;
}

void FirmwareInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool FirmwareInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string FirmwareInfo::GetMd5sum() const
{
    return m_md5sum;
}

void FirmwareInfo::SetMd5sum(const string& _md5sum)
{
    m_md5sum = _md5sum;
    m_md5sumHasBeenSet = true;
}

bool FirmwareInfo::Md5sumHasBeenSet() const
{
    return m_md5sumHasBeenSet;
}

uint64_t FirmwareInfo::GetCreateTime() const
{
    return m_createTime;
}

void FirmwareInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FirmwareInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FirmwareInfo::GetProductName() const
{
    return m_productName;
}

void FirmwareInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool FirmwareInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string FirmwareInfo::GetName() const
{
    return m_name;
}

void FirmwareInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FirmwareInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FirmwareInfo::GetDescription() const
{
    return m_description;
}

void FirmwareInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FirmwareInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FirmwareInfo::GetProductId() const
{
    return m_productId;
}

void FirmwareInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool FirmwareInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string FirmwareInfo::GetFwType() const
{
    return m_fwType;
}

void FirmwareInfo::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool FirmwareInfo::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

uint64_t FirmwareInfo::GetCreateUserId() const
{
    return m_createUserId;
}

void FirmwareInfo::SetCreateUserId(const uint64_t& _createUserId)
{
    m_createUserId = _createUserId;
    m_createUserIdHasBeenSet = true;
}

bool FirmwareInfo::CreateUserIdHasBeenSet() const
{
    return m_createUserIdHasBeenSet;
}

string FirmwareInfo::GetUserDefined() const
{
    return m_userDefined;
}

void FirmwareInfo::SetUserDefined(const string& _userDefined)
{
    m_userDefined = _userDefined;
    m_userDefinedHasBeenSet = true;
}

bool FirmwareInfo::UserDefinedHasBeenSet() const
{
    return m_userDefinedHasBeenSet;
}

