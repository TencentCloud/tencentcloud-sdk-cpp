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

#include <tencentcloud/lke/v20231130/model/KnowledgeCapacityPieGraphDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeCapacityPieGraphDetail::KnowledgeCapacityPieGraphDetail() :
    m_appNameHasBeenSet(false),
    m_usedCharSizeHasBeenSet(false),
    m_proportionHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeCapacityPieGraphDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeCapacityPieGraphDetail.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("UsedCharSize") && !value["UsedCharSize"].IsNull())
    {
        if (!value["UsedCharSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeCapacityPieGraphDetail.UsedCharSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedCharSize = string(value["UsedCharSize"].GetString());
        m_usedCharSizeHasBeenSet = true;
    }

    if (value.HasMember("Proportion") && !value["Proportion"].IsNull())
    {
        if (!value["Proportion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeCapacityPieGraphDetail.Proportion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_proportion = value["Proportion"].GetDouble();
        m_proportionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeCapacityPieGraphDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_usedCharSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCharSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedCharSize.c_str(), allocator).Move(), allocator);
    }

    if (m_proportionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proportion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proportion, allocator);
    }

}


string KnowledgeCapacityPieGraphDetail::GetAppName() const
{
    return m_appName;
}

void KnowledgeCapacityPieGraphDetail::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool KnowledgeCapacityPieGraphDetail::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string KnowledgeCapacityPieGraphDetail::GetUsedCharSize() const
{
    return m_usedCharSize;
}

void KnowledgeCapacityPieGraphDetail::SetUsedCharSize(const string& _usedCharSize)
{
    m_usedCharSize = _usedCharSize;
    m_usedCharSizeHasBeenSet = true;
}

bool KnowledgeCapacityPieGraphDetail::UsedCharSizeHasBeenSet() const
{
    return m_usedCharSizeHasBeenSet;
}

double KnowledgeCapacityPieGraphDetail::GetProportion() const
{
    return m_proportion;
}

void KnowledgeCapacityPieGraphDetail::SetProportion(const double& _proportion)
{
    m_proportion = _proportion;
    m_proportionHasBeenSet = true;
}

bool KnowledgeCapacityPieGraphDetail::ProportionHasBeenSet() const
{
    return m_proportionHasBeenSet;
}

