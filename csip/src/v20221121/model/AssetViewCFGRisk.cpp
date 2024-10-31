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

#include <tencentcloud/csip/v20221121/model/AssetViewCFGRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetViewCFGRisk::AssetViewCFGRisk() :
    m_idHasBeenSet(false),
    m_cFGNameHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cFGSTDHasBeenSet(false),
    m_cFGDescribeHasBeenSet(false),
    m_cFGFixHasBeenSet(false),
    m_cFGHelpURLHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_clbIdHasBeenSet(false)
{
}

CoreInternalOutcome AssetViewCFGRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CFGName") && !value["CFGName"].IsNull())
    {
        if (!value["CFGName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CFGName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGName = string(value["CFGName"].GetString());
        m_cFGNameHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CFGSTD") && !value["CFGSTD"].IsNull())
    {
        if (!value["CFGSTD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CFGSTD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGSTD = string(value["CFGSTD"].GetString());
        m_cFGSTDHasBeenSet = true;
    }

    if (value.HasMember("CFGDescribe") && !value["CFGDescribe"].IsNull())
    {
        if (!value["CFGDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CFGDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGDescribe = string(value["CFGDescribe"].GetString());
        m_cFGDescribeHasBeenSet = true;
    }

    if (value.HasMember("CFGFix") && !value["CFGFix"].IsNull())
    {
        if (!value["CFGFix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CFGFix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGFix = string(value["CFGFix"].GetString());
        m_cFGFixHasBeenSet = true;
    }

    if (value.HasMember("CFGHelpURL") && !value["CFGHelpURL"].IsNull())
    {
        if (!value["CFGHelpURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.CFGHelpURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGHelpURL = string(value["CFGHelpURL"].GetString());
        m_cFGHelpURLHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ClbId") && !value["ClbId"].IsNull())
    {
        if (!value["ClbId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetViewCFGRisk.ClbId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbId = string(value["ClbId"].GetString());
        m_clbIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetViewCFGRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_cFGNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFGName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_affectAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cFGSTDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGSTD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFGSTD.c_str(), allocator).Move(), allocator);
    }

    if (m_cFGDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFGDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_cFGFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFGFix.c_str(), allocator).Move(), allocator);
    }

    if (m_cFGHelpURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGHelpURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFGHelpURL.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_clbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbId.c_str(), allocator).Move(), allocator);
    }

}


string AssetViewCFGRisk::GetId() const
{
    return m_id;
}

void AssetViewCFGRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetViewCFGRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetViewCFGRisk::GetCFGName() const
{
    return m_cFGName;
}

void AssetViewCFGRisk::SetCFGName(const string& _cFGName)
{
    m_cFGName = _cFGName;
    m_cFGNameHasBeenSet = true;
}

bool AssetViewCFGRisk::CFGNameHasBeenSet() const
{
    return m_cFGNameHasBeenSet;
}

string AssetViewCFGRisk::GetCheckType() const
{
    return m_checkType;
}

void AssetViewCFGRisk::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool AssetViewCFGRisk::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string AssetViewCFGRisk::GetInstanceId() const
{
    return m_instanceId;
}

void AssetViewCFGRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetViewCFGRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetViewCFGRisk::GetInstanceName() const
{
    return m_instanceName;
}

void AssetViewCFGRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool AssetViewCFGRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string AssetViewCFGRisk::GetInstanceType() const
{
    return m_instanceType;
}

void AssetViewCFGRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool AssetViewCFGRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string AssetViewCFGRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void AssetViewCFGRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool AssetViewCFGRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string AssetViewCFGRisk::GetLevel() const
{
    return m_level;
}

void AssetViewCFGRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AssetViewCFGRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AssetViewCFGRisk::GetFirstTime() const
{
    return m_firstTime;
}

void AssetViewCFGRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetViewCFGRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string AssetViewCFGRisk::GetRecentTime() const
{
    return m_recentTime;
}

void AssetViewCFGRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool AssetViewCFGRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string AssetViewCFGRisk::GetFrom() const
{
    return m_from;
}

void AssetViewCFGRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AssetViewCFGRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t AssetViewCFGRisk::GetStatus() const
{
    return m_status;
}

void AssetViewCFGRisk::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetViewCFGRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssetViewCFGRisk::GetCFGSTD() const
{
    return m_cFGSTD;
}

void AssetViewCFGRisk::SetCFGSTD(const string& _cFGSTD)
{
    m_cFGSTD = _cFGSTD;
    m_cFGSTDHasBeenSet = true;
}

bool AssetViewCFGRisk::CFGSTDHasBeenSet() const
{
    return m_cFGSTDHasBeenSet;
}

string AssetViewCFGRisk::GetCFGDescribe() const
{
    return m_cFGDescribe;
}

void AssetViewCFGRisk::SetCFGDescribe(const string& _cFGDescribe)
{
    m_cFGDescribe = _cFGDescribe;
    m_cFGDescribeHasBeenSet = true;
}

bool AssetViewCFGRisk::CFGDescribeHasBeenSet() const
{
    return m_cFGDescribeHasBeenSet;
}

string AssetViewCFGRisk::GetCFGFix() const
{
    return m_cFGFix;
}

void AssetViewCFGRisk::SetCFGFix(const string& _cFGFix)
{
    m_cFGFix = _cFGFix;
    m_cFGFixHasBeenSet = true;
}

bool AssetViewCFGRisk::CFGFixHasBeenSet() const
{
    return m_cFGFixHasBeenSet;
}

string AssetViewCFGRisk::GetCFGHelpURL() const
{
    return m_cFGHelpURL;
}

void AssetViewCFGRisk::SetCFGHelpURL(const string& _cFGHelpURL)
{
    m_cFGHelpURL = _cFGHelpURL;
    m_cFGHelpURLHasBeenSet = true;
}

bool AssetViewCFGRisk::CFGHelpURLHasBeenSet() const
{
    return m_cFGHelpURLHasBeenSet;
}

string AssetViewCFGRisk::GetIndex() const
{
    return m_index;
}

void AssetViewCFGRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool AssetViewCFGRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string AssetViewCFGRisk::GetAppId() const
{
    return m_appId;
}

void AssetViewCFGRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AssetViewCFGRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AssetViewCFGRisk::GetNick() const
{
    return m_nick;
}

void AssetViewCFGRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool AssetViewCFGRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string AssetViewCFGRisk::GetUin() const
{
    return m_uin;
}

void AssetViewCFGRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AssetViewCFGRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AssetViewCFGRisk::GetClbId() const
{
    return m_clbId;
}

void AssetViewCFGRisk::SetClbId(const string& _clbId)
{
    m_clbId = _clbId;
    m_clbIdHasBeenSet = true;
}

bool AssetViewCFGRisk::ClbIdHasBeenSet() const
{
    return m_clbIdHasBeenSet;
}

