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

#include <tencentcloud/billing/v20180709/model/AnalyseAmountDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

AnalyseAmountDetail::AnalyseAmountDetail() :
    m_keyHasBeenSet(false),
    m_displayHasBeenSet(false)
{
}

CoreInternalOutcome AnalyseAmountDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseAmountDetail.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Display") && !value["Display"].IsNull())
    {
        if (!value["Display"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyseAmountDetail.Display` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_display = value["Display"].GetInt64();
        m_displayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyseAmountDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_displayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Display";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_display, allocator);
    }

}


string AnalyseAmountDetail::GetKey() const
{
    return m_key;
}

void AnalyseAmountDetail::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AnalyseAmountDetail::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t AnalyseAmountDetail::GetDisplay() const
{
    return m_display;
}

void AnalyseAmountDetail::SetDisplay(const int64_t& _display)
{
    m_display = _display;
    m_displayHasBeenSet = true;
}

bool AnalyseAmountDetail::DisplayHasBeenSet() const
{
    return m_displayHasBeenSet;
}

