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

#include <tencentcloud/dlc/v20210125/model/OtherDatasourceConnection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

OtherDatasourceConnection::OtherDatasourceConnection() :
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome OtherDatasourceConnection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OtherDatasourceConnection.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherDatasourceConnection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


DatasourceConnectionLocation OtherDatasourceConnection::GetLocation() const
{
    return m_location;
}

void OtherDatasourceConnection::SetLocation(const DatasourceConnectionLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool OtherDatasourceConnection::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

