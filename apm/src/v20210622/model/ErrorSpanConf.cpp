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

#include <tencentcloud/apm/v20210622/model/ErrorSpanConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ErrorSpanConf::ErrorSpanConf() :
    m_errorObjectPatternsHasBeenSet(false),
    m_errorCodesHasBeenSet(false)
{
}

CoreInternalOutcome ErrorSpanConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorObjectPatterns") && !value["ErrorObjectPatterns"].IsNull())
    {
        if (!value["ErrorObjectPatterns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorSpanConf.ErrorObjectPatterns` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorObjectPatterns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorObjectPatterns.push_back((*itr).GetString());
        }
        m_errorObjectPatternsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodes") && !value["ErrorCodes"].IsNull())
    {
        if (!value["ErrorCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorSpanConf.ErrorCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorCodes.push_back((*itr).GetString());
        }
        m_errorCodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorSpanConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorObjectPatternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorObjectPatterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorObjectPatterns.begin(); itr != m_errorObjectPatterns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorCodes.begin(); itr != m_errorCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ErrorSpanConf::GetErrorObjectPatterns() const
{
    return m_errorObjectPatterns;
}

void ErrorSpanConf::SetErrorObjectPatterns(const vector<string>& _errorObjectPatterns)
{
    m_errorObjectPatterns = _errorObjectPatterns;
    m_errorObjectPatternsHasBeenSet = true;
}

bool ErrorSpanConf::ErrorObjectPatternsHasBeenSet() const
{
    return m_errorObjectPatternsHasBeenSet;
}

vector<string> ErrorSpanConf::GetErrorCodes() const
{
    return m_errorCodes;
}

void ErrorSpanConf::SetErrorCodes(const vector<string>& _errorCodes)
{
    m_errorCodes = _errorCodes;
    m_errorCodesHasBeenSet = true;
}

bool ErrorSpanConf::ErrorCodesHasBeenSet() const
{
    return m_errorCodesHasBeenSet;
}

