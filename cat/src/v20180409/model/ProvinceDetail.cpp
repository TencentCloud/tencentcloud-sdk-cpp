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

#include <tencentcloud/cat/v20180409/model/ProvinceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

ProvinceDetail::ProvinceDetail() :
    m_avgAvailRatioHasBeenSet(false),
    m_provinceNameHasBeenSet(false),
    m_mapkeyHasBeenSet(false),
    m_timeStampHasBeenSet(false),
    m_ispDetailHasBeenSet(false),
    m_avgTimeHasBeenSet(false),
    m_provinceHasBeenSet(false)
{
}

CoreInternalOutcome ProvinceDetail::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AvgAvailRatio") && !value["AvgAvailRatio"].IsNull())
    {
        if (!value["AvgAvailRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.AvgAvailRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgAvailRatio = value["AvgAvailRatio"].GetDouble();
        m_avgAvailRatioHasBeenSet = true;
    }

    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }

    if (value.HasMember("Mapkey") && !value["Mapkey"].IsNull())
    {
        if (!value["Mapkey"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.Mapkey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mapkey = string(value["Mapkey"].GetString());
        m_mapkeyHasBeenSet = true;
    }

    if (value.HasMember("TimeStamp") && !value["TimeStamp"].IsNull())
    {
        if (!value["TimeStamp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.TimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeStamp = string(value["TimeStamp"].GetString());
        m_timeStampHasBeenSet = true;
    }

    if (value.HasMember("IspDetail") && !value["IspDetail"].IsNull())
    {
        if (!value["IspDetail"].IsArray())
            return CoreInternalOutcome(Error("response `ProvinceDetail.IspDetail` is not array type"));

        const Value &tmpValue = value["IspDetail"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IspDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ispDetail.push_back(item);
        }
        m_ispDetailHasBeenSet = true;
    }

    if (value.HasMember("AvgTime") && !value["AvgTime"].IsNull())
    {
        if (!value["AvgTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.AvgTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgTime = value["AvgTime"].GetDouble();
        m_avgTimeHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProvinceDetail.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProvinceDetail::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_avgAvailRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AvgAvailRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgAvailRatio, allocator);
    }

    if (m_provinceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

    if (m_mapkeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mapkey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mapkey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_ispDetailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IspDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ispDetail.begin(); itr != m_ispDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_avgTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AvgTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgTime, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_province.c_str(), allocator).Move(), allocator);
    }

}


double ProvinceDetail::GetAvgAvailRatio() const
{
    return m_avgAvailRatio;
}

void ProvinceDetail::SetAvgAvailRatio(const double& _avgAvailRatio)
{
    m_avgAvailRatio = _avgAvailRatio;
    m_avgAvailRatioHasBeenSet = true;
}

bool ProvinceDetail::AvgAvailRatioHasBeenSet() const
{
    return m_avgAvailRatioHasBeenSet;
}

string ProvinceDetail::GetProvinceName() const
{
    return m_provinceName;
}

void ProvinceDetail::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool ProvinceDetail::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

string ProvinceDetail::GetMapkey() const
{
    return m_mapkey;
}

void ProvinceDetail::SetMapkey(const string& _mapkey)
{
    m_mapkey = _mapkey;
    m_mapkeyHasBeenSet = true;
}

bool ProvinceDetail::MapkeyHasBeenSet() const
{
    return m_mapkeyHasBeenSet;
}

string ProvinceDetail::GetTimeStamp() const
{
    return m_timeStamp;
}

void ProvinceDetail::SetTimeStamp(const string& _timeStamp)
{
    m_timeStamp = _timeStamp;
    m_timeStampHasBeenSet = true;
}

bool ProvinceDetail::TimeStampHasBeenSet() const
{
    return m_timeStampHasBeenSet;
}

vector<IspDetail> ProvinceDetail::GetIspDetail() const
{
    return m_ispDetail;
}

void ProvinceDetail::SetIspDetail(const vector<IspDetail>& _ispDetail)
{
    m_ispDetail = _ispDetail;
    m_ispDetailHasBeenSet = true;
}

bool ProvinceDetail::IspDetailHasBeenSet() const
{
    return m_ispDetailHasBeenSet;
}

double ProvinceDetail::GetAvgTime() const
{
    return m_avgTime;
}

void ProvinceDetail::SetAvgTime(const double& _avgTime)
{
    m_avgTime = _avgTime;
    m_avgTimeHasBeenSet = true;
}

bool ProvinceDetail::AvgTimeHasBeenSet() const
{
    return m_avgTimeHasBeenSet;
}

string ProvinceDetail::GetProvince() const
{
    return m_province;
}

void ProvinceDetail::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ProvinceDetail::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

