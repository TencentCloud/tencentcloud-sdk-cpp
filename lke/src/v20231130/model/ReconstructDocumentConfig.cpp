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

#include <tencentcloud/lke/v20231130/model/ReconstructDocumentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReconstructDocumentConfig::ReconstructDocumentConfig() :
    m_enableInsetImageHasBeenSet(false)
{
}

CoreInternalOutcome ReconstructDocumentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableInsetImage") && !value["EnableInsetImage"].IsNull())
    {
        if (!value["EnableInsetImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReconstructDocumentConfig.EnableInsetImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInsetImage = value["EnableInsetImage"].GetBool();
        m_enableInsetImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReconstructDocumentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableInsetImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInsetImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInsetImage, allocator);
    }

}


bool ReconstructDocumentConfig::GetEnableInsetImage() const
{
    return m_enableInsetImage;
}

void ReconstructDocumentConfig::SetEnableInsetImage(const bool& _enableInsetImage)
{
    m_enableInsetImage = _enableInsetImage;
    m_enableInsetImageHasBeenSet = true;
}

bool ReconstructDocumentConfig::EnableInsetImageHasBeenSet() const
{
    return m_enableInsetImageHasBeenSet;
}

