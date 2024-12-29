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

#include <tencentcloud/cfg/v20210820/model/ObjectTypeConfigFields.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

ObjectTypeConfigFields::ObjectTypeConfigFields() :
    m_keyHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_transferHasBeenSet(false),
    m_jsonParseHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ObjectTypeConfigFields::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeConfigFields.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeConfigFields.Header` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_header = string(value["Header"].GetString());
        m_headerHasBeenSet = true;
    }

    if (value.HasMember("Transfer") && !value["Transfer"].IsNull())
    {
        if (!value["Transfer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeConfigFields.Transfer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transfer = string(value["Transfer"].GetString());
        m_transferHasBeenSet = true;
    }

    if (value.HasMember("JsonParse") && !value["JsonParse"].IsNull())
    {
        if (!value["JsonParse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeConfigFields.JsonParse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonParse = string(value["JsonParse"].GetString());
        m_jsonParseHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectTypeConfigFields.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectTypeConfigFields::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_header.c_str(), allocator).Move(), allocator);
    }

    if (m_transferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transfer.c_str(), allocator).Move(), allocator);
    }

    if (m_jsonParseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonParse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonParse.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


string ObjectTypeConfigFields::GetKey() const
{
    return m_key;
}

void ObjectTypeConfigFields::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ObjectTypeConfigFields::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ObjectTypeConfigFields::GetHeader() const
{
    return m_header;
}

void ObjectTypeConfigFields::SetHeader(const string& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool ObjectTypeConfigFields::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

string ObjectTypeConfigFields::GetTransfer() const
{
    return m_transfer;
}

void ObjectTypeConfigFields::SetTransfer(const string& _transfer)
{
    m_transfer = _transfer;
    m_transferHasBeenSet = true;
}

bool ObjectTypeConfigFields::TransferHasBeenSet() const
{
    return m_transferHasBeenSet;
}

string ObjectTypeConfigFields::GetJsonParse() const
{
    return m_jsonParse;
}

void ObjectTypeConfigFields::SetJsonParse(const string& _jsonParse)
{
    m_jsonParse = _jsonParse;
    m_jsonParseHasBeenSet = true;
}

bool ObjectTypeConfigFields::JsonParseHasBeenSet() const
{
    return m_jsonParseHasBeenSet;
}

int64_t ObjectTypeConfigFields::GetType() const
{
    return m_type;
}

void ObjectTypeConfigFields::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ObjectTypeConfigFields::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

