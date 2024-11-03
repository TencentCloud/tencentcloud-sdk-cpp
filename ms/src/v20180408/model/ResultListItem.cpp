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

#include <tencentcloud/ms/v20180408/model/ResultListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ResultListItem::ResultListItem() :
    m_bannerHasBeenSet(false),
    m_boutiqueRecommandHasBeenSet(false),
    m_floatWindowsHasBeenSet(false),
    m_integralWallHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_notifyBarHasBeenSet(false),
    m_officialHasBeenSet(false),
    m_pluginListHasBeenSet(false),
    m_optPluginListHasBeenSet(false),
    m_safeTypeHasBeenSet(false),
    m_sidHasBeenSet(false),
    m_softNameHasBeenSet(false),
    m_spotHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_virusDescHasBeenSet(false),
    m_repackageStatusHasBeenSet(false),
    m_errnoHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_errNoHasBeenSet(false)
{
}

CoreInternalOutcome ResultListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Banner") && !value["Banner"].IsNull())
    {
        if (!value["Banner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Banner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banner = string(value["Banner"].GetString());
        m_bannerHasBeenSet = true;
    }

    if (value.HasMember("BoutiqueRecommand") && !value["BoutiqueRecommand"].IsNull())
    {
        if (!value["BoutiqueRecommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.BoutiqueRecommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boutiqueRecommand = string(value["BoutiqueRecommand"].GetString());
        m_boutiqueRecommandHasBeenSet = true;
    }

    if (value.HasMember("FloatWindows") && !value["FloatWindows"].IsNull())
    {
        if (!value["FloatWindows"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.FloatWindows` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_floatWindows = string(value["FloatWindows"].GetString());
        m_floatWindowsHasBeenSet = true;
    }

    if (value.HasMember("IntegralWall") && !value["IntegralWall"].IsNull())
    {
        if (!value["IntegralWall"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.IntegralWall` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_integralWall = string(value["IntegralWall"].GetString());
        m_integralWallHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("NotifyBar") && !value["NotifyBar"].IsNull())
    {
        if (!value["NotifyBar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.NotifyBar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyBar = string(value["NotifyBar"].GetString());
        m_notifyBarHasBeenSet = true;
    }

    if (value.HasMember("Official") && !value["Official"].IsNull())
    {
        if (!value["Official"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Official` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_official = string(value["Official"].GetString());
        m_officialHasBeenSet = true;
    }

    if (value.HasMember("PluginList") && !value["PluginList"].IsNull())
    {
        if (!value["PluginList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultListItem.PluginList` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginListItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginList.push_back(item);
        }
        m_pluginListHasBeenSet = true;
    }

    if (value.HasMember("OptPluginList") && !value["OptPluginList"].IsNull())
    {
        if (!value["OptPluginList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultListItem.OptPluginList` is not array type"));

        const rapidjson::Value &tmpValue = value["OptPluginList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OptPluginListItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optPluginList.push_back(item);
        }
        m_optPluginListHasBeenSet = true;
    }

    if (value.HasMember("SafeType") && !value["SafeType"].IsNull())
    {
        if (!value["SafeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.SafeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_safeType = string(value["SafeType"].GetString());
        m_safeTypeHasBeenSet = true;
    }

    if (value.HasMember("Sid") && !value["Sid"].IsNull())
    {
        if (!value["Sid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Sid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sid = string(value["Sid"].GetString());
        m_sidHasBeenSet = true;
    }

    if (value.HasMember("SoftName") && !value["SoftName"].IsNull())
    {
        if (!value["SoftName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.SoftName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softName = string(value["SoftName"].GetString());
        m_softNameHasBeenSet = true;
    }

    if (value.HasMember("Spot") && !value["Spot"].IsNull())
    {
        if (!value["Spot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Spot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spot = string(value["Spot"].GetString());
        m_spotHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("VirusDesc") && !value["VirusDesc"].IsNull())
    {
        if (!value["VirusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.VirusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusDesc = string(value["VirusDesc"].GetString());
        m_virusDescHasBeenSet = true;
    }

    if (value.HasMember("RepackageStatus") && !value["RepackageStatus"].IsNull())
    {
        if (!value["RepackageStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.RepackageStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repackageStatus = string(value["RepackageStatus"].GetString());
        m_repackageStatusHasBeenSet = true;
    }

    if (value.HasMember("Errno") && !value["Errno"].IsNull())
    {
        if (!value["Errno"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.Errno` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errno = string(value["Errno"].GetString());
        m_errnoHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ErrNo") && !value["ErrNo"].IsNull())
    {
        if (!value["ErrNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultListItem.ErrNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errNo = string(value["ErrNo"].GetString());
        m_errNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bannerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Banner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banner.c_str(), allocator).Move(), allocator);
    }

    if (m_boutiqueRecommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoutiqueRecommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boutiqueRecommand.c_str(), allocator).Move(), allocator);
    }

    if (m_floatWindowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatWindows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_floatWindows.c_str(), allocator).Move(), allocator);
    }

    if (m_integralWallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntegralWall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_integralWall.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyBarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyBar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyBar.c_str(), allocator).Move(), allocator);
    }

    if (m_officialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Official";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_official.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginList.begin(); itr != m_pluginList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_optPluginListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptPluginList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optPluginList.begin(); itr != m_optPluginList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_safeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_safeType.c_str(), allocator).Move(), allocator);
    }

    if (m_sidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sid.c_str(), allocator).Move(), allocator);
    }

    if (m_softNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softName.c_str(), allocator).Move(), allocator);
    }

    if (m_spotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spot.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_virusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_repackageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepackageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repackageStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_errnoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errno";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errno.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_errNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errNo.c_str(), allocator).Move(), allocator);
    }

}


string ResultListItem::GetBanner() const
{
    return m_banner;
}

void ResultListItem::SetBanner(const string& _banner)
{
    m_banner = _banner;
    m_bannerHasBeenSet = true;
}

bool ResultListItem::BannerHasBeenSet() const
{
    return m_bannerHasBeenSet;
}

string ResultListItem::GetBoutiqueRecommand() const
{
    return m_boutiqueRecommand;
}

void ResultListItem::SetBoutiqueRecommand(const string& _boutiqueRecommand)
{
    m_boutiqueRecommand = _boutiqueRecommand;
    m_boutiqueRecommandHasBeenSet = true;
}

bool ResultListItem::BoutiqueRecommandHasBeenSet() const
{
    return m_boutiqueRecommandHasBeenSet;
}

string ResultListItem::GetFloatWindows() const
{
    return m_floatWindows;
}

void ResultListItem::SetFloatWindows(const string& _floatWindows)
{
    m_floatWindows = _floatWindows;
    m_floatWindowsHasBeenSet = true;
}

bool ResultListItem::FloatWindowsHasBeenSet() const
{
    return m_floatWindowsHasBeenSet;
}

string ResultListItem::GetIntegralWall() const
{
    return m_integralWall;
}

void ResultListItem::SetIntegralWall(const string& _integralWall)
{
    m_integralWall = _integralWall;
    m_integralWallHasBeenSet = true;
}

bool ResultListItem::IntegralWallHasBeenSet() const
{
    return m_integralWallHasBeenSet;
}

string ResultListItem::GetMd5() const
{
    return m_md5;
}

void ResultListItem::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ResultListItem::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string ResultListItem::GetNotifyBar() const
{
    return m_notifyBar;
}

void ResultListItem::SetNotifyBar(const string& _notifyBar)
{
    m_notifyBar = _notifyBar;
    m_notifyBarHasBeenSet = true;
}

bool ResultListItem::NotifyBarHasBeenSet() const
{
    return m_notifyBarHasBeenSet;
}

string ResultListItem::GetOfficial() const
{
    return m_official;
}

void ResultListItem::SetOfficial(const string& _official)
{
    m_official = _official;
    m_officialHasBeenSet = true;
}

bool ResultListItem::OfficialHasBeenSet() const
{
    return m_officialHasBeenSet;
}

vector<PluginListItem> ResultListItem::GetPluginList() const
{
    return m_pluginList;
}

void ResultListItem::SetPluginList(const vector<PluginListItem>& _pluginList)
{
    m_pluginList = _pluginList;
    m_pluginListHasBeenSet = true;
}

bool ResultListItem::PluginListHasBeenSet() const
{
    return m_pluginListHasBeenSet;
}

vector<OptPluginListItem> ResultListItem::GetOptPluginList() const
{
    return m_optPluginList;
}

void ResultListItem::SetOptPluginList(const vector<OptPluginListItem>& _optPluginList)
{
    m_optPluginList = _optPluginList;
    m_optPluginListHasBeenSet = true;
}

bool ResultListItem::OptPluginListHasBeenSet() const
{
    return m_optPluginListHasBeenSet;
}

string ResultListItem::GetSafeType() const
{
    return m_safeType;
}

void ResultListItem::SetSafeType(const string& _safeType)
{
    m_safeType = _safeType;
    m_safeTypeHasBeenSet = true;
}

bool ResultListItem::SafeTypeHasBeenSet() const
{
    return m_safeTypeHasBeenSet;
}

string ResultListItem::GetSid() const
{
    return m_sid;
}

void ResultListItem::SetSid(const string& _sid)
{
    m_sid = _sid;
    m_sidHasBeenSet = true;
}

bool ResultListItem::SidHasBeenSet() const
{
    return m_sidHasBeenSet;
}

string ResultListItem::GetSoftName() const
{
    return m_softName;
}

void ResultListItem::SetSoftName(const string& _softName)
{
    m_softName = _softName;
    m_softNameHasBeenSet = true;
}

bool ResultListItem::SoftNameHasBeenSet() const
{
    return m_softNameHasBeenSet;
}

string ResultListItem::GetSpot() const
{
    return m_spot;
}

void ResultListItem::SetSpot(const string& _spot)
{
    m_spot = _spot;
    m_spotHasBeenSet = true;
}

bool ResultListItem::SpotHasBeenSet() const
{
    return m_spotHasBeenSet;
}

string ResultListItem::GetVirusName() const
{
    return m_virusName;
}

void ResultListItem::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool ResultListItem::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string ResultListItem::GetVirusDesc() const
{
    return m_virusDesc;
}

void ResultListItem::SetVirusDesc(const string& _virusDesc)
{
    m_virusDesc = _virusDesc;
    m_virusDescHasBeenSet = true;
}

bool ResultListItem::VirusDescHasBeenSet() const
{
    return m_virusDescHasBeenSet;
}

string ResultListItem::GetRepackageStatus() const
{
    return m_repackageStatus;
}

void ResultListItem::SetRepackageStatus(const string& _repackageStatus)
{
    m_repackageStatus = _repackageStatus;
    m_repackageStatusHasBeenSet = true;
}

bool ResultListItem::RepackageStatusHasBeenSet() const
{
    return m_repackageStatusHasBeenSet;
}

string ResultListItem::GetErrno() const
{
    return m_errno;
}

void ResultListItem::SetErrno(const string& _errno)
{
    m_errno = _errno;
    m_errnoHasBeenSet = true;
}

bool ResultListItem::ErrnoHasBeenSet() const
{
    return m_errnoHasBeenSet;
}

string ResultListItem::GetErrMsg() const
{
    return m_errMsg;
}

void ResultListItem::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool ResultListItem::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string ResultListItem::GetErrNo() const
{
    return m_errNo;
}

void ResultListItem::SetErrNo(const string& _errNo)
{
    m_errNo = _errNo;
    m_errNoHasBeenSet = true;
}

bool ResultListItem::ErrNoHasBeenSet() const
{
    return m_errNoHasBeenSet;
}

