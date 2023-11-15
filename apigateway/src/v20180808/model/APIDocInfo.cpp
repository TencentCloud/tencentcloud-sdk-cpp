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

#include <tencentcloud/apigateway/v20180808/model/APIDocInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

APIDocInfo::APIDocInfo() :
    m_apiDocIdHasBeenSet(false),
    m_apiDocNameHasBeenSet(false),
    m_apiDocStatusHasBeenSet(false),
    m_apiCountHasBeenSet(false),
    m_viewCountHasBeenSet(false),
    m_releaseCountHasBeenSet(false),
    m_apiDocUriHasBeenSet(false),
    m_sharePasswordHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_apiIdsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_apiNamesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome APIDocInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiDocId") && !value["ApiDocId"].IsNull())
    {
        if (!value["ApiDocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiDocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocId = string(value["ApiDocId"].GetString());
        m_apiDocIdHasBeenSet = true;
    }

    if (value.HasMember("ApiDocName") && !value["ApiDocName"].IsNull())
    {
        if (!value["ApiDocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiDocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocName = string(value["ApiDocName"].GetString());
        m_apiDocNameHasBeenSet = true;
    }

    if (value.HasMember("ApiDocStatus") && !value["ApiDocStatus"].IsNull())
    {
        if (!value["ApiDocStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiDocStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocStatus = string(value["ApiDocStatus"].GetString());
        m_apiDocStatusHasBeenSet = true;
    }

    if (value.HasMember("ApiCount") && !value["ApiCount"].IsNull())
    {
        if (!value["ApiCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiCount = value["ApiCount"].GetInt64();
        m_apiCountHasBeenSet = true;
    }

    if (value.HasMember("ViewCount") && !value["ViewCount"].IsNull())
    {
        if (!value["ViewCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ViewCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_viewCount = value["ViewCount"].GetInt64();
        m_viewCountHasBeenSet = true;
    }

    if (value.HasMember("ReleaseCount") && !value["ReleaseCount"].IsNull())
    {
        if (!value["ReleaseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ReleaseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_releaseCount = value["ReleaseCount"].GetInt64();
        m_releaseCountHasBeenSet = true;
    }

    if (value.HasMember("ApiDocUri") && !value["ApiDocUri"].IsNull())
    {
        if (!value["ApiDocUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiDocUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDocUri = string(value["ApiDocUri"].GetString());
        m_apiDocUriHasBeenSet = true;
    }

    if (value.HasMember("SharePassword") && !value["SharePassword"].IsNull())
    {
        if (!value["SharePassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.SharePassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sharePassword = string(value["SharePassword"].GetString());
        m_sharePasswordHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("Environment") && !value["Environment"].IsNull())
    {
        if (!value["Environment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.Environment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environment = string(value["Environment"].GetString());
        m_environmentHasBeenSet = true;
    }

    if (value.HasMember("ApiIds") && !value["ApiIds"].IsNull())
    {
        if (!value["ApiIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apiIds.push_back((*itr).GetString());
        }
        m_apiIdsHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ApiNames") && !value["ApiNames"].IsNull())
    {
        if (!value["ApiNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.ApiNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_apiNames.push_back((*itr).GetString());
        }
        m_apiNamesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `APIDocInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APIDocInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiDocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDocNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDocStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_apiCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiCount, allocator);
    }

    if (m_viewCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_viewCount, allocator);
    }

    if (m_releaseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseCount, allocator);
    }

    if (m_apiDocUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDocUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDocUri.c_str(), allocator).Move(), allocator);
    }

    if (m_sharePasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharePassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sharePassword.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiIds.begin(); itr != m_apiIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_apiNames.begin(); itr != m_apiNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string APIDocInfo::GetApiDocId() const
{
    return m_apiDocId;
}

void APIDocInfo::SetApiDocId(const string& _apiDocId)
{
    m_apiDocId = _apiDocId;
    m_apiDocIdHasBeenSet = true;
}

bool APIDocInfo::ApiDocIdHasBeenSet() const
{
    return m_apiDocIdHasBeenSet;
}

string APIDocInfo::GetApiDocName() const
{
    return m_apiDocName;
}

void APIDocInfo::SetApiDocName(const string& _apiDocName)
{
    m_apiDocName = _apiDocName;
    m_apiDocNameHasBeenSet = true;
}

bool APIDocInfo::ApiDocNameHasBeenSet() const
{
    return m_apiDocNameHasBeenSet;
}

string APIDocInfo::GetApiDocStatus() const
{
    return m_apiDocStatus;
}

void APIDocInfo::SetApiDocStatus(const string& _apiDocStatus)
{
    m_apiDocStatus = _apiDocStatus;
    m_apiDocStatusHasBeenSet = true;
}

bool APIDocInfo::ApiDocStatusHasBeenSet() const
{
    return m_apiDocStatusHasBeenSet;
}

int64_t APIDocInfo::GetApiCount() const
{
    return m_apiCount;
}

void APIDocInfo::SetApiCount(const int64_t& _apiCount)
{
    m_apiCount = _apiCount;
    m_apiCountHasBeenSet = true;
}

bool APIDocInfo::ApiCountHasBeenSet() const
{
    return m_apiCountHasBeenSet;
}

int64_t APIDocInfo::GetViewCount() const
{
    return m_viewCount;
}

void APIDocInfo::SetViewCount(const int64_t& _viewCount)
{
    m_viewCount = _viewCount;
    m_viewCountHasBeenSet = true;
}

bool APIDocInfo::ViewCountHasBeenSet() const
{
    return m_viewCountHasBeenSet;
}

int64_t APIDocInfo::GetReleaseCount() const
{
    return m_releaseCount;
}

void APIDocInfo::SetReleaseCount(const int64_t& _releaseCount)
{
    m_releaseCount = _releaseCount;
    m_releaseCountHasBeenSet = true;
}

bool APIDocInfo::ReleaseCountHasBeenSet() const
{
    return m_releaseCountHasBeenSet;
}

string APIDocInfo::GetApiDocUri() const
{
    return m_apiDocUri;
}

void APIDocInfo::SetApiDocUri(const string& _apiDocUri)
{
    m_apiDocUri = _apiDocUri;
    m_apiDocUriHasBeenSet = true;
}

bool APIDocInfo::ApiDocUriHasBeenSet() const
{
    return m_apiDocUriHasBeenSet;
}

string APIDocInfo::GetSharePassword() const
{
    return m_sharePassword;
}

void APIDocInfo::SetSharePassword(const string& _sharePassword)
{
    m_sharePassword = _sharePassword;
    m_sharePasswordHasBeenSet = true;
}

bool APIDocInfo::SharePasswordHasBeenSet() const
{
    return m_sharePasswordHasBeenSet;
}

string APIDocInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void APIDocInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool APIDocInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string APIDocInfo::GetServiceId() const
{
    return m_serviceId;
}

void APIDocInfo::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool APIDocInfo::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string APIDocInfo::GetEnvironment() const
{
    return m_environment;
}

void APIDocInfo::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool APIDocInfo::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}

vector<string> APIDocInfo::GetApiIds() const
{
    return m_apiIds;
}

void APIDocInfo::SetApiIds(const vector<string>& _apiIds)
{
    m_apiIds = _apiIds;
    m_apiIdsHasBeenSet = true;
}

bool APIDocInfo::ApiIdsHasBeenSet() const
{
    return m_apiIdsHasBeenSet;
}

string APIDocInfo::GetServiceName() const
{
    return m_serviceName;
}

void APIDocInfo::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool APIDocInfo::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

vector<string> APIDocInfo::GetApiNames() const
{
    return m_apiNames;
}

void APIDocInfo::SetApiNames(const vector<string>& _apiNames)
{
    m_apiNames = _apiNames;
    m_apiNamesHasBeenSet = true;
}

bool APIDocInfo::ApiNamesHasBeenSet() const
{
    return m_apiNamesHasBeenSet;
}

vector<Tag> APIDocInfo::GetTags() const
{
    return m_tags;
}

void APIDocInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool APIDocInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

