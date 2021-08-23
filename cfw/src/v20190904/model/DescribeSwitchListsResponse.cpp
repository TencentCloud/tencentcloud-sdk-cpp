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

#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeSwitchListsResponse::DescribeSwitchListsResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_areaListsHasBeenSet(false),
    m_onNumHasBeenSet(false),
    m_offNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSwitchListsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SwitchListsData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("AreaLists") && !rsp["AreaLists"].IsNull())
    {
        if (!rsp["AreaLists"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AreaLists` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AreaLists"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaLists.push_back((*itr).GetString());
        }
        m_areaListsHasBeenSet = true;
    }

    if (rsp.HasMember("OnNum") && !rsp["OnNum"].IsNull())
    {
        if (!rsp["OnNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OnNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onNum = rsp["OnNum"].GetUint64();
        m_onNumHasBeenSet = true;
    }

    if (rsp.HasMember("OffNum") && !rsp["OffNum"].IsNull())
    {
        if (!rsp["OffNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OffNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offNum = rsp["OffNum"].GetUint64();
        m_offNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSwitchListsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_areaListsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaLists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaLists.begin(); itr != m_areaLists.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onNum, allocator);
    }

    if (m_offNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offNum, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeSwitchListsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeSwitchListsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<SwitchListsData> DescribeSwitchListsResponse::GetData() const
{
    return m_data;
}

bool DescribeSwitchListsResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<string> DescribeSwitchListsResponse::GetAreaLists() const
{
    return m_areaLists;
}

bool DescribeSwitchListsResponse::AreaListsHasBeenSet() const
{
    return m_areaListsHasBeenSet;
}

uint64_t DescribeSwitchListsResponse::GetOnNum() const
{
    return m_onNum;
}

bool DescribeSwitchListsResponse::OnNumHasBeenSet() const
{
    return m_onNumHasBeenSet;
}

uint64_t DescribeSwitchListsResponse::GetOffNum() const
{
    return m_offNum;
}

bool DescribeSwitchListsResponse::OffNumHasBeenSet() const
{
    return m_offNumHasBeenSet;
}


