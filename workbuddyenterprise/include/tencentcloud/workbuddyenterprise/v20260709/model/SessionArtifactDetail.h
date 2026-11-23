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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONARTIFACTDETAIL_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONARTIFACTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 会话物料结构
                */
                class SessionArtifactDetail : public AbstractModel
                {
                public:
                    SessionArtifactDetail();
                    ~SessionArtifactDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>物料ID</p>
                     * @return ArtifactId <p>物料ID</p>
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>物料ID</p>
                     * @param _artifactId <p>物料ID</p>
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>AgentID</p>
                     * @return AgentId <p>AgentID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>AgentID</p>
                     * @param _agentId <p>AgentID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

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
                     * 获取<p>文件沙箱内路径</p>
                     * @return FilePath <p>文件沙箱内路径</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>文件沙箱内路径</p>
                     * @param _filePath <p>文件沙箱内路径</p>
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取<p>文件字节数</p>
                     * @return FileSizeBytes <p>文件字节数</p>
                     * 
                     */
                    int64_t GetFileSizeBytes() const;

                    /**
                     * 设置<p>文件字节数</p>
                     * @param _fileSizeBytes <p>文件字节数</p>
                     * 
                     */
                    void SetFileSizeBytes(const int64_t& _fileSizeBytes);

                    /**
                     * 判断参数 FileSizeBytes 是否已赋值
                     * @return FileSizeBytes 是否已赋值
                     * 
                     */
                    bool FileSizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>文件摘要值(Sha256)</p>
                     * @return FileSha256 <p>文件摘要值(Sha256)</p>
                     * 
                     */
                    std::string GetFileSha256() const;

                    /**
                     * 设置<p>文件摘要值(Sha256)</p>
                     * @param _fileSha256 <p>文件摘要值(Sha256)</p>
                     * 
                     */
                    void SetFileSha256(const std::string& _fileSha256);

                    /**
                     * 判断参数 FileSha256 是否已赋值
                     * @return FileSha256 是否已赋值
                     * 
                     */
                    bool FileSha256HasBeenSet() const;

                    /**
                     * 获取<p>物料状态</p><p>枚举值：</p><ul><li>PENDING： 处理中</li><li>READY： 准备完毕</li><li>FAILED： 失败</li></ul>
                     * @return Status <p>物料状态</p><p>枚举值：</p><ul><li>PENDING： 处理中</li><li>READY： 准备完毕</li><li>FAILED： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>物料状态</p><p>枚举值：</p><ul><li>PENDING： 处理中</li><li>READY： 准备完毕</li><li>FAILED： 失败</li></ul>
                     * @param _status <p>物料状态</p><p>枚举值：</p><ul><li>PENDING： 处理中</li><li>READY： 准备完毕</li><li>FAILED： 失败</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：RFC3339 UTC</p>
                     * @return CreatedTime <p>创建时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：RFC3339 UTC</p>
                     * @param _createdTime <p>创建时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：RFC3339 UTC</p>
                     * @return UploadedTime <p>更新时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    std::string GetUploadedTime() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：RFC3339 UTC</p>
                     * @param _uploadedTime <p>更新时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    void SetUploadedTime(const std::string& _uploadedTime);

                    /**
                     * 判断参数 UploadedTime 是否已赋值
                     * @return UploadedTime 是否已赋值
                     * 
                     */
                    bool UploadedTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p><p>参数格式：RFC3339 UTC</p>
                     * @return ExpiredTime <p>过期时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>过期时间</p><p>参数格式：RFC3339 UTC</p>
                     * @param _expiredTime <p>过期时间</p><p>参数格式：RFC3339 UTC</p>
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * <p>物料ID</p>
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>AgentID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件沙箱内路径</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>文件字节数</p>
                     */
                    int64_t m_fileSizeBytes;
                    bool m_fileSizeBytesHasBeenSet;

                    /**
                     * <p>文件摘要值(Sha256)</p>
                     */
                    std::string m_fileSha256;
                    bool m_fileSha256HasBeenSet;

                    /**
                     * <p>物料状态</p><p>枚举值：</p><ul><li>PENDING： 处理中</li><li>READY： 准备完毕</li><li>FAILED： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：RFC3339 UTC</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：RFC3339 UTC</p>
                     */
                    std::string m_uploadedTime;
                    bool m_uploadedTimeHasBeenSet;

                    /**
                     * <p>过期时间</p><p>参数格式：RFC3339 UTC</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_SESSIONARTIFACTDETAIL_H_
