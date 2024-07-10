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

#include <tencentcloud/tsf/v20180326/model/ModifyProgramRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ModifyProgramRequest::ModifyProgramRequest() :
    m_programIdHasBeenSet(false),
    m_programNameHasBeenSet(false),
    m_programDescHasBeenSet(false),
    m_programItemListHasBeenSet(false),
    m_emptyProgramItemListHasBeenSet(false)
{
}

string ModifyProgramRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_programIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programId.c_str(), allocator).Move(), allocator);
    }

    if (m_programNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programName.c_str(), allocator).Move(), allocator);
    }

    if (m_programDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_programDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_programItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgramItemList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_programItemList.begin(); itr != m_programItemList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_emptyProgramItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyProgramItemList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_emptyProgramItemList, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProgramRequest::GetProgramId() const
{
    return m_programId;
}

void ModifyProgramRequest::SetProgramId(const string& _programId)
{
    m_programId = _programId;
    m_programIdHasBeenSet = true;
}

bool ModifyProgramRequest::ProgramIdHasBeenSet() const
{
    return m_programIdHasBeenSet;
}

string ModifyProgramRequest::GetProgramName() const
{
    return m_programName;
}

void ModifyProgramRequest::SetProgramName(const string& _programName)
{
    m_programName = _programName;
    m_programNameHasBeenSet = true;
}

bool ModifyProgramRequest::ProgramNameHasBeenSet() const
{
    return m_programNameHasBeenSet;
}

string ModifyProgramRequest::GetProgramDesc() const
{
    return m_programDesc;
}

void ModifyProgramRequest::SetProgramDesc(const string& _programDesc)
{
    m_programDesc = _programDesc;
    m_programDescHasBeenSet = true;
}

bool ModifyProgramRequest::ProgramDescHasBeenSet() const
{
    return m_programDescHasBeenSet;
}

vector<ProgramItem> ModifyProgramRequest::GetProgramItemList() const
{
    return m_programItemList;
}

void ModifyProgramRequest::SetProgramItemList(const vector<ProgramItem>& _programItemList)
{
    m_programItemList = _programItemList;
    m_programItemListHasBeenSet = true;
}

bool ModifyProgramRequest::ProgramItemListHasBeenSet() const
{
    return m_programItemListHasBeenSet;
}

bool ModifyProgramRequest::GetEmptyProgramItemList() const
{
    return m_emptyProgramItemList;
}

void ModifyProgramRequest::SetEmptyProgramItemList(const bool& _emptyProgramItemList)
{
    m_emptyProgramItemList = _emptyProgramItemList;
    m_emptyProgramItemListHasBeenSet = true;
}

bool ModifyProgramRequest::EmptyProgramItemListHasBeenSet() const
{
    return m_emptyProgramItemListHasBeenSet;
}


