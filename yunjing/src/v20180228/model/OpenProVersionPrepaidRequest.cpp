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

#include <tencentcloud/yunjing/v20180228/model/OpenProVersionPrepaidRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

OpenProVersionPrepaidRequest::OpenProVersionPrepaidRequest() :
    m_chargePrepaidHasBeenSet(false),
    m_machinesHasBeenSet(false)
{
}

string OpenProVersionPrepaidRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_chargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_machinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machines.begin(); itr != m_machines.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ChargePrepaid OpenProVersionPrepaidRequest::GetChargePrepaid() const
{
    return m_chargePrepaid;
}

void OpenProVersionPrepaidRequest::SetChargePrepaid(const ChargePrepaid& _chargePrepaid)
{
    m_chargePrepaid = _chargePrepaid;
    m_chargePrepaidHasBeenSet = true;
}

bool OpenProVersionPrepaidRequest::ChargePrepaidHasBeenSet() const
{
    return m_chargePrepaidHasBeenSet;
}

vector<ProVersionMachine> OpenProVersionPrepaidRequest::GetMachines() const
{
    return m_machines;
}

void OpenProVersionPrepaidRequest::SetMachines(const vector<ProVersionMachine>& _machines)
{
    m_machines = _machines;
    m_machinesHasBeenSet = true;
}

bool OpenProVersionPrepaidRequest::MachinesHasBeenSet() const
{
    return m_machinesHasBeenSet;
}


