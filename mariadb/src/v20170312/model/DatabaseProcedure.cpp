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

#include <tencentcloud/mariadb/v20170312/model/DatabaseProcedure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DatabaseProcedure::DatabaseProcedure() :
    m_procHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseProcedure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Proc") && !value["Proc"].IsNull())
    {
        if (!value["Proc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseProcedure.Proc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proc = string(value["Proc"].GetString());
        m_procHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseProcedure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_procHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proc.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseProcedure::GetProc() const
{
    return m_proc;
}

void DatabaseProcedure::SetProc(const string& _proc)
{
    m_proc = _proc;
    m_procHasBeenSet = true;
}

bool DatabaseProcedure::ProcHasBeenSet() const
{
    return m_procHasBeenSet;
}

