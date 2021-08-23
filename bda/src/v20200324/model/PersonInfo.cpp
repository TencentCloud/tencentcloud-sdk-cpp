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

#include <tencentcloud/bda/v20200324/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

PersonInfo::PersonInfo() :
    m_personNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_traceInfosHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonName") && !value["PersonName"].IsNull())
    {
        if (!value["PersonName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personName = string(value["PersonName"].GetString());
        m_personNameHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("TraceInfos") && !value["TraceInfos"].IsNull())
    {
        if (!value["TraceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PersonInfo.TraceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TraceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TraceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_traceInfos.push_back(item);
        }
        m_traceInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personName.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_traceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_traceInfos.begin(); itr != m_traceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PersonInfo::GetPersonName() const
{
    return m_personName;
}

void PersonInfo::SetPersonName(const string& _personName)
{
    m_personName = _personName;
    m_personNameHasBeenSet = true;
}

bool PersonInfo::PersonNameHasBeenSet() const
{
    return m_personNameHasBeenSet;
}

string PersonInfo::GetPersonId() const
{
    return m_personId;
}

void PersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<TraceInfo> PersonInfo::GetTraceInfos() const
{
    return m_traceInfos;
}

void PersonInfo::SetTraceInfos(const vector<TraceInfo>& _traceInfos)
{
    m_traceInfos = _traceInfos;
    m_traceInfosHasBeenSet = true;
}

bool PersonInfo::TraceInfosHasBeenSet() const
{
    return m_traceInfosHasBeenSet;
}

