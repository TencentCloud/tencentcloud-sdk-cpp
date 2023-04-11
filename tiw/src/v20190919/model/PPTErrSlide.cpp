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

#include <tencentcloud/tiw/v20190919/model/PPTErrSlide.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

PPTErrSlide::PPTErrSlide() :
    m_pageHasBeenSet(false),
    m_errsHasBeenSet(false)
{
}

CoreInternalOutcome PPTErrSlide::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PPTErrSlide.Page` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_page = string(value["Page"].GetString());
        m_pageHasBeenSet = true;
    }

    if (value.HasMember("Errs") && !value["Errs"].IsNull())
    {
        if (!value["Errs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PPTErrSlide.Errs` is not array type"));

        const rapidjson::Value &tmpValue = value["Errs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PPTErr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errs.push_back(item);
        }
        m_errsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PPTErrSlide::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_page.c_str(), allocator).Move(), allocator);
    }

    if (m_errsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errs.begin(); itr != m_errs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PPTErrSlide::GetPage() const
{
    return m_page;
}

void PPTErrSlide::SetPage(const string& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool PPTErrSlide::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

vector<PPTErr> PPTErrSlide::GetErrs() const
{
    return m_errs;
}

void PPTErrSlide::SetErrs(const vector<PPTErr>& _errs)
{
    m_errs = _errs;
    m_errsHasBeenSet = true;
}

bool PPTErrSlide::ErrsHasBeenSet() const
{
    return m_errsHasBeenSet;
}

