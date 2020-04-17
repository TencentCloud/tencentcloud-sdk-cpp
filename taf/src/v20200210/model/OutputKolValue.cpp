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

#include <tencentcloud/taf/v20200210/model/OutputKolValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

OutputKolValue::OutputKolValue() :
    m_idHasBeenSet(false),
    m_isCheckHasBeenSet(false),
    m_fraudPScoreHasBeenSet(false),
    m_evilPScoreHasBeenSet(false)
{
}

CoreInternalOutcome OutputKolValue::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputKolValue.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("IsCheck") && !value["IsCheck"].IsNull())
    {
        if (!value["IsCheck"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputKolValue.IsCheck` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCheck = value["IsCheck"].GetInt64();
        m_isCheckHasBeenSet = true;
    }

    if (value.HasMember("FraudPScore") && !value["FraudPScore"].IsNull())
    {
        if (!value["FraudPScore"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputKolValue.FraudPScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fraudPScore = value["FraudPScore"].GetInt64();
        m_fraudPScoreHasBeenSet = true;
    }

    if (value.HasMember("EvilPScore") && !value["EvilPScore"].IsNull())
    {
        if (!value["EvilPScore"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputKolValue.EvilPScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilPScore = value["EvilPScore"].GetInt64();
        m_evilPScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputKolValue::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_isCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCheck, allocator);
    }

    if (m_fraudPScoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FraudPScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fraudPScore, allocator);
    }

    if (m_evilPScoreHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EvilPScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilPScore, allocator);
    }

}


string OutputKolValue::GetId() const
{
    return m_id;
}

void OutputKolValue::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OutputKolValue::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t OutputKolValue::GetIsCheck() const
{
    return m_isCheck;
}

void OutputKolValue::SetIsCheck(const int64_t& _isCheck)
{
    m_isCheck = _isCheck;
    m_isCheckHasBeenSet = true;
}

bool OutputKolValue::IsCheckHasBeenSet() const
{
    return m_isCheckHasBeenSet;
}

int64_t OutputKolValue::GetFraudPScore() const
{
    return m_fraudPScore;
}

void OutputKolValue::SetFraudPScore(const int64_t& _fraudPScore)
{
    m_fraudPScore = _fraudPScore;
    m_fraudPScoreHasBeenSet = true;
}

bool OutputKolValue::FraudPScoreHasBeenSet() const
{
    return m_fraudPScoreHasBeenSet;
}

int64_t OutputKolValue::GetEvilPScore() const
{
    return m_evilPScore;
}

void OutputKolValue::SetEvilPScore(const int64_t& _evilPScore)
{
    m_evilPScore = _evilPScore;
    m_evilPScoreHasBeenSet = true;
}

bool OutputKolValue::EvilPScoreHasBeenSet() const
{
    return m_evilPScoreHasBeenSet;
}

