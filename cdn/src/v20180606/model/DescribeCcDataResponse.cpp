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

#include <tencentcloud/cdn/v20180606/model/DescribeCcDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribeCcDataResponse::DescribeCcDataResponse() :
    m_dataHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_interceptQpsDataHasBeenSet(false),
    m_redirectQpsDataHasBeenSet(false),
    m_observeQpsDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCcDataResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimestampData item;
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

    if (rsp.HasMember("Interval") && !rsp["Interval"].IsNull())
    {
        if (!rsp["Interval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Interval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interval = string(rsp["Interval"].GetString());
        m_intervalHasBeenSet = true;
    }

    if (rsp.HasMember("InterceptQpsData") && !rsp["InterceptQpsData"].IsNull())
    {
        if (!rsp["InterceptQpsData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InterceptQpsData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InterceptQpsData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimestampData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_interceptQpsData.push_back(item);
        }
        m_interceptQpsDataHasBeenSet = true;
    }

    if (rsp.HasMember("RedirectQpsData") && !rsp["RedirectQpsData"].IsNull())
    {
        if (!rsp["RedirectQpsData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RedirectQpsData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RedirectQpsData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimestampData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_redirectQpsData.push_back(item);
        }
        m_redirectQpsDataHasBeenSet = true;
    }

    if (rsp.HasMember("ObserveQpsData") && !rsp["ObserveQpsData"].IsNull())
    {
        if (!rsp["ObserveQpsData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ObserveQpsData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ObserveQpsData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimestampData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_observeQpsData.push_back(item);
        }
        m_observeQpsDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCcDataResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_interceptQpsDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptQpsData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_interceptQpsData.begin(); itr != m_interceptQpsData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_redirectQpsDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectQpsData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_redirectQpsData.begin(); itr != m_redirectQpsData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_observeQpsDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObserveQpsData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_observeQpsData.begin(); itr != m_observeQpsData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<TimestampData> DescribeCcDataResponse::GetData() const
{
    return m_data;
}

bool DescribeCcDataResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string DescribeCcDataResponse::GetInterval() const
{
    return m_interval;
}

bool DescribeCcDataResponse::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<TimestampData> DescribeCcDataResponse::GetInterceptQpsData() const
{
    return m_interceptQpsData;
}

bool DescribeCcDataResponse::InterceptQpsDataHasBeenSet() const
{
    return m_interceptQpsDataHasBeenSet;
}

vector<TimestampData> DescribeCcDataResponse::GetRedirectQpsData() const
{
    return m_redirectQpsData;
}

bool DescribeCcDataResponse::RedirectQpsDataHasBeenSet() const
{
    return m_redirectQpsDataHasBeenSet;
}

vector<TimestampData> DescribeCcDataResponse::GetObserveQpsData() const
{
    return m_observeQpsData;
}

bool DescribeCcDataResponse::ObserveQpsDataHasBeenSet() const
{
    return m_observeQpsDataHasBeenSet;
}

