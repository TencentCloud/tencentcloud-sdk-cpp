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

#include <tencentcloud/csip/v20221121/model/WebsiteRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebsiteRisk::WebsiteRisk() :
    m_affectAssetHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_recentTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_uRLPathHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_detectEngineHasBeenSet(false),
    m_resultDescribeHasBeenSet(false),
    m_sourceURLHasBeenSet(false),
    m_sourceURLPathHasBeenSet(false)
{
}

CoreInternalOutcome WebsiteRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AffectAsset") && !value["AffectAsset"].IsNull())
    {
        if (!value["AffectAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.AffectAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectAsset = string(value["AffectAsset"].GetString());
        m_affectAssetHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("RecentTime") && !value["RecentTime"].IsNull())
    {
        if (!value["RecentTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.RecentTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentTime = string(value["RecentTime"].GetString());
        m_recentTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Nick") && !value["Nick"].IsNull())
    {
        if (!value["Nick"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Nick` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nick = string(value["Nick"].GetString());
        m_nickHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("URLPath") && !value["URLPath"].IsNull())
    {
        if (!value["URLPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.URLPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLPath = string(value["URLPath"].GetString());
        m_uRLPathHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DetectEngine") && !value["DetectEngine"].IsNull())
    {
        if (!value["DetectEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.DetectEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectEngine = string(value["DetectEngine"].GetString());
        m_detectEngineHasBeenSet = true;
    }

    if (value.HasMember("ResultDescribe") && !value["ResultDescribe"].IsNull())
    {
        if (!value["ResultDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.ResultDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDescribe = string(value["ResultDescribe"].GetString());
        m_resultDescribeHasBeenSet = true;
    }

    if (value.HasMember("SourceURL") && !value["SourceURL"].IsNull())
    {
        if (!value["SourceURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.SourceURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceURL = string(value["SourceURL"].GetString());
        m_sourceURLHasBeenSet = true;
    }

    if (value.HasMember("SourceURLPath") && !value["SourceURLPath"].IsNull())
    {
        if (!value["SourceURLPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebsiteRisk.SourceURLPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceURLPath = string(value["SourceURLPath"].GetString());
        m_sourceURLPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebsiteRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
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

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLPath.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_detectEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceURL.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceURLPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceURLPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceURLPath.c_str(), allocator).Move(), allocator);
    }

}


string WebsiteRisk::GetAffectAsset() const
{
    return m_affectAsset;
}

void WebsiteRisk::SetAffectAsset(const string& _affectAsset)
{
    m_affectAsset = _affectAsset;
    m_affectAssetHasBeenSet = true;
}

bool WebsiteRisk::AffectAssetHasBeenSet() const
{
    return m_affectAssetHasBeenSet;
}

string WebsiteRisk::GetLevel() const
{
    return m_level;
}

void WebsiteRisk::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool WebsiteRisk::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string WebsiteRisk::GetRecentTime() const
{
    return m_recentTime;
}

void WebsiteRisk::SetRecentTime(const string& _recentTime)
{
    m_recentTime = _recentTime;
    m_recentTimeHasBeenSet = true;
}

bool WebsiteRisk::RecentTimeHasBeenSet() const
{
    return m_recentTimeHasBeenSet;
}

string WebsiteRisk::GetFirstTime() const
{
    return m_firstTime;
}

void WebsiteRisk::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool WebsiteRisk::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t WebsiteRisk::GetStatus() const
{
    return m_status;
}

void WebsiteRisk::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WebsiteRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WebsiteRisk::GetId() const
{
    return m_id;
}

void WebsiteRisk::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WebsiteRisk::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WebsiteRisk::GetIndex() const
{
    return m_index;
}

void WebsiteRisk::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool WebsiteRisk::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string WebsiteRisk::GetInstanceId() const
{
    return m_instanceId;
}

void WebsiteRisk::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool WebsiteRisk::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string WebsiteRisk::GetInstanceName() const
{
    return m_instanceName;
}

void WebsiteRisk::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool WebsiteRisk::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string WebsiteRisk::GetAppId() const
{
    return m_appId;
}

void WebsiteRisk::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool WebsiteRisk::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string WebsiteRisk::GetNick() const
{
    return m_nick;
}

void WebsiteRisk::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool WebsiteRisk::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string WebsiteRisk::GetUin() const
{
    return m_uin;
}

void WebsiteRisk::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool WebsiteRisk::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string WebsiteRisk::GetURL() const
{
    return m_uRL;
}

void WebsiteRisk::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool WebsiteRisk::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string WebsiteRisk::GetURLPath() const
{
    return m_uRLPath;
}

void WebsiteRisk::SetURLPath(const string& _uRLPath)
{
    m_uRLPath = _uRLPath;
    m_uRLPathHasBeenSet = true;
}

bool WebsiteRisk::URLPathHasBeenSet() const
{
    return m_uRLPathHasBeenSet;
}

string WebsiteRisk::GetInstanceType() const
{
    return m_instanceType;
}

void WebsiteRisk::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool WebsiteRisk::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string WebsiteRisk::GetDetectEngine() const
{
    return m_detectEngine;
}

void WebsiteRisk::SetDetectEngine(const string& _detectEngine)
{
    m_detectEngine = _detectEngine;
    m_detectEngineHasBeenSet = true;
}

bool WebsiteRisk::DetectEngineHasBeenSet() const
{
    return m_detectEngineHasBeenSet;
}

string WebsiteRisk::GetResultDescribe() const
{
    return m_resultDescribe;
}

void WebsiteRisk::SetResultDescribe(const string& _resultDescribe)
{
    m_resultDescribe = _resultDescribe;
    m_resultDescribeHasBeenSet = true;
}

bool WebsiteRisk::ResultDescribeHasBeenSet() const
{
    return m_resultDescribeHasBeenSet;
}

string WebsiteRisk::GetSourceURL() const
{
    return m_sourceURL;
}

void WebsiteRisk::SetSourceURL(const string& _sourceURL)
{
    m_sourceURL = _sourceURL;
    m_sourceURLHasBeenSet = true;
}

bool WebsiteRisk::SourceURLHasBeenSet() const
{
    return m_sourceURLHasBeenSet;
}

string WebsiteRisk::GetSourceURLPath() const
{
    return m_sourceURLPath;
}

void WebsiteRisk::SetSourceURLPath(const string& _sourceURLPath)
{
    m_sourceURLPath = _sourceURLPath;
    m_sourceURLPathHasBeenSet = true;
}

bool WebsiteRisk::SourceURLPathHasBeenSet() const
{
    return m_sourceURLPathHasBeenSet;
}

