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

#include <tencentcloud/facefusion/v20220927/model/PublicMaterialInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

PublicMaterialInfos::PublicMaterialInfos() :
    m_materialIdHasBeenSet(false),
    m_materialStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_materialFaceListHasBeenSet(false),
    m_materialNameHasBeenSet(false),
    m_auditResultHasBeenSet(false)
{
}

CoreInternalOutcome PublicMaterialInfos::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("MaterialStatus") && !value["MaterialStatus"].IsNull())
    {
        if (!value["MaterialStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.MaterialStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_materialStatus = value["MaterialStatus"].GetInt64();
        m_materialStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MaterialFaceList") && !value["MaterialFaceList"].IsNull())
    {
        if (!value["MaterialFaceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.MaterialFaceList` is not array type"));

        const rapidjson::Value &tmpValue = value["MaterialFaceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MaterialFaces item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_materialFaceList.push_back(item);
        }
        m_materialFaceListHasBeenSet = true;
    }

    if (value.HasMember("MaterialName") && !value["MaterialName"].IsNull())
    {
        if (!value["MaterialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.MaterialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialName = string(value["MaterialName"].GetString());
        m_materialNameHasBeenSet = true;
    }

    if (value.HasMember("AuditResult") && !value["AuditResult"].IsNull())
    {
        if (!value["AuditResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.AuditResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditResult = string(value["AuditResult"].GetString());
        m_auditResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicMaterialInfos::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_materialStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_materialStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_materialFaceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialFaceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_materialFaceList.begin(); itr != m_materialFaceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_materialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialName.c_str(), allocator).Move(), allocator);
    }

    if (m_auditResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditResult.c_str(), allocator).Move(), allocator);
    }

}


string PublicMaterialInfos::GetMaterialId() const
{
    return m_materialId;
}

void PublicMaterialInfos::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool PublicMaterialInfos::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

int64_t PublicMaterialInfos::GetMaterialStatus() const
{
    return m_materialStatus;
}

void PublicMaterialInfos::SetMaterialStatus(const int64_t& _materialStatus)
{
    m_materialStatus = _materialStatus;
    m_materialStatusHasBeenSet = true;
}

bool PublicMaterialInfos::MaterialStatusHasBeenSet() const
{
    return m_materialStatusHasBeenSet;
}

string PublicMaterialInfos::GetCreateTime() const
{
    return m_createTime;
}

void PublicMaterialInfos::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PublicMaterialInfos::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PublicMaterialInfos::GetUpdateTime() const
{
    return m_updateTime;
}

void PublicMaterialInfos::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PublicMaterialInfos::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<MaterialFaces> PublicMaterialInfos::GetMaterialFaceList() const
{
    return m_materialFaceList;
}

void PublicMaterialInfos::SetMaterialFaceList(const vector<MaterialFaces>& _materialFaceList)
{
    m_materialFaceList = _materialFaceList;
    m_materialFaceListHasBeenSet = true;
}

bool PublicMaterialInfos::MaterialFaceListHasBeenSet() const
{
    return m_materialFaceListHasBeenSet;
}

string PublicMaterialInfos::GetMaterialName() const
{
    return m_materialName;
}

void PublicMaterialInfos::SetMaterialName(const string& _materialName)
{
    m_materialName = _materialName;
    m_materialNameHasBeenSet = true;
}

bool PublicMaterialInfos::MaterialNameHasBeenSet() const
{
    return m_materialNameHasBeenSet;
}

string PublicMaterialInfos::GetAuditResult() const
{
    return m_auditResult;
}

void PublicMaterialInfos::SetAuditResult(const string& _auditResult)
{
    m_auditResult = _auditResult;
    m_auditResultHasBeenSet = true;
}

bool PublicMaterialInfos::AuditResultHasBeenSet() const
{
    return m_auditResultHasBeenSet;
}

