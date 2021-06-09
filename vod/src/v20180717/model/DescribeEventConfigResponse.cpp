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

#include <tencentcloud/vod/v20180717/model/DescribeEventConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeEventConfigResponse::DescribeEventConfigResponse() :
    m_modeHasBeenSet(false),
    m_notificationUrlHasBeenSet(false),
    m_uploadMediaCompleteEventSwitchHasBeenSet(false),
    m_deleteMediaCompleteEventSwitchHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEventConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Mode") && !rsp["Mode"].IsNull())
    {
        if (!rsp["Mode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(rsp["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (rsp.HasMember("NotificationUrl") && !rsp["NotificationUrl"].IsNull())
    {
        if (!rsp["NotificationUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotificationUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notificationUrl = string(rsp["NotificationUrl"].GetString());
        m_notificationUrlHasBeenSet = true;
    }

    if (rsp.HasMember("UploadMediaCompleteEventSwitch") && !rsp["UploadMediaCompleteEventSwitch"].IsNull())
    {
        if (!rsp["UploadMediaCompleteEventSwitch"].IsString())
        {
            return CoreInternalOutcome(Error("response `UploadMediaCompleteEventSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadMediaCompleteEventSwitch = string(rsp["UploadMediaCompleteEventSwitch"].GetString());
        m_uploadMediaCompleteEventSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteMediaCompleteEventSwitch") && !rsp["DeleteMediaCompleteEventSwitch"].IsNull())
    {
        if (!rsp["DeleteMediaCompleteEventSwitch"].IsString())
        {
            return CoreInternalOutcome(Error("response `DeleteMediaCompleteEventSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteMediaCompleteEventSwitch = string(rsp["DeleteMediaCompleteEventSwitch"].GetString());
        m_deleteMediaCompleteEventSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeEventConfigResponse::GetMode() const
{
    return m_mode;
}

bool DescribeEventConfigResponse::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeEventConfigResponse::GetNotificationUrl() const
{
    return m_notificationUrl;
}

bool DescribeEventConfigResponse::NotificationUrlHasBeenSet() const
{
    return m_notificationUrlHasBeenSet;
}

string DescribeEventConfigResponse::GetUploadMediaCompleteEventSwitch() const
{
    return m_uploadMediaCompleteEventSwitch;
}

bool DescribeEventConfigResponse::UploadMediaCompleteEventSwitchHasBeenSet() const
{
    return m_uploadMediaCompleteEventSwitchHasBeenSet;
}

string DescribeEventConfigResponse::GetDeleteMediaCompleteEventSwitch() const
{
    return m_deleteMediaCompleteEventSwitch;
}

bool DescribeEventConfigResponse::DeleteMediaCompleteEventSwitchHasBeenSet() const
{
    return m_deleteMediaCompleteEventSwitchHasBeenSet;
}


