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

#include <tencentcloud/databuddy/v20260715/model/TableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TableInfo::TableInfo() :
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_partitioningHasBeenSet(false),
    m_indexesHasBeenSet(false),
    m_auditHasBeenSet(false),
    m_tableFormatHasBeenSet(false),
    m_metaOwnerHasBeenSet(false),
    m_assetGuidHasBeenSet(false),
    m_filesCountHasBeenSet(false),
    m_filesSizeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_featureTableTypeHasBeenSet(false),
    m_featureTableDetailHasBeenSet(false),
    m_permissionDetailHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome TableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ColumnInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Partitioning") && !value["Partitioning"].IsNull())
    {
        if (!value["Partitioning"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Partitioning` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitioning"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Partitioning item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitioning.push_back(item);
        }
        m_partitioningHasBeenSet = true;
    }

    if (value.HasMember("Indexes") && !value["Indexes"].IsNull())
    {
        if (!value["Indexes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Indexes` is not array type"));

        const rapidjson::Value &tmpValue = value["Indexes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Index item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indexes.push_back(item);
        }
        m_indexesHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }

    if (value.HasMember("TableFormat") && !value["TableFormat"].IsNull())
    {
        if (!value["TableFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableFormat = string(value["TableFormat"].GetString());
        m_tableFormatHasBeenSet = true;
    }

    if (value.HasMember("MetaOwner") && !value["MetaOwner"].IsNull())
    {
        if (!value["MetaOwner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.MetaOwner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaOwner.Deserialize(value["MetaOwner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaOwnerHasBeenSet = true;
    }

    if (value.HasMember("AssetGuid") && !value["AssetGuid"].IsNull())
    {
        if (!value["AssetGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.AssetGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetGuid = string(value["AssetGuid"].GetString());
        m_assetGuidHasBeenSet = true;
    }

    if (value.HasMember("FilesCount") && !value["FilesCount"].IsNull())
    {
        if (!value["FilesCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.FilesCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filesCount = string(value["FilesCount"].GetString());
        m_filesCountHasBeenSet = true;
    }

    if (value.HasMember("FilesSize") && !value["FilesSize"].IsNull())
    {
        if (!value["FilesSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.FilesSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filesSize = string(value["FilesSize"].GetString());
        m_filesSizeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureTableType") && !value["FeatureTableType"].IsNull())
    {
        if (!value["FeatureTableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.FeatureTableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureTableType = string(value["FeatureTableType"].GetString());
        m_featureTableTypeHasBeenSet = true;
    }

    if (value.HasMember("FeatureTableDetail") && !value["FeatureTableDetail"].IsNull())
    {
        if (!value["FeatureTableDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.FeatureTableDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_featureTableDetail.Deserialize(value["FeatureTableDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_featureTableDetailHasBeenSet = true;
    }

    if (value.HasMember("PermissionDetail") && !value["PermissionDetail"].IsNull())
    {
        if (!value["PermissionDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableInfo.PermissionDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permissionDetail.Deserialize(value["PermissionDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionDetailHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitioning.begin(); itr != m_partitioning.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indexes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indexes.begin(); itr != m_indexes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_metaOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaOwner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_assetGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_filesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filesCount.c_str(), allocator).Move(), allocator);
    }

    if (m_filesSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filesSize.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureTableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureTableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureTableType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureTableDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureTableDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_featureTableDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permissionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permissionDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TableInfo::GetName() const
{
    return m_name;
}

void TableInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TableInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TableInfo::GetComment() const
{
    return m_comment;
}

void TableInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool TableInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<ColumnInfo> TableInfo::GetColumns() const
{
    return m_columns;
}

void TableInfo::SetColumns(const vector<ColumnInfo>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TableInfo::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<KVPair> TableInfo::GetProperties() const
{
    return m_properties;
}

void TableInfo::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool TableInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

vector<Partitioning> TableInfo::GetPartitioning() const
{
    return m_partitioning;
}

void TableInfo::SetPartitioning(const vector<Partitioning>& _partitioning)
{
    m_partitioning = _partitioning;
    m_partitioningHasBeenSet = true;
}

bool TableInfo::PartitioningHasBeenSet() const
{
    return m_partitioningHasBeenSet;
}

vector<Index> TableInfo::GetIndexes() const
{
    return m_indexes;
}

void TableInfo::SetIndexes(const vector<Index>& _indexes)
{
    m_indexes = _indexes;
    m_indexesHasBeenSet = true;
}

bool TableInfo::IndexesHasBeenSet() const
{
    return m_indexesHasBeenSet;
}

Audit TableInfo::GetAudit() const
{
    return m_audit;
}

void TableInfo::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool TableInfo::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

string TableInfo::GetTableFormat() const
{
    return m_tableFormat;
}

void TableInfo::SetTableFormat(const string& _tableFormat)
{
    m_tableFormat = _tableFormat;
    m_tableFormatHasBeenSet = true;
}

bool TableInfo::TableFormatHasBeenSet() const
{
    return m_tableFormatHasBeenSet;
}

MetaOwner TableInfo::GetMetaOwner() const
{
    return m_metaOwner;
}

void TableInfo::SetMetaOwner(const MetaOwner& _metaOwner)
{
    m_metaOwner = _metaOwner;
    m_metaOwnerHasBeenSet = true;
}

bool TableInfo::MetaOwnerHasBeenSet() const
{
    return m_metaOwnerHasBeenSet;
}

string TableInfo::GetAssetGuid() const
{
    return m_assetGuid;
}

void TableInfo::SetAssetGuid(const string& _assetGuid)
{
    m_assetGuid = _assetGuid;
    m_assetGuidHasBeenSet = true;
}

bool TableInfo::AssetGuidHasBeenSet() const
{
    return m_assetGuidHasBeenSet;
}

string TableInfo::GetFilesCount() const
{
    return m_filesCount;
}

void TableInfo::SetFilesCount(const string& _filesCount)
{
    m_filesCount = _filesCount;
    m_filesCountHasBeenSet = true;
}

bool TableInfo::FilesCountHasBeenSet() const
{
    return m_filesCountHasBeenSet;
}

string TableInfo::GetFilesSize() const
{
    return m_filesSize;
}

void TableInfo::SetFilesSize(const string& _filesSize)
{
    m_filesSize = _filesSize;
    m_filesSizeHasBeenSet = true;
}

bool TableInfo::FilesSizeHasBeenSet() const
{
    return m_filesSizeHasBeenSet;
}

string TableInfo::GetTableType() const
{
    return m_tableType;
}

void TableInfo::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool TableInfo::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

string TableInfo::GetFeatureTableType() const
{
    return m_featureTableType;
}

void TableInfo::SetFeatureTableType(const string& _featureTableType)
{
    m_featureTableType = _featureTableType;
    m_featureTableTypeHasBeenSet = true;
}

bool TableInfo::FeatureTableTypeHasBeenSet() const
{
    return m_featureTableTypeHasBeenSet;
}

FeatureTableDetail TableInfo::GetFeatureTableDetail() const
{
    return m_featureTableDetail;
}

void TableInfo::SetFeatureTableDetail(const FeatureTableDetail& _featureTableDetail)
{
    m_featureTableDetail = _featureTableDetail;
    m_featureTableDetailHasBeenSet = true;
}

bool TableInfo::FeatureTableDetailHasBeenSet() const
{
    return m_featureTableDetailHasBeenSet;
}

PermissionDetail TableInfo::GetPermissionDetail() const
{
    return m_permissionDetail;
}

void TableInfo::SetPermissionDetail(const PermissionDetail& _permissionDetail)
{
    m_permissionDetail = _permissionDetail;
    m_permissionDetailHasBeenSet = true;
}

bool TableInfo::PermissionDetailHasBeenSet() const
{
    return m_permissionDetailHasBeenSet;
}

vector<CommonTagInfo> TableInfo::GetTags() const
{
    return m_tags;
}

void TableInfo::SetTags(const vector<CommonTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TableInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

