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

#include <tencentcloud/monitor/v20230616/model/QCloudYeheWeChatNoticeTmplItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

QCloudYeheWeChatNoticeTmplItem::QCloudYeheWeChatNoticeTmplItem() :
    m_alarmContentTmplHasBeenSet(false),
    m_alarmObjectTmplHasBeenSet(false),
    m_alarmRegionTmplHasBeenSet(false),
    m_alarmTimeTmplHasBeenSet(false)
{
}

CoreInternalOutcome QCloudYeheWeChatNoticeTmplItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmContentTmpl") && !value["AlarmContentTmpl"].IsNull())
    {
        if (!value["AlarmContentTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheWeChatNoticeTmplItem.AlarmContentTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmContentTmpl = string(value["AlarmContentTmpl"].GetString());
        m_alarmContentTmplHasBeenSet = true;
    }

    if (value.HasMember("AlarmObjectTmpl") && !value["AlarmObjectTmpl"].IsNull())
    {
        if (!value["AlarmObjectTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheWeChatNoticeTmplItem.AlarmObjectTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmObjectTmpl = string(value["AlarmObjectTmpl"].GetString());
        m_alarmObjectTmplHasBeenSet = true;
    }

    if (value.HasMember("AlarmRegionTmpl") && !value["AlarmRegionTmpl"].IsNull())
    {
        if (!value["AlarmRegionTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheWeChatNoticeTmplItem.AlarmRegionTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRegionTmpl = string(value["AlarmRegionTmpl"].GetString());
        m_alarmRegionTmplHasBeenSet = true;
    }

    if (value.HasMember("AlarmTimeTmpl") && !value["AlarmTimeTmpl"].IsNull())
    {
        if (!value["AlarmTimeTmpl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QCloudYeheWeChatNoticeTmplItem.AlarmTimeTmpl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmTimeTmpl = string(value["AlarmTimeTmpl"].GetString());
        m_alarmTimeTmplHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QCloudYeheWeChatNoticeTmplItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmContentTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmContentTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmContentTmpl.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmObjectTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmObjectTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmObjectTmpl.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRegionTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRegionTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRegionTmpl.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTimeTmplHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTimeTmpl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmTimeTmpl.c_str(), allocator).Move(), allocator);
    }

}


string QCloudYeheWeChatNoticeTmplItem::GetAlarmContentTmpl() const
{
    return m_alarmContentTmpl;
}

void QCloudYeheWeChatNoticeTmplItem::SetAlarmContentTmpl(const string& _alarmContentTmpl)
{
    m_alarmContentTmpl = _alarmContentTmpl;
    m_alarmContentTmplHasBeenSet = true;
}

bool QCloudYeheWeChatNoticeTmplItem::AlarmContentTmplHasBeenSet() const
{
    return m_alarmContentTmplHasBeenSet;
}

string QCloudYeheWeChatNoticeTmplItem::GetAlarmObjectTmpl() const
{
    return m_alarmObjectTmpl;
}

void QCloudYeheWeChatNoticeTmplItem::SetAlarmObjectTmpl(const string& _alarmObjectTmpl)
{
    m_alarmObjectTmpl = _alarmObjectTmpl;
    m_alarmObjectTmplHasBeenSet = true;
}

bool QCloudYeheWeChatNoticeTmplItem::AlarmObjectTmplHasBeenSet() const
{
    return m_alarmObjectTmplHasBeenSet;
}

string QCloudYeheWeChatNoticeTmplItem::GetAlarmRegionTmpl() const
{
    return m_alarmRegionTmpl;
}

void QCloudYeheWeChatNoticeTmplItem::SetAlarmRegionTmpl(const string& _alarmRegionTmpl)
{
    m_alarmRegionTmpl = _alarmRegionTmpl;
    m_alarmRegionTmplHasBeenSet = true;
}

bool QCloudYeheWeChatNoticeTmplItem::AlarmRegionTmplHasBeenSet() const
{
    return m_alarmRegionTmplHasBeenSet;
}

string QCloudYeheWeChatNoticeTmplItem::GetAlarmTimeTmpl() const
{
    return m_alarmTimeTmpl;
}

void QCloudYeheWeChatNoticeTmplItem::SetAlarmTimeTmpl(const string& _alarmTimeTmpl)
{
    m_alarmTimeTmpl = _alarmTimeTmpl;
    m_alarmTimeTmplHasBeenSet = true;
}

bool QCloudYeheWeChatNoticeTmplItem::AlarmTimeTmplHasBeenSet() const
{
    return m_alarmTimeTmplHasBeenSet;
}

