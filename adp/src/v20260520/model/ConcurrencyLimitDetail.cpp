/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/ConcurrencyLimitDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConcurrencyLimitDetail::ConcurrencyLimitDetail() :
    m_callSourceHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_requestQueryHasBeenSet(false),
    m_spaceIdHasBeenSet(false)
{
}

CoreInternalOutcome ConcurrencyLimitDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallSource") && !value["CallSource"].IsNull())
    {
        if (!value["CallSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyLimitDetail.CallSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callSource.Deserialize(value["CallSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callSourceHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyLimitDetail.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyLimitDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("RequestQuery") && !value["RequestQuery"].IsNull())
    {
        if (!value["RequestQuery"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyLimitDetail.RequestQuery` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestQuery = string(value["RequestQuery"].GetString());
        m_requestQueryHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcurrencyLimitDetail.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConcurrencyLimitDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestQuery.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

}


CallSource ConcurrencyLimitDetail::GetCallSource() const
{
    return m_callSource;
}

void ConcurrencyLimitDetail::SetCallSource(const CallSource& _callSource)
{
    m_callSource = _callSource;
    m_callSourceHasBeenSet = true;
}

bool ConcurrencyLimitDetail::CallSourceHasBeenSet() const
{
    return m_callSourceHasBeenSet;
}

string ConcurrencyLimitDetail::GetEventTime() const
{
    return m_eventTime;
}

void ConcurrencyLimitDetail::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool ConcurrencyLimitDetail::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string ConcurrencyLimitDetail::GetModelName() const
{
    return m_modelName;
}

void ConcurrencyLimitDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ConcurrencyLimitDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ConcurrencyLimitDetail::GetRequestQuery() const
{
    return m_requestQuery;
}

void ConcurrencyLimitDetail::SetRequestQuery(const string& _requestQuery)
{
    m_requestQuery = _requestQuery;
    m_requestQueryHasBeenSet = true;
}

bool ConcurrencyLimitDetail::RequestQueryHasBeenSet() const
{
    return m_requestQueryHasBeenSet;
}

string ConcurrencyLimitDetail::GetSpaceId() const
{
    return m_spaceId;
}

void ConcurrencyLimitDetail::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ConcurrencyLimitDetail::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

