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

#include <tencentcloud/organization/v20210331/model/TagComplianceDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

TagComplianceDetails::TagComplianceDetails() :
    m_complianceStatusHasBeenSet(false),
    m_keysWithNonCompliantValuesHasBeenSet(false),
    m_nonCompliantKeysHasBeenSet(false)
{
}

CoreInternalOutcome TagComplianceDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceStatus") && !value["ComplianceStatus"].IsNull())
    {
        if (!value["ComplianceStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TagComplianceDetails.ComplianceStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_complianceStatus = value["ComplianceStatus"].GetBool();
        m_complianceStatusHasBeenSet = true;
    }

    if (value.HasMember("KeysWithNonCompliantValues") && !value["KeysWithNonCompliantValues"].IsNull())
    {
        if (!value["KeysWithNonCompliantValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagComplianceDetails.KeysWithNonCompliantValues` is not array type"));

        const rapidjson::Value &tmpValue = value["KeysWithNonCompliantValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keysWithNonCompliantValues.push_back((*itr).GetString());
        }
        m_keysWithNonCompliantValuesHasBeenSet = true;
    }

    if (value.HasMember("NonCompliantKeys") && !value["NonCompliantKeys"].IsNull())
    {
        if (!value["NonCompliantKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagComplianceDetails.NonCompliantKeys` is not array type"));

        const rapidjson::Value &tmpValue = value["NonCompliantKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nonCompliantKeys.push_back((*itr).GetString());
        }
        m_nonCompliantKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagComplianceDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceStatus, allocator);
    }

    if (m_keysWithNonCompliantValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeysWithNonCompliantValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keysWithNonCompliantValues.begin(); itr != m_keysWithNonCompliantValues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nonCompliantKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonCompliantKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nonCompliantKeys.begin(); itr != m_nonCompliantKeys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool TagComplianceDetails::GetComplianceStatus() const
{
    return m_complianceStatus;
}

void TagComplianceDetails::SetComplianceStatus(const bool& _complianceStatus)
{
    m_complianceStatus = _complianceStatus;
    m_complianceStatusHasBeenSet = true;
}

bool TagComplianceDetails::ComplianceStatusHasBeenSet() const
{
    return m_complianceStatusHasBeenSet;
}

vector<string> TagComplianceDetails::GetKeysWithNonCompliantValues() const
{
    return m_keysWithNonCompliantValues;
}

void TagComplianceDetails::SetKeysWithNonCompliantValues(const vector<string>& _keysWithNonCompliantValues)
{
    m_keysWithNonCompliantValues = _keysWithNonCompliantValues;
    m_keysWithNonCompliantValuesHasBeenSet = true;
}

bool TagComplianceDetails::KeysWithNonCompliantValuesHasBeenSet() const
{
    return m_keysWithNonCompliantValuesHasBeenSet;
}

vector<string> TagComplianceDetails::GetNonCompliantKeys() const
{
    return m_nonCompliantKeys;
}

void TagComplianceDetails::SetNonCompliantKeys(const vector<string>& _nonCompliantKeys)
{
    m_nonCompliantKeys = _nonCompliantKeys;
    m_nonCompliantKeysHasBeenSet = true;
}

bool TagComplianceDetails::NonCompliantKeysHasBeenSet() const
{
    return m_nonCompliantKeysHasBeenSet;
}

