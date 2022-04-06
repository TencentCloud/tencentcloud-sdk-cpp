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

#include <tencentcloud/bsca/v20210811/model/LicenseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

LicenseDetail::LicenseDetail() :
    m_contentHasBeenSet(false),
    m_conditionSetHasBeenSet(false),
    m_forbiddenSetHasBeenSet(false),
    m_permissionSetHasBeenSet(false)
{
}

CoreInternalOutcome LicenseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ConditionSet") && !value["ConditionSet"].IsNull())
    {
        if (!value["ConditionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.ConditionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ConditionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LicenseRestriction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditionSet.push_back(item);
        }
        m_conditionSetHasBeenSet = true;
    }

    if (value.HasMember("ForbiddenSet") && !value["ForbiddenSet"].IsNull())
    {
        if (!value["ForbiddenSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.ForbiddenSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ForbiddenSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LicenseRestriction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_forbiddenSet.push_back(item);
        }
        m_forbiddenSetHasBeenSet = true;
    }

    if (value.HasMember("PermissionSet") && !value["PermissionSet"].IsNull())
    {
        if (!value["PermissionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseDetail.PermissionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LicenseRestriction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_permissionSet.push_back(item);
        }
        m_permissionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditionSet.begin(); itr != m_conditionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_forbiddenSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbiddenSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forbiddenSet.begin(); itr != m_forbiddenSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_permissionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionSet.begin(); itr != m_permissionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LicenseDetail::GetContent() const
{
    return m_content;
}

void LicenseDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool LicenseDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<LicenseRestriction> LicenseDetail::GetConditionSet() const
{
    return m_conditionSet;
}

void LicenseDetail::SetConditionSet(const vector<LicenseRestriction>& _conditionSet)
{
    m_conditionSet = _conditionSet;
    m_conditionSetHasBeenSet = true;
}

bool LicenseDetail::ConditionSetHasBeenSet() const
{
    return m_conditionSetHasBeenSet;
}

vector<LicenseRestriction> LicenseDetail::GetForbiddenSet() const
{
    return m_forbiddenSet;
}

void LicenseDetail::SetForbiddenSet(const vector<LicenseRestriction>& _forbiddenSet)
{
    m_forbiddenSet = _forbiddenSet;
    m_forbiddenSetHasBeenSet = true;
}

bool LicenseDetail::ForbiddenSetHasBeenSet() const
{
    return m_forbiddenSetHasBeenSet;
}

vector<LicenseRestriction> LicenseDetail::GetPermissionSet() const
{
    return m_permissionSet;
}

void LicenseDetail::SetPermissionSet(const vector<LicenseRestriction>& _permissionSet)
{
    m_permissionSet = _permissionSet;
    m_permissionSetHasBeenSet = true;
}

bool LicenseDetail::PermissionSetHasBeenSet() const
{
    return m_permissionSetHasBeenSet;
}

