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

#include <tencentcloud/vod/v20180717/model/FaceConfigureInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FaceConfigureInfoForUpdate::FaceConfigureInfoForUpdate() :
    m_switchHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_defaultLibraryLabelSetHasBeenSet(false),
    m_userDefineLibraryLabelSetHasBeenSet(false),
    m_faceLibraryHasBeenSet(false)
{
}

CoreInternalOutcome FaceConfigureInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceConfigureInfoForUpdate.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceConfigureInfoForUpdate.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("DefaultLibraryLabelSet") && !value["DefaultLibraryLabelSet"].IsNull())
    {
        if (!value["DefaultLibraryLabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceConfigureInfoForUpdate.DefaultLibraryLabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultLibraryLabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_defaultLibraryLabelSet.push_back((*itr).GetString());
        }
        m_defaultLibraryLabelSetHasBeenSet = true;
    }

    if (value.HasMember("UserDefineLibraryLabelSet") && !value["UserDefineLibraryLabelSet"].IsNull())
    {
        if (!value["UserDefineLibraryLabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceConfigureInfoForUpdate.UserDefineLibraryLabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UserDefineLibraryLabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userDefineLibraryLabelSet.push_back((*itr).GetString());
        }
        m_userDefineLibraryLabelSetHasBeenSet = true;
    }

    if (value.HasMember("FaceLibrary") && !value["FaceLibrary"].IsNull())
    {
        if (!value["FaceLibrary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceConfigureInfoForUpdate.FaceLibrary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceLibrary = string(value["FaceLibrary"].GetString());
        m_faceLibraryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceConfigureInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_defaultLibraryLabelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultLibraryLabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_defaultLibraryLabelSet.begin(); itr != m_defaultLibraryLabelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userDefineLibraryLabelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineLibraryLabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userDefineLibraryLabelSet.begin(); itr != m_userDefineLibraryLabelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_faceLibraryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceLibrary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceLibrary.c_str(), allocator).Move(), allocator);
    }

}


string FaceConfigureInfoForUpdate::GetSwitch() const
{
    return m_switch;
}

void FaceConfigureInfoForUpdate::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FaceConfigureInfoForUpdate::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

double FaceConfigureInfoForUpdate::GetScore() const
{
    return m_score;
}

void FaceConfigureInfoForUpdate::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool FaceConfigureInfoForUpdate::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

vector<string> FaceConfigureInfoForUpdate::GetDefaultLibraryLabelSet() const
{
    return m_defaultLibraryLabelSet;
}

void FaceConfigureInfoForUpdate::SetDefaultLibraryLabelSet(const vector<string>& _defaultLibraryLabelSet)
{
    m_defaultLibraryLabelSet = _defaultLibraryLabelSet;
    m_defaultLibraryLabelSetHasBeenSet = true;
}

bool FaceConfigureInfoForUpdate::DefaultLibraryLabelSetHasBeenSet() const
{
    return m_defaultLibraryLabelSetHasBeenSet;
}

vector<string> FaceConfigureInfoForUpdate::GetUserDefineLibraryLabelSet() const
{
    return m_userDefineLibraryLabelSet;
}

void FaceConfigureInfoForUpdate::SetUserDefineLibraryLabelSet(const vector<string>& _userDefineLibraryLabelSet)
{
    m_userDefineLibraryLabelSet = _userDefineLibraryLabelSet;
    m_userDefineLibraryLabelSetHasBeenSet = true;
}

bool FaceConfigureInfoForUpdate::UserDefineLibraryLabelSetHasBeenSet() const
{
    return m_userDefineLibraryLabelSetHasBeenSet;
}

string FaceConfigureInfoForUpdate::GetFaceLibrary() const
{
    return m_faceLibrary;
}

void FaceConfigureInfoForUpdate::SetFaceLibrary(const string& _faceLibrary)
{
    m_faceLibrary = _faceLibrary;
    m_faceLibraryHasBeenSet = true;
}

bool FaceConfigureInfoForUpdate::FaceLibraryHasBeenSet() const
{
    return m_faceLibraryHasBeenSet;
}

