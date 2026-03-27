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
                     * 获取<p>需要复制的作业serial id</p>
                     * @return SourceId <p>需要复制的作业serial id</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>需要复制的作业serial id</p>
                     * @param _sourceId <p>需要复制的作业serial id</p>
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
                     * 获取<p>目标集群的cluster serial id</p>
                     * @return TargetClusterId <p>目标集群的cluster serial id</p>
                     * 
                     */
                    std::string GetTargetClusterId() const;

                    /**
                     * 设置<p>目标集群的cluster serial id</p>
                     * @param _targetClusterId <p>目标集群的cluster serial id</p>
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
                     * 获取<p>需要复制的作业名称</p>
                     * @return SourceName <p>需要复制的作业名称</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>需要复制的作业名称</p>
                     * @param _sourceName <p>需要复制的作业名称</p>
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
                     * 获取<p>新作业的名称</p>
                     * @return TargetName <p>新作业的名称</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>新作业的名称</p>
                     * @param _targetName <p>新作业的名称</p>
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
                     * 获取<p>新作业的目录id</p>
                     * @return TargetFolderId <p>新作业的目录id</p>
                     * 
                     */
                    std::string GetTargetFolderId() const;

                    /**
                     * 设置<p>新作业的目录id</p>
                     * @param _targetFolderId <p>新作业的目录id</p>
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
                     * 获取<p>作业类型</p><p>枚举值：</p><ul><li>1： sql作业</li><li>2： jar作业</li><li>4： python作业</li></ul>
                     * @return JobType <p>作业类型</p><p>枚举值：</p><ul><li>1： sql作业</li><li>2： jar作业</li><li>4： python作业</li></ul>
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置<p>作业类型</p><p>枚举值：</p><ul><li>1： sql作业</li><li>2： jar作业</li><li>4： python作业</li></ul>
                     * @param _jobType <p>作业类型</p><p>枚举值：</p><ul><li>1： sql作业</li><li>2： jar作业</li><li>4： python作业</li></ul>
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
                     * <p>需要复制的作业serial id</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>目标集群的cluster serial id</p>
                     */
                    std::string m_targetClusterId;
                    bool m_targetClusterIdHasBeenSet;

                    /**
                     * <p>需要复制的作业名称</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>新作业的名称</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * <p>新作业的目录id</p>
                     */
                    std::string m_targetFolderId;
                    bool m_targetFolderIdHasBeenSet;

                    /**
                     * <p>作业类型</p><p>枚举值：</p><ul><li>1： sql作业</li><li>2： jar作业</li><li>4： python作业</li></ul>
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBITEM_H_
