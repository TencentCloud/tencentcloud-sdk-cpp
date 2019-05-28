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

#include <tencentcloud/dts/v20180330/model/SwitchDrToMasterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SwitchDrToMasterRequest::SwitchDrToMasterRequest() :
    m_dstInfoHasBeenSet(false),
    m_databaseTypeHasBeenSet(false)
{
}

string SwitchDrToMasterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dstInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_databaseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_databaseType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


SyncInstanceInfo SwitchDrToMasterRequest::GetDstInfo() const
{
    return m_dstInfo;
}

void SwitchDrToMasterRequest::SetDstInfo(const SyncInstanceInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool SwitchDrToMasterRequest::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string SwitchDrToMasterRequest::GetDatabaseType() const
{
    return m_databaseType;
}

void SwitchDrToMasterRequest::SetDatabaseType(const string& _databaseType)
{
    m_databaseType = _databaseType;
    m_databaseTypeHasBeenSet = true;
}

bool SwitchDrToMasterRequest::DatabaseTypeHasBeenSet() const
{
    return m_databaseTypeHasBeenSet;
}


