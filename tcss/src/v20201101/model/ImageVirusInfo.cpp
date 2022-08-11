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

#include <tencentcloud/tcss/v20201101/model/ImageVirusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageVirusInfo::ImageVirusInfo() :
    m_pathHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_firstScanTimeHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_checkPlatformHasBeenSet(false)
{
}

CoreInternalOutcome ImageVirusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("FirstScanTime") && !value["FirstScanTime"].IsNull())
    {
        if (!value["FirstScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.FirstScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstScanTime = string(value["FirstScanTime"].GetString());
        m_firstScanTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("CheckPlatform") && !value["CheckPlatform"].IsNull())
    {
        if (!value["CheckPlatform"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVirusInfo.CheckPlatform` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckPlatform"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkPlatform.push_back((*itr).GetString());
        }
        m_checkPlatformHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVirusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_firstScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkPlatform.begin(); itr != m_checkPlatform.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ImageVirusInfo::GetPath() const
{
    return m_path;
}

void ImageVirusInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ImageVirusInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t ImageVirusInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void ImageVirusInfo::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ImageVirusInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ImageVirusInfo::GetVirusName() const
{
    return m_virusName;
}

void ImageVirusInfo::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool ImageVirusInfo::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

vector<string> ImageVirusInfo::GetTags() const
{
    return m_tags;
}

void ImageVirusInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ImageVirusInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ImageVirusInfo::GetDesc() const
{
    return m_desc;
}

void ImageVirusInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ImageVirusInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ImageVirusInfo::GetSolution() const
{
    return m_solution;
}

void ImageVirusInfo::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ImageVirusInfo::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

uint64_t ImageVirusInfo::GetSize() const
{
    return m_size;
}

void ImageVirusInfo::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageVirusInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ImageVirusInfo::GetFirstScanTime() const
{
    return m_firstScanTime;
}

void ImageVirusInfo::SetFirstScanTime(const string& _firstScanTime)
{
    m_firstScanTime = _firstScanTime;
    m_firstScanTimeHasBeenSet = true;
}

bool ImageVirusInfo::FirstScanTimeHasBeenSet() const
{
    return m_firstScanTimeHasBeenSet;
}

string ImageVirusInfo::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void ImageVirusInfo::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool ImageVirusInfo::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string ImageVirusInfo::GetMd5() const
{
    return m_md5;
}

void ImageVirusInfo::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ImageVirusInfo::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string ImageVirusInfo::GetFileName() const
{
    return m_fileName;
}

void ImageVirusInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ImageVirusInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<string> ImageVirusInfo::GetCheckPlatform() const
{
    return m_checkPlatform;
}

void ImageVirusInfo::SetCheckPlatform(const vector<string>& _checkPlatform)
{
    m_checkPlatform = _checkPlatform;
    m_checkPlatformHasBeenSet = true;
}

bool ImageVirusInfo::CheckPlatformHasBeenSet() const
{
    return m_checkPlatformHasBeenSet;
}

