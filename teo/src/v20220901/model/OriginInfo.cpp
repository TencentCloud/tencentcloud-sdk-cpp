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
    m_privateParametersHasBeenSet(false),
    m_hostHeaderHasBeenSet(false),
    m_vodeoSubAppIdHasBeenSet(false),
    m_vodeoDistributionRangeHasBeenSet(false),
    m_vodeoBucketIdHasBeenSet(false),
    m_vodOriginScopeHasBeenSet(false),
    m_vodBucketIdHasBeenSet(false)
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

    if (value.HasMember("HostHeader") && !value["HostHeader"].IsNull())
    {
        if (!value["HostHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.HostHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostHeader = string(value["HostHeader"].GetString());
        m_hostHeaderHasBeenSet = true;
    }

    if (value.HasMember("VodeoSubAppId") && !value["VodeoSubAppId"].IsNull())
    {
        if (!value["VodeoSubAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.VodeoSubAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vodeoSubAppId = value["VodeoSubAppId"].GetInt64();
        m_vodeoSubAppIdHasBeenSet = true;
    }

    if (value.HasMember("VodeoDistributionRange") && !value["VodeoDistributionRange"].IsNull())
    {
        if (!value["VodeoDistributionRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.VodeoDistributionRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodeoDistributionRange = string(value["VodeoDistributionRange"].GetString());
        m_vodeoDistributionRangeHasBeenSet = true;
    }

    if (value.HasMember("VodeoBucketId") && !value["VodeoBucketId"].IsNull())
    {
        if (!value["VodeoBucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.VodeoBucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodeoBucketId = string(value["VodeoBucketId"].GetString());
        m_vodeoBucketIdHasBeenSet = true;
    }

    if (value.HasMember("VodOriginScope") && !value["VodOriginScope"].IsNull())
    {
        if (!value["VodOriginScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.VodOriginScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodOriginScope = string(value["VodOriginScope"].GetString());
        m_vodOriginScopeHasBeenSet = true;
    }

    if (value.HasMember("VodBucketId") && !value["VodBucketId"].IsNull())
    {
        if (!value["VodBucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginInfo.VodBucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodBucketId = string(value["VodBucketId"].GetString());
        m_vodBucketIdHasBeenSet = true;
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

    if (m_hostHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_vodeoSubAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodeoSubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vodeoSubAppId, allocator);
    }

    if (m_vodeoDistributionRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodeoDistributionRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodeoDistributionRange.c_str(), allocator).Move(), allocator);
    }

    if (m_vodeoBucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodeoBucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodeoBucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_vodOriginScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodOriginScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodOriginScope.c_str(), allocator).Move(), allocator);
    }

    if (m_vodBucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodBucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodBucketId.c_str(), allocator).Move(), allocator);
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

string OriginInfo::GetHostHeader() const
{
    return m_hostHeader;
}

void OriginInfo::SetHostHeader(const string& _hostHeader)
{
    m_hostHeader = _hostHeader;
    m_hostHeaderHasBeenSet = true;
}

bool OriginInfo::HostHeaderHasBeenSet() const
{
    return m_hostHeaderHasBeenSet;
}

int64_t OriginInfo::GetVodeoSubAppId() const
{
    return m_vodeoSubAppId;
}

void OriginInfo::SetVodeoSubAppId(const int64_t& _vodeoSubAppId)
{
    m_vodeoSubAppId = _vodeoSubAppId;
    m_vodeoSubAppIdHasBeenSet = true;
}

bool OriginInfo::VodeoSubAppIdHasBeenSet() const
{
    return m_vodeoSubAppIdHasBeenSet;
}

string OriginInfo::GetVodeoDistributionRange() const
{
    return m_vodeoDistributionRange;
}

void OriginInfo::SetVodeoDistributionRange(const string& _vodeoDistributionRange)
{
    m_vodeoDistributionRange = _vodeoDistributionRange;
    m_vodeoDistributionRangeHasBeenSet = true;
}

bool OriginInfo::VodeoDistributionRangeHasBeenSet() const
{
    return m_vodeoDistributionRangeHasBeenSet;
}

string OriginInfo::GetVodeoBucketId() const
{
    return m_vodeoBucketId;
}

void OriginInfo::SetVodeoBucketId(const string& _vodeoBucketId)
{
    m_vodeoBucketId = _vodeoBucketId;
    m_vodeoBucketIdHasBeenSet = true;
}

bool OriginInfo::VodeoBucketIdHasBeenSet() const
{
    return m_vodeoBucketIdHasBeenSet;
}

string OriginInfo::GetVodOriginScope() const
{
    return m_vodOriginScope;
}

void OriginInfo::SetVodOriginScope(const string& _vodOriginScope)
{
    m_vodOriginScope = _vodOriginScope;
    m_vodOriginScopeHasBeenSet = true;
}

bool OriginInfo::VodOriginScopeHasBeenSet() const
{
    return m_vodOriginScopeHasBeenSet;
}

string OriginInfo::GetVodBucketId() const
{
    return m_vodBucketId;
}

void OriginInfo::SetVodBucketId(const string& _vodBucketId)
{
    m_vodBucketId = _vodBucketId;
    m_vodBucketIdHasBeenSet = true;
}

bool OriginInfo::VodBucketIdHasBeenSet() const
{
    return m_vodBucketIdHasBeenSet;
}

