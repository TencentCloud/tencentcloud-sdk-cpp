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

#include <tencentcloud/ie/v20200304/model/MediaCuttingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace rapidjson;
using namespace std;

MediaCuttingInfo::MediaCuttingInfo() :
    m_timeInfoHasBeenSet(false),
    m_targetInfoHasBeenSet(false),
    m_outFormHasBeenSet(false),
    m_resultListSaveTypeHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeInfo") && !value["TimeInfo"].IsNull())
    {
        if (!value["TimeInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaCuttingInfo.TimeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeInfo.Deserialize(value["TimeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeInfoHasBeenSet = true;
    }

    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaCuttingInfo.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }

    if (value.HasMember("OutForm") && !value["OutForm"].IsNull())
    {
        if (!value["OutForm"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaCuttingInfo.OutForm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outForm.Deserialize(value["OutForm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outFormHasBeenSet = true;
    }

    if (value.HasMember("ResultListSaveType") && !value["ResultListSaveType"].IsNull())
    {
        if (!value["ResultListSaveType"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaCuttingInfo.ResultListSaveType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultListSaveType = string(value["ResultListSaveType"].GetString());
        m_resultListSaveTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_timeInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_timeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outFormHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outForm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultListSaveTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultListSaveType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resultListSaveType.c_str(), allocator).Move(), allocator);
    }

}


MediaCuttingTimeInfo MediaCuttingInfo::GetTimeInfo() const
{
    return m_timeInfo;
}

void MediaCuttingInfo::SetTimeInfo(const MediaCuttingTimeInfo& _timeInfo)
{
    m_timeInfo = _timeInfo;
    m_timeInfoHasBeenSet = true;
}

bool MediaCuttingInfo::TimeInfoHasBeenSet() const
{
    return m_timeInfoHasBeenSet;
}

MediaTargetInfo MediaCuttingInfo::GetTargetInfo() const
{
    return m_targetInfo;
}

void MediaCuttingInfo::SetTargetInfo(const MediaTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool MediaCuttingInfo::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

MediaCuttingOutForm MediaCuttingInfo::GetOutForm() const
{
    return m_outForm;
}

void MediaCuttingInfo::SetOutForm(const MediaCuttingOutForm& _outForm)
{
    m_outForm = _outForm;
    m_outFormHasBeenSet = true;
}

bool MediaCuttingInfo::OutFormHasBeenSet() const
{
    return m_outFormHasBeenSet;
}

string MediaCuttingInfo::GetResultListSaveType() const
{
    return m_resultListSaveType;
}

void MediaCuttingInfo::SetResultListSaveType(const string& _resultListSaveType)
{
    m_resultListSaveType = _resultListSaveType;
    m_resultListSaveTypeHasBeenSet = true;
}

bool MediaCuttingInfo::ResultListSaveTypeHasBeenSet() const
{
    return m_resultListSaveTypeHasBeenSet;
}

