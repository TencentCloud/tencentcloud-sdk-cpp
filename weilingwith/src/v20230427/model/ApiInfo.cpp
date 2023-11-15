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

#include <tencentcloud/weilingwith/v20230427/model/ApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ApiInfo::ApiInfo() :
    m_apiIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_workspaceIdHasBeenSet(false),
    m_poiCodeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dataAuditHasBeenSet(false),
    m_applyAuditHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_queryParamsHasBeenSet(false),
    m_pathParamsHasBeenSet(false),
    m_requestHeadersHasBeenSet(false),
    m_responseHeadersHasBeenSet(false),
    m_isCommonSpaceHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_responseBodyHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

CoreInternalOutcome ApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.WorkspaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = string(value["WorkspaceId"].GetString());
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("PoiCode") && !value["PoiCode"].IsNull())
    {
        if (!value["PoiCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.PoiCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poiCode = string(value["PoiCode"].GetString());
        m_poiCodeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DataAudit") && !value["DataAudit"].IsNull())
    {
        if (!value["DataAudit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.DataAudit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAudit = value["DataAudit"].GetUint64();
        m_dataAuditHasBeenSet = true;
    }

    if (value.HasMember("ApplyAudit") && !value["ApplyAudit"].IsNull())
    {
        if (!value["ApplyAudit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ApplyAudit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyAudit = value["ApplyAudit"].GetUint64();
        m_applyAuditHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PreviewUrl") && !value["PreviewUrl"].IsNull())
    {
        if (!value["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(value["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (value.HasMember("QueryParams") && !value["QueryParams"].IsNull())
    {
        if (!value["QueryParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.QueryParams` is not array type"));

        const rapidjson::Value &tmpValue = value["QueryParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_queryParams.push_back(item);
        }
        m_queryParamsHasBeenSet = true;
    }

    if (value.HasMember("PathParams") && !value["PathParams"].IsNull())
    {
        if (!value["PathParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.PathParams` is not array type"));

        const rapidjson::Value &tmpValue = value["PathParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathParams.push_back(item);
        }
        m_pathParamsHasBeenSet = true;
    }

    if (value.HasMember("RequestHeaders") && !value["RequestHeaders"].IsNull())
    {
        if (!value["RequestHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.RequestHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestHeaders.push_back(item);
        }
        m_requestHeadersHasBeenSet = true;
    }

    if (value.HasMember("ResponseHeaders") && !value["ResponseHeaders"].IsNull())
    {
        if (!value["ResponseHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_responseHeaders.push_back(item);
        }
        m_responseHeadersHasBeenSet = true;
    }

    if (value.HasMember("IsCommonSpace") && !value["IsCommonSpace"].IsNull())
    {
        if (!value["IsCommonSpace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.IsCommonSpace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCommonSpace = value["IsCommonSpace"].GetBool();
        m_isCommonSpaceHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("ResponseBody") && !value["ResponseBody"].IsNull())
    {
        if (!value["ResponseBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.ResponseBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseBody = string(value["ResponseBody"].GetString());
        m_responseBodyHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiInfo.Style` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_style = value["Style"].GetUint64();
        m_styleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_poiCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoiCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poiCode.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_dataAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAudit, allocator);
    }

    if (m_applyAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyAudit, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_previewUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_queryParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queryParams.begin(); itr != m_queryParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathParams.begin(); itr != m_pathParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestHeaders.begin(); itr != m_requestHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_responseHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_responseHeaders.begin(); itr != m_responseHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isCommonSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCommonSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCommonSpace, allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_responseBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseBody.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_style, allocator);
    }

}


string ApiInfo::GetApiId() const
{
    return m_apiId;
}

void ApiInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiInfo::GetName() const
{
    return m_name;
}

void ApiInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiInfo::GetAppId() const
{
    return m_appId;
}

void ApiInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApiInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ApiInfo::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ApiInfo::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ApiInfo::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string ApiInfo::GetPoiCode() const
{
    return m_poiCode;
}

void ApiInfo::SetPoiCode(const string& _poiCode)
{
    m_poiCode = _poiCode;
    m_poiCodeHasBeenSet = true;
}

bool ApiInfo::PoiCodeHasBeenSet() const
{
    return m_poiCodeHasBeenSet;
}

uint64_t ApiInfo::GetType() const
{
    return m_type;
}

void ApiInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApiInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ApiInfo::GetDataAudit() const
{
    return m_dataAudit;
}

void ApiInfo::SetDataAudit(const uint64_t& _dataAudit)
{
    m_dataAudit = _dataAudit;
    m_dataAuditHasBeenSet = true;
}

bool ApiInfo::DataAuditHasBeenSet() const
{
    return m_dataAuditHasBeenSet;
}

uint64_t ApiInfo::GetApplyAudit() const
{
    return m_applyAudit;
}

void ApiInfo::SetApplyAudit(const uint64_t& _applyAudit)
{
    m_applyAudit = _applyAudit;
    m_applyAuditHasBeenSet = true;
}

bool ApiInfo::ApplyAuditHasBeenSet() const
{
    return m_applyAuditHasBeenSet;
}

string ApiInfo::GetDescription() const
{
    return m_description;
}

void ApiInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApiInfo::GetAddress() const
{
    return m_address;
}

void ApiInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ApiInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ApiInfo::GetMethod() const
{
    return m_method;
}

void ApiInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t ApiInfo::GetStatus() const
{
    return m_status;
}

void ApiInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiInfo::GetPreviewUrl() const
{
    return m_previewUrl;
}

void ApiInfo::SetPreviewUrl(const string& _previewUrl)
{
    m_previewUrl = _previewUrl;
    m_previewUrlHasBeenSet = true;
}

bool ApiInfo::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

vector<ApiContent> ApiInfo::GetQueryParams() const
{
    return m_queryParams;
}

void ApiInfo::SetQueryParams(const vector<ApiContent>& _queryParams)
{
    m_queryParams = _queryParams;
    m_queryParamsHasBeenSet = true;
}

bool ApiInfo::QueryParamsHasBeenSet() const
{
    return m_queryParamsHasBeenSet;
}

vector<ApiContent> ApiInfo::GetPathParams() const
{
    return m_pathParams;
}

void ApiInfo::SetPathParams(const vector<ApiContent>& _pathParams)
{
    m_pathParams = _pathParams;
    m_pathParamsHasBeenSet = true;
}

bool ApiInfo::PathParamsHasBeenSet() const
{
    return m_pathParamsHasBeenSet;
}

vector<ApiContent> ApiInfo::GetRequestHeaders() const
{
    return m_requestHeaders;
}

void ApiInfo::SetRequestHeaders(const vector<ApiContent>& _requestHeaders)
{
    m_requestHeaders = _requestHeaders;
    m_requestHeadersHasBeenSet = true;
}

bool ApiInfo::RequestHeadersHasBeenSet() const
{
    return m_requestHeadersHasBeenSet;
}

vector<ApiContent> ApiInfo::GetResponseHeaders() const
{
    return m_responseHeaders;
}

void ApiInfo::SetResponseHeaders(const vector<ApiContent>& _responseHeaders)
{
    m_responseHeaders = _responseHeaders;
    m_responseHeadersHasBeenSet = true;
}

bool ApiInfo::ResponseHeadersHasBeenSet() const
{
    return m_responseHeadersHasBeenSet;
}

bool ApiInfo::GetIsCommonSpace() const
{
    return m_isCommonSpace;
}

void ApiInfo::SetIsCommonSpace(const bool& _isCommonSpace)
{
    m_isCommonSpace = _isCommonSpace;
    m_isCommonSpaceHasBeenSet = true;
}

bool ApiInfo::IsCommonSpaceHasBeenSet() const
{
    return m_isCommonSpaceHasBeenSet;
}

string ApiInfo::GetBody() const
{
    return m_body;
}

void ApiInfo::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool ApiInfo::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string ApiInfo::GetResponseBody() const
{
    return m_responseBody;
}

void ApiInfo::SetResponseBody(const string& _responseBody)
{
    m_responseBody = _responseBody;
    m_responseBodyHasBeenSet = true;
}

bool ApiInfo::ResponseBodyHasBeenSet() const
{
    return m_responseBodyHasBeenSet;
}

uint64_t ApiInfo::GetStyle() const
{
    return m_style;
}

void ApiInfo::SetStyle(const uint64_t& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool ApiInfo::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

