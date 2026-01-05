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

#include <tencentcloud/wedata/v20250806/model/QualitySubscribeReceiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualitySubscribeReceiver::QualitySubscribeReceiver() :
    m_receiverUserIdHasBeenSet(false),
    m_receiverNameHasBeenSet(false),
    m_receiverUserIdStrHasBeenSet(false)
{
}

CoreInternalOutcome QualitySubscribeReceiver::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverUserId") && !value["ReceiverUserId"].IsNull())
    {
        if (!value["ReceiverUserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualitySubscribeReceiver.ReceiverUserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverUserId = value["ReceiverUserId"].GetUint64();
        m_receiverUserIdHasBeenSet = true;
    }

    if (value.HasMember("ReceiverName") && !value["ReceiverName"].IsNull())
    {
        if (!value["ReceiverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualitySubscribeReceiver.ReceiverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverName = string(value["ReceiverName"].GetString());
        m_receiverNameHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUserIdStr") && !value["ReceiverUserIdStr"].IsNull())
    {
        if (!value["ReceiverUserIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualitySubscribeReceiver.ReceiverUserIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverUserIdStr = string(value["ReceiverUserIdStr"].GetString());
        m_receiverUserIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualitySubscribeReceiver::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverUserId, allocator);
    }

    if (m_receiverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverName.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverUserIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUserIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverUserIdStr.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualitySubscribeReceiver::GetReceiverUserId() const
{
    return m_receiverUserId;
}

void QualitySubscribeReceiver::SetReceiverUserId(const uint64_t& _receiverUserId)
{
    m_receiverUserId = _receiverUserId;
    m_receiverUserIdHasBeenSet = true;
}

bool QualitySubscribeReceiver::ReceiverUserIdHasBeenSet() const
{
    return m_receiverUserIdHasBeenSet;
}

string QualitySubscribeReceiver::GetReceiverName() const
{
    return m_receiverName;
}

void QualitySubscribeReceiver::SetReceiverName(const string& _receiverName)
{
    m_receiverName = _receiverName;
    m_receiverNameHasBeenSet = true;
}

bool QualitySubscribeReceiver::ReceiverNameHasBeenSet() const
{
    return m_receiverNameHasBeenSet;
}

string QualitySubscribeReceiver::GetReceiverUserIdStr() const
{
    return m_receiverUserIdStr;
}

void QualitySubscribeReceiver::SetReceiverUserIdStr(const string& _receiverUserIdStr)
{
    m_receiverUserIdStr = _receiverUserIdStr;
    m_receiverUserIdStrHasBeenSet = true;
}

bool QualitySubscribeReceiver::ReceiverUserIdStrHasBeenSet() const
{
    return m_receiverUserIdStrHasBeenSet;
}

