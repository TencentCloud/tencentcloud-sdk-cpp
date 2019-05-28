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

#include <tencentcloud/sqlserver/v20180328/model/AccountDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

AccountDetail::AccountDetail() :
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_passTimeHasBeenSet(false),
    m_internalStatusHasBeenSet(false),
    m_dbsHasBeenSet(false)
{
}

CoreInternalOutcome AccountDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PassTime") && !value["PassTime"].IsNull())
    {
        if (!value["PassTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.PassTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passTime = string(value["PassTime"].GetString());
        m_passTimeHasBeenSet = true;
    }

    if (value.HasMember("InternalStatus") && !value["InternalStatus"].IsNull())
    {
        if (!value["InternalStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountDetail.InternalStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalStatus = string(value["InternalStatus"].GetString());
        m_internalStatusHasBeenSet = true;
    }

    if (value.HasMember("Dbs") && !value["Dbs"].IsNull())
    {
        if (!value["Dbs"].IsArray())
            return CoreInternalOutcome(Error("response `AccountDetail.Dbs` is not array type"));

        const Value &tmpValue = value["Dbs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dbs.push_back(item);
        }
        m_dbsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_passTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PassTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_passTime.c_str(), allocator).Move(), allocator);
    }

    if (m_internalStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_internalStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dbsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dbs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dbs.begin(); itr != m_dbs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AccountDetail::GetName() const
{
    return m_name;
}

void AccountDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccountDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AccountDetail::GetRemark() const
{
    return m_remark;
}

void AccountDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AccountDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AccountDetail::GetCreateTime() const
{
    return m_createTime;
}

void AccountDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AccountDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AccountDetail::GetStatus() const
{
    return m_status;
}

void AccountDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccountDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AccountDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AccountDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AccountDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AccountDetail::GetPassTime() const
{
    return m_passTime;
}

void AccountDetail::SetPassTime(const string& _passTime)
{
    m_passTime = _passTime;
    m_passTimeHasBeenSet = true;
}

bool AccountDetail::PassTimeHasBeenSet() const
{
    return m_passTimeHasBeenSet;
}

string AccountDetail::GetInternalStatus() const
{
    return m_internalStatus;
}

void AccountDetail::SetInternalStatus(const string& _internalStatus)
{
    m_internalStatus = _internalStatus;
    m_internalStatusHasBeenSet = true;
}

bool AccountDetail::InternalStatusHasBeenSet() const
{
    return m_internalStatusHasBeenSet;
}

vector<DBPrivilege> AccountDetail::GetDbs() const
{
    return m_dbs;
}

void AccountDetail::SetDbs(const vector<DBPrivilege>& _dbs)
{
    m_dbs = _dbs;
    m_dbsHasBeenSet = true;
}

bool AccountDetail::DbsHasBeenSet() const
{
    return m_dbsHasBeenSet;
}

