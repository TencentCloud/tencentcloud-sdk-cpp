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

#include <tencentcloud/live/v20180801/model/CommonMixControlParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

CommonMixControlParams::CommonMixControlParams() :
    m_useMixCropCenterHasBeenSet(false),
    m_allowCopyHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixControlParams::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("UseMixCropCenter") && !value["UseMixCropCenter"].IsNull())
    {
        if (!value["UseMixCropCenter"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CommonMixControlParams.UseMixCropCenter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useMixCropCenter = value["UseMixCropCenter"].GetInt64();
        m_useMixCropCenterHasBeenSet = true;
    }

    if (value.HasMember("AllowCopy") && !value["AllowCopy"].IsNull())
    {
        if (!value["AllowCopy"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CommonMixControlParams.AllowCopy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allowCopy = value["AllowCopy"].GetInt64();
        m_allowCopyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixControlParams::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_useMixCropCenterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UseMixCropCenter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useMixCropCenter, allocator);
    }

    if (m_allowCopyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AllowCopy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowCopy, allocator);
    }

}


int64_t CommonMixControlParams::GetUseMixCropCenter() const
{
    return m_useMixCropCenter;
}

void CommonMixControlParams::SetUseMixCropCenter(const int64_t& _useMixCropCenter)
{
    m_useMixCropCenter = _useMixCropCenter;
    m_useMixCropCenterHasBeenSet = true;
}

bool CommonMixControlParams::UseMixCropCenterHasBeenSet() const
{
    return m_useMixCropCenterHasBeenSet;
}

int64_t CommonMixControlParams::GetAllowCopy() const
{
    return m_allowCopy;
}

void CommonMixControlParams::SetAllowCopy(const int64_t& _allowCopy)
{
    m_allowCopy = _allowCopy;
    m_allowCopyHasBeenSet = true;
}

bool CommonMixControlParams::AllowCopyHasBeenSet() const
{
    return m_allowCopyHasBeenSet;
}

