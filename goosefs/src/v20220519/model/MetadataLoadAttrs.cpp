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

#include <tencentcloud/goosefs/v20220519/model/MetadataLoadAttrs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

MetadataLoadAttrs::MetadataLoadAttrs() :
    m_loadTypeHasBeenSet(false),
    m_skipIfExistsHasBeenSet(false),
    m_loadByPathHasBeenSet(false),
    m_loadByListHasBeenSet(false)
{
}

CoreInternalOutcome MetadataLoadAttrs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadType") && !value["LoadType"].IsNull())
    {
        if (!value["LoadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataLoadAttrs.LoadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadType = string(value["LoadType"].GetString());
        m_loadTypeHasBeenSet = true;
    }

    if (value.HasMember("SkipIfExists") && !value["SkipIfExists"].IsNull())
    {
        if (!value["SkipIfExists"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataLoadAttrs.SkipIfExists` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipIfExists = value["SkipIfExists"].GetBool();
        m_skipIfExistsHasBeenSet = true;
    }

    if (value.HasMember("LoadByPath") && !value["LoadByPath"].IsNull())
    {
        if (!value["LoadByPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataLoadAttrs.LoadByPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadByPath = string(value["LoadByPath"].GetString());
        m_loadByPathHasBeenSet = true;
    }

    if (value.HasMember("LoadByList") && !value["LoadByList"].IsNull())
    {
        if (!value["LoadByList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataLoadAttrs.LoadByList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadByList = string(value["LoadByList"].GetString());
        m_loadByListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetadataLoadAttrs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadType.c_str(), allocator).Move(), allocator);
    }

    if (m_skipIfExistsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipIfExists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipIfExists, allocator);
    }

    if (m_loadByPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadByPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadByPath.c_str(), allocator).Move(), allocator);
    }

    if (m_loadByListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadByList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadByList.c_str(), allocator).Move(), allocator);
    }

}


string MetadataLoadAttrs::GetLoadType() const
{
    return m_loadType;
}

void MetadataLoadAttrs::SetLoadType(const string& _loadType)
{
    m_loadType = _loadType;
    m_loadTypeHasBeenSet = true;
}

bool MetadataLoadAttrs::LoadTypeHasBeenSet() const
{
    return m_loadTypeHasBeenSet;
}

bool MetadataLoadAttrs::GetSkipIfExists() const
{
    return m_skipIfExists;
}

void MetadataLoadAttrs::SetSkipIfExists(const bool& _skipIfExists)
{
    m_skipIfExists = _skipIfExists;
    m_skipIfExistsHasBeenSet = true;
}

bool MetadataLoadAttrs::SkipIfExistsHasBeenSet() const
{
    return m_skipIfExistsHasBeenSet;
}

string MetadataLoadAttrs::GetLoadByPath() const
{
    return m_loadByPath;
}

void MetadataLoadAttrs::SetLoadByPath(const string& _loadByPath)
{
    m_loadByPath = _loadByPath;
    m_loadByPathHasBeenSet = true;
}

bool MetadataLoadAttrs::LoadByPathHasBeenSet() const
{
    return m_loadByPathHasBeenSet;
}

string MetadataLoadAttrs::GetLoadByList() const
{
    return m_loadByList;
}

void MetadataLoadAttrs::SetLoadByList(const string& _loadByList)
{
    m_loadByList = _loadByList;
    m_loadByListHasBeenSet = true;
}

bool MetadataLoadAttrs::LoadByListHasBeenSet() const
{
    return m_loadByListHasBeenSet;
}

