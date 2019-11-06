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

#include <tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace rapidjson;
using namespace std;

UploadDeviceUniqueCodeResponse::UploadDeviceUniqueCodeResponse() :
    m_countHasBeenSet(false),
    m_existedCodeSetHasBeenSet(false),
    m_leftQuantityHasBeenSet(false),
    m_illegalCodeSetHasBeenSet(false)
{
}

CoreInternalOutcome UploadDeviceUniqueCodeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (rsp.HasMember("ExistedCodeSet") && !rsp["ExistedCodeSet"].IsNull())
    {
        if (!rsp["ExistedCodeSet"].IsArray())
            return CoreInternalOutcome(Error("response `ExistedCodeSet` is not array type"));

        const Value &tmpValue = rsp["ExistedCodeSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_existedCodeSet.push_back((*itr).GetString());
        }
        m_existedCodeSetHasBeenSet = true;
    }

    if (rsp.HasMember("LeftQuantity") && !rsp["LeftQuantity"].IsNull())
    {
        if (!rsp["LeftQuantity"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `LeftQuantity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftQuantity = rsp["LeftQuantity"].GetUint64();
        m_leftQuantityHasBeenSet = true;
    }

    if (rsp.HasMember("IllegalCodeSet") && !rsp["IllegalCodeSet"].IsNull())
    {
        if (!rsp["IllegalCodeSet"].IsArray())
            return CoreInternalOutcome(Error("response `IllegalCodeSet` is not array type"));

        const Value &tmpValue = rsp["IllegalCodeSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_illegalCodeSet.push_back((*itr).GetString());
        }
        m_illegalCodeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t UploadDeviceUniqueCodeResponse::GetCount() const
{
    return m_count;
}

bool UploadDeviceUniqueCodeResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<string> UploadDeviceUniqueCodeResponse::GetExistedCodeSet() const
{
    return m_existedCodeSet;
}

bool UploadDeviceUniqueCodeResponse::ExistedCodeSetHasBeenSet() const
{
    return m_existedCodeSetHasBeenSet;
}

uint64_t UploadDeviceUniqueCodeResponse::GetLeftQuantity() const
{
    return m_leftQuantity;
}

bool UploadDeviceUniqueCodeResponse::LeftQuantityHasBeenSet() const
{
    return m_leftQuantityHasBeenSet;
}

vector<string> UploadDeviceUniqueCodeResponse::GetIllegalCodeSet() const
{
    return m_illegalCodeSet;
}

bool UploadDeviceUniqueCodeResponse::IllegalCodeSetHasBeenSet() const
{
    return m_illegalCodeSetHasBeenSet;
}


