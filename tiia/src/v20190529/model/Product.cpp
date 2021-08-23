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

#include <tencentcloud/tiia/v20190529/model/Product.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

Product::Product() :
    m_nameHasBeenSet(false),
    m_parentsHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_xMinHasBeenSet(false),
    m_yMinHasBeenSet(false),
    m_xMaxHasBeenSet(false),
    m_yMaxHasBeenSet(false)
{
}

CoreInternalOutcome Product::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Parents") && !value["Parents"].IsNull())
    {
        if (!value["Parents"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Parents` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parents = string(value["Parents"].GetString());
        m_parentsHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("XMin") && !value["XMin"].IsNull())
    {
        if (!value["XMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.XMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xMin = value["XMin"].GetInt64();
        m_xMinHasBeenSet = true;
    }

    if (value.HasMember("YMin") && !value["YMin"].IsNull())
    {
        if (!value["YMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.YMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yMin = value["YMin"].GetInt64();
        m_yMinHasBeenSet = true;
    }

    if (value.HasMember("XMax") && !value["XMax"].IsNull())
    {
        if (!value["XMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.XMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_xMax = value["XMax"].GetInt64();
        m_xMaxHasBeenSet = true;
    }

    if (value.HasMember("YMax") && !value["YMax"].IsNull())
    {
        if (!value["YMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Product.YMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yMax = value["YMax"].GetInt64();
        m_yMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Product::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parents.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_xMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xMin, allocator);
    }

    if (m_yMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yMin, allocator);
    }

    if (m_xMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xMax, allocator);
    }

    if (m_yMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yMax, allocator);
    }

}


string Product::GetName() const
{
    return m_name;
}

void Product::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Product::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Product::GetParents() const
{
    return m_parents;
}

void Product::SetParents(const string& _parents)
{
    m_parents = _parents;
    m_parentsHasBeenSet = true;
}

bool Product::ParentsHasBeenSet() const
{
    return m_parentsHasBeenSet;
}

int64_t Product::GetConfidence() const
{
    return m_confidence;
}

void Product::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool Product::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

int64_t Product::GetXMin() const
{
    return m_xMin;
}

void Product::SetXMin(const int64_t& _xMin)
{
    m_xMin = _xMin;
    m_xMinHasBeenSet = true;
}

bool Product::XMinHasBeenSet() const
{
    return m_xMinHasBeenSet;
}

int64_t Product::GetYMin() const
{
    return m_yMin;
}

void Product::SetYMin(const int64_t& _yMin)
{
    m_yMin = _yMin;
    m_yMinHasBeenSet = true;
}

bool Product::YMinHasBeenSet() const
{
    return m_yMinHasBeenSet;
}

int64_t Product::GetXMax() const
{
    return m_xMax;
}

void Product::SetXMax(const int64_t& _xMax)
{
    m_xMax = _xMax;
    m_xMaxHasBeenSet = true;
}

bool Product::XMaxHasBeenSet() const
{
    return m_xMaxHasBeenSet;
}

int64_t Product::GetYMax() const
{
    return m_yMax;
}

void Product::SetYMax(const int64_t& _yMax)
{
    m_yMax = _yMax;
    m_yMaxHasBeenSet = true;
}

bool Product::YMaxHasBeenSet() const
{
    return m_yMaxHasBeenSet;
}

