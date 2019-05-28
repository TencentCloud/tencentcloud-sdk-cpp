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

#include <tencentcloud/dc/v20180410/model/AccessPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

AccessPoint::AccessPoint() :
    m_accessPointNameHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_lineOperatorHasBeenSet(false),
    m_regionIdHasBeenSet(false)
{
}

CoreInternalOutcome AccessPoint::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessPointName") && !value["AccessPointName"].IsNull())
    {
        if (!value["AccessPointName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessPoint.AccessPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointName = string(value["AccessPointName"].GetString());
        m_accessPointNameHasBeenSet = true;
    }

    if (value.HasMember("AccessPointId") && !value["AccessPointId"].IsNull())
    {
        if (!value["AccessPointId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessPoint.AccessPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessPointId = string(value["AccessPointId"].GetString());
        m_accessPointIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessPoint.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessPoint.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("LineOperator") && !value["LineOperator"].IsNull())
    {
        if (!value["LineOperator"].IsArray())
            return CoreInternalOutcome(Error("response `AccessPoint.LineOperator` is not array type"));

        const Value &tmpValue = value["LineOperator"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_lineOperator.push_back((*itr).GetString());
        }
        m_lineOperatorHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccessPoint.RegionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = string(value["RegionId"].GetString());
        m_regionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessPoint::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_accessPointNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessPointIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_lineOperatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LineOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_lineOperator.begin(); itr != m_lineOperator.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

}


string AccessPoint::GetAccessPointName() const
{
    return m_accessPointName;
}

void AccessPoint::SetAccessPointName(const string& _accessPointName)
{
    m_accessPointName = _accessPointName;
    m_accessPointNameHasBeenSet = true;
}

bool AccessPoint::AccessPointNameHasBeenSet() const
{
    return m_accessPointNameHasBeenSet;
}

string AccessPoint::GetAccessPointId() const
{
    return m_accessPointId;
}

void AccessPoint::SetAccessPointId(const string& _accessPointId)
{
    m_accessPointId = _accessPointId;
    m_accessPointIdHasBeenSet = true;
}

bool AccessPoint::AccessPointIdHasBeenSet() const
{
    return m_accessPointIdHasBeenSet;
}

string AccessPoint::GetState() const
{
    return m_state;
}

void AccessPoint::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool AccessPoint::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string AccessPoint::GetLocation() const
{
    return m_location;
}

void AccessPoint::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool AccessPoint::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> AccessPoint::GetLineOperator() const
{
    return m_lineOperator;
}

void AccessPoint::SetLineOperator(const vector<string>& _lineOperator)
{
    m_lineOperator = _lineOperator;
    m_lineOperatorHasBeenSet = true;
}

bool AccessPoint::LineOperatorHasBeenSet() const
{
    return m_lineOperatorHasBeenSet;
}

string AccessPoint::GetRegionId() const
{
    return m_regionId;
}

void AccessPoint::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool AccessPoint::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

