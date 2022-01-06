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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeSceneResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeSceneResponse::DescribeSceneResponse() :
    m_intIdHasBeenSet(false),
    m_recordDurationHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_sceneTriggerHasBeenSet(false),
    m_storeDurationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSceneResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("IntId") && !rsp["IntId"].IsNull())
    {
        if (!rsp["IntId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intId = rsp["IntId"].GetInt64();
        m_intIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordDuration") && !rsp["RecordDuration"].IsNull())
    {
        if (!rsp["RecordDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordDuration = rsp["RecordDuration"].GetInt64();
        m_recordDurationHasBeenSet = true;
    }

    if (rsp.HasMember("SceneName") && !rsp["SceneName"].IsNull())
    {
        if (!rsp["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(rsp["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }

    if (rsp.HasMember("SceneTrigger") && !rsp["SceneTrigger"].IsNull())
    {
        if (!rsp["SceneTrigger"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneTrigger` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneTrigger = string(rsp["SceneTrigger"].GetString());
        m_sceneTriggerHasBeenSet = true;
    }

    if (rsp.HasMember("StoreDuration") && !rsp["StoreDuration"].IsNull())
    {
        if (!rsp["StoreDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StoreDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storeDuration = rsp["StoreDuration"].GetInt64();
        m_storeDurationHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSceneResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intId, allocator);
    }

    if (m_recordDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordDuration, allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTriggerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneTrigger";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneTrigger.c_str(), allocator).Move(), allocator);
    }

    if (m_storeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeDuration, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSceneResponse::GetIntId() const
{
    return m_intId;
}

bool DescribeSceneResponse::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}

int64_t DescribeSceneResponse::GetRecordDuration() const
{
    return m_recordDuration;
}

bool DescribeSceneResponse::RecordDurationHasBeenSet() const
{
    return m_recordDurationHasBeenSet;
}

string DescribeSceneResponse::GetSceneName() const
{
    return m_sceneName;
}

bool DescribeSceneResponse::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

string DescribeSceneResponse::GetSceneTrigger() const
{
    return m_sceneTrigger;
}

bool DescribeSceneResponse::SceneTriggerHasBeenSet() const
{
    return m_sceneTriggerHasBeenSet;
}

int64_t DescribeSceneResponse::GetStoreDuration() const
{
    return m_storeDuration;
}

bool DescribeSceneResponse::StoreDurationHasBeenSet() const
{
    return m_storeDurationHasBeenSet;
}

string DescribeSceneResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSceneResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeSceneResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeSceneResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeSceneResponse::GetUin() const
{
    return m_uin;
}

bool DescribeSceneResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}


