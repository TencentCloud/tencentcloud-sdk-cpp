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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPRoute::AIGWMCPRoute() :
    m_createTimeHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_headerMatchHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_preserveHostHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Expression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expression = string(value["Expression"].GetString());
        m_expressionHasBeenSet = true;
    }

    if (value.HasMember("HeaderMatch") && !value["HeaderMatch"].IsNull())
    {
        if (!value["HeaderMatch"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.HeaderMatch` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderMatch"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWHeaderRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerMatch.push_back(item);
        }
        m_headerMatchHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Methods") && !value["Methods"].IsNull())
    {
        if (!value["Methods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Methods` is not array type"));

        const rapidjson::Value &tmpValue = value["Methods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_methods.push_back((*itr).GetString());
        }
        m_methodsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("PathMatchType") && !value["PathMatchType"].IsNull())
    {
        if (!value["PathMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.PathMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatchType = string(value["PathMatchType"].GetString());
        m_pathMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PreserveHost") && !value["PreserveHost"].IsNull())
    {
        if (!value["PreserveHost"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRoute.PreserveHost` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preserveHost = value["PreserveHost"].GetBool();
        m_preserveHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expression.c_str(), allocator).Move(), allocator);
    }

    if (m_headerMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerMatch.begin(); itr != m_headerMatch.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_methodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Methods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_methods.begin(); itr != m_methods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_preserveHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreserveHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preserveHost, allocator);
    }

}


string AIGWMCPRoute::GetCreateTime() const
{
    return m_createTime;
}

void AIGWMCPRoute::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIGWMCPRoute::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIGWMCPRoute::GetExpression() const
{
    return m_expression;
}

void AIGWMCPRoute::SetExpression(const string& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool AIGWMCPRoute::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

vector<AIGWHeaderRule> AIGWMCPRoute::GetHeaderMatch() const
{
    return m_headerMatch;
}

void AIGWMCPRoute::SetHeaderMatch(const vector<AIGWHeaderRule>& _headerMatch)
{
    m_headerMatch = _headerMatch;
    m_headerMatchHasBeenSet = true;
}

bool AIGWMCPRoute::HeaderMatchHasBeenSet() const
{
    return m_headerMatchHasBeenSet;
}

bool AIGWMCPRoute::GetIsDefault() const
{
    return m_isDefault;
}

void AIGWMCPRoute::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AIGWMCPRoute::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

vector<string> AIGWMCPRoute::GetMethods() const
{
    return m_methods;
}

void AIGWMCPRoute::SetMethods(const vector<string>& _methods)
{
    m_methods = _methods;
    m_methodsHasBeenSet = true;
}

bool AIGWMCPRoute::MethodsHasBeenSet() const
{
    return m_methodsHasBeenSet;
}

string AIGWMCPRoute::GetName() const
{
    return m_name;
}

void AIGWMCPRoute::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIGWMCPRoute::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIGWMCPRoute::GetPath() const
{
    return m_path;
}

void AIGWMCPRoute::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AIGWMCPRoute::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AIGWMCPRoute::GetPathMatchType() const
{
    return m_pathMatchType;
}

void AIGWMCPRoute::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool AIGWMCPRoute::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

uint64_t AIGWMCPRoute::GetPriority() const
{
    return m_priority;
}

void AIGWMCPRoute::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool AIGWMCPRoute::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string AIGWMCPRoute::GetRouteId() const
{
    return m_routeId;
}

void AIGWMCPRoute::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool AIGWMCPRoute::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string AIGWMCPRoute::GetStatus() const
{
    return m_status;
}

void AIGWMCPRoute::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIGWMCPRoute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool AIGWMCPRoute::GetPreserveHost() const
{
    return m_preserveHost;
}

void AIGWMCPRoute::SetPreserveHost(const bool& _preserveHost)
{
    m_preserveHost = _preserveHost;
    m_preserveHostHasBeenSet = true;
}

bool AIGWMCPRoute::PreserveHostHasBeenSet() const
{
    return m_preserveHostHasBeenSet;
}

