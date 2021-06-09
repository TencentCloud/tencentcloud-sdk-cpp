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

#include <tencentcloud/mrs/v20200910/model/NormPart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

NormPart::NormPart() :
    m_partHasBeenSet(false),
    m_partDirectionHasBeenSet(false),
    m_tissueHasBeenSet(false),
    m_tissueDirectionHasBeenSet(false),
    m_upperHasBeenSet(false)
{
}

CoreInternalOutcome NormPart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Error("response `NormPart.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("PartDirection") && !value["PartDirection"].IsNull())
    {
        if (!value["PartDirection"].IsString())
        {
            return CoreInternalOutcome(Error("response `NormPart.PartDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partDirection = string(value["PartDirection"].GetString());
        m_partDirectionHasBeenSet = true;
    }

    if (value.HasMember("Tissue") && !value["Tissue"].IsNull())
    {
        if (!value["Tissue"].IsString())
        {
            return CoreInternalOutcome(Error("response `NormPart.Tissue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tissue = string(value["Tissue"].GetString());
        m_tissueHasBeenSet = true;
    }

    if (value.HasMember("TissueDirection") && !value["TissueDirection"].IsNull())
    {
        if (!value["TissueDirection"].IsString())
        {
            return CoreInternalOutcome(Error("response `NormPart.TissueDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tissueDirection = string(value["TissueDirection"].GetString());
        m_tissueDirectionHasBeenSet = true;
    }

    if (value.HasMember("Upper") && !value["Upper"].IsNull())
    {
        if (!value["Upper"].IsString())
        {
            return CoreInternalOutcome(Error("response `NormPart.Upper` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upper = string(value["Upper"].GetString());
        m_upperHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NormPart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

    if (m_partDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_tissueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tissue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tissue.c_str(), allocator).Move(), allocator);
    }

    if (m_tissueDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TissueDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tissueDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_upperHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upper";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upper.c_str(), allocator).Move(), allocator);
    }

}


string NormPart::GetPart() const
{
    return m_part;
}

void NormPart::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool NormPart::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

string NormPart::GetPartDirection() const
{
    return m_partDirection;
}

void NormPart::SetPartDirection(const string& _partDirection)
{
    m_partDirection = _partDirection;
    m_partDirectionHasBeenSet = true;
}

bool NormPart::PartDirectionHasBeenSet() const
{
    return m_partDirectionHasBeenSet;
}

string NormPart::GetTissue() const
{
    return m_tissue;
}

void NormPart::SetTissue(const string& _tissue)
{
    m_tissue = _tissue;
    m_tissueHasBeenSet = true;
}

bool NormPart::TissueHasBeenSet() const
{
    return m_tissueHasBeenSet;
}

string NormPart::GetTissueDirection() const
{
    return m_tissueDirection;
}

void NormPart::SetTissueDirection(const string& _tissueDirection)
{
    m_tissueDirection = _tissueDirection;
    m_tissueDirectionHasBeenSet = true;
}

bool NormPart::TissueDirectionHasBeenSet() const
{
    return m_tissueDirectionHasBeenSet;
}

string NormPart::GetUpper() const
{
    return m_upper;
}

void NormPart::SetUpper(const string& _upper)
{
    m_upper = _upper;
    m_upperHasBeenSet = true;
}

bool NormPart::UpperHasBeenSet() const
{
    return m_upperHasBeenSet;
}

