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

#include <tencentcloud/tiia/v20190529/model/Labels.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

Labels::Labels() :
    m_firstLabelHasBeenSet(false),
    m_secondLabelHasBeenSet(false)
{
}

CoreInternalOutcome Labels::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstLabel") && !value["FirstLabel"].IsNull())
    {
        if (!value["FirstLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Labels.FirstLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstLabel = string(value["FirstLabel"].GetString());
        m_firstLabelHasBeenSet = true;
    }

    if (value.HasMember("SecondLabel") && !value["SecondLabel"].IsNull())
    {
        if (!value["SecondLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Labels.SecondLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondLabel = string(value["SecondLabel"].GetString());
        m_secondLabelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Labels::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_secondLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondLabel.c_str(), allocator).Move(), allocator);
    }

}


string Labels::GetFirstLabel() const
{
    return m_firstLabel;
}

void Labels::SetFirstLabel(const string& _firstLabel)
{
    m_firstLabel = _firstLabel;
    m_firstLabelHasBeenSet = true;
}

bool Labels::FirstLabelHasBeenSet() const
{
    return m_firstLabelHasBeenSet;
}

string Labels::GetSecondLabel() const
{
    return m_secondLabel;
}

void Labels::SetSecondLabel(const string& _secondLabel)
{
    m_secondLabel = _secondLabel;
    m_secondLabelHasBeenSet = true;
}

bool Labels::SecondLabelHasBeenSet() const
{
    return m_secondLabelHasBeenSet;
}

