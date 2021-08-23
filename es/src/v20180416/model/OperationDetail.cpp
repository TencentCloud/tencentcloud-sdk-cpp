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

#include <tencentcloud/es/v20180416/model/OperationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

OperationDetail::OperationDetail() :
    m_oldInfoHasBeenSet(false),
    m_newInfoHasBeenSet(false)
{
}

CoreInternalOutcome OperationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OldInfo") && !value["OldInfo"].IsNull())
    {
        if (!value["OldInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperationDetail.OldInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["OldInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_oldInfo.push_back(item);
        }
        m_oldInfoHasBeenSet = true;
    }

    if (value.HasMember("NewInfo") && !value["NewInfo"].IsNull())
    {
        if (!value["NewInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperationDetail.NewInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["NewInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_newInfo.push_back(item);
        }
        m_newInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_oldInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_oldInfo.begin(); itr != m_oldInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_newInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_newInfo.begin(); itr != m_newInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<KeyValue> OperationDetail::GetOldInfo() const
{
    return m_oldInfo;
}

void OperationDetail::SetOldInfo(const vector<KeyValue>& _oldInfo)
{
    m_oldInfo = _oldInfo;
    m_oldInfoHasBeenSet = true;
}

bool OperationDetail::OldInfoHasBeenSet() const
{
    return m_oldInfoHasBeenSet;
}

vector<KeyValue> OperationDetail::GetNewInfo() const
{
    return m_newInfo;
}

void OperationDetail::SetNewInfo(const vector<KeyValue>& _newInfo)
{
    m_newInfo = _newInfo;
    m_newInfoHasBeenSet = true;
}

bool OperationDetail::NewInfoHasBeenSet() const
{
    return m_newInfoHasBeenSet;
}

