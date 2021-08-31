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

#include <tencentcloud/cwp/v20180228/model/DescribeMachineRegionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeMachineRegionsResponse::DescribeMachineRegionsResponse() :
    m_cVMHasBeenSet(false),
    m_bMHasBeenSet(false),
    m_lHHasBeenSet(false),
    m_eCMHasBeenSet(false),
    m_otherHasBeenSet(false),
    m_aLLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachineRegionsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CVM") && !rsp["CVM"].IsNull())
    {
        if (!rsp["CVM"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CVM` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CVM"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cVM.push_back(item);
        }
        m_cVMHasBeenSet = true;
    }

    if (rsp.HasMember("BM") && !rsp["BM"].IsNull())
    {
        if (!rsp["BM"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BM` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BM"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bM.push_back(item);
        }
        m_bMHasBeenSet = true;
    }

    if (rsp.HasMember("LH") && !rsp["LH"].IsNull())
    {
        if (!rsp["LH"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LH` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LH"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lH.push_back(item);
        }
        m_lHHasBeenSet = true;
    }

    if (rsp.HasMember("ECM") && !rsp["ECM"].IsNull())
    {
        if (!rsp["ECM"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ECM` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ECM"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eCM.push_back(item);
        }
        m_eCMHasBeenSet = true;
    }

    if (rsp.HasMember("Other") && !rsp["Other"].IsNull())
    {
        if (!rsp["Other"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Other` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Other"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_other.push_back(item);
        }
        m_otherHasBeenSet = true;
    }

    if (rsp.HasMember("ALL") && !rsp["ALL"].IsNull())
    {
        if (!rsp["ALL"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ALL` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ALL"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aLL.push_back(item);
        }
        m_aLLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMachineRegionsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cVMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cVM.begin(); itr != m_cVM.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bM.begin(); itr != m_bM.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lH.begin(); itr != m_lH.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eCMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eCM.begin(); itr != m_eCM.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_otherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Other";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_other.begin(); itr != m_other.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aLLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ALL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aLL.begin(); itr != m_aLL.end(); ++itr, ++i)
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


vector<RegionInfo> DescribeMachineRegionsResponse::GetCVM() const
{
    return m_cVM;
}

bool DescribeMachineRegionsResponse::CVMHasBeenSet() const
{
    return m_cVMHasBeenSet;
}

vector<RegionInfo> DescribeMachineRegionsResponse::GetBM() const
{
    return m_bM;
}

bool DescribeMachineRegionsResponse::BMHasBeenSet() const
{
    return m_bMHasBeenSet;
}

vector<RegionInfo> DescribeMachineRegionsResponse::GetLH() const
{
    return m_lH;
}

bool DescribeMachineRegionsResponse::LHHasBeenSet() const
{
    return m_lHHasBeenSet;
}

vector<RegionInfo> DescribeMachineRegionsResponse::GetECM() const
{
    return m_eCM;
}

bool DescribeMachineRegionsResponse::ECMHasBeenSet() const
{
    return m_eCMHasBeenSet;
}

vector<RegionInfo> DescribeMachineRegionsResponse::GetOther() const
{
    return m_other;
}

bool DescribeMachineRegionsResponse::OtherHasBeenSet() const
{
    return m_otherHasBeenSet;
}

vector<RegionInfo> DescribeMachineRegionsResponse::GetALL() const
{
    return m_aLL;
}

bool DescribeMachineRegionsResponse::ALLHasBeenSet() const
{
    return m_aLLHasBeenSet;
}


