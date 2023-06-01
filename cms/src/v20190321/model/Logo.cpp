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

#include <tencentcloud/cms/v20190321/model/Logo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

Logo::Logo() :
    m_confidenceHasBeenSet(false),
    m_rrectFHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome Logo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Logo.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("RrectF") && !value["RrectF"].IsNull())
    {
        if (!value["RrectF"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Logo.RrectF` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rrectF.Deserialize(value["RrectF"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rrectFHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Logo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Logo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_rrectFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RrectF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rrectF.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


double Logo::GetConfidence() const
{
    return m_confidence;
}

void Logo::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool Logo::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

RrectF Logo::GetRrectF() const
{
    return m_rrectF;
}

void Logo::SetRrectF(const RrectF& _rrectF)
{
    m_rrectF = _rrectF;
    m_rrectFHasBeenSet = true;
}

bool Logo::RrectFHasBeenSet() const
{
    return m_rrectFHasBeenSet;
}

string Logo::GetName() const
{
    return m_name;
}

void Logo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Logo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

