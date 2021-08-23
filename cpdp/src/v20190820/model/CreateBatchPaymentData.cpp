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

#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateBatchPaymentData::CreateBatchPaymentData() :
    m_batchIdHasBeenSet(false),
    m_batchInfoListHasBeenSet(false)
{
}

CoreInternalOutcome CreateBatchPaymentData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentData.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("BatchInfoList") && !value["BatchInfoList"].IsNull())
    {
        if (!value["BatchInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentData.BatchInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["BatchInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateBatchPaymentBatchData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_batchInfoList.push_back(item);
        }
        m_batchInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateBatchPaymentData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_batchInfoList.begin(); itr != m_batchInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CreateBatchPaymentData::GetBatchId() const
{
    return m_batchId;
}

void CreateBatchPaymentData::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool CreateBatchPaymentData::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

vector<CreateBatchPaymentBatchData> CreateBatchPaymentData::GetBatchInfoList() const
{
    return m_batchInfoList;
}

void CreateBatchPaymentData::SetBatchInfoList(const vector<CreateBatchPaymentBatchData>& _batchInfoList)
{
    m_batchInfoList = _batchInfoList;
    m_batchInfoListHasBeenSet = true;
}

bool CreateBatchPaymentData::BatchInfoListHasBeenSet() const
{
    return m_batchInfoListHasBeenSet;
}

