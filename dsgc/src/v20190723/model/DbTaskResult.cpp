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

#include <tencentcloud/dsgc/v20190723/model/DbTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DbTaskResult::DbTaskResult() :
    m_resultHasBeenSet(false),
    m_resultDescriptionHasBeenSet(false),
    m_errDescriptionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_dbNameHasBeenSet(false)
{
}

CoreInternalOutcome DbTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbTaskResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ResultDescription") && !value["ResultDescription"].IsNull())
    {
        if (!value["ResultDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbTaskResult.ResultDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDescription = string(value["ResultDescription"].GetString());
        m_resultDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ErrDescription") && !value["ErrDescription"].IsNull())
    {
        if (!value["ErrDescription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DbTaskResult.ErrDescription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errDescription.Deserialize(value["ErrDescription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbTaskResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbTaskResult.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DbTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_resultDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_errDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errDescription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

}


string DbTaskResult::GetResult() const
{
    return m_result;
}

void DbTaskResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DbTaskResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DbTaskResult::GetResultDescription() const
{
    return m_resultDescription;
}

void DbTaskResult::SetResultDescription(const string& _resultDescription)
{
    m_resultDescription = _resultDescription;
    m_resultDescriptionHasBeenSet = true;
}

bool DbTaskResult::ResultDescriptionHasBeenSet() const
{
    return m_resultDescriptionHasBeenSet;
}

ErrDescription DbTaskResult::GetErrDescription() const
{
    return m_errDescription;
}

void DbTaskResult::SetErrDescription(const ErrDescription& _errDescription)
{
    m_errDescription = _errDescription;
    m_errDescriptionHasBeenSet = true;
}

bool DbTaskResult::ErrDescriptionHasBeenSet() const
{
    return m_errDescriptionHasBeenSet;
}

string DbTaskResult::GetResourceId() const
{
    return m_resourceId;
}

void DbTaskResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DbTaskResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DbTaskResult::GetDbName() const
{
    return m_dbName;
}

void DbTaskResult::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DbTaskResult::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

