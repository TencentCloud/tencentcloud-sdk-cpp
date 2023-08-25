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

#include <tencentcloud/dsgc/v20190723/model/DspaTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaTaskResult::DspaTaskResult() :
    m_resultHasBeenSet(false),
    m_resultDescriptionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false)
{
}

CoreInternalOutcome DspaTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaTaskResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ResultDescription") && !value["ResultDescription"].IsNull())
    {
        if (!value["ResultDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaTaskResult.ResultDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultDescription = string(value["ResultDescription"].GetString());
        m_resultDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaTaskResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaTaskResult.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

}


string DspaTaskResult::GetResult() const
{
    return m_result;
}

void DspaTaskResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DspaTaskResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DspaTaskResult::GetResultDescription() const
{
    return m_resultDescription;
}

void DspaTaskResult::SetResultDescription(const string& _resultDescription)
{
    m_resultDescription = _resultDescription;
    m_resultDescriptionHasBeenSet = true;
}

bool DspaTaskResult::ResultDescriptionHasBeenSet() const
{
    return m_resultDescriptionHasBeenSet;
}

string DspaTaskResult::GetResourceId() const
{
    return m_resourceId;
}

void DspaTaskResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DspaTaskResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DspaTaskResult::GetMetaType() const
{
    return m_metaType;
}

void DspaTaskResult::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool DspaTaskResult::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

