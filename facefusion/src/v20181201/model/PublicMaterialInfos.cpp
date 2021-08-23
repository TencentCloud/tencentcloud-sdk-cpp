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

#include <tencentcloud/facefusion/v20181201/model/PublicMaterialInfos.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

PublicMaterialInfos::PublicMaterialInfos() :
    m_materialIdHasBeenSet(false),
    m_materialStatusHasBeenSet(false),
    m_blendParamPtuHasBeenSet(false),
    m_positionParamPtuHasBeenSet(false),
    m_blendParamYoutuHasBeenSet(false),
    m_positionParamYoutuHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_materialFaceListHasBeenSet(false)
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

    if (value.HasMember("BlendParamPtu") && !value["BlendParamPtu"].IsNull())
    {
        if (!value["BlendParamPtu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.BlendParamPtu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blendParamPtu = value["BlendParamPtu"].GetInt64();
        m_blendParamPtuHasBeenSet = true;
    }

    if (value.HasMember("PositionParamPtu") && !value["PositionParamPtu"].IsNull())
    {
        if (!value["PositionParamPtu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.PositionParamPtu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_positionParamPtu = value["PositionParamPtu"].GetInt64();
        m_positionParamPtuHasBeenSet = true;
    }

    if (value.HasMember("BlendParamYoutu") && !value["BlendParamYoutu"].IsNull())
    {
        if (!value["BlendParamYoutu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.BlendParamYoutu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blendParamYoutu = value["BlendParamYoutu"].GetInt64();
        m_blendParamYoutuHasBeenSet = true;
    }

    if (value.HasMember("PositionParamYoutu") && !value["PositionParamYoutu"].IsNull())
    {
        if (!value["PositionParamYoutu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.PositionParamYoutu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_positionParamYoutu = value["PositionParamYoutu"].GetInt64();
        m_positionParamYoutuHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicMaterialInfos.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
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
            MaterialFaceList item;
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

    if (m_blendParamPtuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlendParamPtu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blendParamPtu, allocator);
    }

    if (m_positionParamPtuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionParamPtu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionParamPtu, allocator);
    }

    if (m_blendParamYoutuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlendParamYoutu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blendParamYoutu, allocator);
    }

    if (m_positionParamYoutuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionParamYoutu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionParamYoutu, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
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

int64_t PublicMaterialInfos::GetBlendParamPtu() const
{
    return m_blendParamPtu;
}

void PublicMaterialInfos::SetBlendParamPtu(const int64_t& _blendParamPtu)
{
    m_blendParamPtu = _blendParamPtu;
    m_blendParamPtuHasBeenSet = true;
}

bool PublicMaterialInfos::BlendParamPtuHasBeenSet() const
{
    return m_blendParamPtuHasBeenSet;
}

int64_t PublicMaterialInfos::GetPositionParamPtu() const
{
    return m_positionParamPtu;
}

void PublicMaterialInfos::SetPositionParamPtu(const int64_t& _positionParamPtu)
{
    m_positionParamPtu = _positionParamPtu;
    m_positionParamPtuHasBeenSet = true;
}

bool PublicMaterialInfos::PositionParamPtuHasBeenSet() const
{
    return m_positionParamPtuHasBeenSet;
}

int64_t PublicMaterialInfos::GetBlendParamYoutu() const
{
    return m_blendParamYoutu;
}

void PublicMaterialInfos::SetBlendParamYoutu(const int64_t& _blendParamYoutu)
{
    m_blendParamYoutu = _blendParamYoutu;
    m_blendParamYoutuHasBeenSet = true;
}

bool PublicMaterialInfos::BlendParamYoutuHasBeenSet() const
{
    return m_blendParamYoutuHasBeenSet;
}

int64_t PublicMaterialInfos::GetPositionParamYoutu() const
{
    return m_positionParamYoutu;
}

void PublicMaterialInfos::SetPositionParamYoutu(const int64_t& _positionParamYoutu)
{
    m_positionParamYoutu = _positionParamYoutu;
    m_positionParamYoutuHasBeenSet = true;
}

bool PublicMaterialInfos::PositionParamYoutuHasBeenSet() const
{
    return m_positionParamYoutuHasBeenSet;
}

string PublicMaterialInfos::GetUrl() const
{
    return m_url;
}

void PublicMaterialInfos::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool PublicMaterialInfos::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
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

vector<MaterialFaceList> PublicMaterialInfos::GetMaterialFaceList() const
{
    return m_materialFaceList;
}

void PublicMaterialInfos::SetMaterialFaceList(const vector<MaterialFaceList>& _materialFaceList)
{
    m_materialFaceList = _materialFaceList;
    m_materialFaceListHasBeenSet = true;
}

bool PublicMaterialInfos::MaterialFaceListHasBeenSet() const
{
    return m_materialFaceListHasBeenSet;
}

