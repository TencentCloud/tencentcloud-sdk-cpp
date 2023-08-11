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

#include <tencentcloud/ckafka/v20190819/model/EsParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

EsParam::EsParam() :
    m_resourceHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_selfBuiltHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_dropInvalidMessageHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_dateFormatHasBeenSet(false),
    m_contentKeyHasBeenSet(false),
    m_dropInvalidJsonMessageHasBeenSet(false),
    m_documentIdFieldHasBeenSet(false),
    m_indexTypeHasBeenSet(false),
    m_dropClsHasBeenSet(false),
    m_databasePrimaryKeyHasBeenSet(false),
    m_dropDlqHasBeenSet(false),
    m_recordMappingListHasBeenSet(false),
    m_dateFieldHasBeenSet(false),
    m_recordMappingModeHasBeenSet(false)
{
}

CoreInternalOutcome EsParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("DropInvalidMessage") && !value["DropInvalidMessage"].IsNull())
    {
        if (!value["DropInvalidMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DropInvalidMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidMessage = value["DropInvalidMessage"].GetBool();
        m_dropInvalidMessageHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("DateFormat") && !value["DateFormat"].IsNull())
    {
        if (!value["DateFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DateFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateFormat = string(value["DateFormat"].GetString());
        m_dateFormatHasBeenSet = true;
    }

    if (value.HasMember("ContentKey") && !value["ContentKey"].IsNull())
    {
        if (!value["ContentKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.ContentKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentKey = string(value["ContentKey"].GetString());
        m_contentKeyHasBeenSet = true;
    }

    if (value.HasMember("DropInvalidJsonMessage") && !value["DropInvalidJsonMessage"].IsNull())
    {
        if (!value["DropInvalidJsonMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DropInvalidJsonMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidJsonMessage = value["DropInvalidJsonMessage"].GetBool();
        m_dropInvalidJsonMessageHasBeenSet = true;
    }

    if (value.HasMember("DocumentIdField") && !value["DocumentIdField"].IsNull())
    {
        if (!value["DocumentIdField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DocumentIdField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_documentIdField = string(value["DocumentIdField"].GetString());
        m_documentIdFieldHasBeenSet = true;
    }

    if (value.HasMember("IndexType") && !value["IndexType"].IsNull())
    {
        if (!value["IndexType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.IndexType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexType = string(value["IndexType"].GetString());
        m_indexTypeHasBeenSet = true;
    }

    if (value.HasMember("DropCls") && !value["DropCls"].IsNull())
    {
        if (!value["DropCls"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DropCls` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropCls.Deserialize(value["DropCls"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropClsHasBeenSet = true;
    }

    if (value.HasMember("DatabasePrimaryKey") && !value["DatabasePrimaryKey"].IsNull())
    {
        if (!value["DatabasePrimaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DatabasePrimaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databasePrimaryKey = string(value["DatabasePrimaryKey"].GetString());
        m_databasePrimaryKeyHasBeenSet = true;
    }

    if (value.HasMember("DropDlq") && !value["DropDlq"].IsNull())
    {
        if (!value["DropDlq"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DropDlq` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropDlq.Deserialize(value["DropDlq"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropDlqHasBeenSet = true;
    }

    if (value.HasMember("RecordMappingList") && !value["RecordMappingList"].IsNull())
    {
        if (!value["RecordMappingList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EsParam.RecordMappingList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordMappingList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EsRecordMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordMappingList.push_back(item);
        }
        m_recordMappingListHasBeenSet = true;
    }

    if (value.HasMember("DateField") && !value["DateField"].IsNull())
    {
        if (!value["DateField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.DateField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateField = string(value["DateField"].GetString());
        m_dateFieldHasBeenSet = true;
    }

    if (value.HasMember("RecordMappingMode") && !value["RecordMappingMode"].IsNull())
    {
        if (!value["RecordMappingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsParam.RecordMappingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordMappingMode = string(value["RecordMappingMode"].GetString());
        m_recordMappingModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_dropInvalidMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidMessage, allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_dateFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_contentKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dropInvalidJsonMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidJsonMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidJsonMessage, allocator);
    }

    if (m_documentIdFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentIdField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_documentIdField.c_str(), allocator).Move(), allocator);
    }

    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

    if (m_dropClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropCls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropCls.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databasePrimaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databasePrimaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dropDlqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropDlq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropDlq.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recordMappingListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMappingList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordMappingList.begin(); itr != m_recordMappingList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dateFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateField.c_str(), allocator).Move(), allocator);
    }

    if (m_recordMappingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordMappingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordMappingMode.c_str(), allocator).Move(), allocator);
    }

}


string EsParam::GetResource() const
{
    return m_resource;
}

void EsParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool EsParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

int64_t EsParam::GetPort() const
{
    return m_port;
}

void EsParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool EsParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string EsParam::GetUserName() const
{
    return m_userName;
}

void EsParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool EsParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string EsParam::GetPassword() const
{
    return m_password;
}

void EsParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool EsParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool EsParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void EsParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool EsParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

string EsParam::GetServiceVip() const
{
    return m_serviceVip;
}

void EsParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool EsParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string EsParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void EsParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool EsParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

bool EsParam::GetDropInvalidMessage() const
{
    return m_dropInvalidMessage;
}

void EsParam::SetDropInvalidMessage(const bool& _dropInvalidMessage)
{
    m_dropInvalidMessage = _dropInvalidMessage;
    m_dropInvalidMessageHasBeenSet = true;
}

bool EsParam::DropInvalidMessageHasBeenSet() const
{
    return m_dropInvalidMessageHasBeenSet;
}

string EsParam::GetIndex() const
{
    return m_index;
}

void EsParam::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool EsParam::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string EsParam::GetDateFormat() const
{
    return m_dateFormat;
}

void EsParam::SetDateFormat(const string& _dateFormat)
{
    m_dateFormat = _dateFormat;
    m_dateFormatHasBeenSet = true;
}

bool EsParam::DateFormatHasBeenSet() const
{
    return m_dateFormatHasBeenSet;
}

string EsParam::GetContentKey() const
{
    return m_contentKey;
}

void EsParam::SetContentKey(const string& _contentKey)
{
    m_contentKey = _contentKey;
    m_contentKeyHasBeenSet = true;
}

bool EsParam::ContentKeyHasBeenSet() const
{
    return m_contentKeyHasBeenSet;
}

bool EsParam::GetDropInvalidJsonMessage() const
{
    return m_dropInvalidJsonMessage;
}

void EsParam::SetDropInvalidJsonMessage(const bool& _dropInvalidJsonMessage)
{
    m_dropInvalidJsonMessage = _dropInvalidJsonMessage;
    m_dropInvalidJsonMessageHasBeenSet = true;
}

bool EsParam::DropInvalidJsonMessageHasBeenSet() const
{
    return m_dropInvalidJsonMessageHasBeenSet;
}

string EsParam::GetDocumentIdField() const
{
    return m_documentIdField;
}

void EsParam::SetDocumentIdField(const string& _documentIdField)
{
    m_documentIdField = _documentIdField;
    m_documentIdFieldHasBeenSet = true;
}

bool EsParam::DocumentIdFieldHasBeenSet() const
{
    return m_documentIdFieldHasBeenSet;
}

string EsParam::GetIndexType() const
{
    return m_indexType;
}

void EsParam::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool EsParam::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

DropCls EsParam::GetDropCls() const
{
    return m_dropCls;
}

void EsParam::SetDropCls(const DropCls& _dropCls)
{
    m_dropCls = _dropCls;
    m_dropClsHasBeenSet = true;
}

bool EsParam::DropClsHasBeenSet() const
{
    return m_dropClsHasBeenSet;
}

string EsParam::GetDatabasePrimaryKey() const
{
    return m_databasePrimaryKey;
}

void EsParam::SetDatabasePrimaryKey(const string& _databasePrimaryKey)
{
    m_databasePrimaryKey = _databasePrimaryKey;
    m_databasePrimaryKeyHasBeenSet = true;
}

bool EsParam::DatabasePrimaryKeyHasBeenSet() const
{
    return m_databasePrimaryKeyHasBeenSet;
}

FailureParam EsParam::GetDropDlq() const
{
    return m_dropDlq;
}

void EsParam::SetDropDlq(const FailureParam& _dropDlq)
{
    m_dropDlq = _dropDlq;
    m_dropDlqHasBeenSet = true;
}

bool EsParam::DropDlqHasBeenSet() const
{
    return m_dropDlqHasBeenSet;
}

vector<EsRecordMapping> EsParam::GetRecordMappingList() const
{
    return m_recordMappingList;
}

void EsParam::SetRecordMappingList(const vector<EsRecordMapping>& _recordMappingList)
{
    m_recordMappingList = _recordMappingList;
    m_recordMappingListHasBeenSet = true;
}

bool EsParam::RecordMappingListHasBeenSet() const
{
    return m_recordMappingListHasBeenSet;
}

string EsParam::GetDateField() const
{
    return m_dateField;
}

void EsParam::SetDateField(const string& _dateField)
{
    m_dateField = _dateField;
    m_dateFieldHasBeenSet = true;
}

bool EsParam::DateFieldHasBeenSet() const
{
    return m_dateFieldHasBeenSet;
}

string EsParam::GetRecordMappingMode() const
{
    return m_recordMappingMode;
}

void EsParam::SetRecordMappingMode(const string& _recordMappingMode)
{
    m_recordMappingMode = _recordMappingMode;
    m_recordMappingModeHasBeenSet = true;
}

bool EsParam::RecordMappingModeHasBeenSet() const
{
    return m_recordMappingModeHasBeenSet;
}

