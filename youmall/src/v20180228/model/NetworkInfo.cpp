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

#include <tencentcloud/youmall/v20180228/model/NetworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

NetworkInfo::NetworkInfo() :
    m_uploadHasBeenSet(false),
    m_downloadHasBeenSet(false),
    m_minRttHasBeenSet(false),
    m_avgRttHasBeenSet(false),
    m_maxRttHasBeenSet(false),
    m_mdevRttHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_macHasBeenSet(false)
{
}

CoreInternalOutcome NetworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Upload") && !value["Upload"].IsNull())
    {
        if (!value["Upload"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.Upload` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_upload = value["Upload"].GetDouble();
        m_uploadHasBeenSet = true;
    }

    if (value.HasMember("Download") && !value["Download"].IsNull())
    {
        if (!value["Download"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.Download` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_download = value["Download"].GetDouble();
        m_downloadHasBeenSet = true;
    }

    if (value.HasMember("MinRtt") && !value["MinRtt"].IsNull())
    {
        if (!value["MinRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.MinRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minRtt = value["MinRtt"].GetDouble();
        m_minRttHasBeenSet = true;
    }

    if (value.HasMember("AvgRtt") && !value["AvgRtt"].IsNull())
    {
        if (!value["AvgRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.AvgRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgRtt = value["AvgRtt"].GetDouble();
        m_avgRttHasBeenSet = true;
    }

    if (value.HasMember("MaxRtt") && !value["MaxRtt"].IsNull())
    {
        if (!value["MaxRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.MaxRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxRtt = value["MaxRtt"].GetDouble();
        m_maxRttHasBeenSet = true;
    }

    if (value.HasMember("MdevRtt") && !value["MdevRtt"].IsNull())
    {
        if (!value["MdevRtt"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.MdevRtt` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mdevRtt = value["MdevRtt"].GetDouble();
        m_mdevRttHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkInfo.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uploadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upload, allocator);
    }

    if (m_downloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Download";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_download, allocator);
    }

    if (m_minRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRtt, allocator);
    }

    if (m_avgRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgRtt, allocator);
    }

    if (m_maxRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRtt, allocator);
    }

    if (m_mdevRttHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MdevRtt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mdevRtt, allocator);
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

}


double NetworkInfo::GetUpload() const
{
    return m_upload;
}

void NetworkInfo::SetUpload(const double& _upload)
{
    m_upload = _upload;
    m_uploadHasBeenSet = true;
}

bool NetworkInfo::UploadHasBeenSet() const
{
    return m_uploadHasBeenSet;
}

double NetworkInfo::GetDownload() const
{
    return m_download;
}

void NetworkInfo::SetDownload(const double& _download)
{
    m_download = _download;
    m_downloadHasBeenSet = true;
}

bool NetworkInfo::DownloadHasBeenSet() const
{
    return m_downloadHasBeenSet;
}

double NetworkInfo::GetMinRtt() const
{
    return m_minRtt;
}

void NetworkInfo::SetMinRtt(const double& _minRtt)
{
    m_minRtt = _minRtt;
    m_minRttHasBeenSet = true;
}

bool NetworkInfo::MinRttHasBeenSet() const
{
    return m_minRttHasBeenSet;
}

double NetworkInfo::GetAvgRtt() const
{
    return m_avgRtt;
}

void NetworkInfo::SetAvgRtt(const double& _avgRtt)
{
    m_avgRtt = _avgRtt;
    m_avgRttHasBeenSet = true;
}

bool NetworkInfo::AvgRttHasBeenSet() const
{
    return m_avgRttHasBeenSet;
}

double NetworkInfo::GetMaxRtt() const
{
    return m_maxRtt;
}

void NetworkInfo::SetMaxRtt(const double& _maxRtt)
{
    m_maxRtt = _maxRtt;
    m_maxRttHasBeenSet = true;
}

bool NetworkInfo::MaxRttHasBeenSet() const
{
    return m_maxRttHasBeenSet;
}

double NetworkInfo::GetMdevRtt() const
{
    return m_mdevRtt;
}

void NetworkInfo::SetMdevRtt(const double& _mdevRtt)
{
    m_mdevRtt = _mdevRtt;
    m_mdevRttHasBeenSet = true;
}

bool NetworkInfo::MdevRttHasBeenSet() const
{
    return m_mdevRttHasBeenSet;
}

double NetworkInfo::GetLoss() const
{
    return m_loss;
}

void NetworkInfo::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool NetworkInfo::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

int64_t NetworkInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void NetworkInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NetworkInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NetworkInfo::GetMac() const
{
    return m_mac;
}

void NetworkInfo::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool NetworkInfo::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

