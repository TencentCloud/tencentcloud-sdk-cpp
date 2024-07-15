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

#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyRouteTableInfo::ModifyRouteTableInfo() :
    m_routeTableIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome ModifyRouteTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRouteTableInfo.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRouteTableInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyRouteTableInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyRouteTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string ModifyRouteTableInfo::GetRouteTableId() const
{
    return m_routeTableId;
}

void ModifyRouteTableInfo::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool ModifyRouteTableInfo::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string ModifyRouteTableInfo::GetName() const
{
    return m_name;
}

void ModifyRouteTableInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRouteTableInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyRouteTableInfo::GetDescription() const
{
    return m_description;
}

void ModifyRouteTableInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyRouteTableInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

