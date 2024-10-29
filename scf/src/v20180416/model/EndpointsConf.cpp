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

#include <tencentcloud/scf/v20180416/model/EndpointsConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

EndpointsConf::EndpointsConf() :
    m_namespaceHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_pathMatchHasBeenSet(false),
    m_pathRewriteHasBeenSet(false)
{
}

CoreInternalOutcome EndpointsConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointsConf.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointsConf.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointsConf.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (value.HasMember("PathMatch") && !value["PathMatch"].IsNull())
    {
        if (!value["PathMatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointsConf.PathMatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatch = string(value["PathMatch"].GetString());
        m_pathMatchHasBeenSet = true;
    }

    if (value.HasMember("PathRewrite") && !value["PathRewrite"].IsNull())
    {
        if (!value["PathRewrite"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndpointsConf.PathRewrite` is not array type"));

        const rapidjson::Value &tmpValue = value["PathRewrite"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathRewriteRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathRewrite.push_back(item);
        }
        m_pathRewriteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndpointsConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatch.c_str(), allocator).Move(), allocator);
    }

    if (m_pathRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathRewrite.begin(); itr != m_pathRewrite.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EndpointsConf::GetNamespace() const
{
    return m_namespace;
}

void EndpointsConf::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool EndpointsConf::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string EndpointsConf::GetFunctionName() const
{
    return m_functionName;
}

void EndpointsConf::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool EndpointsConf::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string EndpointsConf::GetQualifier() const
{
    return m_qualifier;
}

void EndpointsConf::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool EndpointsConf::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string EndpointsConf::GetPathMatch() const
{
    return m_pathMatch;
}

void EndpointsConf::SetPathMatch(const string& _pathMatch)
{
    m_pathMatch = _pathMatch;
    m_pathMatchHasBeenSet = true;
}

bool EndpointsConf::PathMatchHasBeenSet() const
{
    return m_pathMatchHasBeenSet;
}

vector<PathRewriteRule> EndpointsConf::GetPathRewrite() const
{
    return m_pathRewrite;
}

void EndpointsConf::SetPathRewrite(const vector<PathRewriteRule>& _pathRewrite)
{
    m_pathRewrite = _pathRewrite;
    m_pathRewriteHasBeenSet = true;
}

bool EndpointsConf::PathRewriteHasBeenSet() const
{
    return m_pathRewriteHasBeenSet;
}

