/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/TemplatePublishInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TemplatePublishInfo::TemplatePublishInfo() :
    m_isPublishedHasBeenSet(false)
{
}

CoreInternalOutcome TemplatePublishInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPublished") && !value["IsPublished"].IsNull())
    {
        if (!value["IsPublished"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TemplatePublishInfo.IsPublished` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublished = value["IsPublished"].GetBool();
        m_isPublishedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplatePublishInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPublishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublished, allocator);
    }

}


bool TemplatePublishInfo::GetIsPublished() const
{
    return m_isPublished;
}

void TemplatePublishInfo::SetIsPublished(const bool& _isPublished)
{
    m_isPublished = _isPublished;
    m_isPublishedHasBeenSet = true;
}

bool TemplatePublishInfo::IsPublishedHasBeenSet() const
{
    return m_isPublishedHasBeenSet;
}

