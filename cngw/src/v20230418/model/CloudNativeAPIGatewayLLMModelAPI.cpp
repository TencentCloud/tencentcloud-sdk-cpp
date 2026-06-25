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

#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelAPI.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CloudNativeAPIGatewayLLMModelAPI::CloudNativeAPIGatewayLLMModelAPI() :
    m_idHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_requestProtocolHasBeenSet(false),
    m_routeListHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_stripPathHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modelServiceIdHasBeenSet(false),
    m_modelServiceNameHasBeenSet(false),
    m_modelServiceRouteHasBeenSet(false),
    m_matchHeadersHasBeenSet(false),
    m_enableCrossServiceFallbackHasBeenSet(false),
    m_crossServiceFallbackConfigHasBeenSet(false),
    m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet(false),
    m_tagFilterHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_logDesensitizeConfigHasBeenSet(false),
    m_forwardDesensitizeConfigHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayLLMModelAPI::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("RequestProtocol") && !value["RequestProtocol"].IsNull())
    {
        if (!value["RequestProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.RequestProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestProtocol = string(value["RequestProtocol"].GetString());
        m_requestProtocolHasBeenSet = true;
    }

    if (value.HasMember("RouteList") && !value["RouteList"].IsNull())
    {
        if (!value["RouteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.RouteList` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DefaultKongRoute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeList.push_back(item);
        }
        m_routeListHasBeenSet = true;
    }

    if (value.HasMember("BasePath") && !value["BasePath"].IsNull())
    {
        if (!value["BasePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.BasePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basePath = string(value["BasePath"].GetString());
        m_basePathHasBeenSet = true;
    }

    if (value.HasMember("StripPath") && !value["StripPath"].IsNull())
    {
        if (!value["StripPath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.StripPath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_stripPath = value["StripPath"].GetBool();
        m_stripPathHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceId") && !value["ModelServiceId"].IsNull())
    {
        if (!value["ModelServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.ModelServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceId = string(value["ModelServiceId"].GetString());
        m_modelServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceName") && !value["ModelServiceName"].IsNull())
    {
        if (!value["ModelServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.ModelServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelServiceName = string(value["ModelServiceName"].GetString());
        m_modelServiceNameHasBeenSet = true;
    }

    if (value.HasMember("ModelServiceRoute") && !value["ModelServiceRoute"].IsNull())
    {
        if (!value["ModelServiceRoute"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.ModelServiceRoute` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelServiceRoute.Deserialize(value["ModelServiceRoute"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelServiceRouteHasBeenSet = true;
    }

    if (value.HasMember("MatchHeaders") && !value["MatchHeaders"].IsNull())
    {
        if (!value["MatchHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.MatchHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWKVMatch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchHeaders.push_back(item);
        }
        m_matchHeadersHasBeenSet = true;
    }

    if (value.HasMember("EnableCrossServiceFallback") && !value["EnableCrossServiceFallback"].IsNull())
    {
        if (!value["EnableCrossServiceFallback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.EnableCrossServiceFallback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableCrossServiceFallback = value["EnableCrossServiceFallback"].GetBool();
        m_enableCrossServiceFallbackHasBeenSet = true;
    }

    if (value.HasMember("CrossServiceFallbackConfig") && !value["CrossServiceFallbackConfig"].IsNull())
    {
        if (!value["CrossServiceFallbackConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.CrossServiceFallbackConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crossServiceFallbackConfig.Deserialize(value["CrossServiceFallbackConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crossServiceFallbackConfigHasBeenSet = true;
    }

    if (value.HasMember("DescribeCloudNativeAPIGatewayLLMModelAPI") && !value["DescribeCloudNativeAPIGatewayLLMModelAPI"].IsNull())
    {
        if (!value["DescribeCloudNativeAPIGatewayLLMModelAPI"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.DescribeCloudNativeAPIGatewayLLMModelAPI` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_describeCloudNativeAPIGatewayLLMModelAPI = value["DescribeCloudNativeAPIGatewayLLMModelAPI"].GetBool();
        m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet = true;
    }

    if (value.HasMember("TagFilter") && !value["TagFilter"].IsNull())
    {
        if (!value["TagFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.TagFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagFilter.Deserialize(value["TagFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagFilterHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.LogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logConfig.Deserialize(value["LogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logConfigHasBeenSet = true;
    }

    if (value.HasMember("LogDesensitizeConfig") && !value["LogDesensitizeConfig"].IsNull())
    {
        if (!value["LogDesensitizeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.LogDesensitizeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logDesensitizeConfig.Deserialize(value["LogDesensitizeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logDesensitizeConfigHasBeenSet = true;
    }

    if (value.HasMember("ForwardDesensitizeConfig") && !value["ForwardDesensitizeConfig"].IsNull())
    {
        if (!value["ForwardDesensitizeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayLLMModelAPI.ForwardDesensitizeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forwardDesensitizeConfig.Deserialize(value["ForwardDesensitizeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forwardDesensitizeConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayLLMModelAPI::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_requestProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_routeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeList.begin(); itr != m_routeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_stripPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StripPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stripPath, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelServiceRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelServiceRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelServiceRoute.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_matchHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchHeaders.begin(); itr != m_matchHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableCrossServiceFallbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCrossServiceFallback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableCrossServiceFallback, allocator);
    }

    if (m_crossServiceFallbackConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossServiceFallbackConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crossServiceFallbackConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeCloudNativeAPIGatewayLLMModelAPI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_describeCloudNativeAPIGatewayLLMModelAPI, allocator);
    }

    if (m_tagFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logDesensitizeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDesensitizeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logDesensitizeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forwardDesensitizeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardDesensitizeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forwardDesensitizeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CloudNativeAPIGatewayLLMModelAPI::GetId() const
{
    return m_id;
}

void CloudNativeAPIGatewayLLMModelAPI::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetCreateTime() const
{
    return m_createTime;
}

void CloudNativeAPIGatewayLLMModelAPI::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetModifyTime() const
{
    return m_modifyTime;
}

void CloudNativeAPIGatewayLLMModelAPI::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetName() const
{
    return m_name;
}

void CloudNativeAPIGatewayLLMModelAPI::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetSceneType() const
{
    return m_sceneType;
}

void CloudNativeAPIGatewayLLMModelAPI::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetRequestProtocol() const
{
    return m_requestProtocol;
}

void CloudNativeAPIGatewayLLMModelAPI::SetRequestProtocol(const string& _requestProtocol)
{
    m_requestProtocol = _requestProtocol;
    m_requestProtocolHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::RequestProtocolHasBeenSet() const
{
    return m_requestProtocolHasBeenSet;
}

vector<DefaultKongRoute> CloudNativeAPIGatewayLLMModelAPI::GetRouteList() const
{
    return m_routeList;
}

void CloudNativeAPIGatewayLLMModelAPI::SetRouteList(const vector<DefaultKongRoute>& _routeList)
{
    m_routeList = _routeList;
    m_routeListHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::RouteListHasBeenSet() const
{
    return m_routeListHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetBasePath() const
{
    return m_basePath;
}

void CloudNativeAPIGatewayLLMModelAPI::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

bool CloudNativeAPIGatewayLLMModelAPI::GetStripPath() const
{
    return m_stripPath;
}

void CloudNativeAPIGatewayLLMModelAPI::SetStripPath(const bool& _stripPath)
{
    m_stripPath = _stripPath;
    m_stripPathHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::StripPathHasBeenSet() const
{
    return m_stripPathHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetDescription() const
{
    return m_description;
}

void CloudNativeAPIGatewayLLMModelAPI::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetModelServiceId() const
{
    return m_modelServiceId;
}

void CloudNativeAPIGatewayLLMModelAPI::SetModelServiceId(const string& _modelServiceId)
{
    m_modelServiceId = _modelServiceId;
    m_modelServiceIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::ModelServiceIdHasBeenSet() const
{
    return m_modelServiceIdHasBeenSet;
}

string CloudNativeAPIGatewayLLMModelAPI::GetModelServiceName() const
{
    return m_modelServiceName;
}

void CloudNativeAPIGatewayLLMModelAPI::SetModelServiceName(const string& _modelServiceName)
{
    m_modelServiceName = _modelServiceName;
    m_modelServiceNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::ModelServiceNameHasBeenSet() const
{
    return m_modelServiceNameHasBeenSet;
}

CloudNativeAPIGatewayLLMModelServiceRoute CloudNativeAPIGatewayLLMModelAPI::GetModelServiceRoute() const
{
    return m_modelServiceRoute;
}

void CloudNativeAPIGatewayLLMModelAPI::SetModelServiceRoute(const CloudNativeAPIGatewayLLMModelServiceRoute& _modelServiceRoute)
{
    m_modelServiceRoute = _modelServiceRoute;
    m_modelServiceRouteHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::ModelServiceRouteHasBeenSet() const
{
    return m_modelServiceRouteHasBeenSet;
}

vector<AIGWKVMatch> CloudNativeAPIGatewayLLMModelAPI::GetMatchHeaders() const
{
    return m_matchHeaders;
}

void CloudNativeAPIGatewayLLMModelAPI::SetMatchHeaders(const vector<AIGWKVMatch>& _matchHeaders)
{
    m_matchHeaders = _matchHeaders;
    m_matchHeadersHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::MatchHeadersHasBeenSet() const
{
    return m_matchHeadersHasBeenSet;
}

bool CloudNativeAPIGatewayLLMModelAPI::GetEnableCrossServiceFallback() const
{
    return m_enableCrossServiceFallback;
}

void CloudNativeAPIGatewayLLMModelAPI::SetEnableCrossServiceFallback(const bool& _enableCrossServiceFallback)
{
    m_enableCrossServiceFallback = _enableCrossServiceFallback;
    m_enableCrossServiceFallbackHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::EnableCrossServiceFallbackHasBeenSet() const
{
    return m_enableCrossServiceFallbackHasBeenSet;
}

AIGWCrossServiceFallbackConfig CloudNativeAPIGatewayLLMModelAPI::GetCrossServiceFallbackConfig() const
{
    return m_crossServiceFallbackConfig;
}

void CloudNativeAPIGatewayLLMModelAPI::SetCrossServiceFallbackConfig(const AIGWCrossServiceFallbackConfig& _crossServiceFallbackConfig)
{
    m_crossServiceFallbackConfig = _crossServiceFallbackConfig;
    m_crossServiceFallbackConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::CrossServiceFallbackConfigHasBeenSet() const
{
    return m_crossServiceFallbackConfigHasBeenSet;
}

bool CloudNativeAPIGatewayLLMModelAPI::GetDescribeCloudNativeAPIGatewayLLMModelAPI() const
{
    return m_describeCloudNativeAPIGatewayLLMModelAPI;
}

void CloudNativeAPIGatewayLLMModelAPI::SetDescribeCloudNativeAPIGatewayLLMModelAPI(const bool& _describeCloudNativeAPIGatewayLLMModelAPI)
{
    m_describeCloudNativeAPIGatewayLLMModelAPI = _describeCloudNativeAPIGatewayLLMModelAPI;
    m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::DescribeCloudNativeAPIGatewayLLMModelAPIHasBeenSet() const
{
    return m_describeCloudNativeAPIGatewayLLMModelAPIHasBeenSet;
}

AIGWTagFilter CloudNativeAPIGatewayLLMModelAPI::GetTagFilter() const
{
    return m_tagFilter;
}

void CloudNativeAPIGatewayLLMModelAPI::SetTagFilter(const AIGWTagFilter& _tagFilter)
{
    m_tagFilter = _tagFilter;
    m_tagFilterHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::TagFilterHasBeenSet() const
{
    return m_tagFilterHasBeenSet;
}

AIGWLogConfig CloudNativeAPIGatewayLLMModelAPI::GetLogConfig() const
{
    return m_logConfig;
}

void CloudNativeAPIGatewayLLMModelAPI::SetLogConfig(const AIGWLogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

AIGWLogDesensitizeConfig CloudNativeAPIGatewayLLMModelAPI::GetLogDesensitizeConfig() const
{
    return m_logDesensitizeConfig;
}

void CloudNativeAPIGatewayLLMModelAPI::SetLogDesensitizeConfig(const AIGWLogDesensitizeConfig& _logDesensitizeConfig)
{
    m_logDesensitizeConfig = _logDesensitizeConfig;
    m_logDesensitizeConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::LogDesensitizeConfigHasBeenSet() const
{
    return m_logDesensitizeConfigHasBeenSet;
}

AIGWForwardDesensitizeConfig CloudNativeAPIGatewayLLMModelAPI::GetForwardDesensitizeConfig() const
{
    return m_forwardDesensitizeConfig;
}

void CloudNativeAPIGatewayLLMModelAPI::SetForwardDesensitizeConfig(const AIGWForwardDesensitizeConfig& _forwardDesensitizeConfig)
{
    m_forwardDesensitizeConfig = _forwardDesensitizeConfig;
    m_forwardDesensitizeConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayLLMModelAPI::ForwardDesensitizeConfigHasBeenSet() const
{
    return m_forwardDesensitizeConfigHasBeenSet;
}

