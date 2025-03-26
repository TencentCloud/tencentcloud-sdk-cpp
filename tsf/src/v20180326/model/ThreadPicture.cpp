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

#include <tencentcloud/tsf/v20180326/model/ThreadPicture.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ThreadPicture::ThreadPicture() :
    m_threadCountHasBeenSet(false),
    m_threadActiveHasBeenSet(false),
    m_deamonThreadCountHasBeenSet(false),
    m_daemonThreadCountHasBeenSet(false)
{
}

CoreInternalOutcome ThreadPicture::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ThreadCount") && !value["ThreadCount"].IsNull())
    {
        if (!value["ThreadCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadPicture.ThreadCount` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreadCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_threadCount.push_back(item);
        }
        m_threadCountHasBeenSet = true;
    }

    if (value.HasMember("ThreadActive") && !value["ThreadActive"].IsNull())
    {
        if (!value["ThreadActive"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadPicture.ThreadActive` is not array type"));

        const rapidjson::Value &tmpValue = value["ThreadActive"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_threadActive.push_back(item);
        }
        m_threadActiveHasBeenSet = true;
    }

    if (value.HasMember("DeamonThreadCount") && !value["DeamonThreadCount"].IsNull())
    {
        if (!value["DeamonThreadCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadPicture.DeamonThreadCount` is not array type"));

        const rapidjson::Value &tmpValue = value["DeamonThreadCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deamonThreadCount.push_back(item);
        }
        m_deamonThreadCountHasBeenSet = true;
    }

    if (value.HasMember("DaemonThreadCount") && !value["DaemonThreadCount"].IsNull())
    {
        if (!value["DaemonThreadCount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadPicture.DaemonThreadCount` is not array type"));

        const rapidjson::Value &tmpValue = value["DaemonThreadCount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CurvePoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_daemonThreadCount.push_back(item);
        }
        m_daemonThreadCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThreadPicture::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_threadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_threadCount.begin(); itr != m_threadCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_threadActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_threadActive.begin(); itr != m_threadActive.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deamonThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeamonThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deamonThreadCount.begin(); itr != m_deamonThreadCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_daemonThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DaemonThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_daemonThreadCount.begin(); itr != m_daemonThreadCount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CurvePoint> ThreadPicture::GetThreadCount() const
{
    return m_threadCount;
}

void ThreadPicture::SetThreadCount(const vector<CurvePoint>& _threadCount)
{
    m_threadCount = _threadCount;
    m_threadCountHasBeenSet = true;
}

bool ThreadPicture::ThreadCountHasBeenSet() const
{
    return m_threadCountHasBeenSet;
}

vector<CurvePoint> ThreadPicture::GetThreadActive() const
{
    return m_threadActive;
}

void ThreadPicture::SetThreadActive(const vector<CurvePoint>& _threadActive)
{
    m_threadActive = _threadActive;
    m_threadActiveHasBeenSet = true;
}

bool ThreadPicture::ThreadActiveHasBeenSet() const
{
    return m_threadActiveHasBeenSet;
}

vector<CurvePoint> ThreadPicture::GetDeamonThreadCount() const
{
    return m_deamonThreadCount;
}

void ThreadPicture::SetDeamonThreadCount(const vector<CurvePoint>& _deamonThreadCount)
{
    m_deamonThreadCount = _deamonThreadCount;
    m_deamonThreadCountHasBeenSet = true;
}

bool ThreadPicture::DeamonThreadCountHasBeenSet() const
{
    return m_deamonThreadCountHasBeenSet;
}

vector<CurvePoint> ThreadPicture::GetDaemonThreadCount() const
{
    return m_daemonThreadCount;
}

void ThreadPicture::SetDaemonThreadCount(const vector<CurvePoint>& _daemonThreadCount)
{
    m_daemonThreadCount = _daemonThreadCount;
    m_daemonThreadCountHasBeenSet = true;
}

bool ThreadPicture::DaemonThreadCountHasBeenSet() const
{
    return m_daemonThreadCountHasBeenSet;
}

