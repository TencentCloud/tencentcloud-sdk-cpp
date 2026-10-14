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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * FileInfo 文件信息
                */
                class ConversationFileInfo : public AbstractModel
                {
                public:
                    ConversationFileInfo();
                    ~ConversationFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件创建时间</p>
                     * @return CreateTime <p>文件创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>文件创建时间</p>
                     * @param _createTime <p>文件创建时间</p>
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
                     * 获取<p>文档业务 ID</p>
                     * @return DocId <p>文档业务 ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>文档业务 ID</p>
                     * @param _docId <p>文档业务 ID</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _fileName <p>文件名</p>
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
                     * 获取<p>文件大小</p>
                     * @return FileSize <p>文件大小</p>
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p>
                     * @param _fileSize <p>文件大小</p>
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

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
                     * 获取<p>文件下载链接</p>
                     * @return FileUrl <p>文件下载链接</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>文件下载链接</p>
                     * @param _fileUrl <p>文件下载链接</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>文件在沙箱中的原始路径</p>
                     * @return LocalPath <p>文件在沙箱中的原始路径</p>
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置<p>文件在沙箱中的原始路径</p>
                     * @param _localPath <p>文件在沙箱中的原始路径</p>
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取<p>文件审核状态</p><p>枚举值：</p><ul><li>1： 审核中</li><li>2： 审核通过</li><li>3： 审核不通过</li></ul>
                     * @return AuditStatus <p>文件审核状态</p><p>枚举值：</p><ul><li>1： 审核中</li><li>2： 审核通过</li><li>3： 审核不通过</li></ul>
                     * 
                     */
                    uint64_t GetAuditStatus() const;

                    /**
                     * 设置<p>文件审核状态</p><p>枚举值：</p><ul><li>1： 审核中</li><li>2： 审核通过</li><li>3： 审核不通过</li></ul>
                     * @param _auditStatus <p>文件审核状态</p><p>枚举值：</p><ul><li>1： 审核中</li><li>2： 审核通过</li><li>3： 审核不通过</li></ul>
                     * 
                     */
                    void SetAuditStatus(const uint64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                private:

                    /**
                     * <p>文件创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>文档业务 ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件大小</p>
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件类型</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件下载链接</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>文件在沙箱中的原始路径</p>
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * <p>文件审核状态</p><p>枚举值：</p><ul><li>1： 审核中</li><li>2： 审核通过</li><li>3： 审核不通过</li></ul>
                     */
                    uint64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILEINFO_H_
