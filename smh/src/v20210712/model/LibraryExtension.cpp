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

#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

LibraryExtension::LibraryExtension() :
    m_isFileLibraryHasBeenSet(false),
    m_isMultiSpaceHasBeenSet(false),
    m_cosStorageClassHasBeenSet(false),
    m_useRecycleBinHasBeenSet(false),
    m_autoRemoveRecycledDaysHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_denyOnQuotaLessThanUsageHasBeenSet(false),
    m_enableFileHistoryHasBeenSet(false),
    m_fileHistoryCountHasBeenSet(false),
    m_fileHistoryExpireDayHasBeenSet(false),
    m_maxDirFileNameLengthHasBeenSet(false),
    m_isPublicReadHasBeenSet(false),
    m_isMultiAlbumHasBeenSet(false),
    m_allowPhotoHasBeenSet(false),
    m_allowPhotoExtNameHasBeenSet(false),
    m_allowVideoHasBeenSet(false),
    m_allowVideoExtNameHasBeenSet(false),
    m_allowFileExtNameHasBeenSet(false),
    m_recognizeSensitiveContentHasBeenSet(false)
{
}

CoreInternalOutcome LibraryExtension::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsFileLibrary") && !value["IsFileLibrary"].IsNull())
    {
        if (!value["IsFileLibrary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.IsFileLibrary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFileLibrary = value["IsFileLibrary"].GetBool();
        m_isFileLibraryHasBeenSet = true;
    }

    if (value.HasMember("IsMultiSpace") && !value["IsMultiSpace"].IsNull())
    {
        if (!value["IsMultiSpace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.IsMultiSpace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiSpace = value["IsMultiSpace"].GetBool();
        m_isMultiSpaceHasBeenSet = true;
    }

    if (value.HasMember("CosStorageClass") && !value["CosStorageClass"].IsNull())
    {
        if (!value["CosStorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.CosStorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosStorageClass = string(value["CosStorageClass"].GetString());
        m_cosStorageClassHasBeenSet = true;
    }

    if (value.HasMember("UseRecycleBin") && !value["UseRecycleBin"].IsNull())
    {
        if (!value["UseRecycleBin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.UseRecycleBin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useRecycleBin = value["UseRecycleBin"].GetBool();
        m_useRecycleBinHasBeenSet = true;
    }

    if (value.HasMember("AutoRemoveRecycledDays") && !value["AutoRemoveRecycledDays"].IsNull())
    {
        if (!value["AutoRemoveRecycledDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AutoRemoveRecycledDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRemoveRecycledDays = value["AutoRemoveRecycledDays"].GetUint64();
        m_autoRemoveRecycledDaysHasBeenSet = true;
    }

    if (value.HasMember("EnableSearch") && !value["EnableSearch"].IsNull())
    {
        if (!value["EnableSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.EnableSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSearch = value["EnableSearch"].GetBool();
        m_enableSearchHasBeenSet = true;
    }

    if (value.HasMember("DenyOnQuotaLessThanUsage") && !value["DenyOnQuotaLessThanUsage"].IsNull())
    {
        if (!value["DenyOnQuotaLessThanUsage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.DenyOnQuotaLessThanUsage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_denyOnQuotaLessThanUsage = value["DenyOnQuotaLessThanUsage"].GetBool();
        m_denyOnQuotaLessThanUsageHasBeenSet = true;
    }

    if (value.HasMember("EnableFileHistory") && !value["EnableFileHistory"].IsNull())
    {
        if (!value["EnableFileHistory"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.EnableFileHistory` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFileHistory = value["EnableFileHistory"].GetBool();
        m_enableFileHistoryHasBeenSet = true;
    }

    if (value.HasMember("FileHistoryCount") && !value["FileHistoryCount"].IsNull())
    {
        if (!value["FileHistoryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.FileHistoryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileHistoryCount = value["FileHistoryCount"].GetUint64();
        m_fileHistoryCountHasBeenSet = true;
    }

    if (value.HasMember("FileHistoryExpireDay") && !value["FileHistoryExpireDay"].IsNull())
    {
        if (!value["FileHistoryExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.FileHistoryExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileHistoryExpireDay = value["FileHistoryExpireDay"].GetUint64();
        m_fileHistoryExpireDayHasBeenSet = true;
    }

    if (value.HasMember("MaxDirFileNameLength") && !value["MaxDirFileNameLength"].IsNull())
    {
        if (!value["MaxDirFileNameLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.MaxDirFileNameLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDirFileNameLength = value["MaxDirFileNameLength"].GetUint64();
        m_maxDirFileNameLengthHasBeenSet = true;
    }

    if (value.HasMember("IsPublicRead") && !value["IsPublicRead"].IsNull())
    {
        if (!value["IsPublicRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.IsPublicRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPublicRead = value["IsPublicRead"].GetBool();
        m_isPublicReadHasBeenSet = true;
    }

    if (value.HasMember("IsMultiAlbum") && !value["IsMultiAlbum"].IsNull())
    {
        if (!value["IsMultiAlbum"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.IsMultiAlbum` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiAlbum = value["IsMultiAlbum"].GetBool();
        m_isMultiAlbumHasBeenSet = true;
    }

    if (value.HasMember("AllowPhoto") && !value["AllowPhoto"].IsNull())
    {
        if (!value["AllowPhoto"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AllowPhoto` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowPhoto = value["AllowPhoto"].GetBool();
        m_allowPhotoHasBeenSet = true;
    }

    if (value.HasMember("AllowPhotoExtName") && !value["AllowPhotoExtName"].IsNull())
    {
        if (!value["AllowPhotoExtName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AllowPhotoExtName` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowPhotoExtName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowPhotoExtName.push_back((*itr).GetString());
        }
        m_allowPhotoExtNameHasBeenSet = true;
    }

    if (value.HasMember("AllowVideo") && !value["AllowVideo"].IsNull())
    {
        if (!value["AllowVideo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AllowVideo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowVideo = value["AllowVideo"].GetBool();
        m_allowVideoHasBeenSet = true;
    }

    if (value.HasMember("AllowVideoExtName") && !value["AllowVideoExtName"].IsNull())
    {
        if (!value["AllowVideoExtName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AllowVideoExtName` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowVideoExtName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowVideoExtName.push_back((*itr).GetString());
        }
        m_allowVideoExtNameHasBeenSet = true;
    }

    if (value.HasMember("AllowFileExtName") && !value["AllowFileExtName"].IsNull())
    {
        if (!value["AllowFileExtName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.AllowFileExtName` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowFileExtName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowFileExtName.push_back((*itr).GetString());
        }
        m_allowFileExtNameHasBeenSet = true;
    }

    if (value.HasMember("RecognizeSensitiveContent") && !value["RecognizeSensitiveContent"].IsNull())
    {
        if (!value["RecognizeSensitiveContent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LibraryExtension.RecognizeSensitiveContent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_recognizeSensitiveContent = value["RecognizeSensitiveContent"].GetBool();
        m_recognizeSensitiveContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraryExtension::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isFileLibraryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFileLibrary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFileLibrary, allocator);
    }

    if (m_isMultiSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMultiSpace, allocator);
    }

    if (m_cosStorageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosStorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosStorageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_useRecycleBinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRecycleBin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useRecycleBin, allocator);
    }

    if (m_autoRemoveRecycledDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRemoveRecycledDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRemoveRecycledDays, allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_denyOnQuotaLessThanUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyOnQuotaLessThanUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_denyOnQuotaLessThanUsage, allocator);
    }

    if (m_enableFileHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFileHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFileHistory, allocator);
    }

    if (m_fileHistoryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileHistoryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileHistoryCount, allocator);
    }

    if (m_fileHistoryExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileHistoryExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileHistoryExpireDay, allocator);
    }

    if (m_maxDirFileNameLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDirFileNameLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDirFileNameLength, allocator);
    }

    if (m_isPublicReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPublicRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPublicRead, allocator);
    }

    if (m_isMultiAlbumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiAlbum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMultiAlbum, allocator);
    }

    if (m_allowPhotoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowPhoto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowPhoto, allocator);
    }

    if (m_allowPhotoExtNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowPhotoExtName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowPhotoExtName.begin(); itr != m_allowPhotoExtName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowVideo, allocator);
    }

    if (m_allowVideoExtNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowVideoExtName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowVideoExtName.begin(); itr != m_allowVideoExtName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allowFileExtNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowFileExtName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowFileExtName.begin(); itr != m_allowFileExtName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recognizeSensitiveContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeSensitiveContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recognizeSensitiveContent, allocator);
    }

}


bool LibraryExtension::GetIsFileLibrary() const
{
    return m_isFileLibrary;
}

void LibraryExtension::SetIsFileLibrary(const bool& _isFileLibrary)
{
    m_isFileLibrary = _isFileLibrary;
    m_isFileLibraryHasBeenSet = true;
}

bool LibraryExtension::IsFileLibraryHasBeenSet() const
{
    return m_isFileLibraryHasBeenSet;
}

bool LibraryExtension::GetIsMultiSpace() const
{
    return m_isMultiSpace;
}

void LibraryExtension::SetIsMultiSpace(const bool& _isMultiSpace)
{
    m_isMultiSpace = _isMultiSpace;
    m_isMultiSpaceHasBeenSet = true;
}

bool LibraryExtension::IsMultiSpaceHasBeenSet() const
{
    return m_isMultiSpaceHasBeenSet;
}

string LibraryExtension::GetCosStorageClass() const
{
    return m_cosStorageClass;
}

void LibraryExtension::SetCosStorageClass(const string& _cosStorageClass)
{
    m_cosStorageClass = _cosStorageClass;
    m_cosStorageClassHasBeenSet = true;
}

bool LibraryExtension::CosStorageClassHasBeenSet() const
{
    return m_cosStorageClassHasBeenSet;
}

bool LibraryExtension::GetUseRecycleBin() const
{
    return m_useRecycleBin;
}

void LibraryExtension::SetUseRecycleBin(const bool& _useRecycleBin)
{
    m_useRecycleBin = _useRecycleBin;
    m_useRecycleBinHasBeenSet = true;
}

bool LibraryExtension::UseRecycleBinHasBeenSet() const
{
    return m_useRecycleBinHasBeenSet;
}

uint64_t LibraryExtension::GetAutoRemoveRecycledDays() const
{
    return m_autoRemoveRecycledDays;
}

void LibraryExtension::SetAutoRemoveRecycledDays(const uint64_t& _autoRemoveRecycledDays)
{
    m_autoRemoveRecycledDays = _autoRemoveRecycledDays;
    m_autoRemoveRecycledDaysHasBeenSet = true;
}

bool LibraryExtension::AutoRemoveRecycledDaysHasBeenSet() const
{
    return m_autoRemoveRecycledDaysHasBeenSet;
}

bool LibraryExtension::GetEnableSearch() const
{
    return m_enableSearch;
}

void LibraryExtension::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool LibraryExtension::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

bool LibraryExtension::GetDenyOnQuotaLessThanUsage() const
{
    return m_denyOnQuotaLessThanUsage;
}

void LibraryExtension::SetDenyOnQuotaLessThanUsage(const bool& _denyOnQuotaLessThanUsage)
{
    m_denyOnQuotaLessThanUsage = _denyOnQuotaLessThanUsage;
    m_denyOnQuotaLessThanUsageHasBeenSet = true;
}

bool LibraryExtension::DenyOnQuotaLessThanUsageHasBeenSet() const
{
    return m_denyOnQuotaLessThanUsageHasBeenSet;
}

bool LibraryExtension::GetEnableFileHistory() const
{
    return m_enableFileHistory;
}

void LibraryExtension::SetEnableFileHistory(const bool& _enableFileHistory)
{
    m_enableFileHistory = _enableFileHistory;
    m_enableFileHistoryHasBeenSet = true;
}

bool LibraryExtension::EnableFileHistoryHasBeenSet() const
{
    return m_enableFileHistoryHasBeenSet;
}

uint64_t LibraryExtension::GetFileHistoryCount() const
{
    return m_fileHistoryCount;
}

void LibraryExtension::SetFileHistoryCount(const uint64_t& _fileHistoryCount)
{
    m_fileHistoryCount = _fileHistoryCount;
    m_fileHistoryCountHasBeenSet = true;
}

bool LibraryExtension::FileHistoryCountHasBeenSet() const
{
    return m_fileHistoryCountHasBeenSet;
}

uint64_t LibraryExtension::GetFileHistoryExpireDay() const
{
    return m_fileHistoryExpireDay;
}

void LibraryExtension::SetFileHistoryExpireDay(const uint64_t& _fileHistoryExpireDay)
{
    m_fileHistoryExpireDay = _fileHistoryExpireDay;
    m_fileHistoryExpireDayHasBeenSet = true;
}

bool LibraryExtension::FileHistoryExpireDayHasBeenSet() const
{
    return m_fileHistoryExpireDayHasBeenSet;
}

uint64_t LibraryExtension::GetMaxDirFileNameLength() const
{
    return m_maxDirFileNameLength;
}

void LibraryExtension::SetMaxDirFileNameLength(const uint64_t& _maxDirFileNameLength)
{
    m_maxDirFileNameLength = _maxDirFileNameLength;
    m_maxDirFileNameLengthHasBeenSet = true;
}

bool LibraryExtension::MaxDirFileNameLengthHasBeenSet() const
{
    return m_maxDirFileNameLengthHasBeenSet;
}

bool LibraryExtension::GetIsPublicRead() const
{
    return m_isPublicRead;
}

void LibraryExtension::SetIsPublicRead(const bool& _isPublicRead)
{
    m_isPublicRead = _isPublicRead;
    m_isPublicReadHasBeenSet = true;
}

bool LibraryExtension::IsPublicReadHasBeenSet() const
{
    return m_isPublicReadHasBeenSet;
}

bool LibraryExtension::GetIsMultiAlbum() const
{
    return m_isMultiAlbum;
}

void LibraryExtension::SetIsMultiAlbum(const bool& _isMultiAlbum)
{
    m_isMultiAlbum = _isMultiAlbum;
    m_isMultiAlbumHasBeenSet = true;
}

bool LibraryExtension::IsMultiAlbumHasBeenSet() const
{
    return m_isMultiAlbumHasBeenSet;
}

bool LibraryExtension::GetAllowPhoto() const
{
    return m_allowPhoto;
}

void LibraryExtension::SetAllowPhoto(const bool& _allowPhoto)
{
    m_allowPhoto = _allowPhoto;
    m_allowPhotoHasBeenSet = true;
}

bool LibraryExtension::AllowPhotoHasBeenSet() const
{
    return m_allowPhotoHasBeenSet;
}

vector<string> LibraryExtension::GetAllowPhotoExtName() const
{
    return m_allowPhotoExtName;
}

void LibraryExtension::SetAllowPhotoExtName(const vector<string>& _allowPhotoExtName)
{
    m_allowPhotoExtName = _allowPhotoExtName;
    m_allowPhotoExtNameHasBeenSet = true;
}

bool LibraryExtension::AllowPhotoExtNameHasBeenSet() const
{
    return m_allowPhotoExtNameHasBeenSet;
}

bool LibraryExtension::GetAllowVideo() const
{
    return m_allowVideo;
}

void LibraryExtension::SetAllowVideo(const bool& _allowVideo)
{
    m_allowVideo = _allowVideo;
    m_allowVideoHasBeenSet = true;
}

bool LibraryExtension::AllowVideoHasBeenSet() const
{
    return m_allowVideoHasBeenSet;
}

vector<string> LibraryExtension::GetAllowVideoExtName() const
{
    return m_allowVideoExtName;
}

void LibraryExtension::SetAllowVideoExtName(const vector<string>& _allowVideoExtName)
{
    m_allowVideoExtName = _allowVideoExtName;
    m_allowVideoExtNameHasBeenSet = true;
}

bool LibraryExtension::AllowVideoExtNameHasBeenSet() const
{
    return m_allowVideoExtNameHasBeenSet;
}

vector<string> LibraryExtension::GetAllowFileExtName() const
{
    return m_allowFileExtName;
}

void LibraryExtension::SetAllowFileExtName(const vector<string>& _allowFileExtName)
{
    m_allowFileExtName = _allowFileExtName;
    m_allowFileExtNameHasBeenSet = true;
}

bool LibraryExtension::AllowFileExtNameHasBeenSet() const
{
    return m_allowFileExtNameHasBeenSet;
}

bool LibraryExtension::GetRecognizeSensitiveContent() const
{
    return m_recognizeSensitiveContent;
}

void LibraryExtension::SetRecognizeSensitiveContent(const bool& _recognizeSensitiveContent)
{
    m_recognizeSensitiveContent = _recognizeSensitiveContent;
    m_recognizeSensitiveContentHasBeenSet = true;
}

bool LibraryExtension::RecognizeSensitiveContentHasBeenSet() const
{
    return m_recognizeSensitiveContentHasBeenSet;
}

