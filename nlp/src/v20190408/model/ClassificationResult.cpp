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

#include <tencentcloud/nlp/v20190408/model/ClassificationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

ClassificationResult::ClassificationResult() :
    m_firstClassNameHasBeenSet(false),
    m_secondClassNameHasBeenSet(false),
    m_firstClassProbabilityHasBeenSet(false),
    m_secondClassProbabilityHasBeenSet(false),
    m_thirdClassNameHasBeenSet(false),
    m_thirdClassProbabilityHasBeenSet(false),
    m_fourthClassNameHasBeenSet(false),
    m_fourthClassProbabilityHasBeenSet(false),
    m_fifthClassNameHasBeenSet(false),
    m_fifthClassProbabilityHasBeenSet(false)
{
}

CoreInternalOutcome ClassificationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstClassName") && !value["FirstClassName"].IsNull())
    {
        if (!value["FirstClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FirstClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstClassName = string(value["FirstClassName"].GetString());
        m_firstClassNameHasBeenSet = true;
    }

    if (value.HasMember("SecondClassName") && !value["SecondClassName"].IsNull())
    {
        if (!value["SecondClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.SecondClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondClassName = string(value["SecondClassName"].GetString());
        m_secondClassNameHasBeenSet = true;
    }

    if (value.HasMember("FirstClassProbability") && !value["FirstClassProbability"].IsNull())
    {
        if (!value["FirstClassProbability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FirstClassProbability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_firstClassProbability = value["FirstClassProbability"].GetDouble();
        m_firstClassProbabilityHasBeenSet = true;
    }

    if (value.HasMember("SecondClassProbability") && !value["SecondClassProbability"].IsNull())
    {
        if (!value["SecondClassProbability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.SecondClassProbability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_secondClassProbability = value["SecondClassProbability"].GetDouble();
        m_secondClassProbabilityHasBeenSet = true;
    }

    if (value.HasMember("ThirdClassName") && !value["ThirdClassName"].IsNull())
    {
        if (!value["ThirdClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.ThirdClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdClassName = string(value["ThirdClassName"].GetString());
        m_thirdClassNameHasBeenSet = true;
    }

    if (value.HasMember("ThirdClassProbability") && !value["ThirdClassProbability"].IsNull())
    {
        if (!value["ThirdClassProbability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.ThirdClassProbability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_thirdClassProbability = value["ThirdClassProbability"].GetDouble();
        m_thirdClassProbabilityHasBeenSet = true;
    }

    if (value.HasMember("FourthClassName") && !value["FourthClassName"].IsNull())
    {
        if (!value["FourthClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FourthClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fourthClassName = string(value["FourthClassName"].GetString());
        m_fourthClassNameHasBeenSet = true;
    }

    if (value.HasMember("FourthClassProbability") && !value["FourthClassProbability"].IsNull())
    {
        if (!value["FourthClassProbability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FourthClassProbability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fourthClassProbability = value["FourthClassProbability"].GetDouble();
        m_fourthClassProbabilityHasBeenSet = true;
    }

    if (value.HasMember("FifthClassName") && !value["FifthClassName"].IsNull())
    {
        if (!value["FifthClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FifthClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fifthClassName = string(value["FifthClassName"].GetString());
        m_fifthClassNameHasBeenSet = true;
    }

    if (value.HasMember("FifthClassProbability") && !value["FifthClassProbability"].IsNull())
    {
        if (!value["FifthClassProbability"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FifthClassProbability` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fifthClassProbability = value["FifthClassProbability"].GetDouble();
        m_fifthClassProbabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassificationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_secondClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstClassProbabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstClassProbability, allocator);
    }

    if (m_secondClassProbabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondClassProbability, allocator);
    }

    if (m_thirdClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdClassProbabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirdClassProbability, allocator);
    }

    if (m_fourthClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourthClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fourthClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_fourthClassProbabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FourthClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fourthClassProbability, allocator);
    }

    if (m_fifthClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FifthClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fifthClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_fifthClassProbabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FifthClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fifthClassProbability, allocator);
    }

}


string ClassificationResult::GetFirstClassName() const
{
    return m_firstClassName;
}

void ClassificationResult::SetFirstClassName(const string& _firstClassName)
{
    m_firstClassName = _firstClassName;
    m_firstClassNameHasBeenSet = true;
}

bool ClassificationResult::FirstClassNameHasBeenSet() const
{
    return m_firstClassNameHasBeenSet;
}

string ClassificationResult::GetSecondClassName() const
{
    return m_secondClassName;
}

void ClassificationResult::SetSecondClassName(const string& _secondClassName)
{
    m_secondClassName = _secondClassName;
    m_secondClassNameHasBeenSet = true;
}

bool ClassificationResult::SecondClassNameHasBeenSet() const
{
    return m_secondClassNameHasBeenSet;
}

double ClassificationResult::GetFirstClassProbability() const
{
    return m_firstClassProbability;
}

void ClassificationResult::SetFirstClassProbability(const double& _firstClassProbability)
{
    m_firstClassProbability = _firstClassProbability;
    m_firstClassProbabilityHasBeenSet = true;
}

bool ClassificationResult::FirstClassProbabilityHasBeenSet() const
{
    return m_firstClassProbabilityHasBeenSet;
}

double ClassificationResult::GetSecondClassProbability() const
{
    return m_secondClassProbability;
}

void ClassificationResult::SetSecondClassProbability(const double& _secondClassProbability)
{
    m_secondClassProbability = _secondClassProbability;
    m_secondClassProbabilityHasBeenSet = true;
}

bool ClassificationResult::SecondClassProbabilityHasBeenSet() const
{
    return m_secondClassProbabilityHasBeenSet;
}

string ClassificationResult::GetThirdClassName() const
{
    return m_thirdClassName;
}

void ClassificationResult::SetThirdClassName(const string& _thirdClassName)
{
    m_thirdClassName = _thirdClassName;
    m_thirdClassNameHasBeenSet = true;
}

bool ClassificationResult::ThirdClassNameHasBeenSet() const
{
    return m_thirdClassNameHasBeenSet;
}

double ClassificationResult::GetThirdClassProbability() const
{
    return m_thirdClassProbability;
}

void ClassificationResult::SetThirdClassProbability(const double& _thirdClassProbability)
{
    m_thirdClassProbability = _thirdClassProbability;
    m_thirdClassProbabilityHasBeenSet = true;
}

bool ClassificationResult::ThirdClassProbabilityHasBeenSet() const
{
    return m_thirdClassProbabilityHasBeenSet;
}

string ClassificationResult::GetFourthClassName() const
{
    return m_fourthClassName;
}

void ClassificationResult::SetFourthClassName(const string& _fourthClassName)
{
    m_fourthClassName = _fourthClassName;
    m_fourthClassNameHasBeenSet = true;
}

bool ClassificationResult::FourthClassNameHasBeenSet() const
{
    return m_fourthClassNameHasBeenSet;
}

double ClassificationResult::GetFourthClassProbability() const
{
    return m_fourthClassProbability;
}

void ClassificationResult::SetFourthClassProbability(const double& _fourthClassProbability)
{
    m_fourthClassProbability = _fourthClassProbability;
    m_fourthClassProbabilityHasBeenSet = true;
}

bool ClassificationResult::FourthClassProbabilityHasBeenSet() const
{
    return m_fourthClassProbabilityHasBeenSet;
}

string ClassificationResult::GetFifthClassName() const
{
    return m_fifthClassName;
}

void ClassificationResult::SetFifthClassName(const string& _fifthClassName)
{
    m_fifthClassName = _fifthClassName;
    m_fifthClassNameHasBeenSet = true;
}

bool ClassificationResult::FifthClassNameHasBeenSet() const
{
    return m_fifthClassNameHasBeenSet;
}

double ClassificationResult::GetFifthClassProbability() const
{
    return m_fifthClassProbability;
}

void ClassificationResult::SetFifthClassProbability(const double& _fifthClassProbability)
{
    m_fifthClassProbability = _fifthClassProbability;
    m_fifthClassProbabilityHasBeenSet = true;
}

bool ClassificationResult::FifthClassProbabilityHasBeenSet() const
{
    return m_fifthClassProbabilityHasBeenSet;
}

