/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/SiteFailoverParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SiteFailoverParameters::SiteFailoverParameters() :
    m_siteFailoverStatusCodesHasBeenSet(false),
    m_siteFailoverParamsHasBeenSet(false)
{
}

CoreInternalOutcome SiteFailoverParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SiteFailoverStatusCodes") && !value["SiteFailoverStatusCodes"].IsNull())
    {
        if (!value["SiteFailoverStatusCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SiteFailoverParameters.SiteFailoverStatusCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["SiteFailoverStatusCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_siteFailoverStatusCodes.push_back((*itr).GetInt64());
        }
        m_siteFailoverStatusCodesHasBeenSet = true;
    }

    if (value.HasMember("SiteFailoverParams") && !value["SiteFailoverParams"].IsNull())
    {
        if (!value["SiteFailoverParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SiteFailoverParameters.SiteFailoverParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SiteFailoverParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SiteFailover item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_siteFailoverParams.push_back(item);
        }
        m_siteFailoverParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SiteFailoverParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_siteFailoverStatusCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteFailoverStatusCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_siteFailoverStatusCodes.begin(); itr != m_siteFailoverStatusCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_siteFailoverParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteFailoverParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_siteFailoverParams.begin(); itr != m_siteFailoverParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<int64_t> SiteFailoverParameters::GetSiteFailoverStatusCodes() const
{
    return m_siteFailoverStatusCodes;
}

void SiteFailoverParameters::SetSiteFailoverStatusCodes(const vector<int64_t>& _siteFailoverStatusCodes)
{
    m_siteFailoverStatusCodes = _siteFailoverStatusCodes;
    m_siteFailoverStatusCodesHasBeenSet = true;
}

bool SiteFailoverParameters::SiteFailoverStatusCodesHasBeenSet() const
{
    return m_siteFailoverStatusCodesHasBeenSet;
}

vector<SiteFailover> SiteFailoverParameters::GetSiteFailoverParams() const
{
    return m_siteFailoverParams;
}

void SiteFailoverParameters::SetSiteFailoverParams(const vector<SiteFailover>& _siteFailoverParams)
{
    m_siteFailoverParams = _siteFailoverParams;
    m_siteFailoverParamsHasBeenSet = true;
}

bool SiteFailoverParameters::SiteFailoverParamsHasBeenSet() const
{
    return m_siteFailoverParamsHasBeenSet;
}

