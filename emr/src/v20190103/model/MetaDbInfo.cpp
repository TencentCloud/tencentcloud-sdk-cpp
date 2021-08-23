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

#include <tencentcloud/emr/v20190103/model/MetaDbInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

MetaDbInfo::MetaDbInfo() :
    m_metaTypeHasBeenSet(false),
    m_unifyMetaInstanceIdHasBeenSet(false),
    m_metaDBInfoHasBeenSet(false)
{
}

CoreInternalOutcome MetaDbInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaDbInfo.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (value.HasMember("UnifyMetaInstanceId") && !value["UnifyMetaInstanceId"].IsNull())
    {
        if (!value["UnifyMetaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetaDbInfo.UnifyMetaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifyMetaInstanceId = string(value["UnifyMetaInstanceId"].GetString());
        m_unifyMetaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("MetaDBInfo") && !value["MetaDBInfo"].IsNull())
    {
        if (!value["MetaDBInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetaDbInfo.MetaDBInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaDBInfo.Deserialize(value["MetaDBInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDBInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetaDbInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_unifyMetaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifyMetaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifyMetaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDBInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaDBInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaDBInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MetaDbInfo::GetMetaType() const
{
    return m_metaType;
}

void MetaDbInfo::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool MetaDbInfo::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string MetaDbInfo::GetUnifyMetaInstanceId() const
{
    return m_unifyMetaInstanceId;
}

void MetaDbInfo::SetUnifyMetaInstanceId(const string& _unifyMetaInstanceId)
{
    m_unifyMetaInstanceId = _unifyMetaInstanceId;
    m_unifyMetaInstanceIdHasBeenSet = true;
}

bool MetaDbInfo::UnifyMetaInstanceIdHasBeenSet() const
{
    return m_unifyMetaInstanceIdHasBeenSet;
}

CustomMetaInfo MetaDbInfo::GetMetaDBInfo() const
{
    return m_metaDBInfo;
}

void MetaDbInfo::SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo)
{
    m_metaDBInfo = _metaDBInfo;
    m_metaDBInfoHasBeenSet = true;
}

bool MetaDbInfo::MetaDBInfoHasBeenSet() const
{
    return m_metaDBInfoHasBeenSet;
}

