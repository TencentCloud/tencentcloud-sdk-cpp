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

#include <tencentcloud/rce/v20201103/model/InputDescribeNameListFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputDescribeNameListFront::InputDescribeNameListFront() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_listTypeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome InputDescribeNameListFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("ListType") && !value["ListType"].IsNull())
    {
        if (!value["ListType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.ListType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_listType = value["ListType"].GetInt64();
        m_listTypeHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.DataType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetInt64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("KeyWord") && !value["KeyWord"].IsNull())
    {
        if (!value["KeyWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.KeyWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWord = string(value["KeyWord"].GetString());
        m_keyWordHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputDescribeNameListFront.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDescribeNameListFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_listTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listType, allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataType, allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t InputDescribeNameListFront::GetPageNumber() const
{
    return m_pageNumber;
}

void InputDescribeNameListFront::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool InputDescribeNameListFront::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t InputDescribeNameListFront::GetPageSize() const
{
    return m_pageSize;
}

void InputDescribeNameListFront::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool InputDescribeNameListFront::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t InputDescribeNameListFront::GetListType() const
{
    return m_listType;
}

void InputDescribeNameListFront::SetListType(const int64_t& _listType)
{
    m_listType = _listType;
    m_listTypeHasBeenSet = true;
}

bool InputDescribeNameListFront::ListTypeHasBeenSet() const
{
    return m_listTypeHasBeenSet;
}

int64_t InputDescribeNameListFront::GetDataType() const
{
    return m_dataType;
}

void InputDescribeNameListFront::SetDataType(const int64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool InputDescribeNameListFront::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string InputDescribeNameListFront::GetKeyWord() const
{
    return m_keyWord;
}

void InputDescribeNameListFront::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool InputDescribeNameListFront::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

int64_t InputDescribeNameListFront::GetStatus() const
{
    return m_status;
}

void InputDescribeNameListFront::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InputDescribeNameListFront::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

