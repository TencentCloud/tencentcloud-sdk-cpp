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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_UPLOADANDCOMMITFILEREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_UPLOADANDCOMMITFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/CosFileInfo.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * UploadAndCommitFile请求参数结构体
                */
                class UploadAndCommitFileRequest : public AbstractModel
                {
                public:
                    UploadAndCommitFileRequest();
                    ~UploadAndCommitFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取上传文件列表
                     * @return CosFiles 上传文件列表
                     * 
                     */
                    std::vector<CosFileInfo> GetCosFiles() const;

                    /**
                     * 设置上传文件列表
                     * @param _cosFiles 上传文件列表
                     * 
                     */
                    void SetCosFiles(const std::vector<CosFileInfo>& _cosFiles);

                    /**
                     * 判断参数 CosFiles 是否已赋值
                     * @return CosFiles 是否已赋值
                     * 
                     */
                    bool CosFilesHasBeenSet() const;

                    /**
                     * 获取知识库id
                     * @return KnowledgeBaseId 知识库id
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库id
                     * @param _knowledgeBaseId 知识库id
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 上传文件列表
                     */
                    std::vector<CosFileInfo> m_cosFiles;
                    bool m_cosFilesHasBeenSet;

                    /**
                     * 知识库id
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_UPLOADANDCOMMITFILEREQUEST_H_
