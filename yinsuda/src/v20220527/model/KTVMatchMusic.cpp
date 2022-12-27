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

#include <tencentcloud/yinsuda/v20220527/model/KTVMatchMusic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

KTVMatchMusic::KTVMatchMusic() :
    m_kTVMusicBaseInfoHasBeenSet(false),
    m_matchRuleHasBeenSet(false),
    m_aMEMusicBaseInfoHasBeenSet(false)
{
}

CoreInternalOutcome KTVMatchMusic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KTVMusicBaseInfo") && !value["KTVMusicBaseInfo"].IsNull())
    {
        if (!value["KTVMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchMusic.KTVMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kTVMusicBaseInfo.Deserialize(value["KTVMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kTVMusicBaseInfoHasBeenSet = true;
    }

    if (value.HasMember("MatchRule") && !value["MatchRule"].IsNull())
    {
        if (!value["MatchRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchMusic.MatchRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_matchRule.Deserialize(value["MatchRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_matchRuleHasBeenSet = true;
    }

    if (value.HasMember("AMEMusicBaseInfo") && !value["AMEMusicBaseInfo"].IsNull())
    {
        if (!value["AMEMusicBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KTVMatchMusic.AMEMusicBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aMEMusicBaseInfo.Deserialize(value["AMEMusicBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aMEMusicBaseInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KTVMatchMusic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kTVMusicBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KTVMusicBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kTVMusicBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_matchRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_matchRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aMEMusicBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMEMusicBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aMEMusicBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


KTVMusicBaseInfo KTVMatchMusic::GetKTVMusicBaseInfo() const
{
    return m_kTVMusicBaseInfo;
}

void KTVMatchMusic::SetKTVMusicBaseInfo(const KTVMusicBaseInfo& _kTVMusicBaseInfo)
{
    m_kTVMusicBaseInfo = _kTVMusicBaseInfo;
    m_kTVMusicBaseInfoHasBeenSet = true;
}

bool KTVMatchMusic::KTVMusicBaseInfoHasBeenSet() const
{
    return m_kTVMusicBaseInfoHasBeenSet;
}

KTVMatchRule KTVMatchMusic::GetMatchRule() const
{
    return m_matchRule;
}

void KTVMatchMusic::SetMatchRule(const KTVMatchRule& _matchRule)
{
    m_matchRule = _matchRule;
    m_matchRuleHasBeenSet = true;
}

bool KTVMatchMusic::MatchRuleHasBeenSet() const
{
    return m_matchRuleHasBeenSet;
}

AMEMusicBaseInfo KTVMatchMusic::GetAMEMusicBaseInfo() const
{
    return m_aMEMusicBaseInfo;
}

void KTVMatchMusic::SetAMEMusicBaseInfo(const AMEMusicBaseInfo& _aMEMusicBaseInfo)
{
    m_aMEMusicBaseInfo = _aMEMusicBaseInfo;
    m_aMEMusicBaseInfoHasBeenSet = true;
}

bool KTVMatchMusic::AMEMusicBaseInfoHasBeenSet() const
{
    return m_aMEMusicBaseInfoHasBeenSet;
}

