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

#include <tencentcloud/cynosdb/v20190107/model/Package.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

Package::Package() :
    m_appIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_packageRegionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_packageTotalSpecHasBeenSet(false),
    m_packageUsedSpecHasBeenSet(false),
    m_hasQuotaHasBeenSet(false),
    m_bindInstanceInfosHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_historyBindResourceInfosHasBeenSet(false)
{
}

CoreInternalOutcome Package::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("PackageRegion") && !value["PackageRegion"].IsNull())
    {
        if (!value["PackageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageRegion = string(value["PackageRegion"].GetString());
        m_packageRegionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PackageTotalSpec") && !value["PackageTotalSpec"].IsNull())
    {
        if (!value["PackageTotalSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageTotalSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageTotalSpec = value["PackageTotalSpec"].GetDouble();
        m_packageTotalSpecHasBeenSet = true;
    }

    if (value.HasMember("PackageUsedSpec") && !value["PackageUsedSpec"].IsNull())
    {
        if (!value["PackageUsedSpec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Package.PackageUsedSpec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_packageUsedSpec = value["PackageUsedSpec"].GetDouble();
        m_packageUsedSpecHasBeenSet = true;
    }

    if (value.HasMember("HasQuota") && !value["HasQuota"].IsNull())
    {
        if (!value["HasQuota"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Package.HasQuota` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasQuota = value["HasQuota"].GetBool();
        m_hasQuotaHasBeenSet = true;
    }

    if (value.HasMember("BindInstanceInfos") && !value["BindInstanceInfos"].IsNull())
    {
        if (!value["BindInstanceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Package.BindInstanceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BindInstanceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindInstanceInfos.push_back(item);
        }
        m_bindInstanceInfosHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("HistoryBindResourceInfos") && !value["HistoryBindResourceInfos"].IsNull())
    {
        if (!value["HistoryBindResourceInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Package.HistoryBindResourceInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["HistoryBindResourceInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_historyBindResourceInfos.push_back(item);
        }
        m_historyBindResourceInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Package::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTotalSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTotalSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageTotalSpec, allocator);
    }

    if (m_packageUsedSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageUsedSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageUsedSpec, allocator);
    }

    if (m_hasQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasQuota, allocator);
    }

    if (m_bindInstanceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInstanceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindInstanceInfos.begin(); itr != m_bindInstanceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_historyBindResourceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryBindResourceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_historyBindResourceInfos.begin(); itr != m_historyBindResourceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Package::GetAppId() const
{
    return m_appId;
}

void Package::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Package::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Package::GetPackageId() const
{
    return m_packageId;
}

void Package::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool Package::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string Package::GetPackageName() const
{
    return m_packageName;
}

void Package::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool Package::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string Package::GetPackageType() const
{
    return m_packageType;
}

void Package::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool Package::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string Package::GetPackageRegion() const
{
    return m_packageRegion;
}

void Package::SetPackageRegion(const string& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool Package::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

string Package::GetStatus() const
{
    return m_status;
}

void Package::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Package::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double Package::GetPackageTotalSpec() const
{
    return m_packageTotalSpec;
}

void Package::SetPackageTotalSpec(const double& _packageTotalSpec)
{
    m_packageTotalSpec = _packageTotalSpec;
    m_packageTotalSpecHasBeenSet = true;
}

bool Package::PackageTotalSpecHasBeenSet() const
{
    return m_packageTotalSpecHasBeenSet;
}

double Package::GetPackageUsedSpec() const
{
    return m_packageUsedSpec;
}

void Package::SetPackageUsedSpec(const double& _packageUsedSpec)
{
    m_packageUsedSpec = _packageUsedSpec;
    m_packageUsedSpecHasBeenSet = true;
}

bool Package::PackageUsedSpecHasBeenSet() const
{
    return m_packageUsedSpecHasBeenSet;
}

bool Package::GetHasQuota() const
{
    return m_hasQuota;
}

void Package::SetHasQuota(const bool& _hasQuota)
{
    m_hasQuota = _hasQuota;
    m_hasQuotaHasBeenSet = true;
}

bool Package::HasQuotaHasBeenSet() const
{
    return m_hasQuotaHasBeenSet;
}

vector<BindInstanceInfo> Package::GetBindInstanceInfos() const
{
    return m_bindInstanceInfos;
}

void Package::SetBindInstanceInfos(const vector<BindInstanceInfo>& _bindInstanceInfos)
{
    m_bindInstanceInfos = _bindInstanceInfos;
    m_bindInstanceInfosHasBeenSet = true;
}

bool Package::BindInstanceInfosHasBeenSet() const
{
    return m_bindInstanceInfosHasBeenSet;
}

string Package::GetStartTime() const
{
    return m_startTime;
}

void Package::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Package::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Package::GetExpireTime() const
{
    return m_expireTime;
}

void Package::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Package::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<BindInstanceInfo> Package::GetHistoryBindResourceInfos() const
{
    return m_historyBindResourceInfos;
}

void Package::SetHistoryBindResourceInfos(const vector<BindInstanceInfo>& _historyBindResourceInfos)
{
    m_historyBindResourceInfos = _historyBindResourceInfos;
    m_historyBindResourceInfosHasBeenSet = true;
}

bool Package::HistoryBindResourceInfosHasBeenSet() const
{
    return m_historyBindResourceInfosHasBeenSet;
}

