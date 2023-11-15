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

#include <tencentcloud/weilingwith/v20230427/model/HandleRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

HandleRecordInfo::HandleRecordInfo() :
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileSetHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_extendOneHasBeenSet(false)
{
}

CoreInternalOutcome HandleRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.OperationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = string(value["OperationType"].GetString());
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileSet") && !value["FileSet"].IsNull())
    {
        if (!value["FileSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.FileSet` is not array type"));

        const rapidjson::Value &tmpValue = value["FileSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileSet.push_back(item);
        }
        m_fileSetHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ExtendOne") && !value["ExtendOne"].IsNull())
    {
        if (!value["ExtendOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HandleRecordInfo.ExtendOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendOne = string(value["ExtendOne"].GetString());
        m_extendOneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HandleRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileSet.begin(); itr != m_fileSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_extendOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendOne.c_str(), allocator).Move(), allocator);
    }

}


int64_t HandleRecordInfo::GetId() const
{
    return m_id;
}

void HandleRecordInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool HandleRecordInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string HandleRecordInfo::GetDescription() const
{
    return m_description;
}

void HandleRecordInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HandleRecordInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string HandleRecordInfo::GetName() const
{
    return m_name;
}

void HandleRecordInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HandleRecordInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string HandleRecordInfo::GetOperationType() const
{
    return m_operationType;
}

void HandleRecordInfo::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool HandleRecordInfo::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string HandleRecordInfo::GetTime() const
{
    return m_time;
}

void HandleRecordInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool HandleRecordInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string HandleRecordInfo::GetType() const
{
    return m_type;
}

void HandleRecordInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HandleRecordInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<FileInfo> HandleRecordInfo::GetFileSet() const
{
    return m_fileSet;
}

void HandleRecordInfo::SetFileSet(const vector<FileInfo>& _fileSet)
{
    m_fileSet = _fileSet;
    m_fileSetHasBeenSet = true;
}

bool HandleRecordInfo::FileSetHasBeenSet() const
{
    return m_fileSetHasBeenSet;
}

int64_t HandleRecordInfo::GetAppId() const
{
    return m_appId;
}

void HandleRecordInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool HandleRecordInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string HandleRecordInfo::GetExtendOne() const
{
    return m_extendOne;
}

void HandleRecordInfo::SetExtendOne(const string& _extendOne)
{
    m_extendOne = _extendOne;
    m_extendOneHasBeenSet = true;
}

bool HandleRecordInfo::ExtendOneHasBeenSet() const
{
    return m_extendOneHasBeenSet;
}

