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

#include <tencentcloud/eb/v20210416/model/Transformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

Transformation::Transformation() :
    m_extractionHasBeenSet(false),
    m_etlFilterHasBeenSet(false),
    m_transformHasBeenSet(false)
{
}

CoreInternalOutcome Transformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Extraction") && !value["Extraction"].IsNull())
    {
        if (!value["Extraction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Transformation.Extraction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extraction.Deserialize(value["Extraction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractionHasBeenSet = true;
    }

    if (value.HasMember("EtlFilter") && !value["EtlFilter"].IsNull())
    {
        if (!value["EtlFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Transformation.EtlFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_etlFilter.Deserialize(value["EtlFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_etlFilterHasBeenSet = true;
    }

    if (value.HasMember("Transform") && !value["Transform"].IsNull())
    {
        if (!value["Transform"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Transformation.Transform` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transform.Deserialize(value["Transform"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transformHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Transformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_extractionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extraction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_etlFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_etlFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transform.ToJsonObject(value[key.c_str()], allocator);
    }

}


Extraction Transformation::GetExtraction() const
{
    return m_extraction;
}

void Transformation::SetExtraction(const Extraction& _extraction)
{
    m_extraction = _extraction;
    m_extractionHasBeenSet = true;
}

bool Transformation::ExtractionHasBeenSet() const
{
    return m_extractionHasBeenSet;
}

EtlFilter Transformation::GetEtlFilter() const
{
    return m_etlFilter;
}

void Transformation::SetEtlFilter(const EtlFilter& _etlFilter)
{
    m_etlFilter = _etlFilter;
    m_etlFilterHasBeenSet = true;
}

bool Transformation::EtlFilterHasBeenSet() const
{
    return m_etlFilterHasBeenSet;
}

Transform Transformation::GetTransform() const
{
    return m_transform;
}

void Transformation::SetTransform(const Transform& _transform)
{
    m_transform = _transform;
    m_transformHasBeenSet = true;
}

bool Transformation::TransformHasBeenSet() const
{
    return m_transformHasBeenSet;
}

