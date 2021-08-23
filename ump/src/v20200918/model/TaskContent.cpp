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

#include <tencentcloud/ump/v20200918/model/TaskContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

TaskContent::TaskContent() :
    m_cameraIdHasBeenSet(false),
    m_rTSPHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome TaskContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CameraId") && !value["CameraId"].IsNull())
    {
        if (!value["CameraId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskContent.CameraId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cameraId = value["CameraId"].GetUint64();
        m_cameraIdHasBeenSet = true;
    }

    if (value.HasMember("RTSP") && !value["RTSP"].IsNull())
    {
        if (!value["RTSP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskContent.RTSP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTSP = string(value["RTSP"].GetString());
        m_rTSPHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskContent.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cameraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_rTSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTSP.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskContent::GetCameraId() const
{
    return m_cameraId;
}

void TaskContent::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool TaskContent::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

string TaskContent::GetRTSP() const
{
    return m_rTSP;
}

void TaskContent::SetRTSP(const string& _rTSP)
{
    m_rTSP = _rTSP;
    m_rTSPHasBeenSet = true;
}

bool TaskContent::RTSPHasBeenSet() const
{
    return m_rTSPHasBeenSet;
}

string TaskContent::GetUrl() const
{
    return m_url;
}

void TaskContent::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool TaskContent::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

