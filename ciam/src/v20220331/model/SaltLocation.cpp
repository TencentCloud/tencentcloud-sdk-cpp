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

#include <tencentcloud/ciam/v20220331/model/SaltLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

SaltLocation::SaltLocation() :
    m_saltLocationTypeEnumHasBeenSet(false),
    m_saltLocationRuleHasBeenSet(false)
{
}

CoreInternalOutcome SaltLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaltLocationTypeEnum") && !value["SaltLocationTypeEnum"].IsNull())
    {
        if (!value["SaltLocationTypeEnum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SaltLocation.SaltLocationTypeEnum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saltLocationTypeEnum = string(value["SaltLocationTypeEnum"].GetString());
        m_saltLocationTypeEnumHasBeenSet = true;
    }

    if (value.HasMember("SaltLocationRule") && !value["SaltLocationRule"].IsNull())
    {
        if (!value["SaltLocationRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SaltLocation.SaltLocationRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_saltLocationRule.Deserialize(value["SaltLocationRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_saltLocationRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SaltLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saltLocationTypeEnumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaltLocationTypeEnum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saltLocationTypeEnum.c_str(), allocator).Move(), allocator);
    }

    if (m_saltLocationRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaltLocationRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_saltLocationRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SaltLocation::GetSaltLocationTypeEnum() const
{
    return m_saltLocationTypeEnum;
}

void SaltLocation::SetSaltLocationTypeEnum(const string& _saltLocationTypeEnum)
{
    m_saltLocationTypeEnum = _saltLocationTypeEnum;
    m_saltLocationTypeEnumHasBeenSet = true;
}

bool SaltLocation::SaltLocationTypeEnumHasBeenSet() const
{
    return m_saltLocationTypeEnumHasBeenSet;
}

SaltLocationRule SaltLocation::GetSaltLocationRule() const
{
    return m_saltLocationRule;
}

void SaltLocation::SetSaltLocationRule(const SaltLocationRule& _saltLocationRule)
{
    m_saltLocationRule = _saltLocationRule;
    m_saltLocationRuleHasBeenSet = true;
}

bool SaltLocation::SaltLocationRuleHasBeenSet() const
{
    return m_saltLocationRuleHasBeenSet;
}

