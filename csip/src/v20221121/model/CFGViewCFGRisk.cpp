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

#include <tencentcloud/csip/v20221121/model/CFGViewCFGRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CFGViewCFGRisk::CFGViewCFGRisk() :
    m_noHandleCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_affectAssetCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_cFGNameHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_cFGSTDHasBeenSet(false),
    m_cFGDescribeHasBeenSet(false),
    m_cFGFixHasBeenSet(false),
    m_cFGHelpURLHasBeenSet(false)
{
}

CoreInternalOutcome CFGViewCFGRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoHandleCount") && !value["NoHandleCount"].IsNull())
    {
        if (!value["NoHandleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.NoHandleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noHandleCount = value["NoHandleCount"].GetInt64();
        m_noHandleCountHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("AffectAssetCount") && !value["AffectAssetCount"].IsNull())
    {
        if (!value["AffectAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.AffectAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectAssetCount = value["AffectAssetCount"].GetUint64();
        m_affectAssetCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CFGName") && !value["CFGName"].IsNull())
    {
        if (!value["CFGName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CFGName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGName = string(value["CFGName"].GetString());
        m_cFGNameHasBeenSet = true;
    }

    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("CFGSTD") && !value["CFGSTD"].IsNull())
    {
        if (!value["CFGSTD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CFGSTD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGSTD = string(value["CFGSTD"].GetString());
        m_cFGSTDHasBeenSet = true;
    }

    if (value.HasMember("CFGDescribe") && !value["CFGDescribe"].IsNull())
    {
        if (!value["CFGDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CFGDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGDescribe = string(value["CFGDescribe"].GetString());
        m_cFGDescribeHasBeenSet = true;
    }

    if (value.HasMember("CFGFix") && !value["CFGFix"].IsNull())
    {
        if (!value["CFGFix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CFGFix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGFix = string(value["CFGFix"].GetString());
        m_cFGFixHasBeenSet = true;
    }

    if (value.HasMember("CFGHelpURL") && !value["CFGHelpURL"].IsNull())
    {
        if (!value["CFGHelpURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CFGViewCFGRisk.CFGHelpURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFGHelpURL = string(value["CFGHelpURL"].GetString());
        m_cFGHelpURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CFGViewCFGRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noHandleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoHandleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noHandleCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_recentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_affectAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectAssetCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
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

}


int64_t CFGViewCFGRisk::GetNoHandleCount() const
{
    return m_noHandleCount;
}

void CFGViewCFGRisk::SetNoHandleCount(const int64_t& _noHandleCount)
{
    m_noHandleCount = _noHandleCount;
    m_noHandleCountHasBeenSet = true;
}

bool CFGViewCFGRisk::NoHandleCountHasBeenSet() const
{
    return m_noHandleCountHasBeenSet;
}

string CFGViewCFGRisk::GetLevel() const
{
    return m_level;
}

void CFGViewCFGRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool CFGViewCFGRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string CFGViewCFGRisk::GetRecentTime() const
{
    return m_recentTime;
}

void CFGViewCFGRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool CFGViewCFGRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string CFGViewCFGRisk::GetFirstTime() const
{
    return m_firstTime;
}

void CFGViewCFGRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool CFGViewCFGRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t CFGViewCFGRisk::GetAffectAssetCount() const
{
    return m_affectAssetCount;
}

void CFGViewCFGRisk::SetAffectAssetCount(const uint64_t& _affectAssetCount)
{
    m_affectAssetCount = _affectAssetCount;
    m_affectAssetCountHasBeenSet = true;
}

bool CFGViewCFGRisk::AffectAssetCountHasBeenSet() const
{
    return m_affectAssetCountHasBeenSet;
}

string CFGViewCFGRisk::GetId() const
{
    return m_id;
}

void CFGViewCFGRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CFGViewCFGRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CFGViewCFGRisk::GetFrom() const
{
    return m_from;
}

void CFGViewCFGRisk::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool CFGViewCFGRisk::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string CFGViewCFGRisk::GetIndex() const
{
    return m_index;
}

void CFGViewCFGRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool CFGViewCFGRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string CFGViewCFGRisk::GetAppId() const
{
    return m_appId;
}

void CFGViewCFGRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CFGViewCFGRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CFGViewCFGRisk::GetNick() const
{
    return m_nick;
}

void CFGViewCFGRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool CFGViewCFGRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string CFGViewCFGRisk::GetUin() const
{
    return m_uin;
}

void CFGViewCFGRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CFGViewCFGRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CFGViewCFGRisk::GetCFGName() const
{
    return m_cFGName;
}

void CFGViewCFGRisk::SetCFGName(const string& _cFGName)
{
    m_cFGName = _cFGName;
    m_cFGNameHasBeenSet = true;
}

bool CFGViewCFGRisk::CFGNameHasBeenSet() const
{
    return m_cFGNameHasBeenSet;
}

string CFGViewCFGRisk::GetCheckType() const
{
    return m_checkType;
}

void CFGViewCFGRisk::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CFGViewCFGRisk::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

string CFGViewCFGRisk::GetCFGSTD() const
{
    return m_cFGSTD;
}

void CFGViewCFGRisk::SetCFGSTD(const string& _cFGSTD)
{
    m_cFGSTD = _cFGSTD;
    m_cFGSTDHasBeenSet = true;
}

bool CFGViewCFGRisk::CFGSTDHasBeenSet() const
{
    return m_cFGSTDHasBeenSet;
}

string CFGViewCFGRisk::GetCFGDescribe() const
{
    return m_cFGDescribe;
}

void CFGViewCFGRisk::SetCFGDescribe(const string& _cFGDescribe)
{
    m_cFGDescribe = _cFGDescribe;
    m_cFGDescribeHasBeenSet = true;
}

bool CFGViewCFGRisk::CFGDescribeHasBeenSet() const
{
    return m_cFGDescribeHasBeenSet;
}

string CFGViewCFGRisk::GetCFGFix() const
{
    return m_cFGFix;
}

void CFGViewCFGRisk::SetCFGFix(const string& _cFGFix)
{
    m_cFGFix = _cFGFix;
    m_cFGFixHasBeenSet = true;
}

bool CFGViewCFGRisk::CFGFixHasBeenSet() const
{
    return m_cFGFixHasBeenSet;
}

string CFGViewCFGRisk::GetCFGHelpURL() const
{
    return m_cFGHelpURL;
}

void CFGViewCFGRisk::SetCFGHelpURL(const string& _cFGHelpURL)
{
    m_cFGHelpURL = _cFGHelpURL;
    m_cFGHelpURLHasBeenSet = true;
}

bool CFGViewCFGRisk::CFGHelpURLHasBeenSet() const
{
    return m_cFGHelpURLHasBeenSet;
}

