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

#include <tencentcloud/lowcode/v20210108/model/SearchDocRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

SearchDocRsp::SearchDocRsp() :
    m_docInfosHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome SearchDocRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocInfos") && !value["DocInfos"].IsNull())
    {
        if (!value["DocInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchDocRsp.DocInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DocInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchDocInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_docInfos.push_back(item);
        }
        m_docInfosHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocRsp.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchDocRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_docInfos.begin(); itr != m_docInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


vector<SearchDocInfo> SearchDocRsp::GetDocInfos() const
{
    return m_docInfos;
}

void SearchDocRsp::SetDocInfos(const vector<SearchDocInfo>& _docInfos)
{
    m_docInfos = _docInfos;
    m_docInfosHasBeenSet = true;
}

bool SearchDocRsp::DocInfosHasBeenSet() const
{
    return m_docInfosHasBeenSet;
}

uint64_t SearchDocRsp::GetTotal() const
{
    return m_total;
}

void SearchDocRsp::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SearchDocRsp::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

