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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwCreateCommonResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwCreateCommonResult::CNAPIGwCreateCommonResult() :
    m_successHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwCreateCommonResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwCreateCommonResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwCreateCommonResult.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwCreateCommonResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

}


bool CNAPIGwCreateCommonResult::GetSuccess() const
{
    return m_success;
}

void CNAPIGwCreateCommonResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool CNAPIGwCreateCommonResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string CNAPIGwCreateCommonResult::GetID() const
{
    return m_iD;
}

void CNAPIGwCreateCommonResult::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool CNAPIGwCreateCommonResult::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

