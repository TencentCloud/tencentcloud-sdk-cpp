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

#include <tencentcloud/lkeap/v20240522/model/DocItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

DocItem::DocItem() :
    m_docIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_attributeLabelsHasBeenSet(false)
{
}

CoreInternalOutcome DocItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AttributeLabels") && !value["AttributeLabels"].IsNull())
    {
        if (!value["AttributeLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocItem.AttributeLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["AttributeLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeLabelReferItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributeLabels.push_back(item);
        }
        m_attributeLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributeLabels.begin(); itr != m_attributeLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DocItem::GetDocId() const
{
    return m_docId;
}

void DocItem::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool DocItem::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string DocItem::GetStatus() const
{
    return m_status;
}

void DocItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DocItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DocItem::GetFileName() const
{
    return m_fileName;
}

void DocItem::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DocItem::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DocItem::GetUpdateTime() const
{
    return m_updateTime;
}

void DocItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DocItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<AttributeLabelReferItem> DocItem::GetAttributeLabels() const
{
    return m_attributeLabels;
}

void DocItem::SetAttributeLabels(const vector<AttributeLabelReferItem>& _attributeLabels)
{
    m_attributeLabels = _attributeLabels;
    m_attributeLabelsHasBeenSet = true;
}

bool DocItem::AttributeLabelsHasBeenSet() const
{
    return m_attributeLabelsHasBeenSet;
}

