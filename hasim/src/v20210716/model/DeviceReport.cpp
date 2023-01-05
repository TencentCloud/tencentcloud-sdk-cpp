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

#include <tencentcloud/hasim/v20210716/model/DeviceReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

DeviceReport::DeviceReport() :
    m_imeiHasBeenSet(false),
    m_lngHasBeenSet(false),
    m_latHasBeenSet(false),
    m_lacHasBeenSet(false),
    m_cellHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_rssHasBeenSet(false),
    m_teleHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_pingHasBeenSet(false),
    m_delayHasBeenSet(false),
    m_logHasBeenSet(false),
    m_devTypeHasBeenSet(false),
    m_devModelHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_uploadTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_monthFirstTimeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }

    if (value.HasMember("Lng") && !value["Lng"].IsNull())
    {
        if (!value["Lng"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Lng` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lng = string(value["Lng"].GetString());
        m_lngHasBeenSet = true;
    }

    if (value.HasMember("Lat") && !value["Lat"].IsNull())
    {
        if (!value["Lat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Lat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lat = string(value["Lat"].GetString());
        m_latHasBeenSet = true;
    }

    if (value.HasMember("Lac") && !value["Lac"].IsNull())
    {
        if (!value["Lac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Lac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lac = string(value["Lac"].GetString());
        m_lacHasBeenSet = true;
    }

    if (value.HasMember("Cell") && !value["Cell"].IsNull())
    {
        if (!value["Cell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Cell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cell = string(value["Cell"].GetString());
        m_cellHasBeenSet = true;
    }

    if (value.HasMember("Iccid") && !value["Iccid"].IsNull())
    {
        if (!value["Iccid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Iccid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iccid = string(value["Iccid"].GetString());
        m_iccidHasBeenSet = true;
    }

    if (value.HasMember("Rss") && !value["Rss"].IsNull())
    {
        if (!value["Rss"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Rss` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rss = value["Rss"].GetInt64();
        m_rssHasBeenSet = true;
    }

    if (value.HasMember("Tele") && !value["Tele"].IsNull())
    {
        if (!value["Tele"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Tele` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tele = value["Tele"].GetInt64();
        m_teleHasBeenSet = true;
    }

    if (value.HasMember("Tid") && !value["Tid"].IsNull())
    {
        if (!value["Tid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Tid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tid = value["Tid"].GetInt64();
        m_tidHasBeenSet = true;
    }

    if (value.HasMember("Ping") && !value["Ping"].IsNull())
    {
        if (!value["Ping"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Ping` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ping = value["Ping"].GetInt64();
        m_pingHasBeenSet = true;
    }

    if (value.HasMember("Delay") && !value["Delay"].IsNull())
    {
        if (!value["Delay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Delay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delay = value["Delay"].GetInt64();
        m_delayHasBeenSet = true;
    }

    if (value.HasMember("Log") && !value["Log"].IsNull())
    {
        if (!value["Log"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Log` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_log = value["Log"].GetInt64();
        m_logHasBeenSet = true;
    }

    if (value.HasMember("DevType") && !value["DevType"].IsNull())
    {
        if (!value["DevType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.DevType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devType = string(value["DevType"].GetString());
        m_devTypeHasBeenSet = true;
    }

    if (value.HasMember("DevModel") && !value["DevModel"].IsNull())
    {
        if (!value["DevModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.DevModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devModel = string(value["DevModel"].GetString());
        m_devModelHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("UploadTime") && !value["UploadTime"].IsNull())
    {
        if (!value["UploadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.UploadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadTime = string(value["UploadTime"].GetString());
        m_uploadTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MonthFirstTime") && !value["MonthFirstTime"].IsNull())
    {
        if (!value["MonthFirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceReport.MonthFirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monthFirstTime = string(value["MonthFirstTime"].GetString());
        m_monthFirstTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_lngHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lng";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lng.c_str(), allocator).Move(), allocator);
    }

    if (m_latHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lat.c_str(), allocator).Move(), allocator);
    }

    if (m_lacHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lac.c_str(), allocator).Move(), allocator);
    }

    if (m_cellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cell.c_str(), allocator).Move(), allocator);
    }

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_rssHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rss, allocator);
    }

    if (m_teleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tele";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tele, allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tid, allocator);
    }

    if (m_pingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ping, allocator);
    }

    if (m_delayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delay, allocator);
    }

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_log, allocator);
    }

    if (m_devTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devType.c_str(), allocator).Move(), allocator);
    }

    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_monthFirstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthFirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monthFirstTime.c_str(), allocator).Move(), allocator);
    }

}


string DeviceReport::GetImei() const
{
    return m_imei;
}

void DeviceReport::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool DeviceReport::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string DeviceReport::GetLng() const
{
    return m_lng;
}

void DeviceReport::SetLng(const string& _lng)
{
    m_lng = _lng;
    m_lngHasBeenSet = true;
}

bool DeviceReport::LngHasBeenSet() const
{
    return m_lngHasBeenSet;
}

string DeviceReport::GetLat() const
{
    return m_lat;
}

void DeviceReport::SetLat(const string& _lat)
{
    m_lat = _lat;
    m_latHasBeenSet = true;
}

bool DeviceReport::LatHasBeenSet() const
{
    return m_latHasBeenSet;
}

string DeviceReport::GetLac() const
{
    return m_lac;
}

void DeviceReport::SetLac(const string& _lac)
{
    m_lac = _lac;
    m_lacHasBeenSet = true;
}

bool DeviceReport::LacHasBeenSet() const
{
    return m_lacHasBeenSet;
}

string DeviceReport::GetCell() const
{
    return m_cell;
}

void DeviceReport::SetCell(const string& _cell)
{
    m_cell = _cell;
    m_cellHasBeenSet = true;
}

bool DeviceReport::CellHasBeenSet() const
{
    return m_cellHasBeenSet;
}

string DeviceReport::GetIccid() const
{
    return m_iccid;
}

void DeviceReport::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool DeviceReport::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

int64_t DeviceReport::GetRss() const
{
    return m_rss;
}

void DeviceReport::SetRss(const int64_t& _rss)
{
    m_rss = _rss;
    m_rssHasBeenSet = true;
}

bool DeviceReport::RssHasBeenSet() const
{
    return m_rssHasBeenSet;
}

int64_t DeviceReport::GetTele() const
{
    return m_tele;
}

void DeviceReport::SetTele(const int64_t& _tele)
{
    m_tele = _tele;
    m_teleHasBeenSet = true;
}

bool DeviceReport::TeleHasBeenSet() const
{
    return m_teleHasBeenSet;
}

int64_t DeviceReport::GetTid() const
{
    return m_tid;
}

void DeviceReport::SetTid(const int64_t& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool DeviceReport::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

int64_t DeviceReport::GetPing() const
{
    return m_ping;
}

void DeviceReport::SetPing(const int64_t& _ping)
{
    m_ping = _ping;
    m_pingHasBeenSet = true;
}

bool DeviceReport::PingHasBeenSet() const
{
    return m_pingHasBeenSet;
}

int64_t DeviceReport::GetDelay() const
{
    return m_delay;
}

void DeviceReport::SetDelay(const int64_t& _delay)
{
    m_delay = _delay;
    m_delayHasBeenSet = true;
}

bool DeviceReport::DelayHasBeenSet() const
{
    return m_delayHasBeenSet;
}

int64_t DeviceReport::GetLog() const
{
    return m_log;
}

void DeviceReport::SetLog(const int64_t& _log)
{
    m_log = _log;
    m_logHasBeenSet = true;
}

bool DeviceReport::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

string DeviceReport::GetDevType() const
{
    return m_devType;
}

void DeviceReport::SetDevType(const string& _devType)
{
    m_devType = _devType;
    m_devTypeHasBeenSet = true;
}

bool DeviceReport::DevTypeHasBeenSet() const
{
    return m_devTypeHasBeenSet;
}

string DeviceReport::GetDevModel() const
{
    return m_devModel;
}

void DeviceReport::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool DeviceReport::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

string DeviceReport::GetVersion() const
{
    return m_version;
}

void DeviceReport::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DeviceReport::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string DeviceReport::GetUploadTime() const
{
    return m_uploadTime;
}

void DeviceReport::SetUploadTime(const string& _uploadTime)
{
    m_uploadTime = _uploadTime;
    m_uploadTimeHasBeenSet = true;
}

bool DeviceReport::UploadTimeHasBeenSet() const
{
    return m_uploadTimeHasBeenSet;
}

int64_t DeviceReport::GetStatus() const
{
    return m_status;
}

void DeviceReport::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceReport::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceReport::GetMonthFirstTime() const
{
    return m_monthFirstTime;
}

void DeviceReport::SetMonthFirstTime(const string& _monthFirstTime)
{
    m_monthFirstTime = _monthFirstTime;
    m_monthFirstTimeHasBeenSet = true;
}

bool DeviceReport::MonthFirstTimeHasBeenSet() const
{
    return m_monthFirstTimeHasBeenSet;
}

