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

#include <tencentcloud/cfw/v20190904/model/DescribeNatFwSwitchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNatFwSwitchResponse::DescribeNatFwSwitchResponse() :
    m_totalHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_vpcListHasBeenSet(false),
    m_natListHasBeenSet(false),
    m_routeListHasBeenSet(false),
    m_onNumHasBeenSet(false),
    m_offNumHasBeenSet(false),
    m_failDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNatFwSwitchResponse::Deserialize(const string &payload)
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
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NatSwitchListData item;
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

    if (rsp.HasMember("VpcList") && !rsp["VpcList"].IsNull())
    {
        if (!rsp["VpcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonIdName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcList.push_back(item);
        }
        m_vpcListHasBeenSet = true;
    }

    if (rsp.HasMember("NatList") && !rsp["NatList"].IsNull())
    {
        if (!rsp["NatList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NatList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NatList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonIdName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_natList.push_back(item);
        }
        m_natListHasBeenSet = true;
    }

    if (rsp.HasMember("RouteList") && !rsp["RouteList"].IsNull())
    {
        if (!rsp["RouteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RouteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonIdName item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeList.push_back(item);
        }
        m_routeListHasBeenSet = true;
    }

    if (rsp.HasMember("OnNum") && !rsp["OnNum"].IsNull())
    {
        if (!rsp["OnNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OnNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onNum = rsp["OnNum"].GetInt64();
        m_onNumHasBeenSet = true;
    }

    if (rsp.HasMember("OffNum") && !rsp["OffNum"].IsNull())
    {
        if (!rsp["OffNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OffNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offNum = rsp["OffNum"].GetInt64();
        m_offNumHasBeenSet = true;
    }

    if (rsp.HasMember("FailData") && !rsp["FailData"].IsNull())
    {
        if (!rsp["FailData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonIdNameStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failData.push_back(item);
        }
        m_failDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNatFwSwitchResponse::ToJsonString() const
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

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_natListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_natList.begin(); itr != m_natList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_routeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeList.begin(); itr != m_routeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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

    if (m_failDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failData.begin(); itr != m_failData.end(); ++itr, ++i)
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


int64_t DescribeNatFwSwitchResponse::GetTotal() const
{
    return m_total;
}

bool DescribeNatFwSwitchResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<NatSwitchListData> DescribeNatFwSwitchResponse::GetData() const
{
    return m_data;
}

bool DescribeNatFwSwitchResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

vector<CommonIdName> DescribeNatFwSwitchResponse::GetVpcList() const
{
    return m_vpcList;
}

bool DescribeNatFwSwitchResponse::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

vector<CommonIdName> DescribeNatFwSwitchResponse::GetNatList() const
{
    return m_natList;
}

bool DescribeNatFwSwitchResponse::NatListHasBeenSet() const
{
    return m_natListHasBeenSet;
}

vector<CommonIdName> DescribeNatFwSwitchResponse::GetRouteList() const
{
    return m_routeList;
}

bool DescribeNatFwSwitchResponse::RouteListHasBeenSet() const
{
    return m_routeListHasBeenSet;
}

int64_t DescribeNatFwSwitchResponse::GetOnNum() const
{
    return m_onNum;
}

bool DescribeNatFwSwitchResponse::OnNumHasBeenSet() const
{
    return m_onNumHasBeenSet;
}

int64_t DescribeNatFwSwitchResponse::GetOffNum() const
{
    return m_offNum;
}

bool DescribeNatFwSwitchResponse::OffNumHasBeenSet() const
{
    return m_offNumHasBeenSet;
}

vector<CommonIdNameStatus> DescribeNatFwSwitchResponse::GetFailData() const
{
    return m_failData;
}

bool DescribeNatFwSwitchResponse::FailDataHasBeenSet() const
{
    return m_failDataHasBeenSet;
}


