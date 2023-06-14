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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 复制作业单条明细
                */
                class CopyJobItem : public AbstractModel
                {
                public:
                    CopyJobItem();
                    ~CopyJobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要复制的作业serial id
                     * @return SourceId 需要复制的作业serial id
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置需要复制的作业serial id
                     * @param _sourceId 需要复制的作业serial id
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取目标集群的cluster serial id
                     * @return TargetClusterId 目标集群的cluster serial id
                     * 
                     */
                    std::string GetTargetClusterId() const;

                    /**
                     * 设置目标集群的cluster serial id
                     * @param _targetClusterId 目标集群的cluster serial id
                     * 
                     */
                    void SetTargetClusterId(const std::string& _targetClusterId);

                    /**
                     * 判断参数 TargetClusterId 是否已赋值
                     * @return TargetClusterId 是否已赋值
                     * 
                     */
                    bool TargetClusterIdHasBeenSet() const;

                    /**
                     * 获取需要复制的作业名称
                     * @return SourceName 需要复制的作业名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置需要复制的作业名称
                     * @param _sourceName 需要复制的作业名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取新作业的名称
                     * @return TargetName 新作业的名称
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置新作业的名称
                     * @param _targetName 新作业的名称
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取新作业的目录id
                     * @return TargetFolderId 新作业的目录id
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置新作业的目录id
                     * @param _targetFolderId 新作业的目录id
                     * 
                     */
                    void SetTargetFolderId(const std::string& _targetFolderId);

                    /**
                     * 判断参数 TargetFolderId 是否已赋值
                     * @return TargetFolderId 是否已赋值
                     * 
                     */
                    bool TargetFolderIdHasBeenSet() const;

                    /**
                     * 获取源作业类型
                     * @return JobType 源作业类型
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置源作业类型
                     * @param _jobType 源作业类型
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                private:

                    /**
                     * 需要复制的作业serial id
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 目标集群的cluster serial id
                     */
                    std::string m_targetClusterId;
                    bool m_targetClusterIdHasBeenSet;

                    /**
                     * 需要复制的作业名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 新作业的名称
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 新作业的目录id
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * 源作业类型
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBITEM_H_
