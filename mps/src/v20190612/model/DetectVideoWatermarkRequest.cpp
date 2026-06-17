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

#include <tencentcloud/mps/v20190612/model/DetectVideoWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DetectVideoWatermarkRequest::DetectVideoWatermarkRequest() :
    m_inputInfoHasBeenSet(false),
    m_userExtParaHasBeenSet(false)
{
}

string DetectVideoWatermarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userExtParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserExtPara";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userExtPara.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MediaInputInfo DetectVideoWatermarkRequest::GetInputInfo() const
{
    return m_inputInfo;
}

void DetectVideoWatermarkRequest::SetInputInfo(const MediaInputInfo& _inputInfo)
{
    m_inputInfo = _inputInfo;
    m_inputInfoHasBeenSet = true;
}

bool DetectVideoWatermarkRequest::InputInfoHasBeenSet() const
{
    return m_inputInfoHasBeenSet;
}

string DetectVideoWatermarkRequest::GetUserExtPara() const
{
    return m_userExtPara;
}

void DetectVideoWatermarkRequest::SetUserExtPara(const string& _userExtPara)
{
    m_userExtPara = _userExtPara;
    m_userExtParaHasBeenSet = true;
}

bool DetectVideoWatermarkRequest::UserExtParaHasBeenSet() const
{
    return m_userExtParaHasBeenSet;
}


