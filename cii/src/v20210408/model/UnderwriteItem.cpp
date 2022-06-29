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

#include <tencentcloud/cii/v20210408/model/UnderwriteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

UnderwriteItem::UnderwriteItem() :
    m_nameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_reportDateHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_inspectProjectHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_originNameHasBeenSet(false),
    m_yinYangHasBeenSet(false)
{
}

CoreInternalOutcome UnderwriteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.Range` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_range = string(value["Range"].GetString());
        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("ReportDate") && !value["ReportDate"].IsNull())
    {
        if (!value["ReportDate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.ReportDate` is not array type"));

        const rapidjson::Value &tmpValue = value["ReportDate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reportDate.push_back((*itr).GetString());
        }
        m_reportDateHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("InspectProject") && !value["InspectProject"].IsNull())
    {
        if (!value["InspectProject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.InspectProject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectProject = string(value["InspectProject"].GetString());
        m_inspectProjectHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("OriginName") && !value["OriginName"].IsNull())
    {
        if (!value["OriginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.OriginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originName = string(value["OriginName"].GetString());
        m_originNameHasBeenSet = true;
    }

    if (value.HasMember("YinYang") && !value["YinYang"].IsNull())
    {
        if (!value["YinYang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnderwriteItem.YinYang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yinYang = string(value["YinYang"].GetString());
        m_yinYangHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnderwriteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

    if (m_reportDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reportDate.begin(); itr != m_reportDate.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectProjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectProject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectProject.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_originNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originName.c_str(), allocator).Move(), allocator);
    }

    if (m_yinYangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YinYang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yinYang.c_str(), allocator).Move(), allocator);
    }

}


string UnderwriteItem::GetName() const
{
    return m_name;
}

void UnderwriteItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UnderwriteItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UnderwriteItem::GetResult() const
{
    return m_result;
}

void UnderwriteItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool UnderwriteItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string UnderwriteItem::GetValue() const
{
    return m_value;
}

void UnderwriteItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool UnderwriteItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string UnderwriteItem::GetRange() const
{
    return m_range;
}

void UnderwriteItem::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool UnderwriteItem::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

vector<string> UnderwriteItem::GetReportDate() const
{
    return m_reportDate;
}

void UnderwriteItem::SetReportDate(const vector<string>& _reportDate)
{
    m_reportDate = _reportDate;
    m_reportDateHasBeenSet = true;
}

bool UnderwriteItem::ReportDateHasBeenSet() const
{
    return m_reportDateHasBeenSet;
}

string UnderwriteItem::GetFileType() const
{
    return m_fileType;
}

void UnderwriteItem::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UnderwriteItem::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UnderwriteItem::GetInspectProject() const
{
    return m_inspectProject;
}

void UnderwriteItem::SetInspectProject(const string& _inspectProject)
{
    m_inspectProject = _inspectProject;
    m_inspectProjectHasBeenSet = true;
}

bool UnderwriteItem::InspectProjectHasBeenSet() const
{
    return m_inspectProjectHasBeenSet;
}

string UnderwriteItem::GetUnit() const
{
    return m_unit;
}

void UnderwriteItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool UnderwriteItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string UnderwriteItem::GetOriginName() const
{
    return m_originName;
}

void UnderwriteItem::SetOriginName(const string& _originName)
{
    m_originName = _originName;
    m_originNameHasBeenSet = true;
}

bool UnderwriteItem::OriginNameHasBeenSet() const
{
    return m_originNameHasBeenSet;
}

string UnderwriteItem::GetYinYang() const
{
    return m_yinYang;
}

void UnderwriteItem::SetYinYang(const string& _yinYang)
{
    m_yinYang = _yinYang;
    m_yinYangHasBeenSet = true;
}

bool UnderwriteItem::YinYangHasBeenSet() const
{
    return m_yinYangHasBeenSet;
}

