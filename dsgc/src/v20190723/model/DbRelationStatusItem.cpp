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

#include <tencentcloud/dsgc/v20190723/model/DbRelationStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DbRelationStatusItem::DbRelationStatusItem() :
    m_dbNameHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_validStatusHasBeenSet(false)
{
}

CoreInternalOutcome DbRelationStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbRelationStatusItem.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbRelationStatusItem.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ValidStatus") && !value["ValidStatus"].IsNull())
    {
        if (!value["ValidStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbRelationStatusItem.ValidStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validStatus = string(value["ValidStatus"].GetString());
        m_validStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbRelationStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validStatus.c_str(), allocator).Move(), allocator);
    }

}


string DbRelationStatusItem::GetDbName() const
{
    return m_dbName;
}

void DbRelationStatusItem::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DbRelationStatusItem::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DbRelationStatusItem::GetBindStatus() const
{
    return m_bindStatus;
}

void DbRelationStatusItem::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool DbRelationStatusItem::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string DbRelationStatusItem::GetValidStatus() const
{
    return m_validStatus;
}

void DbRelationStatusItem::SetValidStatus(const string& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool DbRelationStatusItem::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

