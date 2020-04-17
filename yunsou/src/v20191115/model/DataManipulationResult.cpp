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

#include <tencentcloud/yunsou/v20191115/model/DataManipulationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace rapidjson;
using namespace std;

DataManipulationResult::DataManipulationResult() :
    m_appIdHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_totalResultHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorResultHasBeenSet(false)
{
}

CoreInternalOutcome DataManipulationResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DataManipulationResult.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Seq") && !value["Seq"].IsNull())
    {
        if (!value["Seq"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DataManipulationResult.Seq` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seq = value["Seq"].GetInt64();
        m_seqHasBeenSet = true;
    }

    if (value.HasMember("TotalResult") && !value["TotalResult"].IsNull())
    {
        if (!value["TotalResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataManipulationResult.TotalResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalResult = string(value["TotalResult"].GetString());
        m_totalResultHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsArray())
            return CoreInternalOutcome(Error("response `DataManipulationResult.Result` is not array type"));

        const Value &tmpValue = value["Result"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataManipulationResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_result.push_back(item);
        }
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrorResult") && !value["ErrorResult"].IsNull())
    {
        if (!value["ErrorResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `DataManipulationResult.ErrorResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorResult = string(value["ErrorResult"].GetString());
        m_errorResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataManipulationResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_seqHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seq, allocator);
    }

    if (m_totalResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_totalResult.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_result.begin(); itr != m_result.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorResultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ErrorResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_errorResult.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DataManipulationResult::GetAppId() const
{
    return m_appId;
}

void DataManipulationResult::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DataManipulationResult::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DataManipulationResult::GetSeq() const
{
    return m_seq;
}

void DataManipulationResult::SetSeq(const int64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool DataManipulationResult::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

string DataManipulationResult::GetTotalResult() const
{
    return m_totalResult;
}

void DataManipulationResult::SetTotalResult(const string& _totalResult)
{
    m_totalResult = _totalResult;
    m_totalResultHasBeenSet = true;
}

bool DataManipulationResult::TotalResultHasBeenSet() const
{
    return m_totalResultHasBeenSet;
}

vector<DataManipulationResultItem> DataManipulationResult::GetResult() const
{
    return m_result;
}

void DataManipulationResult::SetResult(const vector<DataManipulationResultItem>& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DataManipulationResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DataManipulationResult::GetErrorResult() const
{
    return m_errorResult;
}

void DataManipulationResult::SetErrorResult(const string& _errorResult)
{
    m_errorResult = _errorResult;
    m_errorResultHasBeenSet = true;
}

bool DataManipulationResult::ErrorResultHasBeenSet() const
{
    return m_errorResultHasBeenSet;
}

