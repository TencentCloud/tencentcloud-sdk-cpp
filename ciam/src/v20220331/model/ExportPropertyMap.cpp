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

#include <tencentcloud/ciam/v20220331/model/ExportPropertyMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

ExportPropertyMap::ExportPropertyMap() :
    m_userPropertyCodeHasBeenSet(false),
    m_columnNameHasBeenSet(false)
{
}

CoreInternalOutcome ExportPropertyMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserPropertyCode") && !value["UserPropertyCode"].IsNull())
    {
        if (!value["UserPropertyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportPropertyMap.UserPropertyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPropertyCode = string(value["UserPropertyCode"].GetString());
        m_userPropertyCodeHasBeenSet = true;
    }

    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportPropertyMap.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportPropertyMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userPropertyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPropertyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPropertyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

}


string ExportPropertyMap::GetUserPropertyCode() const
{
    return m_userPropertyCode;
}

void ExportPropertyMap::SetUserPropertyCode(const string& _userPropertyCode)
{
    m_userPropertyCode = _userPropertyCode;
    m_userPropertyCodeHasBeenSet = true;
}

bool ExportPropertyMap::UserPropertyCodeHasBeenSet() const
{
    return m_userPropertyCodeHasBeenSet;
}

string ExportPropertyMap::GetColumnName() const
{
    return m_columnName;
}

void ExportPropertyMap::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool ExportPropertyMap::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

