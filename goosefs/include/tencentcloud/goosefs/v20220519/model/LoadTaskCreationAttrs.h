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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKCREATIONATTRS_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKCREATIONATTRS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/MetadataLoadAttrs.h>
#include <tencentcloud/goosefs/v20220519/model/DistributedLoadAttrs.h>
#include <tencentcloud/goosefs/v20220519/model/LoadDataAttrs.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 创建预热任务
                */
                class LoadTaskCreationAttrs : public AbstractModel
                {
                public:
                    LoadTaskCreationAttrs();
                    ~LoadTaskCreationAttrs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预热任务类型，枚举值，MetadataLoad｜DistributedLoad。</p>
                     * @return TaskType <p>预热任务类型，枚举值，MetadataLoad｜DistributedLoad。</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>预热任务类型，枚举值，MetadataLoad｜DistributedLoad。</p>
                     * @param _taskType <p>预热任务类型，枚举值，MetadataLoad｜DistributedLoad。</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1</p>
                     * @return Priority <p>任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1</p>
                     * @param _priority <p>任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>任务描述，支持中文</p>
                     * @return Description <p>任务描述，支持中文</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>任务描述，支持中文</p>
                     * @param _description <p>任务描述，支持中文</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。</p>
                     * @return MetadataLoadAttrs <p>元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。</p>
                     * 
                     */
                    MetadataLoadAttrs GetMetadataLoadAttrs() const;

                    /**
                     * 设置<p>元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。</p>
                     * @param _metadataLoadAttrs <p>元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。</p>
                     * 
                     */
                    void SetMetadataLoadAttrs(const MetadataLoadAttrs& _metadataLoadAttrs);

                    /**
                     * 判断参数 MetadataLoadAttrs 是否已赋值
                     * @return MetadataLoadAttrs 是否已赋值
                     * 
                     */
                    bool MetadataLoadAttrsHasBeenSet() const;

                    /**
                     * 获取<p>数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。</p>
                     * @return DistributedLoadAttrs <p>数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。</p>
                     * 
                     */
                    DistributedLoadAttrs GetDistributedLoadAttrs() const;

                    /**
                     * 设置<p>数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。</p>
                     * @param _distributedLoadAttrs <p>数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。</p>
                     * 
                     */
                    void SetDistributedLoadAttrs(const DistributedLoadAttrs& _distributedLoadAttrs);

                    /**
                     * 判断参数 DistributedLoadAttrs 是否已赋值
                     * @return DistributedLoadAttrs 是否已赋值
                     * 
                     */
                    bool DistributedLoadAttrsHasBeenSet() const;

                    /**
                     * 获取<p>将任务执行报告写入 COS 的路径，如果不需要报告则入参空</p>
                     * @return ReportPath <p>将任务执行报告写入 COS 的路径，如果不需要报告则入参空</p>
                     * 
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置<p>将任务执行报告写入 COS 的路径，如果不需要报告则入参空</p>
                     * @param _reportPath <p>将任务执行报告写入 COS 的路径，如果不需要报告则入参空</p>
                     * 
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     * 
                     */
                    bool ReportPathHasBeenSet() const;

                    /**
                     * 获取<p>仅预热数据任务参数。入参数TaskType为LoadData时，该参数不应为空。</p>
                     * @return LoadDataAttrs <p>仅预热数据任务参数。入参数TaskType为LoadData时，该参数不应为空。</p>
                     * 
                     */
                    LoadDataAttrs GetLoadDataAttrs() const;

                    /**
                     * 设置<p>仅预热数据任务参数。入参数TaskType为LoadData时，该参数不应为空。</p>
                     * @param _loadDataAttrs <p>仅预热数据任务参数。入参数TaskType为LoadData时，该参数不应为空。</p>
                     * 
                     */
                    void SetLoadDataAttrs(const LoadDataAttrs& _loadDataAttrs);

                    /**
                     * 判断参数 LoadDataAttrs 是否已赋值
                     * @return LoadDataAttrs 是否已赋值
                     * 
                     */
                    bool LoadDataAttrsHasBeenSet() const;

                private:

                    /**
                     * <p>预热任务类型，枚举值，MetadataLoad｜DistributedLoad。</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务优先级，数值越高代表优先级越高，边界值 1-9999，默认值为 1</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>任务描述，支持中文</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>元数据预热任务参数，用于仅预热元数据时入参。入参数TaskType为MetadataLoad时，该参数不应为空。</p>
                     */
                    MetadataLoadAttrs m_metadataLoadAttrs;
                    bool m_metadataLoadAttrsHasBeenSet;

                    /**
                     * <p>数据预热任务参数。入参数TaskType为DistributedLoad时，该参数不应为空。</p>
                     */
                    DistributedLoadAttrs m_distributedLoadAttrs;
                    bool m_distributedLoadAttrsHasBeenSet;

                    /**
                     * <p>将任务执行报告写入 COS 的路径，如果不需要报告则入参空</p>
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                    /**
                     * <p>仅预热数据任务参数。入参数TaskType为LoadData时，该参数不应为空。</p>
                     */
                    LoadDataAttrs m_loadDataAttrs;
                    bool m_loadDataAttrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_LOADTASKCREATIONATTRS_H_
