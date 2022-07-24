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

#include <tencentcloud/ckafka/v20190819/model/FieldParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

FieldParam::FieldParam() :
    m_analyseHasBeenSet(false),
    m_secondaryAnalyseHasBeenSet(false),
    m_sMTHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_analyseResultHasBeenSet(false),
    m_secondaryAnalyseResultHasBeenSet(false),
    m_analyseJsonResultHasBeenSet(false),
    m_secondaryAnalyseJsonResultHasBeenSet(false)
{
}

CoreInternalOutcome FieldParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Analyse") && !value["Analyse"].IsNull())
    {
        if (!value["Analyse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FieldParam.Analyse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analyse.Deserialize(value["Analyse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analyseHasBeenSet = true;
    }

    if (value.HasMember("SecondaryAnalyse") && !value["SecondaryAnalyse"].IsNull())
    {
        if (!value["SecondaryAnalyse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FieldParam.SecondaryAnalyse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secondaryAnalyse.Deserialize(value["SecondaryAnalyse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secondaryAnalyseHasBeenSet = true;
    }

    if (value.HasMember("SMT") && !value["SMT"].IsNull())
    {
        if (!value["SMT"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldParam.SMT` is not array type"));

        const rapidjson::Value &tmpValue = value["SMT"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SMTParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sMT.push_back(item);
        }
        m_sMTHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldParam.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("AnalyseResult") && !value["AnalyseResult"].IsNull())
    {
        if (!value["AnalyseResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldParam.AnalyseResult` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalyseResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SMTParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analyseResult.push_back(item);
        }
        m_analyseResultHasBeenSet = true;
    }

    if (value.HasMember("SecondaryAnalyseResult") && !value["SecondaryAnalyseResult"].IsNull())
    {
        if (!value["SecondaryAnalyseResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldParam.SecondaryAnalyseResult` is not array type"));

        const rapidjson::Value &tmpValue = value["SecondaryAnalyseResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SMTParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_secondaryAnalyseResult.push_back(item);
        }
        m_secondaryAnalyseResultHasBeenSet = true;
    }

    if (value.HasMember("AnalyseJsonResult") && !value["AnalyseJsonResult"].IsNull())
    {
        if (!value["AnalyseJsonResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldParam.AnalyseJsonResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analyseJsonResult = string(value["AnalyseJsonResult"].GetString());
        m_analyseJsonResultHasBeenSet = true;
    }

    if (value.HasMember("SecondaryAnalyseJsonResult") && !value["SecondaryAnalyseJsonResult"].IsNull())
    {
        if (!value["SecondaryAnalyseJsonResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldParam.SecondaryAnalyseJsonResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryAnalyseJsonResult = string(value["SecondaryAnalyseJsonResult"].GetString());
        m_secondaryAnalyseJsonResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_analyseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Analyse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_analyse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secondaryAnalyseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryAnalyse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secondaryAnalyse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sMTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SMT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sMT.begin(); itr != m_sMT.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_analyseResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyseResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analyseResult.begin(); itr != m_analyseResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_secondaryAnalyseResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryAnalyseResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secondaryAnalyseResult.begin(); itr != m_secondaryAnalyseResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_analyseJsonResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyseJsonResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analyseJsonResult.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryAnalyseJsonResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryAnalyseJsonResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryAnalyseJsonResult.c_str(), allocator).Move(), allocator);
    }

}


AnalyseParam FieldParam::GetAnalyse() const
{
    return m_analyse;
}

void FieldParam::SetAnalyse(const AnalyseParam& _analyse)
{
    m_analyse = _analyse;
    m_analyseHasBeenSet = true;
}

bool FieldParam::AnalyseHasBeenSet() const
{
    return m_analyseHasBeenSet;
}

SecondaryAnalyseParam FieldParam::GetSecondaryAnalyse() const
{
    return m_secondaryAnalyse;
}

void FieldParam::SetSecondaryAnalyse(const SecondaryAnalyseParam& _secondaryAnalyse)
{
    m_secondaryAnalyse = _secondaryAnalyse;
    m_secondaryAnalyseHasBeenSet = true;
}

bool FieldParam::SecondaryAnalyseHasBeenSet() const
{
    return m_secondaryAnalyseHasBeenSet;
}

vector<SMTParam> FieldParam::GetSMT() const
{
    return m_sMT;
}

void FieldParam::SetSMT(const vector<SMTParam>& _sMT)
{
    m_sMT = _sMT;
    m_sMTHasBeenSet = true;
}

bool FieldParam::SMTHasBeenSet() const
{
    return m_sMTHasBeenSet;
}

string FieldParam::GetResult() const
{
    return m_result;
}

void FieldParam::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool FieldParam::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<SMTParam> FieldParam::GetAnalyseResult() const
{
    return m_analyseResult;
}

void FieldParam::SetAnalyseResult(const vector<SMTParam>& _analyseResult)
{
    m_analyseResult = _analyseResult;
    m_analyseResultHasBeenSet = true;
}

bool FieldParam::AnalyseResultHasBeenSet() const
{
    return m_analyseResultHasBeenSet;
}

vector<SMTParam> FieldParam::GetSecondaryAnalyseResult() const
{
    return m_secondaryAnalyseResult;
}

void FieldParam::SetSecondaryAnalyseResult(const vector<SMTParam>& _secondaryAnalyseResult)
{
    m_secondaryAnalyseResult = _secondaryAnalyseResult;
    m_secondaryAnalyseResultHasBeenSet = true;
}

bool FieldParam::SecondaryAnalyseResultHasBeenSet() const
{
    return m_secondaryAnalyseResultHasBeenSet;
}

string FieldParam::GetAnalyseJsonResult() const
{
    return m_analyseJsonResult;
}

void FieldParam::SetAnalyseJsonResult(const string& _analyseJsonResult)
{
    m_analyseJsonResult = _analyseJsonResult;
    m_analyseJsonResultHasBeenSet = true;
}

bool FieldParam::AnalyseJsonResultHasBeenSet() const
{
    return m_analyseJsonResultHasBeenSet;
}

string FieldParam::GetSecondaryAnalyseJsonResult() const
{
    return m_secondaryAnalyseJsonResult;
}

void FieldParam::SetSecondaryAnalyseJsonResult(const string& _secondaryAnalyseJsonResult)
{
    m_secondaryAnalyseJsonResult = _secondaryAnalyseJsonResult;
    m_secondaryAnalyseJsonResultHasBeenSet = true;
}

bool FieldParam::SecondaryAnalyseJsonResultHasBeenSet() const
{
    return m_secondaryAnalyseJsonResultHasBeenSet;
}

