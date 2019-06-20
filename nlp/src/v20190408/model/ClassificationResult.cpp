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
using namespace rapidjson;
using namespace std;

ClassificationResult::ClassificationResult() :
    m_firstClassNameHasBeenSet(false),
    m_firstClassProbabilityHasBeenSet(false),
    m_secondClassNameHasBeenSet(false),
    m_secondClassProbabilityHasBeenSet(false)
{
}

CoreInternalOutcome ClassificationResult::Deserialize(const Value &value)
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

    if (value.HasMember("FirstClassProbability") && !value["FirstClassProbability"].IsNull())
    {
        if (!value["FirstClassProbability"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.FirstClassProbability` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_firstClassProbability = value["FirstClassProbability"].GetDouble();
        m_firstClassProbabilityHasBeenSet = true;
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

    if (value.HasMember("SecondClassProbability") && !value["SecondClassProbability"].IsNull())
    {
        if (!value["SecondClassProbability"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ClassificationResult.SecondClassProbability` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_secondClassProbability = value["SecondClassProbability"].GetDouble();
        m_secondClassProbabilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassificationResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_firstClassNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_firstClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_firstClassProbabilityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FirstClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstClassProbability, allocator);
    }

    if (m_secondClassNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecondClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secondClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_secondClassProbabilityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecondClassProbability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondClassProbability, allocator);
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

