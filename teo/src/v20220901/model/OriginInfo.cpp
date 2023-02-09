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

#include <tencentcloud/teo/v20220901/model/OriginInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

OriginInfo::OriginInfo() :
    m_originTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_backupOriginHasBeenSet(false),
    m_privateAccessHasBeenSet(false),
    m_privateParametersHasBeenSet(false)
{
}

CoreInternalOutcome OriginInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("BackupOrigin") && !value["BackupOrigin"].IsNull())
    {
        if (!value["BackupOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.BackupOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupOrigin = string(value["BackupOrigin"].GetString());
        m_backupOriginHasBeenSet = true;
    }

    if (value.HasMember("PrivateAccess") && !value["PrivateAccess"].IsNull())
    {
        if (!value["PrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.PrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateAccess = string(value["PrivateAccess"].GetString());
        m_privateAccessHasBeenSet = true;
    }

    if (value.HasMember("PrivateParameters") && !value["PrivateParameters"].IsNull())
    {
        if (!value["PrivateParameters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginInfo.PrivateParameters` is not array type"));

        const rapidjson::Value &tmpValue = value["PrivateParameters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivateParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privateParameters.push_back(item);
        }
        m_privateParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_backupOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_privateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_privateParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateParameters.begin(); itr != m_privateParameters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OriginInfo::GetOriginType() const
{
    return m_originType;
}

void OriginInfo::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool OriginInfo::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string OriginInfo::GetOrigin() const
{
    return m_origin;
}

void OriginInfo::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool OriginInfo::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string OriginInfo::GetBackupOrigin() const
{
    return m_backupOrigin;
}

void OriginInfo::SetBackupOrigin(const string& _backupOrigin)
{
    m_backupOrigin = _backupOrigin;
    m_backupOriginHasBeenSet = true;
}

bool OriginInfo::BackupOriginHasBeenSet() const
{
    return m_backupOriginHasBeenSet;
}

string OriginInfo::GetPrivateAccess() const
{
    return m_privateAccess;
}

void OriginInfo::SetPrivateAccess(const string& _privateAccess)
{
    m_privateAccess = _privateAccess;
    m_privateAccessHasBeenSet = true;
}

bool OriginInfo::PrivateAccessHasBeenSet() const
{
    return m_privateAccessHasBeenSet;
}

vector<PrivateParameter> OriginInfo::GetPrivateParameters() const
{
    return m_privateParameters;
}

void OriginInfo::SetPrivateParameters(const vector<PrivateParameter>& _privateParameters)
{
    m_privateParameters = _privateParameters;
    m_privateParametersHasBeenSet = true;
}

bool OriginInfo::PrivateParametersHasBeenSet() const
{
    return m_privateParametersHasBeenSet;
}

