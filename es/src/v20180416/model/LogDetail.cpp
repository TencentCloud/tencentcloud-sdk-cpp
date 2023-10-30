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

#include <tencentcloud/es/v20180416/model/LogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

LogDetail::LogDetail() :
    m_keyHasBeenSet(false),
    m_adviseHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome LogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDetail.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Advise") && !value["Advise"].IsNull())
    {
        if (!value["Advise"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogDetail.Advise` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advise = string(value["Advise"].GetString());
        m_adviseHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogDetail.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_adviseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Advise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advise.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string LogDetail::GetKey() const
{
    return m_key;
}

void LogDetail::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool LogDetail::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string LogDetail::GetAdvise() const
{
    return m_advise;
}

void LogDetail::SetAdvise(const string& _advise)
{
    m_advise = _advise;
    m_adviseHasBeenSet = true;
}

bool LogDetail::AdviseHasBeenSet() const
{
    return m_adviseHasBeenSet;
}

int64_t LogDetail::GetCount() const
{
    return m_count;
}

void LogDetail::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool LogDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

