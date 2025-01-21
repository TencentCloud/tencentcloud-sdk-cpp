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

#include <tencentcloud/teo/v20220901/model/ErrorPageParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ErrorPageParameters::ErrorPageParameters() :
    m_errorPageParamsHasBeenSet(false)
{
}

CoreInternalOutcome ErrorPageParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorPageParams") && !value["ErrorPageParams"].IsNull())
    {
        if (!value["ErrorPageParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorPageParameters.ErrorPageParams` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorPageParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorPage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorPageParams.push_back(item);
        }
        m_errorPageParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorPageParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorPageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPageParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorPageParams.begin(); itr != m_errorPageParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ErrorPage> ErrorPageParameters::GetErrorPageParams() const
{
    return m_errorPageParams;
}

void ErrorPageParameters::SetErrorPageParams(const vector<ErrorPage>& _errorPageParams)
{
    m_errorPageParams = _errorPageParams;
    m_errorPageParamsHasBeenSet = true;
}

bool ErrorPageParameters::ErrorPageParamsHasBeenSet() const
{
    return m_errorPageParamsHasBeenSet;
}

