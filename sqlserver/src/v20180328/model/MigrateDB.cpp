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

#include <tencentcloud/sqlserver/v20180328/model/MigrateDB.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

MigrateDB::MigrateDB() :
    m_dBNameHasBeenSet(false)
{
}

CoreInternalOutcome MigrateDB::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MigrateDB.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateDB::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

}


string MigrateDB::GetDBName() const
{
    return m_dBName;
}

void MigrateDB::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool MigrateDB::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

