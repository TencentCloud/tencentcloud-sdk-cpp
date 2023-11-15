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

#include <tencentcloud/weilingwith/v20230427/model/CameraExtendInfoRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

CameraExtendInfoRes::CameraExtendInfoRes() :
    m_saveTypeHasBeenSet(false),
    m_saveDayHasBeenSet(false),
    m_liveResolutionHasBeenSet(false),
    m_historyResolutionHasBeenSet(false)
{
}

CoreInternalOutcome CameraExtendInfoRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaveType") && !value["SaveType"].IsNull())
    {
        if (!value["SaveType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraExtendInfoRes.SaveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saveType = string(value["SaveType"].GetString());
        m_saveTypeHasBeenSet = true;
    }

    if (value.HasMember("SaveDay") && !value["SaveDay"].IsNull())
    {
        if (!value["SaveDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraExtendInfoRes.SaveDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_saveDay = value["SaveDay"].GetInt64();
        m_saveDayHasBeenSet = true;
    }

    if (value.HasMember("LiveResolution") && !value["LiveResolution"].IsNull())
    {
        if (!value["LiveResolution"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraExtendInfoRes.LiveResolution` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveResolution = value["LiveResolution"].GetInt64();
        m_liveResolutionHasBeenSet = true;
    }

    if (value.HasMember("HistoryResolution") && !value["HistoryResolution"].IsNull())
    {
        if (!value["HistoryResolution"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraExtendInfoRes.HistoryResolution` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_historyResolution = value["HistoryResolution"].GetInt64();
        m_historyResolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraExtendInfoRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saveType.c_str(), allocator).Move(), allocator);
    }

    if (m_saveDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saveDay, allocator);
    }

    if (m_liveResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveResolution, allocator);
    }

    if (m_historyResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyResolution, allocator);
    }

}


string CameraExtendInfoRes::GetSaveType() const
{
    return m_saveType;
}

void CameraExtendInfoRes::SetSaveType(const string& _saveType)
{
    m_saveType = _saveType;
    m_saveTypeHasBeenSet = true;
}

bool CameraExtendInfoRes::SaveTypeHasBeenSet() const
{
    return m_saveTypeHasBeenSet;
}

int64_t CameraExtendInfoRes::GetSaveDay() const
{
    return m_saveDay;
}

void CameraExtendInfoRes::SetSaveDay(const int64_t& _saveDay)
{
    m_saveDay = _saveDay;
    m_saveDayHasBeenSet = true;
}

bool CameraExtendInfoRes::SaveDayHasBeenSet() const
{
    return m_saveDayHasBeenSet;
}

int64_t CameraExtendInfoRes::GetLiveResolution() const
{
    return m_liveResolution;
}

void CameraExtendInfoRes::SetLiveResolution(const int64_t& _liveResolution)
{
    m_liveResolution = _liveResolution;
    m_liveResolutionHasBeenSet = true;
}

bool CameraExtendInfoRes::LiveResolutionHasBeenSet() const
{
    return m_liveResolutionHasBeenSet;
}

int64_t CameraExtendInfoRes::GetHistoryResolution() const
{
    return m_historyResolution;
}

void CameraExtendInfoRes::SetHistoryResolution(const int64_t& _historyResolution)
{
    m_historyResolution = _historyResolution;
    m_historyResolutionHasBeenSet = true;
}

bool CameraExtendInfoRes::HistoryResolutionHasBeenSet() const
{
    return m_historyResolutionHasBeenSet;
}

