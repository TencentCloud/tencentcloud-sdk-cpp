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

#include <tencentcloud/csip/v20221121/model/DescribeUserCSPMInfoListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeUserCSPMInfoListResponse::DescribeUserCSPMInfoListResponse() :
    m_listHasBeenSet(false),
    m_selectedCSPMNumHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserCSPMInfoListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("List") && !rsp["List"].IsNull())
    {
        if (!rsp["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `List` is not array type"));

        const rapidjson::Value &tmpValue = rsp["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserCSPMInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }

    if (rsp.HasMember("SelectedCSPMNum") && !rsp["SelectedCSPMNum"].IsNull())
    {
        if (!rsp["SelectedCSPMNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedCSPMNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_selectedCSPMNum = rsp["SelectedCSPMNum"].GetInt64();
        m_selectedCSPMNumHasBeenSet = true;
    }

    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserCSPMInfoListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_selectedCSPMNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedCSPMNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectedCSPMNum, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
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


vector<UserCSPMInfo> DescribeUserCSPMInfoListResponse::GetList() const
{
    return m_list;
}

bool DescribeUserCSPMInfoListResponse::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

int64_t DescribeUserCSPMInfoListResponse::GetSelectedCSPMNum() const
{
    return m_selectedCSPMNum;
}

bool DescribeUserCSPMInfoListResponse::SelectedCSPMNumHasBeenSet() const
{
    return m_selectedCSPMNumHasBeenSet;
}

int64_t DescribeUserCSPMInfoListResponse::GetCount() const
{
    return m_count;
}

bool DescribeUserCSPMInfoListResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}


