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

#include <tencentcloud/monitor/v20180724/model/MetricObjectMeaning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

MetricObjectMeaning::MetricObjectMeaning() :
    m_enHasBeenSet(false),
    m_zhHasBeenSet(false)
{
}

CoreInternalOutcome MetricObjectMeaning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("En") && !value["En"].IsNull())
    {
        if (!value["En"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricObjectMeaning.En` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_en = string(value["En"].GetString());
        m_enHasBeenSet = true;
    }

    if (value.HasMember("Zh") && !value["Zh"].IsNull())
    {
        if (!value["Zh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricObjectMeaning.Zh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zh = string(value["Zh"].GetString());
        m_zhHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricObjectMeaning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "En";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_en.c_str(), allocator).Move(), allocator);
    }

    if (m_zhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zh.c_str(), allocator).Move(), allocator);
    }

}


string MetricObjectMeaning::GetEn() const
{
    return m_en;
}

void MetricObjectMeaning::SetEn(const string& _en)
{
    m_en = _en;
    m_enHasBeenSet = true;
}

bool MetricObjectMeaning::EnHasBeenSet() const
{
    return m_enHasBeenSet;
}

string MetricObjectMeaning::GetZh() const
{
    return m_zh;
}

void MetricObjectMeaning::SetZh(const string& _zh)
{
    m_zh = _zh;
    m_zhHasBeenSet = true;
}

bool MetricObjectMeaning::ZhHasBeenSet() const
{
    return m_zhHasBeenSet;
}

