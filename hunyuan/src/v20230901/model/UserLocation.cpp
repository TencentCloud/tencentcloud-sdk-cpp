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

#include <tencentcloud/hunyuan/v20230901/model/UserLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

UserLocation::UserLocation() :
    m_typeHasBeenSet(false),
    m_approximateHasBeenSet(false)
{
}

CoreInternalOutcome UserLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserLocation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Approximate") && !value["Approximate"].IsNull())
    {
        if (!value["Approximate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserLocation.Approximate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_approximate.Deserialize(value["Approximate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_approximateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_approximateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approximate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_approximate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string UserLocation::GetType() const
{
    return m_type;
}

void UserLocation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UserLocation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Approximate UserLocation::GetApproximate() const
{
    return m_approximate;
}

void UserLocation::SetApproximate(const Approximate& _approximate)
{
    m_approximate = _approximate;
    m_approximateHasBeenSet = true;
}

bool UserLocation::ApproximateHasBeenSet() const
{
    return m_approximateHasBeenSet;
}

