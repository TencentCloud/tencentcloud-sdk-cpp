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
    m_upperHasBeenSet(false),
    m_partDetailHasBeenSet(false),
    m_partDetailListHasBeenSet(false)
{
}

CoreInternalOutcome NormPart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }

    if (value.HasMember("PartDirection") && !value["PartDirection"].IsNull())
    {
        if (!value["PartDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.PartDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partDirection = string(value["PartDirection"].GetString());
        m_partDirectionHasBeenSet = true;
    }

    if (value.HasMember("Tissue") && !value["Tissue"].IsNull())
    {
        if (!value["Tissue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.Tissue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tissue = string(value["Tissue"].GetString());
        m_tissueHasBeenSet = true;
    }

    if (value.HasMember("TissueDirection") && !value["TissueDirection"].IsNull())
    {
        if (!value["TissueDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.TissueDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tissueDirection = string(value["TissueDirection"].GetString());
        m_tissueDirectionHasBeenSet = true;
    }

    if (value.HasMember("Upper") && !value["Upper"].IsNull())
    {
        if (!value["Upper"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.Upper` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upper = string(value["Upper"].GetString());
        m_upperHasBeenSet = true;
    }

    if (value.HasMember("PartDetail") && !value["PartDetail"].IsNull())
    {
        if (!value["PartDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NormPart.PartDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_partDetail.Deserialize(value["PartDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partDetailHasBeenSet = true;
    }

    if (value.HasMember("PartDetailList") && !value["PartDetailList"].IsNull())
    {
        if (!value["PartDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NormPart.PartDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["PartDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartDesc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partDetailList.push_back(item);
        }
        m_partDetailListHasBeenSet = true;
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

    if (m_partDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_partDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partDetailList.begin(); itr != m_partDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

PartDesc NormPart::GetPartDetail() const
{
    return m_partDetail;
}

void NormPart::SetPartDetail(const PartDesc& _partDetail)
{
    m_partDetail = _partDetail;
    m_partDetailHasBeenSet = true;
}

bool NormPart::PartDetailHasBeenSet() const
{
    return m_partDetailHasBeenSet;
}

vector<PartDesc> NormPart::GetPartDetailList() const
{
    return m_partDetailList;
}

void NormPart::SetPartDetailList(const vector<PartDesc>& _partDetailList)
{
    m_partDetailList = _partDetailList;
    m_partDetailListHasBeenSet = true;
}

bool NormPart::PartDetailListHasBeenSet() const
{
    return m_partDetailListHasBeenSet;
}

