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

#include <tencentcloud/sqlserver/v20180328/model/InstanceDBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

InstanceDBDetail::InstanceDBDetail() :
    m_instanceIdHasBeenSet(false),
    m_dBDetailsHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDBDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DBDetails") && !value["DBDetails"].IsNull())
    {
        if (!value["DBDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDBDetail.DBDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["DBDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBDetails.push_back(item);
        }
        m_dBDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBDetails.begin(); itr != m_dBDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InstanceDBDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDBDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDBDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DBDetail> InstanceDBDetail::GetDBDetails() const
{
    return m_dBDetails;
}

void InstanceDBDetail::SetDBDetails(const vector<DBDetail>& _dBDetails)
{
    m_dBDetails = _dBDetails;
    m_dBDetailsHasBeenSet = true;
}

bool InstanceDBDetail::DBDetailsHasBeenSet() const
{
    return m_dBDetailsHasBeenSet;
}

