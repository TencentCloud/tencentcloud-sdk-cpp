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

#include <tencentcloud/ciam/v20220331/model/Salt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

Salt::Salt() :
    m_saltValueHasBeenSet(false),
    m_saltLocationHasBeenSet(false)
{
}

CoreInternalOutcome Salt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaltValue") && !value["SaltValue"].IsNull())
    {
        if (!value["SaltValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Salt.SaltValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saltValue = string(value["SaltValue"].GetString());
        m_saltValueHasBeenSet = true;
    }

    if (value.HasMember("SaltLocation") && !value["SaltLocation"].IsNull())
    {
        if (!value["SaltLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Salt.SaltLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_saltLocation.Deserialize(value["SaltLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_saltLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Salt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saltValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaltValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saltValue.c_str(), allocator).Move(), allocator);
    }

    if (m_saltLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaltLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_saltLocation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Salt::GetSaltValue() const
{
    return m_saltValue;
}

void Salt::SetSaltValue(const string& _saltValue)
{
    m_saltValue = _saltValue;
    m_saltValueHasBeenSet = true;
}

bool Salt::SaltValueHasBeenSet() const
{
    return m_saltValueHasBeenSet;
}

SaltLocation Salt::GetSaltLocation() const
{
    return m_saltLocation;
}

void Salt::SetSaltLocation(const SaltLocation& _saltLocation)
{
    m_saltLocation = _saltLocation;
    m_saltLocationHasBeenSet = true;
}

bool Salt::SaltLocationHasBeenSet() const
{
    return m_saltLocationHasBeenSet;
}

