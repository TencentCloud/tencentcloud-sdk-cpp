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

#include <tencentcloud/yunsou/v20191115/model/DataManipulationResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunsou::V20191115::Model;
using namespace std;

DataManipulationResultItem::DataManipulationResultItem() :
    m_resultHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_errnoHasBeenSet(false)
{
}

CoreInternalOutcome DataManipulationResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataManipulationResultItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataManipulationResultItem.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("Errno") && !value["Errno"].IsNull())
    {
        if (!value["Errno"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataManipulationResultItem.Errno` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errno = value["Errno"].GetInt64();
        m_errnoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataManipulationResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_errnoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errno";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errno, allocator);
    }

}


string DataManipulationResultItem::GetResult() const
{
    return m_result;
}

void DataManipulationResultItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DataManipulationResultItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DataManipulationResultItem::GetDocId() const
{
    return m_docId;
}

void DataManipulationResultItem::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool DataManipulationResultItem::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

int64_t DataManipulationResultItem::GetErrno() const
{
    return m_errno;
}

void DataManipulationResultItem::SetErrno(const int64_t& _errno)
{
    m_errno = _errno;
    m_errnoHasBeenSet = true;
}

bool DataManipulationResultItem::ErrnoHasBeenSet() const
{
    return m_errnoHasBeenSet;
}

