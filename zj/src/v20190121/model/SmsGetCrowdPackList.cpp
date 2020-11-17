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

#include <tencentcloud/zj/v20190121/model/SmsGetCrowdPackList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace rapidjson;
using namespace std;

SmsGetCrowdPackList::SmsGetCrowdPackList() :
    m_createdAtHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_mD5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome SmsGetCrowdPackList::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.PhoneNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = value["PhoneNum"].GetInt64();
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("MD5") && !value["MD5"].IsNull())
    {
        if (!value["MD5"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(value["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdPackList.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsGetCrowdPackList::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_createdAtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneNum, allocator);
    }

    if (m_tagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_mD5HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string SmsGetCrowdPackList::GetCreatedAt() const
{
    return m_createdAt;
}

void SmsGetCrowdPackList::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool SmsGetCrowdPackList::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t SmsGetCrowdPackList::GetID() const
{
    return m_iD;
}

void SmsGetCrowdPackList::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SmsGetCrowdPackList::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SmsGetCrowdPackList::GetName() const
{
    return m_name;
}

void SmsGetCrowdPackList::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SmsGetCrowdPackList::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SmsGetCrowdPackList::GetStatus() const
{
    return m_status;
}

void SmsGetCrowdPackList::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SmsGetCrowdPackList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SmsGetCrowdPackList::GetPhoneNum() const
{
    return m_phoneNum;
}

void SmsGetCrowdPackList::SetPhoneNum(const int64_t& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool SmsGetCrowdPackList::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string SmsGetCrowdPackList::GetTag() const
{
    return m_tag;
}

void SmsGetCrowdPackList::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool SmsGetCrowdPackList::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string SmsGetCrowdPackList::GetMD5() const
{
    return m_mD5;
}

void SmsGetCrowdPackList::SetMD5(const string& _mD5)
{
    m_mD5 = _mD5;
    m_mD5HasBeenSet = true;
}

bool SmsGetCrowdPackList::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

string SmsGetCrowdPackList::GetFileName() const
{
    return m_fileName;
}

void SmsGetCrowdPackList::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SmsGetCrowdPackList::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string SmsGetCrowdPackList::GetDesc() const
{
    return m_desc;
}

void SmsGetCrowdPackList::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool SmsGetCrowdPackList::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

