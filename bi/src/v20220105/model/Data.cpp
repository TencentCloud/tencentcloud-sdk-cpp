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

#include <tencentcloud/bi/v20220105/model/Data.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

Data::Data() :
    m_idHasBeenSet(false),
    m_editUrlHasBeenSet(false)
{
}

CoreInternalOutcome Data::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Data.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("EditUrl") && !value["EditUrl"].IsNull())
    {
        if (!value["EditUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data.EditUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editUrl = string(value["EditUrl"].GetString());
        m_editUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Data::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_editUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t Data::GetId() const
{
    return m_id;
}

void Data::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Data::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Data::GetEditUrl() const
{
    return m_editUrl;
}

void Data::SetEditUrl(const string& _editUrl)
{
    m_editUrl = _editUrl;
    m_editUrlHasBeenSet = true;
}

bool Data::EditUrlHasBeenSet() const
{
    return m_editUrlHasBeenSet;
}

