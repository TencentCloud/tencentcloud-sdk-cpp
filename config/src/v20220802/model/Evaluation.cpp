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

#include <tencentcloud/config/v20220802/model/Evaluation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

Evaluation::Evaluation() :
    m_complianceResourceIdHasBeenSet(false),
    m_complianceResourceTypeHasBeenSet(false),
    m_complianceRegionHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_annotationHasBeenSet(false)
{
}

CoreInternalOutcome Evaluation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceResourceId") && !value["ComplianceResourceId"].IsNull())
    {
        if (!value["ComplianceResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Evaluation.ComplianceResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResourceId = string(value["ComplianceResourceId"].GetString());
        m_complianceResourceIdHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResourceType") && !value["ComplianceResourceType"].IsNull())
    {
        if (!value["ComplianceResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Evaluation.ComplianceResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResourceType = string(value["ComplianceResourceType"].GetString());
        m_complianceResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceRegion") && !value["ComplianceRegion"].IsNull())
    {
        if (!value["ComplianceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Evaluation.ComplianceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceRegion = string(value["ComplianceRegion"].GetString());
        m_complianceRegionHasBeenSet = true;
    }

    if (value.HasMember("ComplianceType") && !value["ComplianceType"].IsNull())
    {
        if (!value["ComplianceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Evaluation.ComplianceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceType = string(value["ComplianceType"].GetString());
        m_complianceTypeHasBeenSet = true;
    }

    if (value.HasMember("Annotation") && !value["Annotation"].IsNull())
    {
        if (!value["Annotation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Evaluation.Annotation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_annotation.Deserialize(value["Annotation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_annotationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Evaluation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceType.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Evaluation::GetComplianceResourceId() const
{
    return m_complianceResourceId;
}

void Evaluation::SetComplianceResourceId(const string& _complianceResourceId)
{
    m_complianceResourceId = _complianceResourceId;
    m_complianceResourceIdHasBeenSet = true;
}

bool Evaluation::ComplianceResourceIdHasBeenSet() const
{
    return m_complianceResourceIdHasBeenSet;
}

string Evaluation::GetComplianceResourceType() const
{
    return m_complianceResourceType;
}

void Evaluation::SetComplianceResourceType(const string& _complianceResourceType)
{
    m_complianceResourceType = _complianceResourceType;
    m_complianceResourceTypeHasBeenSet = true;
}

bool Evaluation::ComplianceResourceTypeHasBeenSet() const
{
    return m_complianceResourceTypeHasBeenSet;
}

string Evaluation::GetComplianceRegion() const
{
    return m_complianceRegion;
}

void Evaluation::SetComplianceRegion(const string& _complianceRegion)
{
    m_complianceRegion = _complianceRegion;
    m_complianceRegionHasBeenSet = true;
}

bool Evaluation::ComplianceRegionHasBeenSet() const
{
    return m_complianceRegionHasBeenSet;
}

string Evaluation::GetComplianceType() const
{
    return m_complianceType;
}

void Evaluation::SetComplianceType(const string& _complianceType)
{
    m_complianceType = _complianceType;
    m_complianceTypeHasBeenSet = true;
}

bool Evaluation::ComplianceTypeHasBeenSet() const
{
    return m_complianceTypeHasBeenSet;
}

Annotation Evaluation::GetAnnotation() const
{
    return m_annotation;
}

void Evaluation::SetAnnotation(const Annotation& _annotation)
{
    m_annotation = _annotation;
    m_annotationHasBeenSet = true;
}

bool Evaluation::AnnotationHasBeenSet() const
{
    return m_annotationHasBeenSet;
}

