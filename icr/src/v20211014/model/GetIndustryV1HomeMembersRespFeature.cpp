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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespFeature.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRespFeature::GetIndustryV1HomeMembersRespFeature() :
    m_featureNameHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersRespFeature::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FeatureName") && !value["FeatureName"].IsNull())
    {
        if (!value["FeatureName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespFeature.FeatureName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureName = string(value["FeatureName"].GetString());
        m_featureNameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespFeature.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetIndustryV1HomeMembersRespFeature::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_featureNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureName.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

}


string GetIndustryV1HomeMembersRespFeature::GetFeatureName() const
{
    return m_featureName;
}

void GetIndustryV1HomeMembersRespFeature::SetFeatureName(const string& _featureName)
{
    m_featureName = _featureName;
    m_featureNameHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespFeature::FeatureNameHasBeenSet() const
{
    return m_featureNameHasBeenSet;
}

string GetIndustryV1HomeMembersRespFeature::GetID() const
{
    return m_iD;
}

void GetIndustryV1HomeMembersRespFeature::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespFeature::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

