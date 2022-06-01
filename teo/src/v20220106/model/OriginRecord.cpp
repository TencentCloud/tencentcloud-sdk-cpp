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

#include <tencentcloud/teo/v20220106/model/OriginRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

OriginRecord::OriginRecord() :
    m_recordHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_portHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_privateHasBeenSet(false),
    m_privateParameterHasBeenSet(false)
{
}

CoreInternalOutcome OriginRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRecord.Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(value["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginRecord.Area` is not array type"));

        const rapidjson::Value &tmpValue = value["Area"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_area.push_back((*itr).GetString());
        }
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRecord.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRecord.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("Private") && !value["Private"].IsNull())
    {
        if (!value["Private"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRecord.Private` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_private = value["Private"].GetBool();
        m_privateHasBeenSet = true;
    }

    if (value.HasMember("PrivateParameter") && !value["PrivateParameter"].IsNull())
    {
        if (!value["PrivateParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginRecord.PrivateParameter` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateParameter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginRecordPrivateParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateParameter.push_back(item);
        }
        m_privateParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_area.begin(); itr != m_area.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Private";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_private, allocator);
    }

    if (m_privateParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateParameter.begin(); itr != m_privateParameter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OriginRecord::GetRecord() const
{
    return m_record;
}

void OriginRecord::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool OriginRecord::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

vector<string> OriginRecord::GetArea() const
{
    return m_area;
}

void OriginRecord::SetArea(const vector<string>& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool OriginRecord::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

uint64_t OriginRecord::GetWeight() const
{
    return m_weight;
}

void OriginRecord::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool OriginRecord::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

uint64_t OriginRecord::GetPort() const
{
    return m_port;
}

void OriginRecord::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool OriginRecord::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string OriginRecord::GetRecordId() const
{
    return m_recordId;
}

void OriginRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool OriginRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

bool OriginRecord::GetPrivate() const
{
    return m_private;
}

void OriginRecord::SetPrivate(const bool& _private)
{
    m_private = _private;
    m_privateHasBeenSet = true;
}

bool OriginRecord::PrivateHasBeenSet() const
{
    return m_privateHasBeenSet;
}

vector<OriginRecordPrivateParameter> OriginRecord::GetPrivateParameter() const
{
    return m_privateParameter;
}

void OriginRecord::SetPrivateParameter(const vector<OriginRecordPrivateParameter>& _privateParameter)
{
    m_privateParameter = _privateParameter;
    m_privateParameterHasBeenSet = true;
}

bool OriginRecord::PrivateParameterHasBeenSet() const
{
    return m_privateParameterHasBeenSet;
}

