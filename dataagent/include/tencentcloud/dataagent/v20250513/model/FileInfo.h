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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILEINFO_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/KnowledgeTaskConfig.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 知识库文件信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
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
                     * 获取文件大小，字节
                     * @return FileSize 文件大小，字节
                     * 
                     */
                    double GetFileSize() const;

                    /**
                     * 设置文件大小，字节
                     * @param _fileSize 文件大小，字节
                     * 
                     */
                    void SetFileSize(const double& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件类型,0=文本,1=表格，默认0

                     * @return Type 文件类型,0=文本,1=表格，默认0

                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置文件类型,0=文本,1=表格，默认0

                     * @param _type 文件类型,0=文本,1=表格，默认0

                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取文件ID
                     * @return FileId 文件ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID
                     * @param _fileId 文件ID
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
                     * 获取状态，0：数据处理中  1：可用 -1：错误
                     * @return Status 状态，0：数据处理中  1：可用 -1：错误
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0：数据处理中  1：可用 -1：错误
                     * @param _status 状态，0：数据处理中  1：可用 -1：错误
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作者

                     * @return CreateUser 操作者

                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置操作者

                     * @param _createUser 操作者

                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取分片策略
                     * @return ChunkConfig 分片策略
                     * 
                     */
                    KnowledgeTaskConfig GetChunkConfig() const;

                    /**
                     * 设置分片策略
                     * @param _chunkConfig 分片策略
                     * 
                     */
                    void SetChunkConfig(const KnowledgeTaskConfig& _chunkConfig);

                    /**
                     * 判断参数 ChunkConfig 是否已赋值
                     * @return ChunkConfig 是否已赋值
                     * 
                     */
                    bool ChunkConfigHasBeenSet() const;

                    /**
                     * 获取文件来源0=unknow,1=user_cos,2=local
                     * @return Source 文件来源0=unknow,1=user_cos,2=local
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置文件来源0=unknow,1=user_cos,2=local
                     * @param _source 文件来源0=unknow,1=user_cos,2=local
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取文件url
                     * @return FileUrl 文件url
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件url
                     * @param _fileUrl 文件url
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
                     * 获取是否官方示例，0=否，1=是
                     * @return IsShowCase 是否官方示例，0=否，1=是
                     * 
                     */
                    int64_t GetIsShowCase() const;

                    /**
                     * 设置是否官方示例，0=否，1=是
                     * @param _isShowCase 是否官方示例，0=否，1=是
                     * 
                     */
                    void SetIsShowCase(const int64_t& _isShowCase);

                    /**
                     * 判断参数 IsShowCase 是否已赋值
                     * @return IsShowCase 是否已赋值
                     * 
                     */
                    bool IsShowCaseHasBeenSet() const;

                    /**
                     * 获取文档摘要
                     * @return DocumentSummary 文档摘要
                     * 
                     */
                    std::string GetDocumentSummary() const;

                    /**
                     * 设置文档摘要
                     * @param _documentSummary 文档摘要
                     * 
                     */
                    void SetDocumentSummary(const std::string& _documentSummary);

                    /**
                     * 判断参数 DocumentSummary 是否已赋值
                     * @return DocumentSummary 是否已赋值
                     * 
                     */
                    bool DocumentSummaryHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小，字节
                     */
                    double m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件类型,0=文本,1=表格，默认0

                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 状态，0：数据处理中  1：可用 -1：错误
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作者

                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分片策略
                     */
                    KnowledgeTaskConfig m_chunkConfig;
                    bool m_chunkConfigHasBeenSet;

                    /**
                     * 文件来源0=unknow,1=user_cos,2=local
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 文件url
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 是否官方示例，0=否，1=是
                     */
                    int64_t m_isShowCase;
                    bool m_isShowCaseHasBeenSet;

                    /**
                     * 文档摘要
                     */
                    std::string m_documentSummary;
                    bool m_documentSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILEINFO_H_
