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

#include <tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

DescribeCertificateBindResourceTaskDetailResponse::DescribeCertificateBindResourceTaskDetailResponse() :
    m_cLBHasBeenSet(false),
    m_cDNHasBeenSet(false),
    m_wAFHasBeenSet(false),
    m_dDOSHasBeenSet(false),
    m_lIVEHasBeenSet(false),
    m_vODHasBeenSet(false),
    m_tKEHasBeenSet(false),
    m_aPIGATEWAYHasBeenSet(false),
    m_tCBHasBeenSet(false),
    m_tEOHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cacheTimeHasBeenSet(false),
    m_tSEHasBeenSet(false),
    m_cOSHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCertificateBindResourceTaskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CLB") && !rsp["CLB"].IsNull())
    {
        if (!rsp["CLB"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CLB` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CLB"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClbInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cLB.push_back(item);
        }
        m_cLBHasBeenSet = true;
    }

    if (rsp.HasMember("CDN") && !rsp["CDN"].IsNull())
    {
        if (!rsp["CDN"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CDN` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CDN"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cDN.push_back(item);
        }
        m_cDNHasBeenSet = true;
    }

    if (rsp.HasMember("WAF") && !rsp["WAF"].IsNull())
    {
        if (!rsp["WAF"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WAF` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WAF"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WafInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_wAF.push_back(item);
        }
        m_wAFHasBeenSet = true;
    }

    if (rsp.HasMember("DDOS") && !rsp["DDOS"].IsNull())
    {
        if (!rsp["DDOS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DDOS` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DDOS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DdosInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dDOS.push_back(item);
        }
        m_dDOSHasBeenSet = true;
    }

    if (rsp.HasMember("LIVE") && !rsp["LIVE"].IsNull())
    {
        if (!rsp["LIVE"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LIVE` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LIVE"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lIVE.push_back(item);
        }
        m_lIVEHasBeenSet = true;
    }

    if (rsp.HasMember("VOD") && !rsp["VOD"].IsNull())
    {
        if (!rsp["VOD"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VOD` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VOD"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VODInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vOD.push_back(item);
        }
        m_vODHasBeenSet = true;
    }

    if (rsp.HasMember("TKE") && !rsp["TKE"].IsNull())
    {
        if (!rsp["TKE"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TKE` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TKE"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tKE.push_back(item);
        }
        m_tKEHasBeenSet = true;
    }

    if (rsp.HasMember("APIGATEWAY") && !rsp["APIGATEWAY"].IsNull())
    {
        if (!rsp["APIGATEWAY"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIGATEWAY` is not array type"));

        const rapidjson::Value &tmpValue = rsp["APIGATEWAY"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiGatewayInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aPIGATEWAY.push_back(item);
        }
        m_aPIGATEWAYHasBeenSet = true;
    }

    if (rsp.HasMember("TCB") && !rsp["TCB"].IsNull())
    {
        if (!rsp["TCB"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TCB` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TCB"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TCBInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tCB.push_back(item);
        }
        m_tCBHasBeenSet = true;
    }

    if (rsp.HasMember("TEO") && !rsp["TEO"].IsNull())
    {
        if (!rsp["TEO"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TEO` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TEO"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TeoInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tEO.push_back(item);
        }
        m_tEOHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CacheTime") && !rsp["CacheTime"].IsNull())
    {
        if (!rsp["CacheTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheTime = string(rsp["CacheTime"].GetString());
        m_cacheTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TSE") && !rsp["TSE"].IsNull())
    {
        if (!rsp["TSE"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TSE` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TSE"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TSEInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tSE.push_back(item);
        }
        m_tSEHasBeenSet = true;
    }

    if (rsp.HasMember("COS") && !rsp["COS"].IsNull())
    {
        if (!rsp["COS"].IsArray())
            return CoreInternalOutcome(Core::Error("response `COS` is not array type"));

        const rapidjson::Value &tmpValue = rsp["COS"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            COSInstanceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cOS.push_back(item);
        }
        m_cOSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCertificateBindResourceTaskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cLB.begin(); itr != m_cLB.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cDNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cDN.begin(); itr != m_cDN.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_wAFHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WAF";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_wAF.begin(); itr != m_wAF.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dDOSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDOS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dDOS.begin(); itr != m_dDOS.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lIVEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LIVE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lIVE.begin(); itr != m_lIVE.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vODHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VOD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vOD.begin(); itr != m_vOD.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tKEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tKE.begin(); itr != m_tKE.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aPIGATEWAYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIGATEWAY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aPIGATEWAY.begin(); itr != m_aPIGATEWAY.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tCBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tCB.begin(); itr != m_tCB.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tEOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tEO.begin(); itr != m_tEO.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tSEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TSE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tSE.begin(); itr != m_tSE.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cOSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cOS.begin(); itr != m_cOS.end(); ++itr, ++i)
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


vector<ClbInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetCLB() const
{
    return m_cLB;
}

bool DescribeCertificateBindResourceTaskDetailResponse::CLBHasBeenSet() const
{
    return m_cLBHasBeenSet;
}

vector<CdnInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetCDN() const
{
    return m_cDN;
}

bool DescribeCertificateBindResourceTaskDetailResponse::CDNHasBeenSet() const
{
    return m_cDNHasBeenSet;
}

vector<WafInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetWAF() const
{
    return m_wAF;
}

bool DescribeCertificateBindResourceTaskDetailResponse::WAFHasBeenSet() const
{
    return m_wAFHasBeenSet;
}

vector<DdosInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetDDOS() const
{
    return m_dDOS;
}

bool DescribeCertificateBindResourceTaskDetailResponse::DDOSHasBeenSet() const
{
    return m_dDOSHasBeenSet;
}

vector<LiveInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetLIVE() const
{
    return m_lIVE;
}

bool DescribeCertificateBindResourceTaskDetailResponse::LIVEHasBeenSet() const
{
    return m_lIVEHasBeenSet;
}

vector<VODInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetVOD() const
{
    return m_vOD;
}

bool DescribeCertificateBindResourceTaskDetailResponse::VODHasBeenSet() const
{
    return m_vODHasBeenSet;
}

vector<TkeInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetTKE() const
{
    return m_tKE;
}

bool DescribeCertificateBindResourceTaskDetailResponse::TKEHasBeenSet() const
{
    return m_tKEHasBeenSet;
}

vector<ApiGatewayInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetAPIGATEWAY() const
{
    return m_aPIGATEWAY;
}

bool DescribeCertificateBindResourceTaskDetailResponse::APIGATEWAYHasBeenSet() const
{
    return m_aPIGATEWAYHasBeenSet;
}

vector<TCBInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetTCB() const
{
    return m_tCB;
}

bool DescribeCertificateBindResourceTaskDetailResponse::TCBHasBeenSet() const
{
    return m_tCBHasBeenSet;
}

vector<TeoInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetTEO() const
{
    return m_tEO;
}

bool DescribeCertificateBindResourceTaskDetailResponse::TEOHasBeenSet() const
{
    return m_tEOHasBeenSet;
}

uint64_t DescribeCertificateBindResourceTaskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCertificateBindResourceTaskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCertificateBindResourceTaskDetailResponse::GetCacheTime() const
{
    return m_cacheTime;
}

bool DescribeCertificateBindResourceTaskDetailResponse::CacheTimeHasBeenSet() const
{
    return m_cacheTimeHasBeenSet;
}

vector<TSEInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetTSE() const
{
    return m_tSE;
}

bool DescribeCertificateBindResourceTaskDetailResponse::TSEHasBeenSet() const
{
    return m_tSEHasBeenSet;
}

vector<COSInstanceList> DescribeCertificateBindResourceTaskDetailResponse::GetCOS() const
{
    return m_cOS;
}

bool DescribeCertificateBindResourceTaskDetailResponse::COSHasBeenSet() const
{
    return m_cOSHasBeenSet;
}


