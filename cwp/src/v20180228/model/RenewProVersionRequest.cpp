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

#include <tencentcloud/cwp/v20180228/model/RenewProVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace rapidjson;
using namespace std;

RenewProVersionRequest::RenewProVersionRequest() :
    m_chargePrepaidHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

string RenewProVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_chargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_chargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_quuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_quuid.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ChargePrepaid RenewProVersionRequest::GetChargePrepaid() const
{
    return m_chargePrepaid;
}

void RenewProVersionRequest::SetChargePrepaid(const ChargePrepaid& _chargePrepaid)
{
    m_chargePrepaid = _chargePrepaid;
    m_chargePrepaidHasBeenSet = true;
}

bool RenewProVersionRequest::ChargePrepaidHasBeenSet() const
{
    return m_chargePrepaidHasBeenSet;
}

string RenewProVersionRequest::GetQuuid() const
{
    return m_quuid;
}

void RenewProVersionRequest::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RenewProVersionRequest::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}


