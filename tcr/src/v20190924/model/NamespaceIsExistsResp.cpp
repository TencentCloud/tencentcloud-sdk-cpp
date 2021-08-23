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

#include <tencentcloud/tcr/v20190924/model/NamespaceIsExistsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

NamespaceIsExistsResp::NamespaceIsExistsResp() :
    m_isExistHasBeenSet(false),
    m_isPreservedHasBeenSet(false)
{
}

CoreInternalOutcome NamespaceIsExistsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsExist") && !value["IsExist"].IsNull())
    {
        if (!value["IsExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceIsExistsResp.IsExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExist = value["IsExist"].GetBool();
        m_isExistHasBeenSet = true;
    }

    if (value.HasMember("IsPreserved") && !value["IsPreserved"].IsNull())
    {
        if (!value["IsPreserved"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NamespaceIsExistsResp.IsPreserved` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPreserved = value["IsPreserved"].GetBool();
        m_isPreservedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NamespaceIsExistsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExist, allocator);
    }

    if (m_isPreservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreserved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPreserved, allocator);
    }

}


bool NamespaceIsExistsResp::GetIsExist() const
{
    return m_isExist;
}

void NamespaceIsExistsResp::SetIsExist(const bool& _isExist)
{
    m_isExist = _isExist;
    m_isExistHasBeenSet = true;
}

bool NamespaceIsExistsResp::IsExistHasBeenSet() const
{
    return m_isExistHasBeenSet;
}

bool NamespaceIsExistsResp::GetIsPreserved() const
{
    return m_isPreserved;
}

void NamespaceIsExistsResp::SetIsPreserved(const bool& _isPreserved)
{
    m_isPreserved = _isPreserved;
    m_isPreservedHasBeenSet = true;
}

bool NamespaceIsExistsResp::IsPreservedHasBeenSet() const
{
    return m_isPreservedHasBeenSet;
}

