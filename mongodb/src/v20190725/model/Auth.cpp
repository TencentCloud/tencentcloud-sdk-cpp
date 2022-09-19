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

#include <tencentcloud/mongodb/v20190725/model/Auth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

Auth::Auth() :
    m_maskHasBeenSet(false),
    m_nameSpaceHasBeenSet(false)
{
}

CoreInternalOutcome Auth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Auth.Mask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetInt64();
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Auth.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Auth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

}


int64_t Auth::GetMask() const
{
    return m_mask;
}

void Auth::SetMask(const int64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool Auth::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

string Auth::GetNameSpace() const
{
    return m_nameSpace;
}

void Auth::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool Auth::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

