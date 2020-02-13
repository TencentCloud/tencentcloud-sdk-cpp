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

#include <tencentcloud/cat/v20180409/model/GetRealAvailRatioResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

GetRealAvailRatioResponse::GetRealAvailRatioResponse() :
    m_avgAvailRatioHasBeenSet(false),
    m_lowestAvailRatioHasBeenSet(false),
    m_lowestProvinceHasBeenSet(false),
    m_lowestIspHasBeenSet(false),
    m_provinceDataHasBeenSet(false),
    m_avgTimeHasBeenSet(false),
    m_avgAvailRatio2HasBeenSet(false),
    m_avgTime2HasBeenSet(false),
    m_lowestAvailRatio2HasBeenSet(false),
    m_lowestProvince2HasBeenSet(false),
    m_lowestIsp2HasBeenSet(false),
    m_provinceData2HasBeenSet(false)
{
}

CoreInternalOutcome GetRealAvailRatioResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AvgAvailRatio") && !rsp["AvgAvailRatio"].IsNull())
    {
        if (!rsp["AvgAvailRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AvgAvailRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgAvailRatio = rsp["AvgAvailRatio"].GetDouble();
        m_avgAvailRatioHasBeenSet = true;
    }

    if (rsp.HasMember("LowestAvailRatio") && !rsp["LowestAvailRatio"].IsNull())
    {
        if (!rsp["LowestAvailRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LowestAvailRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowestAvailRatio = rsp["LowestAvailRatio"].GetDouble();
        m_lowestAvailRatioHasBeenSet = true;
    }

    if (rsp.HasMember("LowestProvince") && !rsp["LowestProvince"].IsNull())
    {
        if (!rsp["LowestProvince"].IsString())
        {
            return CoreInternalOutcome(Error("response `LowestProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lowestProvince = string(rsp["LowestProvince"].GetString());
        m_lowestProvinceHasBeenSet = true;
    }

    if (rsp.HasMember("LowestIsp") && !rsp["LowestIsp"].IsNull())
    {
        if (!rsp["LowestIsp"].IsString())
        {
            return CoreInternalOutcome(Error("response `LowestIsp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lowestIsp = string(rsp["LowestIsp"].GetString());
        m_lowestIspHasBeenSet = true;
    }

    if (rsp.HasMember("ProvinceData") && !rsp["ProvinceData"].IsNull())
    {
        if (!rsp["ProvinceData"].IsArray())
            return CoreInternalOutcome(Error("response `ProvinceData` is not array type"));

        const Value &tmpValue = rsp["ProvinceData"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProvinceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_provinceData.push_back(item);
        }
        m_provinceDataHasBeenSet = true;
    }

    if (rsp.HasMember("AvgTime") && !rsp["AvgTime"].IsNull())
    {
        if (!rsp["AvgTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AvgTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgTime = rsp["AvgTime"].GetDouble();
        m_avgTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AvgAvailRatio2") && !rsp["AvgAvailRatio2"].IsNull())
    {
        if (!rsp["AvgAvailRatio2"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AvgAvailRatio2` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgAvailRatio2 = rsp["AvgAvailRatio2"].GetDouble();
        m_avgAvailRatio2HasBeenSet = true;
    }

    if (rsp.HasMember("AvgTime2") && !rsp["AvgTime2"].IsNull())
    {
        if (!rsp["AvgTime2"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `AvgTime2` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgTime2 = rsp["AvgTime2"].GetDouble();
        m_avgTime2HasBeenSet = true;
    }

    if (rsp.HasMember("LowestAvailRatio2") && !rsp["LowestAvailRatio2"].IsNull())
    {
        if (!rsp["LowestAvailRatio2"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `LowestAvailRatio2` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lowestAvailRatio2 = rsp["LowestAvailRatio2"].GetDouble();
        m_lowestAvailRatio2HasBeenSet = true;
    }

    if (rsp.HasMember("LowestProvince2") && !rsp["LowestProvince2"].IsNull())
    {
        if (!rsp["LowestProvince2"].IsString())
        {
            return CoreInternalOutcome(Error("response `LowestProvince2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lowestProvince2 = string(rsp["LowestProvince2"].GetString());
        m_lowestProvince2HasBeenSet = true;
    }

    if (rsp.HasMember("LowestIsp2") && !rsp["LowestIsp2"].IsNull())
    {
        if (!rsp["LowestIsp2"].IsString())
        {
            return CoreInternalOutcome(Error("response `LowestIsp2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lowestIsp2 = string(rsp["LowestIsp2"].GetString());
        m_lowestIsp2HasBeenSet = true;
    }

    if (rsp.HasMember("ProvinceData2") && !rsp["ProvinceData2"].IsNull())
    {
        if (!rsp["ProvinceData2"].IsArray())
            return CoreInternalOutcome(Error("response `ProvinceData2` is not array type"));

        const Value &tmpValue = rsp["ProvinceData2"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProvinceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_provinceData2.push_back(item);
        }
        m_provinceData2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


double GetRealAvailRatioResponse::GetAvgAvailRatio() const
{
    return m_avgAvailRatio;
}

bool GetRealAvailRatioResponse::AvgAvailRatioHasBeenSet() const
{
    return m_avgAvailRatioHasBeenSet;
}

double GetRealAvailRatioResponse::GetLowestAvailRatio() const
{
    return m_lowestAvailRatio;
}

bool GetRealAvailRatioResponse::LowestAvailRatioHasBeenSet() const
{
    return m_lowestAvailRatioHasBeenSet;
}

string GetRealAvailRatioResponse::GetLowestProvince() const
{
    return m_lowestProvince;
}

bool GetRealAvailRatioResponse::LowestProvinceHasBeenSet() const
{
    return m_lowestProvinceHasBeenSet;
}

string GetRealAvailRatioResponse::GetLowestIsp() const
{
    return m_lowestIsp;
}

bool GetRealAvailRatioResponse::LowestIspHasBeenSet() const
{
    return m_lowestIspHasBeenSet;
}

vector<ProvinceDetail> GetRealAvailRatioResponse::GetProvinceData() const
{
    return m_provinceData;
}

bool GetRealAvailRatioResponse::ProvinceDataHasBeenSet() const
{
    return m_provinceDataHasBeenSet;
}

double GetRealAvailRatioResponse::GetAvgTime() const
{
    return m_avgTime;
}

bool GetRealAvailRatioResponse::AvgTimeHasBeenSet() const
{
    return m_avgTimeHasBeenSet;
}

double GetRealAvailRatioResponse::GetAvgAvailRatio2() const
{
    return m_avgAvailRatio2;
}

bool GetRealAvailRatioResponse::AvgAvailRatio2HasBeenSet() const
{
    return m_avgAvailRatio2HasBeenSet;
}

double GetRealAvailRatioResponse::GetAvgTime2() const
{
    return m_avgTime2;
}

bool GetRealAvailRatioResponse::AvgTime2HasBeenSet() const
{
    return m_avgTime2HasBeenSet;
}

double GetRealAvailRatioResponse::GetLowestAvailRatio2() const
{
    return m_lowestAvailRatio2;
}

bool GetRealAvailRatioResponse::LowestAvailRatio2HasBeenSet() const
{
    return m_lowestAvailRatio2HasBeenSet;
}

string GetRealAvailRatioResponse::GetLowestProvince2() const
{
    return m_lowestProvince2;
}

bool GetRealAvailRatioResponse::LowestProvince2HasBeenSet() const
{
    return m_lowestProvince2HasBeenSet;
}

string GetRealAvailRatioResponse::GetLowestIsp2() const
{
    return m_lowestIsp2;
}

bool GetRealAvailRatioResponse::LowestIsp2HasBeenSet() const
{
    return m_lowestIsp2HasBeenSet;
}

vector<ProvinceDetail> GetRealAvailRatioResponse::GetProvinceData2() const
{
    return m_provinceData2;
}

bool GetRealAvailRatioResponse::ProvinceData2HasBeenSet() const
{
    return m_provinceData2HasBeenSet;
}


