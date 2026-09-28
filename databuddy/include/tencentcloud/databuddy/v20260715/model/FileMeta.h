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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件元数据
                */
                class FileMeta : public AbstractModel
                {
                public:
                    FileMeta();
                    ~FileMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件id</p>
                     * @return FileId <p>文件id</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件id</p>
                     * @param _fileId <p>文件id</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>文件/文件夹名称</p>
                     * @return FileName <p>文件/文件夹名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件/文件夹名称</p>
                     * @param _fileName <p>文件/文件夹名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件类型</p>
                     * @return FileType <p>文件类型</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型</p>
                     * @param _fileType <p>文件类型</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒秒级时间戳</p><p>参数格式：时间戳</p>
                     * @return CreateTime <p>创建时间，毫秒秒级时间戳</p><p>参数格式：时间戳</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒秒级时间戳</p><p>参数格式：时间戳</p>
                     * @param _createTime <p>创建时间，毫秒秒级时间戳</p><p>参数格式：时间戳</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：时间戳字符串</p>
                     * @return UpdateTime <p>更新时间</p><p>参数格式：时间戳字符串</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：时间戳字符串</p>
                     * @param _updateTime <p>更新时间</p><p>参数格式：时间戳字符串</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>acl权限类型</p>
                     * @return AllowActions <p>acl权限类型</p>
                     * 
                     */
                    std::vector<std::string> GetAllowActions() const;

                    /**
                     * 设置<p>acl权限类型</p>
                     * @param _allowActions <p>acl权限类型</p>
                     * 
                     */
                    void SetAllowActions(const std::vector<std::string>& _allowActions);

                    /**
                     * 判断参数 AllowActions 是否已赋值
                     * @return AllowActions 是否已赋值
                     * 
                     */
                    bool AllowActionsHasBeenSet() const;

                    /**
                     * 获取<p>是否收藏</p>
                     * @return IsFavorite <p>是否收藏</p>
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置<p>是否收藏</p>
                     * @param _isFavorite <p>是否收藏</p>
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取<p>文件path</p>
                     * @return PathName <p>文件path</p>
                     * 
                     */
                    std::string GetPathName() const;

                    /**
                     * 设置<p>文件path</p>
                     * @param _pathName <p>文件path</p>
                     * 
                     */
                    void SetPathName(const std::string& _pathName);

                    /**
                     * 判断参数 PathName 是否已赋值
                     * @return PathName 是否已赋值
                     * 
                     */
                    bool PathNameHasBeenSet() const;

                    /**
                     * 获取<p>是否系统创建</p>
                     * @return IsSystemGenerated <p>是否系统创建</p>
                     * 
                     */
                    bool GetIsSystemGenerated() const;

                    /**
                     * 设置<p>是否系统创建</p>
                     * @param _isSystemGenerated <p>是否系统创建</p>
                     * 
                     */
                    void SetIsSystemGenerated(const bool& _isSystemGenerated);

                    /**
                     * 判断参数 IsSystemGenerated 是否已赋值
                     * @return IsSystemGenerated 是否已赋值
                     * 
                     */
                    bool IsSystemGeneratedHasBeenSet() const;

                private:

                    /**
                     * <p>文件id</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>文件/文件夹名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件类型</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>创建时间，毫秒秒级时间戳</p><p>参数格式：时间戳</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：时间戳字符串</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>acl权限类型</p>
                     */
                    std::vector<std::string> m_allowActions;
                    bool m_allowActionsHasBeenSet;

                    /**
                     * <p>是否收藏</p>
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * <p>文件path</p>
                     */
                    std::string m_pathName;
                    bool m_pathNameHasBeenSet;

                    /**
                     * <p>是否系统创建</p>
                     */
                    bool m_isSystemGenerated;
                    bool m_isSystemGeneratedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEMETA_H_
