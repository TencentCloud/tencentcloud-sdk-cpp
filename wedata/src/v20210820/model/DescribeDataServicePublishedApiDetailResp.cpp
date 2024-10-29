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

#include <tencentcloud/wedata/v20210820/model/DescribeDataServicePublishedApiDetailResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDataServicePublishedApiDetailResp::DescribeDataServicePublishedApiDetailResp() :
    m_apiNameHasBeenSet(false),
    m_pathUrlHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_requestTypeHasBeenSet(false),
    m_apiTagNamesHasBeenSet(false),
    m_apiDescriptionHasBeenSet(false),
    m_requestExampleHasBeenSet(false),
    m_requestSuccessHasBeenSet(false),
    m_requestErrorHasBeenSet(false),
    m_requestParamHasBeenSet(false),
    m_responseParamHasBeenSet(false),
    m_maxAllowQpsHasBeenSet(false),
    m_maxAllowPageSizeHasBeenSet(false),
    m_timeoutPeriodHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_gatewayApiUrlHasBeenSet(false),
    m_apiStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDataServicePublishedApiDetailResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("PathUrl") && !value["PathUrl"].IsNull())
    {
        if (!value["PathUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.PathUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathUrl = string(value["PathUrl"].GetString());
        m_pathUrlHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("RequestType") && !value["RequestType"].IsNull())
    {
        if (!value["RequestType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.RequestType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestType = string(value["RequestType"].GetString());
        m_requestTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiTagNames") && !value["ApiTagNames"].IsNull())
    {
        if (!value["ApiTagNames"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ApiTagNames` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiTagNames = string(value["ApiTagNames"].GetString());
        m_apiTagNamesHasBeenSet = true;
    }

    if (value.HasMember("ApiDescription") && !value["ApiDescription"].IsNull())
    {
        if (!value["ApiDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ApiDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDescription = string(value["ApiDescription"].GetString());
        m_apiDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RequestExample") && !value["RequestExample"].IsNull())
    {
        if (!value["RequestExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.RequestExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestExample = string(value["RequestExample"].GetString());
        m_requestExampleHasBeenSet = true;
    }

    if (value.HasMember("RequestSuccess") && !value["RequestSuccess"].IsNull())
    {
        if (!value["RequestSuccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.RequestSuccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestSuccess = string(value["RequestSuccess"].GetString());
        m_requestSuccessHasBeenSet = true;
    }

    if (value.HasMember("RequestError") && !value["RequestError"].IsNull())
    {
        if (!value["RequestError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.RequestError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestError = string(value["RequestError"].GetString());
        m_requestErrorHasBeenSet = true;
    }

    if (value.HasMember("RequestParam") && !value["RequestParam"].IsNull())
    {
        if (!value["RequestParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.RequestParam` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataServiceRequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestParam.push_back(item);
        }
        m_requestParamHasBeenSet = true;
    }

    if (value.HasMember("ResponseParam") && !value["ResponseParam"].IsNull())
    {
        if (!value["ResponseParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ResponseParam` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataServiceResponseParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_responseParam.push_back(item);
        }
        m_responseParamHasBeenSet = true;
    }

    if (value.HasMember("MaxAllowQps") && !value["MaxAllowQps"].IsNull())
    {
        if (!value["MaxAllowQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.MaxAllowQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAllowQps = value["MaxAllowQps"].GetInt64();
        m_maxAllowQpsHasBeenSet = true;
    }

    if (value.HasMember("MaxAllowPageSize") && !value["MaxAllowPageSize"].IsNull())
    {
        if (!value["MaxAllowPageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.MaxAllowPageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAllowPageSize = value["MaxAllowPageSize"].GetInt64();
        m_maxAllowPageSizeHasBeenSet = true;
    }

    if (value.HasMember("TimeoutPeriod") && !value["TimeoutPeriod"].IsNull())
    {
        if (!value["TimeoutPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.TimeoutPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutPeriod = value["TimeoutPeriod"].GetUint64();
        m_timeoutPeriodHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayApiUrl") && !value["GatewayApiUrl"].IsNull())
    {
        if (!value["GatewayApiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.GatewayApiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayApiUrl = string(value["GatewayApiUrl"].GetString());
        m_gatewayApiUrlHasBeenSet = true;
    }

    if (value.HasMember("ApiStatus") && !value["ApiStatus"].IsNull())
    {
        if (!value["ApiStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDataServicePublishedApiDetailResp.ApiStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiStatus = value["ApiStatus"].GetUint64();
        m_apiStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDataServicePublishedApiDetailResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTagNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiTagNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiTagNames.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_requestExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestExample.c_str(), allocator).Move(), allocator);
    }

    if (m_requestSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestSuccess.c_str(), allocator).Move(), allocator);
    }

    if (m_requestErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestError.c_str(), allocator).Move(), allocator);
    }

    if (m_requestParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestParam.begin(); itr != m_requestParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_responseParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseParam.begin(); itr != m_responseParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxAllowQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAllowQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAllowQps, allocator);
    }

    if (m_maxAllowPageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAllowPageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAllowPageSize, allocator);
    }

    if (m_timeoutPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutPeriod, allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_gatewayApiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayApiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayApiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_apiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiStatus, allocator);
    }

}


string DescribeDataServicePublishedApiDetailResp::GetApiName() const
{
    return m_apiName;
}

void DescribeDataServicePublishedApiDetailResp::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetPathUrl() const
{
    return m_pathUrl;
}

void DescribeDataServicePublishedApiDetailResp::SetPathUrl(const string& _pathUrl)
{
    m_pathUrl = _pathUrl;
    m_pathUrlHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::PathUrlHasBeenSet() const
{
    return m_pathUrlHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetOwnerName() const
{
    return m_ownerName;
}

void DescribeDataServicePublishedApiDetailResp::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetRequestType() const
{
    return m_requestType;
}

void DescribeDataServicePublishedApiDetailResp::SetRequestType(const string& _requestType)
{
    m_requestType = _requestType;
    m_requestTypeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::RequestTypeHasBeenSet() const
{
    return m_requestTypeHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetApiTagNames() const
{
    return m_apiTagNames;
}

void DescribeDataServicePublishedApiDetailResp::SetApiTagNames(const string& _apiTagNames)
{
    m_apiTagNames = _apiTagNames;
    m_apiTagNamesHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ApiTagNamesHasBeenSet() const
{
    return m_apiTagNamesHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetApiDescription() const
{
    return m_apiDescription;
}

void DescribeDataServicePublishedApiDetailResp::SetApiDescription(const string& _apiDescription)
{
    m_apiDescription = _apiDescription;
    m_apiDescriptionHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ApiDescriptionHasBeenSet() const
{
    return m_apiDescriptionHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetRequestExample() const
{
    return m_requestExample;
}

void DescribeDataServicePublishedApiDetailResp::SetRequestExample(const string& _requestExample)
{
    m_requestExample = _requestExample;
    m_requestExampleHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::RequestExampleHasBeenSet() const
{
    return m_requestExampleHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetRequestSuccess() const
{
    return m_requestSuccess;
}

void DescribeDataServicePublishedApiDetailResp::SetRequestSuccess(const string& _requestSuccess)
{
    m_requestSuccess = _requestSuccess;
    m_requestSuccessHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::RequestSuccessHasBeenSet() const
{
    return m_requestSuccessHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetRequestError() const
{
    return m_requestError;
}

void DescribeDataServicePublishedApiDetailResp::SetRequestError(const string& _requestError)
{
    m_requestError = _requestError;
    m_requestErrorHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::RequestErrorHasBeenSet() const
{
    return m_requestErrorHasBeenSet;
}

vector<DataServiceRequestParam> DescribeDataServicePublishedApiDetailResp::GetRequestParam() const
{
    return m_requestParam;
}

void DescribeDataServicePublishedApiDetailResp::SetRequestParam(const vector<DataServiceRequestParam>& _requestParam)
{
    m_requestParam = _requestParam;
    m_requestParamHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::RequestParamHasBeenSet() const
{
    return m_requestParamHasBeenSet;
}

vector<DataServiceResponseParam> DescribeDataServicePublishedApiDetailResp::GetResponseParam() const
{
    return m_responseParam;
}

void DescribeDataServicePublishedApiDetailResp::SetResponseParam(const vector<DataServiceResponseParam>& _responseParam)
{
    m_responseParam = _responseParam;
    m_responseParamHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ResponseParamHasBeenSet() const
{
    return m_responseParamHasBeenSet;
}

int64_t DescribeDataServicePublishedApiDetailResp::GetMaxAllowQps() const
{
    return m_maxAllowQps;
}

void DescribeDataServicePublishedApiDetailResp::SetMaxAllowQps(const int64_t& _maxAllowQps)
{
    m_maxAllowQps = _maxAllowQps;
    m_maxAllowQpsHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::MaxAllowQpsHasBeenSet() const
{
    return m_maxAllowQpsHasBeenSet;
}

int64_t DescribeDataServicePublishedApiDetailResp::GetMaxAllowPageSize() const
{
    return m_maxAllowPageSize;
}

void DescribeDataServicePublishedApiDetailResp::SetMaxAllowPageSize(const int64_t& _maxAllowPageSize)
{
    m_maxAllowPageSize = _maxAllowPageSize;
    m_maxAllowPageSizeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::MaxAllowPageSizeHasBeenSet() const
{
    return m_maxAllowPageSizeHasBeenSet;
}

uint64_t DescribeDataServicePublishedApiDetailResp::GetTimeoutPeriod() const
{
    return m_timeoutPeriod;
}

void DescribeDataServicePublishedApiDetailResp::SetTimeoutPeriod(const uint64_t& _timeoutPeriod)
{
    m_timeoutPeriod = _timeoutPeriod;
    m_timeoutPeriodHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::TimeoutPeriodHasBeenSet() const
{
    return m_timeoutPeriodHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetApiId() const
{
    return m_apiId;
}

void DescribeDataServicePublishedApiDetailResp::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

uint64_t DescribeDataServicePublishedApiDetailResp::GetAuthType() const
{
    return m_authType;
}

void DescribeDataServicePublishedApiDetailResp::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string DescribeDataServicePublishedApiDetailResp::GetGatewayApiUrl() const
{
    return m_gatewayApiUrl;
}

void DescribeDataServicePublishedApiDetailResp::SetGatewayApiUrl(const string& _gatewayApiUrl)
{
    m_gatewayApiUrl = _gatewayApiUrl;
    m_gatewayApiUrlHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::GatewayApiUrlHasBeenSet() const
{
    return m_gatewayApiUrlHasBeenSet;
}

uint64_t DescribeDataServicePublishedApiDetailResp::GetApiStatus() const
{
    return m_apiStatus;
}

void DescribeDataServicePublishedApiDetailResp::SetApiStatus(const uint64_t& _apiStatus)
{
    m_apiStatus = _apiStatus;
    m_apiStatusHasBeenSet = true;
}

bool DescribeDataServicePublishedApiDetailResp::ApiStatusHasBeenSet() const
{
    return m_apiStatusHasBeenSet;
}

