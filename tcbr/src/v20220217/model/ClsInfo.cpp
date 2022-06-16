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

#include <tencentcloud/tcbr/v20220217/model/ClsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ClsInfo::ClsInfo() :
    m_clsRegionHasBeenSet(false),
    m_clsLogsetIdHasBeenSet(false),
    m_clsTopicIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ClsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClsRegion") && !value["ClsRegion"].IsNull())
    {
        if (!value["ClsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsInfo.ClsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsRegion = string(value["ClsRegion"].GetString());
        m_clsRegionHasBeenSet = true;
    }

    if (value.HasMember("ClsLogsetId") && !value["ClsLogsetId"].IsNull())
    {
        if (!value["ClsLogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsInfo.ClsLogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsLogsetId = string(value["ClsLogsetId"].GetString());
        m_clsLogsetIdHasBeenSet = true;
    }

    if (value.HasMember("ClsTopicId") && !value["ClsTopicId"].IsNull())
    {
        if (!value["ClsTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsInfo.ClsTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsTopicId = string(value["ClsTopicId"].GetString());
        m_clsTopicIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClsInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_clsLogsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsLogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsLogsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ClsInfo::GetClsRegion() const
{
    return m_clsRegion;
}

void ClsInfo::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool ClsInfo::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}

string ClsInfo::GetClsLogsetId() const
{
    return m_clsLogsetId;
}

void ClsInfo::SetClsLogsetId(const string& _clsLogsetId)
{
    m_clsLogsetId = _clsLogsetId;
    m_clsLogsetIdHasBeenSet = true;
}

bool ClsInfo::ClsLogsetIdHasBeenSet() const
{
    return m_clsLogsetIdHasBeenSet;
}

string ClsInfo::GetClsTopicId() const
{
    return m_clsTopicId;
}

void ClsInfo::SetClsTopicId(const string& _clsTopicId)
{
    m_clsTopicId = _clsTopicId;
    m_clsTopicIdHasBeenSet = true;
}

bool ClsInfo::ClsTopicIdHasBeenSet() const
{
    return m_clsTopicIdHasBeenSet;
}

string ClsInfo::GetCreateTime() const
{
    return m_createTime;
}

void ClsInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClsInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

