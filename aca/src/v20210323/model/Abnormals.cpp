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

#include <tencentcloud/aca/v20210323/model/Abnormals.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

Abnormals::Abnormals() :
    m_typeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_abnormalReasonHasBeenSet(false)
{
}

CoreInternalOutcome Abnormals::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Abnormals.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Abnormals.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("AbnormalReason") && !value["AbnormalReason"].IsNull())
    {
        if (!value["AbnormalReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Abnormals.AbnormalReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalReason = string(value["AbnormalReason"].GetString());
        m_abnormalReasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Abnormals::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abnormalReason.c_str(), allocator).Move(), allocator);
    }

}


string Abnormals::GetType() const
{
    return m_type;
}

void Abnormals::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Abnormals::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Abnormals::GetTitle() const
{
    return m_title;
}

void Abnormals::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool Abnormals::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string Abnormals::GetAbnormalReason() const
{
    return m_abnormalReason;
}

void Abnormals::SetAbnormalReason(const string& _abnormalReason)
{
    m_abnormalReason = _abnormalReason;
    m_abnormalReasonHasBeenSet = true;
}

bool Abnormals::AbnormalReasonHasBeenSet() const
{
    return m_abnormalReasonHasBeenSet;
}

