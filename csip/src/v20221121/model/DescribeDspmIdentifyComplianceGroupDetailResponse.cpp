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

#include <tencentcloud/csip/v20221121/model/DescribeDspmIdentifyComplianceGroupDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmIdentifyComplianceGroupDetailResponse::DescribeDspmIdentifyComplianceGroupDetailResponse() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_levelGroupNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmIdentifyComplianceGroupDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("LevelGroupId") && !rsp["LevelGroupId"].IsNull())
    {
        if (!rsp["LevelGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = rsp["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("Detail") && !rsp["Detail"].IsNull())
    {
        if (!rsp["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Detail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyComplianceCategoryRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }

    if (rsp.HasMember("LevelGroupName") && !rsp["LevelGroupName"].IsNull())
    {
        if (!rsp["LevelGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LevelGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupName = string(rsp["LevelGroupName"].GetString());
        m_levelGroupNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelGroupId, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeDspmIdentifyComplianceGroupDetailResponse::GetId() const
{
    return m_id;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::GetName() const
{
    return m_name;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DescribeDspmIdentifyComplianceGroupDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeDspmIdentifyComplianceGroupDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeDspmIdentifyComplianceGroupDetailResponse::GetLevelGroupId() const
{
    return m_levelGroupId;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

vector<DspmIdentifyComplianceCategoryRelation> DescribeDspmIdentifyComplianceGroupDetailResponse::GetDetail() const
{
    return m_detail;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::GetLevelGroupName() const
{
    return m_levelGroupName;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::LevelGroupNameHasBeenSet() const
{
    return m_levelGroupNameHasBeenSet;
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDspmIdentifyComplianceGroupDetailResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeDspmIdentifyComplianceGroupDetailResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}


