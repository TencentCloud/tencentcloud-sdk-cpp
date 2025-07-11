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

#include <tencentcloud/lke/v20231130/model/CreateQACateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CreateQACateResponse::CreateQACateResponse() :
    m_canAddHasBeenSet(false),
    m_canEditHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_cateBizIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateQACateResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CanAdd") && !rsp["CanAdd"].IsNull())
    {
        if (!rsp["CanAdd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CanAdd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAdd = rsp["CanAdd"].GetBool();
        m_canAddHasBeenSet = true;
    }

    if (rsp.HasMember("CanEdit") && !rsp["CanEdit"].IsNull())
    {
        if (!rsp["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = rsp["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }

    if (rsp.HasMember("CanDelete") && !rsp["CanDelete"].IsNull())
    {
        if (!rsp["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = rsp["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (rsp.HasMember("CateBizId") && !rsp["CateBizId"].IsNull())
    {
        if (!rsp["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(rsp["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateQACateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_canAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAdd, allocator);
    }

    if (m_canEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEdit, allocator);
    }

    if (m_canDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDelete, allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


bool CreateQACateResponse::GetCanAdd() const
{
    return m_canAdd;
}

bool CreateQACateResponse::CanAddHasBeenSet() const
{
    return m_canAddHasBeenSet;
}

bool CreateQACateResponse::GetCanEdit() const
{
    return m_canEdit;
}

bool CreateQACateResponse::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

bool CreateQACateResponse::GetCanDelete() const
{
    return m_canDelete;
}

bool CreateQACateResponse::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

string CreateQACateResponse::GetCateBizId() const
{
    return m_cateBizId;
}

bool CreateQACateResponse::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}


