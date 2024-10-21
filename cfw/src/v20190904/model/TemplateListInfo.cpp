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

#include <tencentcloud/cfw/v20190904/model/TemplateListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

TemplateListInfo::TemplateListInfo() :
    m_uuidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_ipStringHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rulesNumHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_iPNumHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome TemplateListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.Detail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detail = string(value["Detail"].GetString());
        m_detailHasBeenSet = true;
    }

    if (value.HasMember("IpString") && !value["IpString"].IsNull())
    {
        if (!value["IpString"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.IpString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipString = string(value["IpString"].GetString());
        m_ipStringHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RulesNum") && !value["RulesNum"].IsNull())
    {
        if (!value["RulesNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.RulesNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulesNum = value["RulesNum"].GetInt64();
        m_rulesNumHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.ProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = string(value["ProtocolType"].GetString());
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("IPNum") && !value["IPNum"].IsNull())
    {
        if (!value["IPNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.IPNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iPNum = value["IPNum"].GetInt64();
        m_iPNumHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateListInfo.IpVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = value["IpVersion"].GetInt64();
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detail.c_str(), allocator).Move(), allocator);
    }

    if (m_ipStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipString.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_rulesNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulesNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rulesNum, allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_iPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPNum, allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipVersion, allocator);
    }

}


string TemplateListInfo::GetUuid() const
{
    return m_uuid;
}

void TemplateListInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool TemplateListInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string TemplateListInfo::GetName() const
{
    return m_name;
}

void TemplateListInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TemplateListInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TemplateListInfo::GetDetail() const
{
    return m_detail;
}

void TemplateListInfo::SetDetail(const string& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool TemplateListInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string TemplateListInfo::GetIpString() const
{
    return m_ipString;
}

void TemplateListInfo::SetIpString(const string& _ipString)
{
    m_ipString = _ipString;
    m_ipStringHasBeenSet = true;
}

bool TemplateListInfo::IpStringHasBeenSet() const
{
    return m_ipStringHasBeenSet;
}

string TemplateListInfo::GetInsertTime() const
{
    return m_insertTime;
}

void TemplateListInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool TemplateListInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string TemplateListInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TemplateListInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TemplateListInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t TemplateListInfo::GetType() const
{
    return m_type;
}

void TemplateListInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TemplateListInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t TemplateListInfo::GetRulesNum() const
{
    return m_rulesNum;
}

void TemplateListInfo::SetRulesNum(const int64_t& _rulesNum)
{
    m_rulesNum = _rulesNum;
    m_rulesNumHasBeenSet = true;
}

bool TemplateListInfo::RulesNumHasBeenSet() const
{
    return m_rulesNumHasBeenSet;
}

string TemplateListInfo::GetTemplateId() const
{
    return m_templateId;
}

void TemplateListInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TemplateListInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TemplateListInfo::GetProtocolType() const
{
    return m_protocolType;
}

void TemplateListInfo::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool TemplateListInfo::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

int64_t TemplateListInfo::GetIPNum() const
{
    return m_iPNum;
}

void TemplateListInfo::SetIPNum(const int64_t& _iPNum)
{
    m_iPNum = _iPNum;
    m_iPNumHasBeenSet = true;
}

bool TemplateListInfo::IPNumHasBeenSet() const
{
    return m_iPNumHasBeenSet;
}

int64_t TemplateListInfo::GetIpVersion() const
{
    return m_ipVersion;
}

void TemplateListInfo::SetIpVersion(const int64_t& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool TemplateListInfo::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

