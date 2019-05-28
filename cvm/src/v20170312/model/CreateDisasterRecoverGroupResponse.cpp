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

#include <tencentcloud/cvm/v20170312/model/CreateDisasterRecoverGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateDisasterRecoverGroupResponse::CreateDisasterRecoverGroupResponse() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cvmQuotaTotalHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateDisasterRecoverGroupResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("DisasterRecoverGroupId") && !rsp["DisasterRecoverGroupId"].IsNull())
    {
        if (!rsp["DisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupId = string(rsp["DisasterRecoverGroupId"].GetString());
        m_disasterRecoverGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("CvmQuotaTotal") && !rsp["CvmQuotaTotal"].IsNull())
    {
        if (!rsp["CvmQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CvmQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmQuotaTotal = rsp["CvmQuotaTotal"].GetInt64();
        m_cvmQuotaTotalHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentNum") && !rsp["CurrentNum"].IsNull())
    {
        if (!rsp["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = rsp["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateDisasterRecoverGroupResponse::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

bool CreateDisasterRecoverGroupResponse::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

string CreateDisasterRecoverGroupResponse::GetType() const
{
    return m_type;
}

bool CreateDisasterRecoverGroupResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateDisasterRecoverGroupResponse::GetName() const
{
    return m_name;
}

bool CreateDisasterRecoverGroupResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateDisasterRecoverGroupResponse::GetCvmQuotaTotal() const
{
    return m_cvmQuotaTotal;
}

bool CreateDisasterRecoverGroupResponse::CvmQuotaTotalHasBeenSet() const
{
    return m_cvmQuotaTotalHasBeenSet;
}

int64_t CreateDisasterRecoverGroupResponse::GetCurrentNum() const
{
    return m_currentNum;
}

bool CreateDisasterRecoverGroupResponse::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

string CreateDisasterRecoverGroupResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateDisasterRecoverGroupResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


