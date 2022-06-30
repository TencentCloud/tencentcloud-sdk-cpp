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

#include <tencentcloud/dlc/v20210125/model/DMSSds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DMSSds::DMSSds() :
    m_locationHasBeenSet(false),
    m_inputFormatHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_numBucketsHasBeenSet(false),
    m_compressedHasBeenSet(false),
    m_storedAsSubDirectoriesHasBeenSet(false),
    m_serdeLibHasBeenSet(false),
    m_serdeNameHasBeenSet(false),
    m_bucketColsHasBeenSet(false),
    m_serdeParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_sortColsHasBeenSet(false),
    m_colsHasBeenSet(false),
    m_sortColumnsHasBeenSet(false)
{
}

CoreInternalOutcome DMSSds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("InputFormat") && !value["InputFormat"].IsNull())
    {
        if (!value["InputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.InputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFormat = string(value["InputFormat"].GetString());
        m_inputFormatHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.OutputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = string(value["OutputFormat"].GetString());
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("NumBuckets") && !value["NumBuckets"].IsNull())
    {
        if (!value["NumBuckets"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.NumBuckets` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_numBuckets = value["NumBuckets"].GetInt64();
        m_numBucketsHasBeenSet = true;
    }

    if (value.HasMember("Compressed") && !value["Compressed"].IsNull())
    {
        if (!value["Compressed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.Compressed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_compressed = value["Compressed"].GetBool();
        m_compressedHasBeenSet = true;
    }

    if (value.HasMember("StoredAsSubDirectories") && !value["StoredAsSubDirectories"].IsNull())
    {
        if (!value["StoredAsSubDirectories"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.StoredAsSubDirectories` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_storedAsSubDirectories = value["StoredAsSubDirectories"].GetBool();
        m_storedAsSubDirectoriesHasBeenSet = true;
    }

    if (value.HasMember("SerdeLib") && !value["SerdeLib"].IsNull())
    {
        if (!value["SerdeLib"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.SerdeLib` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serdeLib = string(value["SerdeLib"].GetString());
        m_serdeLibHasBeenSet = true;
    }

    if (value.HasMember("SerdeName") && !value["SerdeName"].IsNull())
    {
        if (!value["SerdeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.SerdeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serdeName = string(value["SerdeName"].GetString());
        m_serdeNameHasBeenSet = true;
    }

    if (value.HasMember("BucketCols") && !value["BucketCols"].IsNull())
    {
        if (!value["BucketCols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSds.BucketCols` is not array type"));

        const rapidjson::Value &tmpValue = value["BucketCols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bucketCols.push_back((*itr).GetString());
        }
        m_bucketColsHasBeenSet = true;
    }

    if (value.HasMember("SerdeParams") && !value["SerdeParams"].IsNull())
    {
        if (!value["SerdeParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSds.SerdeParams` is not array type"));

        const rapidjson::Value &tmpValue = value["SerdeParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serdeParams.push_back(item);
        }
        m_serdeParamsHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSds.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("SortCols") && !value["SortCols"].IsNull())
    {
        if (!value["SortCols"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DMSSds.SortCols` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sortCols.Deserialize(value["SortCols"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sortColsHasBeenSet = true;
    }

    if (value.HasMember("Cols") && !value["Cols"].IsNull())
    {
        if (!value["Cols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSds.Cols` is not array type"));

        const rapidjson::Value &tmpValue = value["Cols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cols.push_back(item);
        }
        m_colsHasBeenSet = true;
    }

    if (value.HasMember("SortColumns") && !value["SortColumns"].IsNull())
    {
        if (!value["SortColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DMSSds.SortColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["SortColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DMSColumnOrder item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sortColumns.push_back(item);
        }
        m_sortColumnsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DMSSds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_numBucketsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumBuckets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_numBuckets, allocator);
    }

    if (m_compressedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compressed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compressed, allocator);
    }

    if (m_storedAsSubDirectoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoredAsSubDirectories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storedAsSubDirectories, allocator);
    }

    if (m_serdeLibHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerdeLib";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serdeLib.c_str(), allocator).Move(), allocator);
    }

    if (m_serdeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerdeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serdeName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketColsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketCols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bucketCols.begin(); itr != m_bucketCols.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serdeParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerdeParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serdeParams.begin(); itr != m_serdeParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sortColsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortCols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sortCols.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cols.begin(); itr != m_cols.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sortColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sortColumns.begin(); itr != m_sortColumns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DMSSds::GetLocation() const
{
    return m_location;
}

void DMSSds::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool DMSSds::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string DMSSds::GetInputFormat() const
{
    return m_inputFormat;
}

void DMSSds::SetInputFormat(const string& _inputFormat)
{
    m_inputFormat = _inputFormat;
    m_inputFormatHasBeenSet = true;
}

bool DMSSds::InputFormatHasBeenSet() const
{
    return m_inputFormatHasBeenSet;
}

string DMSSds::GetOutputFormat() const
{
    return m_outputFormat;
}

void DMSSds::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool DMSSds::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

int64_t DMSSds::GetNumBuckets() const
{
    return m_numBuckets;
}

void DMSSds::SetNumBuckets(const int64_t& _numBuckets)
{
    m_numBuckets = _numBuckets;
    m_numBucketsHasBeenSet = true;
}

bool DMSSds::NumBucketsHasBeenSet() const
{
    return m_numBucketsHasBeenSet;
}

bool DMSSds::GetCompressed() const
{
    return m_compressed;
}

void DMSSds::SetCompressed(const bool& _compressed)
{
    m_compressed = _compressed;
    m_compressedHasBeenSet = true;
}

bool DMSSds::CompressedHasBeenSet() const
{
    return m_compressedHasBeenSet;
}

bool DMSSds::GetStoredAsSubDirectories() const
{
    return m_storedAsSubDirectories;
}

void DMSSds::SetStoredAsSubDirectories(const bool& _storedAsSubDirectories)
{
    m_storedAsSubDirectories = _storedAsSubDirectories;
    m_storedAsSubDirectoriesHasBeenSet = true;
}

bool DMSSds::StoredAsSubDirectoriesHasBeenSet() const
{
    return m_storedAsSubDirectoriesHasBeenSet;
}

string DMSSds::GetSerdeLib() const
{
    return m_serdeLib;
}

void DMSSds::SetSerdeLib(const string& _serdeLib)
{
    m_serdeLib = _serdeLib;
    m_serdeLibHasBeenSet = true;
}

bool DMSSds::SerdeLibHasBeenSet() const
{
    return m_serdeLibHasBeenSet;
}

string DMSSds::GetSerdeName() const
{
    return m_serdeName;
}

void DMSSds::SetSerdeName(const string& _serdeName)
{
    m_serdeName = _serdeName;
    m_serdeNameHasBeenSet = true;
}

bool DMSSds::SerdeNameHasBeenSet() const
{
    return m_serdeNameHasBeenSet;
}

vector<string> DMSSds::GetBucketCols() const
{
    return m_bucketCols;
}

void DMSSds::SetBucketCols(const vector<string>& _bucketCols)
{
    m_bucketCols = _bucketCols;
    m_bucketColsHasBeenSet = true;
}

bool DMSSds::BucketColsHasBeenSet() const
{
    return m_bucketColsHasBeenSet;
}

vector<KVPair> DMSSds::GetSerdeParams() const
{
    return m_serdeParams;
}

void DMSSds::SetSerdeParams(const vector<KVPair>& _serdeParams)
{
    m_serdeParams = _serdeParams;
    m_serdeParamsHasBeenSet = true;
}

bool DMSSds::SerdeParamsHasBeenSet() const
{
    return m_serdeParamsHasBeenSet;
}

vector<KVPair> DMSSds::GetParams() const
{
    return m_params;
}

void DMSSds::SetParams(const vector<KVPair>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool DMSSds::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

DMSColumnOrder DMSSds::GetSortCols() const
{
    return m_sortCols;
}

void DMSSds::SetSortCols(const DMSColumnOrder& _sortCols)
{
    m_sortCols = _sortCols;
    m_sortColsHasBeenSet = true;
}

bool DMSSds::SortColsHasBeenSet() const
{
    return m_sortColsHasBeenSet;
}

vector<DMSColumn> DMSSds::GetCols() const
{
    return m_cols;
}

void DMSSds::SetCols(const vector<DMSColumn>& _cols)
{
    m_cols = _cols;
    m_colsHasBeenSet = true;
}

bool DMSSds::ColsHasBeenSet() const
{
    return m_colsHasBeenSet;
}

vector<DMSColumnOrder> DMSSds::GetSortColumns() const
{
    return m_sortColumns;
}

void DMSSds::SetSortColumns(const vector<DMSColumnOrder>& _sortColumns)
{
    m_sortColumns = _sortColumns;
    m_sortColumnsHasBeenSet = true;
}

bool DMSSds::SortColumnsHasBeenSet() const
{
    return m_sortColumnsHasBeenSet;
}

