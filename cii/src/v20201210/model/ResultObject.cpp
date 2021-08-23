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

#include <tencentcloud/cii/v20201210/model/ResultObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20201210::Model;
using namespace std;

ResultObject::ResultObject() :
    m_qualityHasBeenSet(false),
    m_structureResultHasBeenSet(false)
{
}

CoreInternalOutcome ResultObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResultObject.Quality` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_quality = value["Quality"].GetDouble();
        m_qualityHasBeenSet = true;
    }

    if (value.HasMember("StructureResult") && !value["StructureResult"].IsNull())
    {
        if (!value["StructureResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultObject.StructureResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_structureResult = string(value["StructureResult"].GetString());
        m_structureResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quality, allocator);
    }

    if (m_structureResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructureResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_structureResult.c_str(), allocator).Move(), allocator);
    }

}


double ResultObject::GetQuality() const
{
    return m_quality;
}

void ResultObject::SetQuality(const double& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool ResultObject::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

string ResultObject::GetStructureResult() const
{
    return m_structureResult;
}

void ResultObject::SetStructureResult(const string& _structureResult)
{
    m_structureResult = _structureResult;
    m_structureResultHasBeenSet = true;
}

bool ResultObject::StructureResultHasBeenSet() const
{
    return m_structureResultHasBeenSet;
}

