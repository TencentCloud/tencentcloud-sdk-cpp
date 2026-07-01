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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * 媒体库配置项
                */
                class LibraryExtension : public AbstractModel
                {
                public:
                    LibraryExtension();
                    ~LibraryExtension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>true 为文件类型媒体库，可存储任何类型文件；false 为媒体类型媒体库，仅可存储照片和视频类型文件。默认为 false。在媒体库创建后不能修改。</p>
                     * @return IsFileLibrary <p>true 为文件类型媒体库，可存储任何类型文件；false 为媒体类型媒体库，仅可存储照片和视频类型文件。默认为 false。在媒体库创建后不能修改。</p>
                     * 
                     */
                    bool GetIsFileLibrary() const;

                    /**
                     * 设置<p>true 为文件类型媒体库，可存储任何类型文件；false 为媒体类型媒体库，仅可存储照片和视频类型文件。默认为 false。在媒体库创建后不能修改。</p>
                     * @param _isFileLibrary <p>true 为文件类型媒体库，可存储任何类型文件；false 为媒体类型媒体库，仅可存储照片和视频类型文件。默认为 false。在媒体库创建后不能修改。</p>
                     * 
                     */
                    void SetIsFileLibrary(const bool& _isFileLibrary);

                    /**
                     * 判断参数 IsFileLibrary 是否已赋值
                     * @return IsFileLibrary 是否已赋值
                     * 
                     */
                    bool IsFileLibraryHasBeenSet() const;

                    /**
                     * 获取<p>true 为多租户空间媒体库，可创建多个租户空间；false 为单租户空间媒体库，不能创建租户空间，仅可使用默认的单一租户空间。默认为 false。在媒体库创建后不能修改。</p>
                     * @return IsMultiSpace <p>true 为多租户空间媒体库，可创建多个租户空间；false 为单租户空间媒体库，不能创建租户空间，仅可使用默认的单一租户空间。默认为 false。在媒体库创建后不能修改。</p>
                     * 
                     */
                    bool GetIsMultiSpace() const;

                    /**
                     * 设置<p>true 为多租户空间媒体库，可创建多个租户空间；false 为单租户空间媒体库，不能创建租户空间，仅可使用默认的单一租户空间。默认为 false。在媒体库创建后不能修改。</p>
                     * @param _isMultiSpace <p>true 为多租户空间媒体库，可创建多个租户空间；false 为单租户空间媒体库，不能创建租户空间，仅可使用默认的单一租户空间。默认为 false。在媒体库创建后不能修改。</p>
                     * 
                     */
                    void SetIsMultiSpace(const bool& _isMultiSpace);

                    /**
                     * 判断参数 IsMultiSpace 是否已赋值
                     * @return IsMultiSpace 是否已赋值
                     * 
                     */
                    bool IsMultiSpaceHasBeenSet() const;

                    /**
                     * 获取<p>保存至 COS 对象存储的文件的存储类型，仅支持 STANDARD、STANDARD_IA、INTELLIGENT_TIERING、MAZ_STANDARD、MAZ_STANDARD_IA 和 MAZ_INTELLIGENT_TIERING，默认为 STANDARD，当使用多 AZ 存储桶时将自动使用 MAZ_ 开头的用于多 AZ 的存储类型，否则自动使用非 MAZ_ 开头的用于非多 AZ 的存储类型。当指定智能分层存储 INTELLIGENT_TIERING 或 MAZ_INTELLIGENT_TIERING 时，需要事先为存储桶开启智能分层存储，否则将返回失败。在媒体库创建后不能修改。</p>
                     * @return CosStorageClass <p>保存至 COS 对象存储的文件的存储类型，仅支持 STANDARD、STANDARD_IA、INTELLIGENT_TIERING、MAZ_STANDARD、MAZ_STANDARD_IA 和 MAZ_INTELLIGENT_TIERING，默认为 STANDARD，当使用多 AZ 存储桶时将自动使用 MAZ_ 开头的用于多 AZ 的存储类型，否则自动使用非 MAZ_ 开头的用于非多 AZ 的存储类型。当指定智能分层存储 INTELLIGENT_TIERING 或 MAZ_INTELLIGENT_TIERING 时，需要事先为存储桶开启智能分层存储，否则将返回失败。在媒体库创建后不能修改。</p>
                     * 
                     */
                    std::string GetCosStorageClass() const;

                    /**
                     * 设置<p>保存至 COS 对象存储的文件的存储类型，仅支持 STANDARD、STANDARD_IA、INTELLIGENT_TIERING、MAZ_STANDARD、MAZ_STANDARD_IA 和 MAZ_INTELLIGENT_TIERING，默认为 STANDARD，当使用多 AZ 存储桶时将自动使用 MAZ_ 开头的用于多 AZ 的存储类型，否则自动使用非 MAZ_ 开头的用于非多 AZ 的存储类型。当指定智能分层存储 INTELLIGENT_TIERING 或 MAZ_INTELLIGENT_TIERING 时，需要事先为存储桶开启智能分层存储，否则将返回失败。在媒体库创建后不能修改。</p>
                     * @param _cosStorageClass <p>保存至 COS 对象存储的文件的存储类型，仅支持 STANDARD、STANDARD_IA、INTELLIGENT_TIERING、MAZ_STANDARD、MAZ_STANDARD_IA 和 MAZ_INTELLIGENT_TIERING，默认为 STANDARD，当使用多 AZ 存储桶时将自动使用 MAZ_ 开头的用于多 AZ 的存储类型，否则自动使用非 MAZ_ 开头的用于非多 AZ 的存储类型。当指定智能分层存储 INTELLIGENT_TIERING 或 MAZ_INTELLIGENT_TIERING 时，需要事先为存储桶开启智能分层存储，否则将返回失败。在媒体库创建后不能修改。</p>
                     * 
                     */
                    void SetCosStorageClass(const std::string& _cosStorageClass);

                    /**
                     * 判断参数 CosStorageClass 是否已赋值
                     * @return CosStorageClass 是否已赋值
                     * 
                     */
                    bool CosStorageClassHasBeenSet() const;

                    /**
                     * 获取<p>是否开启回收站功能。默认为 false。</p>
                     * @return UseRecycleBin <p>是否开启回收站功能。默认为 false。</p>
                     * 
                     */
                    bool GetUseRecycleBin() const;

                    /**
                     * 设置<p>是否开启回收站功能。默认为 false。</p>
                     * @param _useRecycleBin <p>是否开启回收站功能。默认为 false。</p>
                     * 
                     */
                    void SetUseRecycleBin(const bool& _useRecycleBin);

                    /**
                     * 判断参数 UseRecycleBin 是否已赋值
                     * @return UseRecycleBin 是否已赋值
                     * 
                     */
                    bool UseRecycleBinHasBeenSet() const;

                    /**
                     * 获取<p>当开启回收站时，自动删除回收站项目的天数，不能超过 1095（3 年），指定为 0 则不自动删除，默认为 0。当未开启回收站时，该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRemoveRecycledDays <p>当开启回收站时，自动删除回收站项目的天数，不能超过 1095（3 年），指定为 0 则不自动删除，默认为 0。当未开启回收站时，该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAutoRemoveRecycledDays() const;

                    /**
                     * 设置<p>当开启回收站时，自动删除回收站项目的天数，不能超过 1095（3 年），指定为 0 则不自动删除，默认为 0。当未开启回收站时，该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRemoveRecycledDays <p>当开启回收站时，自动删除回收站项目的天数，不能超过 1095（3 年），指定为 0 则不自动删除，默认为 0。当未开启回收站时，该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRemoveRecycledDays(const uint64_t& _autoRemoveRecycledDays);

                    /**
                     * 判断参数 AutoRemoveRecycledDays 是否已赋值
                     * @return AutoRemoveRecycledDays 是否已赋值
                     * 
                     */
                    bool AutoRemoveRecycledDaysHasBeenSet() const;

                    /**
                     * 获取<p>是否启用文件路径搜索功能。默认为 false。</p>
                     * @return EnableSearch <p>是否启用文件路径搜索功能。默认为 false。</p>
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置<p>是否启用文件路径搜索功能。默认为 false。</p>
                     * @param _enableSearch <p>是否启用文件路径搜索功能。默认为 false。</p>
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取<p>设置媒体库或租户空间配额且配额小于已使用存储量时，是否拒绝设置请求。默认为 false。</p>
                     * @return DenyOnQuotaLessThanUsage <p>设置媒体库或租户空间配额且配额小于已使用存储量时，是否拒绝设置请求。默认为 false。</p>
                     * 
                     */
                    bool GetDenyOnQuotaLessThanUsage() const;

                    /**
                     * 设置<p>设置媒体库或租户空间配额且配额小于已使用存储量时，是否拒绝设置请求。默认为 false。</p>
                     * @param _denyOnQuotaLessThanUsage <p>设置媒体库或租户空间配额且配额小于已使用存储量时，是否拒绝设置请求。默认为 false。</p>
                     * 
                     */
                    void SetDenyOnQuotaLessThanUsage(const bool& _denyOnQuotaLessThanUsage);

                    /**
                     * 判断参数 DenyOnQuotaLessThanUsage 是否已赋值
                     * @return DenyOnQuotaLessThanUsage 是否已赋值
                     * 
                     */
                    bool DenyOnQuotaLessThanUsageHasBeenSet() const;

                    /**
                     * 获取<p>是否开启历史版本。默认为 false。</p>
                     * @return EnableFileHistory <p>是否开启历史版本。默认为 false。</p>
                     * 
                     */
                    bool GetEnableFileHistory() const;

                    /**
                     * 设置<p>是否开启历史版本。默认为 false。</p>
                     * @param _enableFileHistory <p>是否开启历史版本。默认为 false。</p>
                     * 
                     */
                    void SetEnableFileHistory(const bool& _enableFileHistory);

                    /**
                     * 判断参数 EnableFileHistory 是否已赋值
                     * @return EnableFileHistory 是否已赋值
                     * 
                     */
                    bool EnableFileHistoryHasBeenSet() const;

                    /**
                     * 获取<p>当开启历史版本时，指定单个文件保留的历史版本的数量上限，取值范围为 1 到 999。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileHistoryCount <p>当开启历史版本时，指定单个文件保留的历史版本的数量上限，取值范围为 1 到 999。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileHistoryCount() const;

                    /**
                     * 设置<p>当开启历史版本时，指定单个文件保留的历史版本的数量上限，取值范围为 1 到 999。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileHistoryCount <p>当开启历史版本时，指定单个文件保留的历史版本的数量上限，取值范围为 1 到 999。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileHistoryCount(const uint64_t& _fileHistoryCount);

                    /**
                     * 判断参数 FileHistoryCount 是否已赋值
                     * @return FileHistoryCount 是否已赋值
                     * 
                     */
                    bool FileHistoryCountHasBeenSet() const;

                    /**
                     * 获取<p>当开启历史版本时，指定历史版本保留的最长天数，取值范围为 0 到 999，当指定为 0 时代表永久保留。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileHistoryExpireDay <p>当开启历史版本时，指定历史版本保留的最长天数，取值范围为 0 到 999，当指定为 0 时代表永久保留。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileHistoryExpireDay() const;

                    /**
                     * 设置<p>当开启历史版本时，指定历史版本保留的最长天数，取值范围为 0 到 999，当指定为 0 时代表永久保留。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileHistoryExpireDay <p>当开启历史版本时，指定历史版本保留的最长天数，取值范围为 0 到 999，当指定为 0 时代表永久保留。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileHistoryExpireDay(const uint64_t& _fileHistoryExpireDay);

                    /**
                     * 判断参数 FileHistoryExpireDay 是否已赋值
                     * @return FileHistoryExpireDay 是否已赋值
                     * 
                     */
                    bool FileHistoryExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>目录或文件名的最长长度，不能超过 255，默认为 255。修改该参数不会影响存量目录或文件名，即如果将该字段的值改小，已经存在的长度超过目标值的目录或文件名不会发生变化。</p>
                     * @return MaxDirFileNameLength <p>目录或文件名的最长长度，不能超过 255，默认为 255。修改该参数不会影响存量目录或文件名，即如果将该字段的值改小，已经存在的长度超过目标值的目录或文件名不会发生变化。</p>
                     * 
                     */
                    uint64_t GetMaxDirFileNameLength() const;

                    /**
                     * 设置<p>目录或文件名的最长长度，不能超过 255，默认为 255。修改该参数不会影响存量目录或文件名，即如果将该字段的值改小，已经存在的长度超过目标值的目录或文件名不会发生变化。</p>
                     * @param _maxDirFileNameLength <p>目录或文件名的最长长度，不能超过 255，默认为 255。修改该参数不会影响存量目录或文件名，即如果将该字段的值改小，已经存在的长度超过目标值的目录或文件名不会发生变化。</p>
                     * 
                     */
                    void SetMaxDirFileNameLength(const uint64_t& _maxDirFileNameLength);

                    /**
                     * 判断参数 MaxDirFileNameLength 是否已赋值
                     * @return MaxDirFileNameLength 是否已赋值
                     * 
                     */
                    bool MaxDirFileNameLengthHasBeenSet() const;

                    /**
                     * 获取<p>是否开启公有读，开启后读操作无需使用访问令牌，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPublicRead <p>是否开启公有读，开启后读操作无需使用访问令牌，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsPublicRead() const;

                    /**
                     * 设置<p>是否开启公有读，开启后读操作无需使用访问令牌，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPublicRead <p>是否开启公有读，开启后读操作无需使用访问令牌，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPublicRead(const bool& _isPublicRead);

                    /**
                     * 判断参数 IsPublicRead 是否已赋值
                     * @return IsPublicRead 是否已赋值
                     * 
                     */
                    bool IsPublicReadHasBeenSet() const;

                    /**
                     * 获取<p>媒体类型媒体库是否开启多相簿，开启后可创建一级目录（即相簿）且媒体文件只能保存在各相簿中，否则不能创建相簿且媒体文件只能保存在根目录。默认为 false。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。在媒体库创建后不能修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMultiAlbum <p>媒体类型媒体库是否开启多相簿，开启后可创建一级目录（即相簿）且媒体文件只能保存在各相簿中，否则不能创建相簿且媒体文件只能保存在根目录。默认为 false。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。在媒体库创建后不能修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsMultiAlbum() const;

                    /**
                     * 设置<p>媒体类型媒体库是否开启多相簿，开启后可创建一级目录（即相簿）且媒体文件只能保存在各相簿中，否则不能创建相簿且媒体文件只能保存在根目录。默认为 false。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。在媒体库创建后不能修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMultiAlbum <p>媒体类型媒体库是否开启多相簿，开启后可创建一级目录（即相簿）且媒体文件只能保存在各相簿中，否则不能创建相簿且媒体文件只能保存在根目录。默认为 false。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。在媒体库创建后不能修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsMultiAlbum(const bool& _isMultiAlbum);

                    /**
                     * 判断参数 IsMultiAlbum 是否已赋值
                     * @return IsMultiAlbum 是否已赋值
                     * 
                     */
                    bool IsMultiAlbumHasBeenSet() const;

                    /**
                     * 获取<p>媒体类型媒体库是否允许上传照片，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowPhoto <p>媒体类型媒体库是否允许上传照片，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllowPhoto() const;

                    /**
                     * 设置<p>媒体类型媒体库是否允许上传照片，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowPhoto <p>媒体类型媒体库是否允许上传照片，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowPhoto(const bool& _allowPhoto);

                    /**
                     * 判断参数 AllowPhoto 是否已赋值
                     * @return AllowPhoto 是否已赋值
                     * 
                     */
                    bool AllowPhotoHasBeenSet() const;

                    /**
                     * 获取<p>当媒体类型媒体库允许上传照片时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowPhotoExtName <p>当媒体类型媒体库允许上传照片时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowPhotoExtName() const;

                    /**
                     * 设置<p>当媒体类型媒体库允许上传照片时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowPhotoExtName <p>当媒体类型媒体库允许上传照片时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowPhotoExtName(const std::vector<std::string>& _allowPhotoExtName);

                    /**
                     * 判断参数 AllowPhotoExtName 是否已赋值
                     * @return AllowPhotoExtName 是否已赋值
                     * 
                     */
                    bool AllowPhotoExtNameHasBeenSet() const;

                    /**
                     * 获取<p>媒体类型媒体库是否允许上传视频，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowVideo <p>媒体类型媒体库是否允许上传视频，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllowVideo() const;

                    /**
                     * 设置<p>媒体类型媒体库是否允许上传视频，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowVideo <p>媒体类型媒体库是否允许上传视频，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowVideo(const bool& _allowVideo);

                    /**
                     * 判断参数 AllowVideo 是否已赋值
                     * @return AllowVideo 是否已赋值
                     * 
                     */
                    bool AllowVideoHasBeenSet() const;

                    /**
                     * 获取<p>当媒体类型媒体库允许上传视频时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowVideoExtName <p>当媒体类型媒体库允许上传视频时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowVideoExtName() const;

                    /**
                     * 设置<p>当媒体类型媒体库允许上传视频时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowVideoExtName <p>当媒体类型媒体库允许上传视频时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowVideoExtName(const std::vector<std::string>& _allowVideoExtName);

                    /**
                     * 判断参数 AllowVideoExtName 是否已赋值
                     * @return AllowVideoExtName 是否已赋值
                     * 
                     */
                    bool AllowVideoExtNameHasBeenSet() const;

                    /**
                     * 获取<p>指定文件类型媒体库允许的文件扩展名，默认为空数组，此时允许上传所有类型文件。仅单租户空间文件类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowFileExtName <p>指定文件类型媒体库允许的文件扩展名，默认为空数组，此时允许上传所有类型文件。仅单租户空间文件类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowFileExtName() const;

                    /**
                     * 设置<p>指定文件类型媒体库允许的文件扩展名，默认为空数组，此时允许上传所有类型文件。仅单租户空间文件类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowFileExtName <p>指定文件类型媒体库允许的文件扩展名，默认为空数组，此时允许上传所有类型文件。仅单租户空间文件类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowFileExtName(const std::vector<std::string>& _allowFileExtName);

                    /**
                     * 判断参数 AllowFileExtName 是否已赋值
                     * @return AllowFileExtName 是否已赋值
                     * 
                     */
                    bool AllowFileExtNameHasBeenSet() const;

                    /**
                     * 获取<p>照片上传时是否进行敏感内容鉴定，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognizeSensitiveContent <p>照片上传时是否进行敏感内容鉴定，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRecognizeSensitiveContent() const;

                    /**
                     * 设置<p>照片上传时是否进行敏感内容鉴定，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognizeSensitiveContent <p>照片上传时是否进行敏感内容鉴定，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecognizeSensitiveContent(const bool& _recognizeSensitiveContent);

                    /**
                     * 判断参数 RecognizeSensitiveContent 是否已赋值
                     * @return RecognizeSensitiveContent 是否已赋值
                     * 
                     */
                    bool RecognizeSensitiveContentHasBeenSet() const;

                    /**
                     * 获取<p>是否开启媒体库配额</p><p>默认值：false</p><p>创建媒体库指定，创建后不允许修改</p>
                     * @return EnableQuota <p>是否开启媒体库配额</p><p>默认值：false</p><p>创建媒体库指定，创建后不允许修改</p>
                     * 
                     */
                    bool GetEnableQuota() const;

                    /**
                     * 设置<p>是否开启媒体库配额</p><p>默认值：false</p><p>创建媒体库指定，创建后不允许修改</p>
                     * @param _enableQuota <p>是否开启媒体库配额</p><p>默认值：false</p><p>创建媒体库指定，创建后不允许修改</p>
                     * 
                     */
                    void SetEnableQuota(const bool& _enableQuota);

                    /**
                     * 判断参数 EnableQuota 是否已赋值
                     * @return EnableQuota 是否已赋值
                     * 
                     */
                    bool EnableQuotaHasBeenSet() const;

                    /**
                     * 获取<p>媒体库配额，单位：字节</p><p>取值范围：[1, 9223372036854775807]</p><p>创建媒体库时，开启媒体库配额情况下，此参数必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibraryQuota <p>媒体库配额，单位：字节</p><p>取值范围：[1, 9223372036854775807]</p><p>创建媒体库时，开启媒体库配额情况下，此参数必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLibraryQuota() const;

                    /**
                     * 设置<p>媒体库配额，单位：字节</p><p>取值范围：[1, 9223372036854775807]</p><p>创建媒体库时，开启媒体库配额情况下，此参数必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libraryQuota <p>媒体库配额，单位：字节</p><p>取值范围：[1, 9223372036854775807]</p><p>创建媒体库时，开启媒体库配额情况下，此参数必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibraryQuota(const uint64_t& _libraryQuota);

                    /**
                     * 判断参数 LibraryQuota 是否已赋值
                     * @return LibraryQuota 是否已赋值
                     * 
                     */
                    bool LibraryQuotaHasBeenSet() const;

                private:

                    /**
                     * <p>true 为文件类型媒体库，可存储任何类型文件；false 为媒体类型媒体库，仅可存储照片和视频类型文件。默认为 false。在媒体库创建后不能修改。</p>
                     */
                    bool m_isFileLibrary;
                    bool m_isFileLibraryHasBeenSet;

                    /**
                     * <p>true 为多租户空间媒体库，可创建多个租户空间；false 为单租户空间媒体库，不能创建租户空间，仅可使用默认的单一租户空间。默认为 false。在媒体库创建后不能修改。</p>
                     */
                    bool m_isMultiSpace;
                    bool m_isMultiSpaceHasBeenSet;

                    /**
                     * <p>保存至 COS 对象存储的文件的存储类型，仅支持 STANDARD、STANDARD_IA、INTELLIGENT_TIERING、MAZ_STANDARD、MAZ_STANDARD_IA 和 MAZ_INTELLIGENT_TIERING，默认为 STANDARD，当使用多 AZ 存储桶时将自动使用 MAZ_ 开头的用于多 AZ 的存储类型，否则自动使用非 MAZ_ 开头的用于非多 AZ 的存储类型。当指定智能分层存储 INTELLIGENT_TIERING 或 MAZ_INTELLIGENT_TIERING 时，需要事先为存储桶开启智能分层存储，否则将返回失败。在媒体库创建后不能修改。</p>
                     */
                    std::string m_cosStorageClass;
                    bool m_cosStorageClassHasBeenSet;

                    /**
                     * <p>是否开启回收站功能。默认为 false。</p>
                     */
                    bool m_useRecycleBin;
                    bool m_useRecycleBinHasBeenSet;

                    /**
                     * <p>当开启回收站时，自动删除回收站项目的天数，不能超过 1095（3 年），指定为 0 则不自动删除，默认为 0。当未开启回收站时，该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_autoRemoveRecycledDays;
                    bool m_autoRemoveRecycledDaysHasBeenSet;

                    /**
                     * <p>是否启用文件路径搜索功能。默认为 false。</p>
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * <p>设置媒体库或租户空间配额且配额小于已使用存储量时，是否拒绝设置请求。默认为 false。</p>
                     */
                    bool m_denyOnQuotaLessThanUsage;
                    bool m_denyOnQuotaLessThanUsageHasBeenSet;

                    /**
                     * <p>是否开启历史版本。默认为 false。</p>
                     */
                    bool m_enableFileHistory;
                    bool m_enableFileHistoryHasBeenSet;

                    /**
                     * <p>当开启历史版本时，指定单个文件保留的历史版本的数量上限，取值范围为 1 到 999。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileHistoryCount;
                    bool m_fileHistoryCountHasBeenSet;

                    /**
                     * <p>当开启历史版本时，指定历史版本保留的最长天数，取值范围为 0 到 999，当指定为 0 时代表永久保留。当未开启历史版本时，该属性可能为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileHistoryExpireDay;
                    bool m_fileHistoryExpireDayHasBeenSet;

                    /**
                     * <p>目录或文件名的最长长度，不能超过 255，默认为 255。修改该参数不会影响存量目录或文件名，即如果将该字段的值改小，已经存在的长度超过目标值的目录或文件名不会发生变化。</p>
                     */
                    uint64_t m_maxDirFileNameLength;
                    bool m_maxDirFileNameLengthHasBeenSet;

                    /**
                     * <p>是否开启公有读，开启后读操作无需使用访问令牌，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isPublicRead;
                    bool m_isPublicReadHasBeenSet;

                    /**
                     * <p>媒体类型媒体库是否开启多相簿，开启后可创建一级目录（即相簿）且媒体文件只能保存在各相簿中，否则不能创建相簿且媒体文件只能保存在根目录。默认为 false。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。在媒体库创建后不能修改。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isMultiAlbum;
                    bool m_isMultiAlbumHasBeenSet;

                    /**
                     * <p>媒体类型媒体库是否允许上传照片，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allowPhoto;
                    bool m_allowPhotoHasBeenSet;

                    /**
                     * <p>当媒体类型媒体库允许上传照片时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowPhotoExtName;
                    bool m_allowPhotoExtNameHasBeenSet;

                    /**
                     * <p>媒体类型媒体库是否允许上传视频，默认为 true。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allowVideo;
                    bool m_allowVideoHasBeenSet;

                    /**
                     * <p>当媒体类型媒体库允许上传视频时，指定允许的扩展名，默认为空数组，此时将根据文件扩展名对应的 MIME 类型自动判断。仅单租户空间媒体类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowVideoExtName;
                    bool m_allowVideoExtNameHasBeenSet;

                    /**
                     * <p>指定文件类型媒体库允许的文件扩展名，默认为空数组，此时允许上传所有类型文件。仅单租户空间文件类型媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowFileExtName;
                    bool m_allowFileExtNameHasBeenSet;

                    /**
                     * <p>照片上传时是否进行敏感内容鉴定，默认为 false。仅单租户空间媒体库支持该属性，否则该属性为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_recognizeSensitiveContent;
                    bool m_recognizeSensitiveContentHasBeenSet;

                    /**
                     * <p>是否开启媒体库配额</p><p>默认值：false</p><p>创建媒体库指定，创建后不允许修改</p>
                     */
                    bool m_enableQuota;
                    bool m_enableQuotaHasBeenSet;

                    /**
                     * <p>媒体库配额，单位：字节</p><p>取值范围：[1, 9223372036854775807]</p><p>创建媒体库时，开启媒体库配额情况下，此参数必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_libraryQuota;
                    bool m_libraryQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_
