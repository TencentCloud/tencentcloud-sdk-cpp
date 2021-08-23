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

#include <tencentcloud/yunsou/v20191115/model/SearchResultSeg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace std;

SearchResultSeg::SearchResultSeg() :
    m_segStrHasBeenSet(false)
{
}

CoreInternalOutcome SearchResultSeg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegStr") && !value["SegStr"].IsNull())
    {
        if (!value["SegStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResultSeg.SegStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segStr = string(value["SegStr"].GetString());
        m_segStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResultSeg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segStr.c_str(), allocator).Move(), allocator);
    }

}


string SearchResultSeg::GetSegStr() const
{
    return m_segStr;
}

void SearchResultSeg::SetSegStr(const string& _segStr)
{
    m_segStr = _segStr;
    m_segStrHasBeenSet = true;
}

bool SearchResultSeg::SegStrHasBeenSet() const
{
    return m_segStrHasBeenSet;
}

