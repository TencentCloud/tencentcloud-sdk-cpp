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

#include <tencentcloud/clb/v20180317/model/DisassociateCustomizedConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DisassociateCustomizedConfigRequest::DisassociateCustomizedConfigRequest() :
    m_uconfigIdHasBeenSet(false),
    m_bindListHasBeenSet(false)
{
}

string DisassociateCustomizedConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uconfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UconfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uconfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindList.begin(); itr != m_bindList.end(); ++itr, ++i)
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


string DisassociateCustomizedConfigRequest::GetUconfigId() const
{
    return m_uconfigId;
}

void DisassociateCustomizedConfigRequest::SetUconfigId(const string& _uconfigId)
{
    m_uconfigId = _uconfigId;
    m_uconfigIdHasBeenSet = true;
}

bool DisassociateCustomizedConfigRequest::UconfigIdHasBeenSet() const
{
    return m_uconfigIdHasBeenSet;
}

vector<BindItem> DisassociateCustomizedConfigRequest::GetBindList() const
{
    return m_bindList;
}

void DisassociateCustomizedConfigRequest::SetBindList(const vector<BindItem>& _bindList)
{
    m_bindList = _bindList;
    m_bindListHasBeenSet = true;
}

bool DisassociateCustomizedConfigRequest::BindListHasBeenSet() const
{
    return m_bindListHasBeenSet;
}


