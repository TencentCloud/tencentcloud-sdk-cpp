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

#include <tencentcloud/mps/v20190612/model/LiveActivityResItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveActivityResItem::LiveActivityResItem() :
    m_liveRecordTaskHasBeenSet(false),
    m_liveQualityControlTaskHasBeenSet(false)
{
}

CoreInternalOutcome LiveActivityResItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LiveRecordTask") && !value["LiveRecordTask"].IsNull())
    {
        if (!value["LiveRecordTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveActivityResItem.LiveRecordTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveRecordTask.Deserialize(value["LiveRecordTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveRecordTaskHasBeenSet = true;
    }

    if (value.HasMember("LiveQualityControlTask") && !value["LiveQualityControlTask"].IsNull())
    {
        if (!value["LiveQualityControlTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveActivityResItem.LiveQualityControlTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_liveQualityControlTask.Deserialize(value["LiveQualityControlTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_liveQualityControlTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveActivityResItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_liveRecordTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveRecordTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveRecordTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_liveQualityControlTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveQualityControlTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_liveQualityControlTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


LiveScheduleLiveRecordTaskResult LiveActivityResItem::GetLiveRecordTask() const
{
    return m_liveRecordTask;
}

void LiveActivityResItem::SetLiveRecordTask(const LiveScheduleLiveRecordTaskResult& _liveRecordTask)
{
    m_liveRecordTask = _liveRecordTask;
    m_liveRecordTaskHasBeenSet = true;
}

bool LiveActivityResItem::LiveRecordTaskHasBeenSet() const
{
    return m_liveRecordTaskHasBeenSet;
}

ScheduleQualityControlTaskResult LiveActivityResItem::GetLiveQualityControlTask() const
{
    return m_liveQualityControlTask;
}

void LiveActivityResItem::SetLiveQualityControlTask(const ScheduleQualityControlTaskResult& _liveQualityControlTask)
{
    m_liveQualityControlTask = _liveQualityControlTask;
    m_liveQualityControlTaskHasBeenSet = true;
}

bool LiveActivityResItem::LiveQualityControlTaskHasBeenSet() const
{
    return m_liveQualityControlTaskHasBeenSet;
}

