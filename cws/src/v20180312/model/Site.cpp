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

#include <tencentcloud/cws/v20180312/model/Site.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cws::V20180312::Model;
using namespace std;

Site::Site() :
    m_idHasBeenSet(false),
    m_monitorIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_verifyStatusHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_lastScanTaskIdHasBeenSet(false),
    m_lastScanStartTimeHasBeenSet(false),
    m_lastScanFinishTimeHasBeenSet(false),
    m_lastScanCancelTimeHasBeenSet(false),
    m_lastScanPageCountHasBeenSet(false),
    m_lastScanScannerTypeHasBeenSet(false),
    m_lastScanVulsHighNumHasBeenSet(false),
    m_lastScanVulsMiddleNumHasBeenSet(false),
    m_lastScanVulsLowNumHasBeenSet(false),
    m_lastScanVulsNoticeNumHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_lastScanRateLimitHasBeenSet(false),
    m_lastScanVulsNumHasBeenSet(false),
    m_lastScanNoticeNumHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_needLoginHasBeenSet(false),
    m_loginCookieHasBeenSet(false),
    m_loginCookieValidHasBeenSet(false),
    m_loginCheckUrlHasBeenSet(false),
    m_loginCheckKwHasBeenSet(false),
    m_scanDisallowHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_contentStatusHasBeenSet(false),
    m_lastScanContentNumHasBeenSet(false)
{
}

