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
                     * 获取<p>文件名称</p>
                     * @return FileName <p>文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
                     * @param _fileName <p>文件名称</p>
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
                     * 获取<p>文件大小，字节</p>
                     * @return FileSize <p>文件大小，字节</p>
                     * 
                     */
                    double GetFileSize() const;

                    /**
                     * 设置<p>文件大小，字节</p>
                     * @param _fileSize <p>文件大小，字节</p>
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
                     * 获取<p>文件类型,0=文本,1=表格，默认0</p>
                     * @return Type <p>文件类型,0=文本,1=表格，默认0</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>文件类型,0=文本,1=表格，默认0</p>
                     * @param _type <p>文件类型,0=文本,1=表格，默认0</p>
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
                     * 获取<p>文件ID</p>
                     * @return FileId <p>文件ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件ID</p>
                     * @param _fileId <p>文件ID</p>
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
                     * 获取<p>状态，0：数据处理中  1：可用 -1：错误</p>
                     * @return Status <p>状态，0：数据处理中  1：可用 -1：错误</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态，0：数据处理中  1：可用 -1：错误</p>
                     * @param _status <p>状态，0：数据处理中  1：可用 -1：错误</p>
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
                     * 获取<p>操作者</p>
                     * @return CreateUser <p>操作者</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>操作者</p>
                     * @param _createUser <p>操作者</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>分片策略</p>
                     * @return ChunkConfig <p>分片策略</p>
                     * 
                     */
                    KnowledgeTaskConfig GetChunkConfig() const;

                    /**
                     * 设置<p>分片策略</p>
                     * @param _chunkConfig <p>分片策略</p>
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
                     * 获取<p>文件来源0=unknow,1=user_cos,2=local</p>
                     * @return Source <p>文件来源0=unknow,1=user_cos,2=local</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>文件来源0=unknow,1=user_cos,2=local</p>
                     * @param _source <p>文件来源0=unknow,1=user_cos,2=local</p>
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
                     * 获取<p>文件url</p>
                     * @return FileUrl <p>文件url</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>文件url</p>
                     * @param _fileUrl <p>文件url</p>
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
                     * 获取<p>是否官方示例，0=否，1=是</p>
                     * @return IsShowCase <p>是否官方示例，0=否，1=是</p>
                     * 
                     */
                    int64_t GetIsShowCase() const;

                    /**
                     * 设置<p>是否官方示例，0=否，1=是</p>
                     * @param _isShowCase <p>是否官方示例，0=否，1=是</p>
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
                     * 获取<p>文档摘要</p>
                     * @return DocumentSummary <p>文档摘要</p>
                     * 
                     */
                    std::string GetDocumentSummary() const;

                    /**
                     * 设置<p>文档摘要</p>
                     * @param _documentSummary <p>文档摘要</p>
                     * 
                     */
                    void SetDocumentSummary(const std::string& _documentSummary);

                    /**
                     * 判断参数 DocumentSummary 是否已赋值
                     * @return DocumentSummary 是否已赋值
                     * 
                     */
                    bool DocumentSummaryHasBeenSet() const;

                    /**
                     * 获取<p>网页地址</p>
                     * @return WebUrl <p>网页地址</p>
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置<p>网页地址</p>
                     * @param _webUrl <p>网页地址</p>
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取<p>文件能力标识列表</p>
                     * @return Capabilities <p>文件能力标识列表</p>
                     * 
                     */
                    std::vector<std::string> GetCapabilities() const;

                    /**
                     * 设置<p>文件能力标识列表</p>
                     * @param _capabilities <p>文件能力标识列表</p>
                     * 
                     */
                    void SetCapabilities(const std::vector<std::string>& _capabilities);

                    /**
                     * 判断参数 Capabilities 是否已赋值
                     * @return Capabilities 是否已赋值
                     * 
                     */
                    bool CapabilitiesHasBeenSet() const;

                private:

                    /**
                     * <p>文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件大小，字节</p>
                     */
                    double m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>文件类型,0=文本,1=表格，默认0</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文件ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>状态，0：数据处理中  1：可用 -1：错误</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>操作者</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>分片策略</p>
                     */
                    KnowledgeTaskConfig m_chunkConfig;
                    bool m_chunkConfigHasBeenSet;

                    /**
                     * <p>文件来源0=unknow,1=user_cos,2=local</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>文件url</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>是否官方示例，0=否，1=是</p>
                     */
                    int64_t m_isShowCase;
                    bool m_isShowCaseHasBeenSet;

                    /**
                     * <p>文档摘要</p>
                     */
                    std::string m_documentSummary;
                    bool m_documentSummaryHasBeenSet;

                    /**
                     * <p>网页地址</p>
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * <p>文件能力标识列表</p>
                     */
                    std::vector<std::string> m_capabilities;
                    bool m_capabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILEINFO_H_
