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

#include <tencentcloud/waf/v20180125/model/ApiNameOp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ApiNameOp::ApiNameOp() :
    m_valueHasBeenSet(false),
    m_opHasBeenSet(false),
    m_apiNameMethodHasBeenSet(false)
{
}

CoreInternalOutcome ApiNameOp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiNameOp.Value` is not array type"));

        const rapidjson::Value &tmpValue = value["Value"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_value.push_back((*itr).GetString());
        }
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiNameOp.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("ApiNameMethod") && !value["ApiNameMethod"].IsNull())
    {
        if (!value["ApiNameMethod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiNameOp.ApiNameMethod` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiNameMethod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiNameMethod item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiNameMethod.push_back(item);
        }
        m_apiNameMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiNameOp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_value.begin(); itr != m_value.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNameMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiNameMethod.begin(); itr != m_apiNameMethod.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> ApiNameOp::GetValue() const
{
    return m_value;
}

void ApiNameOp::SetValue(const vector<string>& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ApiNameOp::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ApiNameOp::GetOp() const
{
    return m_op;
}

void ApiNameOp::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool ApiNameOp::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

vector<ApiNameMethod> ApiNameOp::GetApiNameMethod() const
{
    return m_apiNameMethod;
}

void ApiNameOp::SetApiNameMethod(const vector<ApiNameMethod>& _apiNameMethod)
{
    m_apiNameMethod = _apiNameMethod;
    m_apiNameMethodHasBeenSet = true;
}

bool ApiNameOp::ApiNameMethodHasBeenSet() const
{
    return m_apiNameMethodHasBeenSet;
}

