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

#include <tencentcloud/csip/v20221121/model/CosAssetFileIdentifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAssetFileIdentifyInfo::CosAssetFileIdentifyInfo() :
    m_fileNameHasBeenSet(false),
    m_dirNameHasBeenSet(false),
    m_categoryDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CosAssetFileIdentifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("DirName") && !value["DirName"].IsNull())
    {
        if (!value["DirName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.DirName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirName = string(value["DirName"].GetString());
        m_dirNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryDetails") && !value["CategoryDetails"].IsNull())
    {
        if (!value["CategoryDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAssetFileIdentifyInfo.CategoryDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosIdentifyCategoryDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryDetails.push_back(item);
        }
        m_categoryDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAssetFileIdentifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_dirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryDetails.begin(); itr != m_categoryDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CosAssetFileIdentifyInfo::GetFileName() const
{
    return m_fileName;
}

void CosAssetFileIdentifyInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CosAssetFileIdentifyInfo::GetDirName() const
{
    return m_dirName;
}

void CosAssetFileIdentifyInfo::SetDirName(const string& _dirName)
{
    m_dirName = _dirName;
    m_dirNameHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::DirNameHasBeenSet() const
{
    return m_dirNameHasBeenSet;
}

vector<CosIdentifyCategoryDetail> CosAssetFileIdentifyInfo::GetCategoryDetails() const
{
    return m_categoryDetails;
}

void CosAssetFileIdentifyInfo::SetCategoryDetails(const vector<CosIdentifyCategoryDetail>& _categoryDetails)
{
    m_categoryDetails = _categoryDetails;
    m_categoryDetailsHasBeenSet = true;
}

bool CosAssetFileIdentifyInfo::CategoryDetailsHasBeenSet() const
{
    return m_categoryDetailsHasBeenSet;
}

