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

#include <tencentcloud/ses/v20201002/model/Template.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

Template::Template() :
    m_templateIDHasBeenSet(false),
    m_templateDataHasBeenSet(false)
{
}

CoreInternalOutcome Template::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateID") && !value["TemplateID"].IsNull())
    {
        if (!value["TemplateID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateID = value["TemplateID"].GetUint64();
        m_templateIDHasBeenSet = true;
    }

    if (value.HasMember("TemplateData") && !value["TemplateData"].IsNull())
    {
        if (!value["TemplateData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateData = string(value["TemplateData"].GetString());
        m_templateDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Template::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateID, allocator);
    }

    if (m_templateDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateData.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Template::GetTemplateID() const
{
    return m_templateID;
}

void Template::SetTemplateID(const uint64_t& _templateID)
{
    m_templateID = _templateID;
    m_templateIDHasBeenSet = true;
}

bool Template::TemplateIDHasBeenSet() const
{
    return m_templateIDHasBeenSet;
}

string Template::GetTemplateData() const
{
    return m_templateData;
}

void Template::SetTemplateData(const string& _templateData)
{
    m_templateData = _templateData;
    m_templateDataHasBeenSet = true;
}

bool Template::TemplateDataHasBeenSet() const
{
    return m_templateDataHasBeenSet;
}

