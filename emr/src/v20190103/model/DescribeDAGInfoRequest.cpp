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

#include <tencentcloud/emr/v20190103/model/DescribeDAGInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeDAGInfoRequest::DescribeDAGInfoRequest() :
    m_instanceIDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_iDListHasBeenSet(false)
{
}

string DescribeDAGInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_iDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iDList.begin(); itr != m_iDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDAGInfoRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeDAGInfoRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeDAGInfoRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeDAGInfoRequest::GetType() const
{
    return m_type;
}

void DescribeDAGInfoRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDAGInfoRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeDAGInfoRequest::GetIDList() const
{
    return m_iDList;
}

void DescribeDAGInfoRequest::SetIDList(const vector<string>& _iDList)
{
    m_iDList = _iDList;
    m_iDListHasBeenSet = true;
}

bool DescribeDAGInfoRequest::IDListHasBeenSet() const
{
    return m_iDListHasBeenSet;
}


