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

#include <tencentcloud/monitor/v20230616/model/Expr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

Expr::Expr() :
    m_functionHasBeenSet(false),
    m_nHasBeenSet(false)
{
}

CoreInternalOutcome Expr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Expr.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("N") && !value["N"].IsNull())
    {
        if (!value["N"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Expr.N` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_n = value["N"].GetDouble();
        m_nHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Expr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_nHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "N";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_n, allocator);
    }

}


string Expr::GetFunction() const
{
    return m_function;
}

void Expr::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool Expr::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

double Expr::GetN() const
{
    return m_n;
}

void Expr::SetN(const double& _n)
{
    m_n = _n;
    m_nHasBeenSet = true;
}

bool Expr::NHasBeenSet() const
{
    return m_nHasBeenSet;
}

