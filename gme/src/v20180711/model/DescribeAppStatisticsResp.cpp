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

#include <tencentcloud/gme/v20180711/model/DescribeAppStatisticsResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeAppStatisticsResp::DescribeAppStatisticsResp() :
    m_appStatisticsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAppStatisticsResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppStatistics") && !value["AppStatistics"].IsNull())
    {
        if (!value["AppStatistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAppStatisticsResp.AppStatistics` is not array type"));

        const rapidjson::Value &tmpValue = value["AppStatistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppStatisticsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appStatistics.push_back(item);
        }
        m_appStatisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAppStatisticsResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppStatistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appStatistics.begin(); itr != m_appStatistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AppStatisticsItem> DescribeAppStatisticsResp::GetAppStatistics() const
{
    return m_appStatistics;
}

void DescribeAppStatisticsResp::SetAppStatistics(const vector<AppStatisticsItem>& _appStatistics)
{
    m_appStatistics = _appStatistics;
    m_appStatisticsHasBeenSet = true;
}

bool DescribeAppStatisticsResp::AppStatisticsHasBeenSet() const
{
    return m_appStatisticsHasBeenSet;
}

