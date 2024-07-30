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

#include <tencentcloud/cdwdoris/v20211228/model/ResourceNodeSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ResourceNodeSpec::ResourceNodeSpec() :
    m_typeHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_diskSpecHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_attachCBSSpecHasBeenSet(false)
{
}

CoreInternalOutcome ResourceNodeSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("DiskSpec") && !value["DiskSpec"].IsNull())
    {
        if (!value["DiskSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.DiskSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskSpec.Deserialize(value["DiskSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskSpecHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.Encrypt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetUint64();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.Extra` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extra.Deserialize(value["Extra"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extraHasBeenSet = true;
    }

    if (value.HasMember("AttachCBSSpec") && !value["AttachCBSSpec"].IsNull())
    {
        if (!value["AttachCBSSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceNodeSpec.AttachCBSSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_attachCBSSpec.Deserialize(value["AttachCBSSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_attachCBSSpecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceNodeSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_diskSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extra.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attachCBSSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachCBSSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_attachCBSSpec.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ResourceNodeSpec::GetType() const
{
    return m_type;
}

void ResourceNodeSpec::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceNodeSpec::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ResourceNodeSpec::GetSpecName() const
{
    return m_specName;
}

void ResourceNodeSpec::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ResourceNodeSpec::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t ResourceNodeSpec::GetCount() const
{
    return m_count;
}

void ResourceNodeSpec::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ResourceNodeSpec::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

ResourceNodeDiskSpec ResourceNodeSpec::GetDiskSpec() const
{
    return m_diskSpec;
}

void ResourceNodeSpec::SetDiskSpec(const ResourceNodeDiskSpec& _diskSpec)
{
    m_diskSpec = _diskSpec;
    m_diskSpecHasBeenSet = true;
}

bool ResourceNodeSpec::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

uint64_t ResourceNodeSpec::GetEncrypt() const
{
    return m_encrypt;
}

void ResourceNodeSpec::SetEncrypt(const uint64_t& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool ResourceNodeSpec::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

SpecExtra ResourceNodeSpec::GetExtra() const
{
    return m_extra;
}

void ResourceNodeSpec::SetExtra(const SpecExtra& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool ResourceNodeSpec::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

ResourceNodeDiskSpec ResourceNodeSpec::GetAttachCBSSpec() const
{
    return m_attachCBSSpec;
}

void ResourceNodeSpec::SetAttachCBSSpec(const ResourceNodeDiskSpec& _attachCBSSpec)
{
    m_attachCBSSpec = _attachCBSSpec;
    m_attachCBSSpecHasBeenSet = true;
}

bool ResourceNodeSpec::AttachCBSSpecHasBeenSet() const
{
    return m_attachCBSSpecHasBeenSet;
}

