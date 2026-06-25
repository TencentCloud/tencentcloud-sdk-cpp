/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/clb/v20180317/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

Job::Job() :
    m_apiNameHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceIds") && !value["ResourceIds"].IsNull())
    {
        if (!value["ResourceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Job.ResourceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceIds.push_back((*itr).GetString());
        }
        m_resourceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Job::GetApiName() const
{
    return m_apiName;
}

void Job::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool Job::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string Job::GetRequestId() const
{
    return m_requestId;
}

void Job::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool Job::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string Job::GetStatus() const
{
    return m_status;
}

void Job::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Job::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Job::GetResourceIds() const
{
    return m_resourceIds;
}

void Job::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool Job::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

