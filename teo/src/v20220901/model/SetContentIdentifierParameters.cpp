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

#include <tencentcloud/teo/v20220901/model/SetContentIdentifierParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SetContentIdentifierParameters::SetContentIdentifierParameters() :
    m_contentIdentifierHasBeenSet(false)
{
}

CoreInternalOutcome SetContentIdentifierParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentIdentifier") && !value["ContentIdentifier"].IsNull())
    {
        if (!value["ContentIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetContentIdentifierParameters.ContentIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentIdentifier = string(value["ContentIdentifier"].GetString());
        m_contentIdentifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetContentIdentifierParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentIdentifier.c_str(), allocator).Move(), allocator);
    }

}


string SetContentIdentifierParameters::GetContentIdentifier() const
{
    return m_contentIdentifier;
}

void SetContentIdentifierParameters::SetContentIdentifier(const string& _contentIdentifier)
{
    m_contentIdentifier = _contentIdentifier;
    m_contentIdentifierHasBeenSet = true;
}

bool SetContentIdentifierParameters::ContentIdentifierHasBeenSet() const
{
    return m_contentIdentifierHasBeenSet;
}

