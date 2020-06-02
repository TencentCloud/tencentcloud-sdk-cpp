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

#include <tencentcloud/ame/v20190916/model/DescribeItemByIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

DescribeItemByIdRequest::DescribeItemByIdRequest() :
    m_itemIDsHasBeenSet(false)
{
}

string DescribeItemByIdRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_itemIDsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_itemIDs.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeItemByIdRequest::GetItemIDs() const
{
    return m_itemIDs;
}

void DescribeItemByIdRequest::SetItemIDs(const string& _itemIDs)
{
    m_itemIDs = _itemIDs;
    m_itemIDsHasBeenSet = true;
}

bool DescribeItemByIdRequest::ItemIDsHasBeenSet() const
{
    return m_itemIDsHasBeenSet;
}


