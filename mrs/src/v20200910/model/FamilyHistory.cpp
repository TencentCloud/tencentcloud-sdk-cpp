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

#include <tencentcloud/mrs/v20200910/model/FamilyHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

FamilyHistory::FamilyHistory() :
    m_relativeMemberHasBeenSet(false),
    m_relativeCancerHasBeenSet(false),
    m_geneticHasBeenSet(false)
{
}

CoreInternalOutcome FamilyHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RelativeMember") && !value["RelativeMember"].IsNull())
    {
        if (!value["RelativeMember"].IsString())
        {
            return CoreInternalOutcome(Error("response `FamilyHistory.RelativeMember` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeMember = string(value["RelativeMember"].GetString());
        m_relativeMemberHasBeenSet = true;
    }

    if (value.HasMember("RelativeCancer") && !value["RelativeCancer"].IsNull())
    {
        if (!value["RelativeCancer"].IsString())
        {
            return CoreInternalOutcome(Error("response `FamilyHistory.RelativeCancer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeCancer = string(value["RelativeCancer"].GetString());
        m_relativeCancerHasBeenSet = true;
    }

    if (value.HasMember("Genetic") && !value["Genetic"].IsNull())
    {
        if (!value["Genetic"].IsString())
        {
            return CoreInternalOutcome(Error("response `FamilyHistory.Genetic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_genetic = string(value["Genetic"].GetString());
        m_geneticHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FamilyHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_relativeMemberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeMember";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeMember.c_str(), allocator).Move(), allocator);
    }

    if (m_relativeCancerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeCancer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeCancer.c_str(), allocator).Move(), allocator);
    }

    if (m_geneticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Genetic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_genetic.c_str(), allocator).Move(), allocator);
    }

}


string FamilyHistory::GetRelativeMember() const
{
    return m_relativeMember;
}

void FamilyHistory::SetRelativeMember(const string& _relativeMember)
{
    m_relativeMember = _relativeMember;
    m_relativeMemberHasBeenSet = true;
}

bool FamilyHistory::RelativeMemberHasBeenSet() const
{
    return m_relativeMemberHasBeenSet;
}

string FamilyHistory::GetRelativeCancer() const
{
    return m_relativeCancer;
}

void FamilyHistory::SetRelativeCancer(const string& _relativeCancer)
{
    m_relativeCancer = _relativeCancer;
    m_relativeCancerHasBeenSet = true;
}

bool FamilyHistory::RelativeCancerHasBeenSet() const
{
    return m_relativeCancerHasBeenSet;
}

string FamilyHistory::GetGenetic() const
{
    return m_genetic;
}

void FamilyHistory::SetGenetic(const string& _genetic)
{
    m_genetic = _genetic;
    m_geneticHasBeenSet = true;
}

bool FamilyHistory::GeneticHasBeenSet() const
{
    return m_geneticHasBeenSet;
}

