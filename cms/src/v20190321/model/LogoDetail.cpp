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

#include <tencentcloud/cms/v20190321/model/LogoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

LogoDetail::LogoDetail() :
    m_appLogoDetailHasBeenSet(false)
{
}

CoreInternalOutcome LogoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppLogoDetail") && !value["AppLogoDetail"].IsNull())
    {
        if (!value["AppLogoDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogoDetail.AppLogoDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["AppLogoDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Logo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appLogoDetail.push_back(item);
        }
        m_appLogoDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appLogoDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppLogoDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appLogoDetail.begin(); itr != m_appLogoDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Logo> LogoDetail::GetAppLogoDetail() const
{
    return m_appLogoDetail;
}

void LogoDetail::SetAppLogoDetail(const vector<Logo>& _appLogoDetail)
{
    m_appLogoDetail = _appLogoDetail;
    m_appLogoDetailHasBeenSet = true;
}

bool LogoDetail::AppLogoDetailHasBeenSet() const
{
    return m_appLogoDetailHasBeenSet;
}

