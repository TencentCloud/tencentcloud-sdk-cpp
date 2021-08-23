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

#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaOperDataRes::CaptchaOperDataRes() :
    m_operDataLoadTimeUnitArrayHasBeenSet(false),
    m_operDataInterceptUnitArrayHasBeenSet(false),
    m_operDataTryTimesUnitArrayHasBeenSet(false),
    m_operDataTryTimesDistributeUnitArrayHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaOperDataRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperDataLoadTimeUnitArray") && !value["OperDataLoadTimeUnitArray"].IsNull())
    {
        if (!value["OperDataLoadTimeUnitArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataRes.OperDataLoadTimeUnitArray` is not array type"));

        const rapidjson::Value &tmpValue = value["OperDataLoadTimeUnitArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CaptchaOperDataLoadTimeUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operDataLoadTimeUnitArray.push_back(item);
        }
        m_operDataLoadTimeUnitArrayHasBeenSet = true;
    }

    if (value.HasMember("OperDataInterceptUnitArray") && !value["OperDataInterceptUnitArray"].IsNull())
    {
        if (!value["OperDataInterceptUnitArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataRes.OperDataInterceptUnitArray` is not array type"));

        const rapidjson::Value &tmpValue = value["OperDataInterceptUnitArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CaptchaOperDataInterceptUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operDataInterceptUnitArray.push_back(item);
        }
        m_operDataInterceptUnitArrayHasBeenSet = true;
    }

    if (value.HasMember("OperDataTryTimesUnitArray") && !value["OperDataTryTimesUnitArray"].IsNull())
    {
        if (!value["OperDataTryTimesUnitArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataRes.OperDataTryTimesUnitArray` is not array type"));

        const rapidjson::Value &tmpValue = value["OperDataTryTimesUnitArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CaptchaOperDataTryTimesUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operDataTryTimesUnitArray.push_back(item);
        }
        m_operDataTryTimesUnitArrayHasBeenSet = true;
    }

    if (value.HasMember("OperDataTryTimesDistributeUnitArray") && !value["OperDataTryTimesDistributeUnitArray"].IsNull())
    {
        if (!value["OperDataTryTimesDistributeUnitArray"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataRes.OperDataTryTimesDistributeUnitArray` is not array type"));

        const rapidjson::Value &tmpValue = value["OperDataTryTimesDistributeUnitArray"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CaptchaOperDataTryTimesDistributeUnit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operDataTryTimesDistributeUnitArray.push_back(item);
        }
        m_operDataTryTimesDistributeUnitArrayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaOperDataRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operDataLoadTimeUnitArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperDataLoadTimeUnitArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operDataLoadTimeUnitArray.begin(); itr != m_operDataLoadTimeUnitArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operDataInterceptUnitArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperDataInterceptUnitArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operDataInterceptUnitArray.begin(); itr != m_operDataInterceptUnitArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operDataTryTimesUnitArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperDataTryTimesUnitArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operDataTryTimesUnitArray.begin(); itr != m_operDataTryTimesUnitArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operDataTryTimesDistributeUnitArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperDataTryTimesDistributeUnitArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operDataTryTimesDistributeUnitArray.begin(); itr != m_operDataTryTimesDistributeUnitArray.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CaptchaOperDataLoadTimeUnit> CaptchaOperDataRes::GetOperDataLoadTimeUnitArray() const
{
    return m_operDataLoadTimeUnitArray;
}

void CaptchaOperDataRes::SetOperDataLoadTimeUnitArray(const vector<CaptchaOperDataLoadTimeUnit>& _operDataLoadTimeUnitArray)
{
    m_operDataLoadTimeUnitArray = _operDataLoadTimeUnitArray;
    m_operDataLoadTimeUnitArrayHasBeenSet = true;
}

bool CaptchaOperDataRes::OperDataLoadTimeUnitArrayHasBeenSet() const
{
    return m_operDataLoadTimeUnitArrayHasBeenSet;
}

vector<CaptchaOperDataInterceptUnit> CaptchaOperDataRes::GetOperDataInterceptUnitArray() const
{
    return m_operDataInterceptUnitArray;
}

void CaptchaOperDataRes::SetOperDataInterceptUnitArray(const vector<CaptchaOperDataInterceptUnit>& _operDataInterceptUnitArray)
{
    m_operDataInterceptUnitArray = _operDataInterceptUnitArray;
    m_operDataInterceptUnitArrayHasBeenSet = true;
}

bool CaptchaOperDataRes::OperDataInterceptUnitArrayHasBeenSet() const
{
    return m_operDataInterceptUnitArrayHasBeenSet;
}

vector<CaptchaOperDataTryTimesUnit> CaptchaOperDataRes::GetOperDataTryTimesUnitArray() const
{
    return m_operDataTryTimesUnitArray;
}

void CaptchaOperDataRes::SetOperDataTryTimesUnitArray(const vector<CaptchaOperDataTryTimesUnit>& _operDataTryTimesUnitArray)
{
    m_operDataTryTimesUnitArray = _operDataTryTimesUnitArray;
    m_operDataTryTimesUnitArrayHasBeenSet = true;
}

bool CaptchaOperDataRes::OperDataTryTimesUnitArrayHasBeenSet() const
{
    return m_operDataTryTimesUnitArrayHasBeenSet;
}

vector<CaptchaOperDataTryTimesDistributeUnit> CaptchaOperDataRes::GetOperDataTryTimesDistributeUnitArray() const
{
    return m_operDataTryTimesDistributeUnitArray;
}

void CaptchaOperDataRes::SetOperDataTryTimesDistributeUnitArray(const vector<CaptchaOperDataTryTimesDistributeUnit>& _operDataTryTimesDistributeUnitArray)
{
    m_operDataTryTimesDistributeUnitArray = _operDataTryTimesDistributeUnitArray;
    m_operDataTryTimesDistributeUnitArrayHasBeenSet = true;
}

bool CaptchaOperDataRes::OperDataTryTimesDistributeUnitArrayHasBeenSet() const
{
    return m_operDataTryTimesDistributeUnitArrayHasBeenSet;
}

