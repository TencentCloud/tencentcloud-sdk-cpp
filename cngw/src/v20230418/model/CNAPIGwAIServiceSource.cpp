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

#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CNAPIGwAIServiceSource::CNAPIGwAIServiceSource() :
    m_sourceNameHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceProductHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CNAPIGwAIServiceSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceProduct") && !value["SourceProduct"].IsNull())
    {
        if (!value["SourceProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.SourceProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceProduct = string(value["SourceProduct"].GetString());
        m_sourceProductHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.SourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInfo.Deserialize(value["SourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CNAPIGwAIServiceSource.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CNAPIGwAIServiceSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

}


string CNAPIGwAIServiceSource::GetSourceName() const
{
    return m_sourceName;
}

void CNAPIGwAIServiceSource::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string CNAPIGwAIServiceSource::GetSourceId() const
{
    return m_sourceId;
}

void CNAPIGwAIServiceSource::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string CNAPIGwAIServiceSource::GetSourceType() const
{
    return m_sourceType;
}

void CNAPIGwAIServiceSource::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string CNAPIGwAIServiceSource::GetSourceProduct() const
{
    return m_sourceProduct;
}

void CNAPIGwAIServiceSource::SetSourceProduct(const string& _sourceProduct)
{
    m_sourceProduct = _sourceProduct;
    m_sourceProductHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::SourceProductHasBeenSet() const
{
    return m_sourceProductHasBeenSet;
}

CNAPIGwAIServiceSourceInfo CNAPIGwAIServiceSource::GetSourceInfo() const
{
    return m_sourceInfo;
}

void CNAPIGwAIServiceSource::SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string CNAPIGwAIServiceSource::GetDescription() const
{
    return m_description;
}

void CNAPIGwAIServiceSource::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CNAPIGwAIServiceSource::GetCreateTime() const
{
    return m_createTime;
}

void CNAPIGwAIServiceSource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CNAPIGwAIServiceSource::GetUpdateTime() const
{
    return m_updateTime;
}

void CNAPIGwAIServiceSource::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CNAPIGwAIServiceSource::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

