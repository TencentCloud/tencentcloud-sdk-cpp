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

#include <tencentcloud/bdrc/v20260330/model/SitePair.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

SitePair::SitePair() :
    m_appIdHasBeenSet(false),
    m_sitePairIdHasBeenSet(false),
    m_sitePairNameHasBeenSet(false),
    m_sitePairTypeHasBeenSet(false),
    m_sitePairStateHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceZoneHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_targetZoneHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_targetVpcHasBeenSet(false),
    m_copyTypeHasBeenSet(false),
    m_disasterRecoveryTypeHasBeenSet(false),
    m_createFromHasBeenSet(false),
    m_accountUinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bindProtectGroupCountHasBeenSet(false),
    m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet(false),
    m_protectedResourceSetHasBeenSet(false),
    m_protectedResourceStatusSetHasBeenSet(false),
    m_crossCloudDetailsHasBeenSet(false)
{
}

CoreInternalOutcome SitePair::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SitePairId") && !value["SitePairId"].IsNull())
    {
        if (!value["SitePairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SitePairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairId = string(value["SitePairId"].GetString());
        m_sitePairIdHasBeenSet = true;
    }

    if (value.HasMember("SitePairName") && !value["SitePairName"].IsNull())
    {
        if (!value["SitePairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SitePairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairName = string(value["SitePairName"].GetString());
        m_sitePairNameHasBeenSet = true;
    }

    if (value.HasMember("SitePairType") && !value["SitePairType"].IsNull())
    {
        if (!value["SitePairType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SitePairType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairType = string(value["SitePairType"].GetString());
        m_sitePairTypeHasBeenSet = true;
    }

    if (value.HasMember("SitePairState") && !value["SitePairState"].IsNull())
    {
        if (!value["SitePairState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SitePairState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sitePairState = string(value["SitePairState"].GetString());
        m_sitePairStateHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SourceZone") && !value["SourceZone"].IsNull())
    {
        if (!value["SourceZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SourceZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceZone = string(value["SourceZone"].GetString());
        m_sourceZoneHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("TargetZone") && !value["TargetZone"].IsNull())
    {
        if (!value["TargetZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.TargetZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetZone = string(value["TargetZone"].GetString());
        m_targetZoneHasBeenSet = true;
    }

    if (value.HasMember("SourceVpc") && !value["SourceVpc"].IsNull())
    {
        if (!value["SourceVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SourceVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVpc = string(value["SourceVpc"].GetString());
        m_sourceVpcHasBeenSet = true;
    }

    if (value.HasMember("TargetVpc") && !value["TargetVpc"].IsNull())
    {
        if (!value["TargetVpc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.TargetVpc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetVpc = string(value["TargetVpc"].GetString());
        m_targetVpcHasBeenSet = true;
    }

    if (value.HasMember("CopyType") && !value["CopyType"].IsNull())
    {
        if (!value["CopyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.CopyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyType = string(value["CopyType"].GetString());
        m_copyTypeHasBeenSet = true;
    }

    if (value.HasMember("DisasterRecoveryType") && !value["DisasterRecoveryType"].IsNull())
    {
        if (!value["DisasterRecoveryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.DisasterRecoveryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoveryType = string(value["DisasterRecoveryType"].GetString());
        m_disasterRecoveryTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateFrom") && !value["CreateFrom"].IsNull())
    {
        if (!value["CreateFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.CreateFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createFrom = string(value["CreateFrom"].GetString());
        m_createFromHasBeenSet = true;
    }

    if (value.HasMember("AccountUin") && !value["AccountUin"].IsNull())
    {
        if (!value["AccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.AccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountUin = string(value["AccountUin"].GetString());
        m_accountUinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BindProtectGroupCount") && !value["BindProtectGroupCount"].IsNull())
    {
        if (!value["BindProtectGroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.BindProtectGroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindProtectGroupCount = value["BindProtectGroupCount"].GetInt64();
        m_bindProtectGroupCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorRecoveryPointObjectiveCopyPairSet") && !value["ErrorRecoveryPointObjectiveCopyPairSet"].IsNull())
    {
        if (!value["ErrorRecoveryPointObjectiveCopyPairSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SitePair.ErrorRecoveryPointObjectiveCopyPairSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorRecoveryPointObjectiveCopyPairSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorRecoveryPointObjectiveCopyPairSet.push_back((*itr).GetString());
        }
        m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceSet") && !value["ProtectedResourceSet"].IsNull())
    {
        if (!value["ProtectedResourceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SitePair.ProtectedResourceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectedResourceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectedResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protectedResourceSet.push_back(item);
        }
        m_protectedResourceSetHasBeenSet = true;
    }

    if (value.HasMember("ProtectedResourceStatusSet") && !value["ProtectedResourceStatusSet"].IsNull())
    {
        if (!value["ProtectedResourceStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SitePair.ProtectedResourceStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtectedResourceStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectedResourceStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protectedResourceStatusSet.push_back(item);
        }
        m_protectedResourceStatusSetHasBeenSet = true;
    }

    if (value.HasMember("CrossCloudDetails") && !value["CrossCloudDetails"].IsNull())
    {
        if (!value["CrossCloudDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SitePair.CrossCloudDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crossCloudDetails.Deserialize(value["CrossCloudDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crossCloudDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SitePair::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairName.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairType.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sitePairState.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceZone.c_str(), allocator).Move(), allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetZone.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_targetVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetVpc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_copyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyType.c_str(), allocator).Move(), allocator);
    }

    if (m_disasterRecoveryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoveryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoveryType.c_str(), allocator).Move(), allocator);
    }

    if (m_createFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bindProtectGroupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindProtectGroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindProtectGroupCount, allocator);
    }

    if (m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRecoveryPointObjectiveCopyPairSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorRecoveryPointObjectiveCopyPairSet.begin(); itr != m_errorRecoveryPointObjectiveCopyPairSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protectedResourceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protectedResourceSet.begin(); itr != m_protectedResourceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protectedResourceStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protectedResourceStatusSet.begin(); itr != m_protectedResourceStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_crossCloudDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossCloudDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crossCloudDetails.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t SitePair::GetAppId() const
{
    return m_appId;
}

void SitePair::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool SitePair::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string SitePair::GetSitePairId() const
{
    return m_sitePairId;
}

void SitePair::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool SitePair::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

string SitePair::GetSitePairName() const
{
    return m_sitePairName;
}

void SitePair::SetSitePairName(const string& _sitePairName)
{
    m_sitePairName = _sitePairName;
    m_sitePairNameHasBeenSet = true;
}

bool SitePair::SitePairNameHasBeenSet() const
{
    return m_sitePairNameHasBeenSet;
}

string SitePair::GetSitePairType() const
{
    return m_sitePairType;
}

void SitePair::SetSitePairType(const string& _sitePairType)
{
    m_sitePairType = _sitePairType;
    m_sitePairTypeHasBeenSet = true;
}

bool SitePair::SitePairTypeHasBeenSet() const
{
    return m_sitePairTypeHasBeenSet;
}

string SitePair::GetSitePairState() const
{
    return m_sitePairState;
}

void SitePair::SetSitePairState(const string& _sitePairState)
{
    m_sitePairState = _sitePairState;
    m_sitePairStateHasBeenSet = true;
}

bool SitePair::SitePairStateHasBeenSet() const
{
    return m_sitePairStateHasBeenSet;
}

string SitePair::GetSourceRegion() const
{
    return m_sourceRegion;
}

void SitePair::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool SitePair::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string SitePair::GetSourceZone() const
{
    return m_sourceZone;
}

void SitePair::SetSourceZone(const string& _sourceZone)
{
    m_sourceZone = _sourceZone;
    m_sourceZoneHasBeenSet = true;
}

bool SitePair::SourceZoneHasBeenSet() const
{
    return m_sourceZoneHasBeenSet;
}

string SitePair::GetTargetRegion() const
{
    return m_targetRegion;
}

void SitePair::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool SitePair::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string SitePair::GetTargetZone() const
{
    return m_targetZone;
}

void SitePair::SetTargetZone(const string& _targetZone)
{
    m_targetZone = _targetZone;
    m_targetZoneHasBeenSet = true;
}

bool SitePair::TargetZoneHasBeenSet() const
{
    return m_targetZoneHasBeenSet;
}

string SitePair::GetSourceVpc() const
{
    return m_sourceVpc;
}

void SitePair::SetSourceVpc(const string& _sourceVpc)
{
    m_sourceVpc = _sourceVpc;
    m_sourceVpcHasBeenSet = true;
}

bool SitePair::SourceVpcHasBeenSet() const
{
    return m_sourceVpcHasBeenSet;
}

string SitePair::GetTargetVpc() const
{
    return m_targetVpc;
}

void SitePair::SetTargetVpc(const string& _targetVpc)
{
    m_targetVpc = _targetVpc;
    m_targetVpcHasBeenSet = true;
}

bool SitePair::TargetVpcHasBeenSet() const
{
    return m_targetVpcHasBeenSet;
}

string SitePair::GetCopyType() const
{
    return m_copyType;
}

void SitePair::SetCopyType(const string& _copyType)
{
    m_copyType = _copyType;
    m_copyTypeHasBeenSet = true;
}

bool SitePair::CopyTypeHasBeenSet() const
{
    return m_copyTypeHasBeenSet;
}

string SitePair::GetDisasterRecoveryType() const
{
    return m_disasterRecoveryType;
}

void SitePair::SetDisasterRecoveryType(const string& _disasterRecoveryType)
{
    m_disasterRecoveryType = _disasterRecoveryType;
    m_disasterRecoveryTypeHasBeenSet = true;
}

bool SitePair::DisasterRecoveryTypeHasBeenSet() const
{
    return m_disasterRecoveryTypeHasBeenSet;
}

string SitePair::GetCreateFrom() const
{
    return m_createFrom;
}

void SitePair::SetCreateFrom(const string& _createFrom)
{
    m_createFrom = _createFrom;
    m_createFromHasBeenSet = true;
}

bool SitePair::CreateFromHasBeenSet() const
{
    return m_createFromHasBeenSet;
}

string SitePair::GetAccountUin() const
{
    return m_accountUin;
}

void SitePair::SetAccountUin(const string& _accountUin)
{
    m_accountUin = _accountUin;
    m_accountUinHasBeenSet = true;
}

bool SitePair::AccountUinHasBeenSet() const
{
    return m_accountUinHasBeenSet;
}

string SitePair::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void SitePair::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool SitePair::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string SitePair::GetCreateTime() const
{
    return m_createTime;
}

void SitePair::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SitePair::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t SitePair::GetBindProtectGroupCount() const
{
    return m_bindProtectGroupCount;
}

void SitePair::SetBindProtectGroupCount(const int64_t& _bindProtectGroupCount)
{
    m_bindProtectGroupCount = _bindProtectGroupCount;
    m_bindProtectGroupCountHasBeenSet = true;
}

bool SitePair::BindProtectGroupCountHasBeenSet() const
{
    return m_bindProtectGroupCountHasBeenSet;
}

vector<string> SitePair::GetErrorRecoveryPointObjectiveCopyPairSet() const
{
    return m_errorRecoveryPointObjectiveCopyPairSet;
}

void SitePair::SetErrorRecoveryPointObjectiveCopyPairSet(const vector<string>& _errorRecoveryPointObjectiveCopyPairSet)
{
    m_errorRecoveryPointObjectiveCopyPairSet = _errorRecoveryPointObjectiveCopyPairSet;
    m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet = true;
}

bool SitePair::ErrorRecoveryPointObjectiveCopyPairSetHasBeenSet() const
{
    return m_errorRecoveryPointObjectiveCopyPairSetHasBeenSet;
}

vector<ProtectedResource> SitePair::GetProtectedResourceSet() const
{
    return m_protectedResourceSet;
}

void SitePair::SetProtectedResourceSet(const vector<ProtectedResource>& _protectedResourceSet)
{
    m_protectedResourceSet = _protectedResourceSet;
    m_protectedResourceSetHasBeenSet = true;
}

bool SitePair::ProtectedResourceSetHasBeenSet() const
{
    return m_protectedResourceSetHasBeenSet;
}

vector<ProtectedResourceStatus> SitePair::GetProtectedResourceStatusSet() const
{
    return m_protectedResourceStatusSet;
}

void SitePair::SetProtectedResourceStatusSet(const vector<ProtectedResourceStatus>& _protectedResourceStatusSet)
{
    m_protectedResourceStatusSet = _protectedResourceStatusSet;
    m_protectedResourceStatusSetHasBeenSet = true;
}

bool SitePair::ProtectedResourceStatusSetHasBeenSet() const
{
    return m_protectedResourceStatusSetHasBeenSet;
}

CrossCloudDetails SitePair::GetCrossCloudDetails() const
{
    return m_crossCloudDetails;
}

void SitePair::SetCrossCloudDetails(const CrossCloudDetails& _crossCloudDetails)
{
    m_crossCloudDetails = _crossCloudDetails;
    m_crossCloudDetailsHasBeenSet = true;
}

bool SitePair::CrossCloudDetailsHasBeenSet() const
{
    return m_crossCloudDetailsHasBeenSet;
}

