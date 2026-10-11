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

#include <tencentcloud/dlc/v20210125/model/Spec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Spec::Spec() :
    m_sparkHasBeenSet(false)
{
}

CoreInternalOutcome Spec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Spark") && !value["Spark"].IsNull())
    {
        if (!value["Spark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.Spark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spark.Deserialize(value["Spark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sparkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Spec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spark.ToJsonObject(value[key.c_str()], allocator);
    }

}


SparkJobSpec Spec::GetSpark() const
{
    return m_spark;
}

void Spec::SetSpark(const SparkJobSpec& _spark)
{
    m_spark = _spark;
    m_sparkHasBeenSet = true;
}

bool Spec::SparkHasBeenSet() const
{
    return m_sparkHasBeenSet;
}

