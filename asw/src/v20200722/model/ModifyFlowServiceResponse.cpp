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

#include <tencentcloud/asw/v20200722/model/ModifyFlowServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

ModifyFlowServiceResponse::ModifyFlowServiceResponse() :
    m_flowServiceResourceHasBeenSet(false),
    m_updateDateHasBeenSet(false)
{
}

CoreInternalOutcome ModifyFlowServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowServiceResource") && !rsp["FlowServiceResource"].IsNull())
    {
        if (!rsp["FlowServiceResource"].IsString())
        {
            return CoreInternalOutcome(Error("response `FlowServiceResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowServiceResource = string(rsp["FlowServiceResource"].GetString());
        m_flowServiceResourceHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateDate") && !rsp["UpdateDate"].IsNull())
    {
        if (!rsp["UpdateDate"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateDate = string(rsp["UpdateDate"].GetString());
        m_updateDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string ModifyFlowServiceResponse::GetFlowServiceResource() const
{
    return m_flowServiceResource;
}

bool ModifyFlowServiceResponse::FlowServiceResourceHasBeenSet() const
{
    return m_flowServiceResourceHasBeenSet;
}

string ModifyFlowServiceResponse::GetUpdateDate() const
{
    return m_updateDate;
}

bool ModifyFlowServiceResponse::UpdateDateHasBeenSet() const
{
    return m_updateDateHasBeenSet;
}