CoreInternalOutcome Site::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.MonitorId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = value["MonitorId"].GetUint64();
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VerifyStatus") && !value["VerifyStatus"].IsNull())
    {
        if (!value["VerifyStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.VerifyStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifyStatus = value["VerifyStatus"].GetUint64();
        m_verifyStatusHasBeenSet = true;
    }

    if (value.HasMember("MonitorStatus") && !value["MonitorStatus"].IsNull())
    {
        if (!value["MonitorStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.MonitorStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = value["MonitorStatus"].GetUint64();
        m_monitorStatusHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.ScanStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetUint64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("LastScanTaskId") && !value["LastScanTaskId"].IsNull())
    {
        if (!value["LastScanTaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanTaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTaskId = value["LastScanTaskId"].GetUint64();
        m_lastScanTaskIdHasBeenSet = true;
    }

    if (value.HasMember("LastScanStartTime") && !value["LastScanStartTime"].IsNull())
    {
        if (!value["LastScanStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanStartTime = string(value["LastScanStartTime"].GetString());
        m_lastScanStartTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanFinishTime") && !value["LastScanFinishTime"].IsNull())
    {
        if (!value["LastScanFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanFinishTime = string(value["LastScanFinishTime"].GetString());
        m_lastScanFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanCancelTime") && !value["LastScanCancelTime"].IsNull())
    {
        if (!value["LastScanCancelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanCancelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanCancelTime = string(value["LastScanCancelTime"].GetString());
        m_lastScanCancelTimeHasBeenSet = true;
    }

    if (value.HasMember("LastScanPageCount") && !value["LastScanPageCount"].IsNull())
    {
        if (!value["LastScanPageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanPageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanPageCount = value["LastScanPageCount"].GetUint64();
        m_lastScanPageCountHasBeenSet = true;
    }

    if (value.HasMember("LastScanScannerType") && !value["LastScanScannerType"].IsNull())
    {
        if (!value["LastScanScannerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanScannerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanScannerType = string(value["LastScanScannerType"].GetString());
        m_lastScanScannerTypeHasBeenSet = true;
    }

    if (value.HasMember("LastScanVulsHighNum") && !value["LastScanVulsHighNum"].IsNull())
    {
        if (!value["LastScanVulsHighNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanVulsHighNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanVulsHighNum = value["LastScanVulsHighNum"].GetUint64();
        m_lastScanVulsHighNumHasBeenSet = true;
    }

    if (value.HasMember("LastScanVulsMiddleNum") && !value["LastScanVulsMiddleNum"].IsNull())
    {
        if (!value["LastScanVulsMiddleNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanVulsMiddleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanVulsMiddleNum = value["LastScanVulsMiddleNum"].GetUint64();
        m_lastScanVulsMiddleNumHasBeenSet = true;
    }

    if (value.HasMember("LastScanVulsLowNum") && !value["LastScanVulsLowNum"].IsNull())
    {
        if (!value["LastScanVulsLowNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanVulsLowNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanVulsLowNum = value["LastScanVulsLowNum"].GetUint64();
        m_lastScanVulsLowNumHasBeenSet = true;
    }

    if (value.HasMember("LastScanVulsNoticeNum") && !value["LastScanVulsNoticeNum"].IsNull())
    {
        if (!value["LastScanVulsNoticeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanVulsNoticeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanVulsNoticeNum = value["LastScanVulsNoticeNum"].GetUint64();
        m_lastScanVulsNoticeNumHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("LastScanRateLimit") && !value["LastScanRateLimit"].IsNull())
    {
        if (!value["LastScanRateLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanRateLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanRateLimit = value["LastScanRateLimit"].GetUint64();
        m_lastScanRateLimitHasBeenSet = true;
    }

    if (value.HasMember("LastScanVulsNum") && !value["LastScanVulsNum"].IsNull())
    {
        if (!value["LastScanVulsNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanVulsNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanVulsNum = value["LastScanVulsNum"].GetUint64();
        m_lastScanVulsNumHasBeenSet = true;
    }

    if (value.HasMember("LastScanNoticeNum") && !value["LastScanNoticeNum"].IsNull())
    {
        if (!value["LastScanNoticeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanNoticeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanNoticeNum = value["LastScanNoticeNum"].GetUint64();
        m_lastScanNoticeNumHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NeedLogin") && !value["NeedLogin"].IsNull())
    {
        if (!value["NeedLogin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.NeedLogin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needLogin = value["NeedLogin"].GetInt64();
        m_needLoginHasBeenSet = true;
    }

    if (value.HasMember("LoginCookie") && !value["LoginCookie"].IsNull())
    {
        if (!value["LoginCookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LoginCookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginCookie = string(value["LoginCookie"].GetString());
        m_loginCookieHasBeenSet = true;
    }

    if (value.HasMember("LoginCookieValid") && !value["LoginCookieValid"].IsNull())
    {
        if (!value["LoginCookieValid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LoginCookieValid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loginCookieValid = value["LoginCookieValid"].GetUint64();
        m_loginCookieValidHasBeenSet = true;
    }

    if (value.HasMember("LoginCheckUrl") && !value["LoginCheckUrl"].IsNull())
    {
        if (!value["LoginCheckUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LoginCheckUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginCheckUrl = string(value["LoginCheckUrl"].GetString());
        m_loginCheckUrlHasBeenSet = true;
    }

    if (value.HasMember("LoginCheckKw") && !value["LoginCheckKw"].IsNull())
    {
        if (!value["LoginCheckKw"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LoginCheckKw` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginCheckKw = string(value["LoginCheckKw"].GetString());
        m_loginCheckKwHasBeenSet = true;
    }

    if (value.HasMember("ScanDisallow") && !value["ScanDisallow"].IsNull())
    {
        if (!value["ScanDisallow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.ScanDisallow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanDisallow = string(value["ScanDisallow"].GetString());
        m_scanDisallowHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Site.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("ContentStatus") && !value["ContentStatus"].IsNull())
    {
        if (!value["ContentStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.ContentStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentStatus = value["ContentStatus"].GetUint64();
        m_contentStatusHasBeenSet = true;
    }

    if (value.HasMember("LastScanContentNum") && !value["LastScanContentNum"].IsNull())
    {
        if (!value["LastScanContentNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Site.LastScanContentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanContentNum = value["LastScanContentNum"].GetUint64();
        m_lastScanContentNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Site::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorId, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifyStatus, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_lastScanTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanTaskId, allocator);
    }

    if (m_lastScanStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanCancelTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanCancelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanCancelTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanPageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanPageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanPageCount, allocator);
    }

    if (m_lastScanScannerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanScannerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanScannerType.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanVulsHighNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanVulsHighNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanVulsHighNum, allocator);
    }

    if (m_lastScanVulsMiddleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanVulsMiddleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanVulsMiddleNum, allocator);
    }

    if (m_lastScanVulsLowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanVulsLowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanVulsLowNum, allocator);
    }

    if (m_lastScanVulsNoticeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanVulsNoticeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanVulsNoticeNum, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_lastScanRateLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanRateLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanRateLimit, allocator);
    }

    if (m_lastScanVulsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanVulsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanVulsNum, allocator);
    }

    if (m_lastScanNoticeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanNoticeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanNoticeNum, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_needLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needLogin, allocator);
    }

    if (m_loginCookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginCookie.c_str(), allocator).Move(), allocator);
    }

    if (m_loginCookieValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCookieValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginCookieValid, allocator);
    }

    if (m_loginCheckUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCheckUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginCheckUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_loginCheckKwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginCheckKw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginCheckKw.c_str(), allocator).Move(), allocator);
    }

    if (m_scanDisallowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanDisallow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanDisallow.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_contentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentStatus, allocator);
    }

    if (m_lastScanContentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanContentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastScanContentNum, allocator);
    }

}


uint64_t Site::GetId() const
{
    return m_id;
}

void Site::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Site::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Site::GetMonitorId() const
{
    return m_monitorId;
}

void Site::SetMonitorId(const uint64_t& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool Site::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string Site::GetUrl() const
{
    return m_url;
}

void Site::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool Site::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string Site::GetName() const
{
    return m_name;
}

void Site::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Site::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t Site::GetVerifyStatus() const
{
    return m_verifyStatus;
}

void Site::SetVerifyStatus(const uint64_t& _verifyStatus)
{
    m_verifyStatus = _verifyStatus;
    m_verifyStatusHasBeenSet = true;
}

bool Site::VerifyStatusHasBeenSet() const
{
    return m_verifyStatusHasBeenSet;
}

uint64_t Site::GetMonitorStatus() const
{
    return m_monitorStatus;
}

void Site::SetMonitorStatus(const uint64_t& _monitorStatus)
{
    m_monitorStatus = _monitorStatus;
    m_monitorStatusHasBeenSet = true;
}

bool Site::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

uint64_t Site::GetScanStatus() const
{
    return m_scanStatus;
}

void Site::SetScanStatus(const uint64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool Site::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

uint64_t Site::GetLastScanTaskId() const
{
    return m_lastScanTaskId;
}

void Site::SetLastScanTaskId(const uint64_t& _lastScanTaskId)
{
    m_lastScanTaskId = _lastScanTaskId;
    m_lastScanTaskIdHasBeenSet = true;
}

bool Site::LastScanTaskIdHasBeenSet() const
{
    return m_lastScanTaskIdHasBeenSet;
}

string Site::GetLastScanStartTime() const
{
    return m_lastScanStartTime;
}

void Site::SetLastScanStartTime(const string& _lastScanStartTime)
{
    m_lastScanStartTime = _lastScanStartTime;
    m_lastScanStartTimeHasBeenSet = true;
}

bool Site::LastScanStartTimeHasBeenSet() const
{
    return m_lastScanStartTimeHasBeenSet;
}

string Site::GetLastScanFinishTime() const
{
    return m_lastScanFinishTime;
}

void Site::SetLastScanFinishTime(const string& _lastScanFinishTime)
{
    m_lastScanFinishTime = _lastScanFinishTime;
    m_lastScanFinishTimeHasBeenSet = true;
}

bool Site::LastScanFinishTimeHasBeenSet() const
{
    return m_lastScanFinishTimeHasBeenSet;
}

string Site::GetLastScanCancelTime() const
{
    return m_lastScanCancelTime;
}

void Site::SetLastScanCancelTime(const string& _lastScanCancelTime)
{
    m_lastScanCancelTime = _lastScanCancelTime;
    m_lastScanCancelTimeHasBeenSet = true;
}

bool Site::LastScanCancelTimeHasBeenSet() const
{
    return m_lastScanCancelTimeHasBeenSet;
}

uint64_t Site::GetLastScanPageCount() const
{
    return m_lastScanPageCount;
}

void Site::SetLastScanPageCount(const uint64_t& _lastScanPageCount)
{
    m_lastScanPageCount = _lastScanPageCount;
    m_lastScanPageCountHasBeenSet = true;
}

bool Site::LastScanPageCountHasBeenSet() const
{
    return m_lastScanPageCountHasBeenSet;
}

string Site::GetLastScanScannerType() const
{
    return m_lastScanScannerType;
}

void Site::SetLastScanScannerType(const string& _lastScanScannerType)
{
    m_lastScanScannerType = _lastScanScannerType;
    m_lastScanScannerTypeHasBeenSet = true;
}

bool Site::LastScanScannerTypeHasBeenSet() const
{
    return m_lastScanScannerTypeHasBeenSet;
}

uint64_t Site::GetLastScanVulsHighNum() const
{
    return m_lastScanVulsHighNum;
}

void Site::SetLastScanVulsHighNum(const uint64_t& _lastScanVulsHighNum)
{
    m_lastScanVulsHighNum = _lastScanVulsHighNum;
    m_lastScanVulsHighNumHasBeenSet = true;
}

bool Site::LastScanVulsHighNumHasBeenSet() const
{
    return m_lastScanVulsHighNumHasBeenSet;
}

uint64_t Site::GetLastScanVulsMiddleNum() const
{
    return m_lastScanVulsMiddleNum;
}

void Site::SetLastScanVulsMiddleNum(const uint64_t& _lastScanVulsMiddleNum)
{
    m_lastScanVulsMiddleNum = _lastScanVulsMiddleNum;
    m_lastScanVulsMiddleNumHasBeenSet = true;
}

bool Site::LastScanVulsMiddleNumHasBeenSet() const
{
    return m_lastScanVulsMiddleNumHasBeenSet;
}

uint64_t Site::GetLastScanVulsLowNum() const
{
    return m_lastScanVulsLowNum;
}

void Site::SetLastScanVulsLowNum(const uint64_t& _lastScanVulsLowNum)
{
    m_lastScanVulsLowNum = _lastScanVulsLowNum;
    m_lastScanVulsLowNumHasBeenSet = true;
}

bool Site::LastScanVulsLowNumHasBeenSet() const
{
    return m_lastScanVulsLowNumHasBeenSet;
}

uint64_t Site::GetLastScanVulsNoticeNum() const
{
    return m_lastScanVulsNoticeNum;
}

void Site::SetLastScanVulsNoticeNum(const uint64_t& _lastScanVulsNoticeNum)
{
    m_lastScanVulsNoticeNum = _lastScanVulsNoticeNum;
    m_lastScanVulsNoticeNumHasBeenSet = true;
}

bool Site::LastScanVulsNoticeNumHasBeenSet() const
{
    return m_lastScanVulsNoticeNumHasBeenSet;
}

string Site::GetCreatedAt() const
{
    return m_createdAt;
}

void Site::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Site::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Site::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Site::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Site::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

uint64_t Site::GetLastScanRateLimit() const
{
    return m_lastScanRateLimit;
}

void Site::SetLastScanRateLimit(const uint64_t& _lastScanRateLimit)
{
    m_lastScanRateLimit = _lastScanRateLimit;
    m_lastScanRateLimitHasBeenSet = true;
}

bool Site::LastScanRateLimitHasBeenSet() const
{
    return m_lastScanRateLimitHasBeenSet;
}

uint64_t Site::GetLastScanVulsNum() const
{
    return m_lastScanVulsNum;
}

void Site::SetLastScanVulsNum(const uint64_t& _lastScanVulsNum)
{
    m_lastScanVulsNum = _lastScanVulsNum;
    m_lastScanVulsNumHasBeenSet = true;
}

bool Site::LastScanVulsNumHasBeenSet() const
{
    return m_lastScanVulsNumHasBeenSet;
}

uint64_t Site::GetLastScanNoticeNum() const
{
    return m_lastScanNoticeNum;
}

void Site::SetLastScanNoticeNum(const uint64_t& _lastScanNoticeNum)
{
    m_lastScanNoticeNum = _lastScanNoticeNum;
    m_lastScanNoticeNumHasBeenSet = true;
}

bool Site::LastScanNoticeNumHasBeenSet() const
{
    return m_lastScanNoticeNumHasBeenSet;
}

uint64_t Site::GetProgress() const
{
    return m_progress;
}

void Site::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool Site::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

uint64_t Site::GetAppid() const
{
    return m_appid;
}

void Site::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool Site::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string Site::GetUin() const
{
    return m_uin;
}

void Site::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Site::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t Site::GetNeedLogin() const
{
    return m_needLogin;
}

void Site::SetNeedLogin(const int64_t& _needLogin)
{
    m_needLogin = _needLogin;
    m_needLoginHasBeenSet = true;
}

bool Site::NeedLoginHasBeenSet() const
{
    return m_needLoginHasBeenSet;
}

string Site::GetLoginCookie() const
{
    return m_loginCookie;
}

void Site::SetLoginCookie(const string& _loginCookie)
{
    m_loginCookie = _loginCookie;
    m_loginCookieHasBeenSet = true;
}

bool Site::LoginCookieHasBeenSet() const
{
    return m_loginCookieHasBeenSet;
}

uint64_t Site::GetLoginCookieValid() const
{
    return m_loginCookieValid;
}

void Site::SetLoginCookieValid(const uint64_t& _loginCookieValid)
{
    m_loginCookieValid = _loginCookieValid;
    m_loginCookieValidHasBeenSet = true;
}

bool Site::LoginCookieValidHasBeenSet() const
{
    return m_loginCookieValidHasBeenSet;
}

string Site::GetLoginCheckUrl() const
{
    return m_loginCheckUrl;
}

void Site::SetLoginCheckUrl(const string& _loginCheckUrl)
{
    m_loginCheckUrl = _loginCheckUrl;
    m_loginCheckUrlHasBeenSet = true;
}

bool Site::LoginCheckUrlHasBeenSet() const
{
    return m_loginCheckUrlHasBeenSet;
}

string Site::GetLoginCheckKw() const
{
    return m_loginCheckKw;
}

void Site::SetLoginCheckKw(const string& _loginCheckKw)
{
    m_loginCheckKw = _loginCheckKw;
    m_loginCheckKwHasBeenSet = true;
}

bool Site::LoginCheckKwHasBeenSet() const
{
    return m_loginCheckKwHasBeenSet;
}

string Site::GetScanDisallow() const
{
    return m_scanDisallow;
}

void Site::SetScanDisallow(const string& _scanDisallow)
{
    m_scanDisallow = _scanDisallow;
    m_scanDisallowHasBeenSet = true;
}

bool Site::ScanDisallowHasBeenSet() const
{
    return m_scanDisallowHasBeenSet;
}

string Site::GetUserAgent() const
{
    return m_userAgent;
}

void Site::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool Site::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

uint64_t Site::GetContentStatus() const
{
    return m_contentStatus;
}

void Site::SetContentStatus(const uint64_t& _contentStatus)
{
    m_contentStatus = _contentStatus;
    m_contentStatusHasBeenSet = true;
}

bool Site::ContentStatusHasBeenSet() const
{
    return m_contentStatusHasBeenSet;
}

uint64_t Site::GetLastScanContentNum() const
{
    return m_lastScanContentNum;
}

void Site::SetLastScanContentNum(const uint64_t& _lastScanContentNum)
{
    m_lastScanContentNum = _lastScanContentNum;
    m_lastScanContentNumHasBeenSet = true;
}

bool Site::LastScanContentNumHasBeenSet() const
{
    return m_lastScanContentNumHasBeenSet;
}

