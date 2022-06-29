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

#include <tencentcloud/tiia/v20190529/model/Attribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

Attribute::Attribute() :
    m_typeHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome Attribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attribute.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attribute.Details` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_details = string(value["Details"].GetString());
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Attribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_details.c_str(), allocator).Move(), allocator);
    }

}


string Attribute::GetType() const
{
    return m_type;
}

void Attribute::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Attribute::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Attribute::GetDetails() const
{
    return m_details;
}

void Attribute::SetDetails(const string& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool Attribute::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

