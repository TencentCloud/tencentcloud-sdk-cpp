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

#include <tencentcloud/scf/v20180416/model/PathRewriteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

PathRewriteRule::PathRewriteRule() :
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rewriteHasBeenSet(false)
{
}

CoreInternalOutcome PathRewriteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteRule.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteRule.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Rewrite") && !value["Rewrite"].IsNull())
    {
        if (!value["Rewrite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathRewriteRule.Rewrite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rewrite = string(value["Rewrite"].GetString());
        m_rewriteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathRewriteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rewrite.c_str(), allocator).Move(), allocator);
    }

}


string PathRewriteRule::GetPath() const
{
    return m_path;
}

void PathRewriteRule::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool PathRewriteRule::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string PathRewriteRule::GetType() const
{
    return m_type;
}

void PathRewriteRule::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PathRewriteRule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PathRewriteRule::GetRewrite() const
{
    return m_rewrite;
}

void PathRewriteRule::SetRewrite(const string& _rewrite)
{
    m_rewrite = _rewrite;
    m_rewriteHasBeenSet = true;
}

bool PathRewriteRule::RewriteHasBeenSet() const
{
    return m_rewriteHasBeenSet;
}

