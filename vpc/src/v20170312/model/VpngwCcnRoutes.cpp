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

#include <tencentcloud/vpc/v20170312/model/VpngwCcnRoutes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

VpngwCcnRoutes::VpngwCcnRoutes() :
    m_routeIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome VpngwCcnRoutes::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpngwCcnRoutes.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `VpngwCcnRoutes.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpngwCcnRoutes::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string VpngwCcnRoutes::GetRouteId() const
{
    return m_routeId;
}

void VpngwCcnRoutes::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool VpngwCcnRoutes::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string VpngwCcnRoutes::GetStatus() const
{
    return m_status;
}

void VpngwCcnRoutes::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VpngwCcnRoutes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

