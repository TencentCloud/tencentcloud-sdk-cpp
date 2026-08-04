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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONQUEUEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceUsage.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ModifyPartitionQueue请求参数结构体
                */
                class ModifyPartitionQueueRequest : public AbstractModel
                {
                public:
                    ModifyPartitionQueueRequest();
                    ~ModifyPartitionQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源队列ID
                     * @return Id 资源队列ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置资源队列ID
                     * @param _id 资源队列ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取分区编码
                     * @return PartitionCode 分区编码
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置分区编码
                     * @param _partitionCode 分区编码
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取队列名称
                     * @return QueueName 队列名称
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置队列名称
                     * @param _queueName 队列名称
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取队列描述
                     * @return Description 队列描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置队列描述
                     * @param _description 队列描述
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
                     * 获取资源规格列表，定义队列的资源类型及大小范围
                     * @return ResourceUsages 资源规格列表，定义队列的资源类型及大小范围
                     * 
                     */
                    std::vector<ResourceUsage> GetResourceUsages() const;

                    /**
                     * 设置资源规格列表，定义队列的资源类型及大小范围
                     * @param _resourceUsages 资源规格列表，定义队列的资源类型及大小范围
                     * 
                     */
                    void SetResourceUsages(const std::vector<ResourceUsage>& _resourceUsages);

                    /**
                     * 判断参数 ResourceUsages 是否已赋值
                     * @return ResourceUsages 是否已赋值
                     * 
                     */
                    bool ResourceUsagesHasBeenSet() const;

                    /**
                     * 获取队列类型：1-独占型，2-共享型
                     * @return QueueType 队列类型：1-独占型，2-共享型
                     * 
                     */
                    int64_t GetQueueType() const;

                    /**
                     * 设置队列类型：1-独占型，2-共享型
                     * @param _queueType 队列类型：1-独占型，2-共享型
                     * 
                     */
                    void SetQueueType(const int64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                private:

                    /**
                     * 资源队列ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分区编码
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * 队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 队列描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 资源规格列表，定义队列的资源类型及大小范围
                     */
                    std::vector<ResourceUsage> m_resourceUsages;
                    bool m_resourceUsagesHasBeenSet;

                    /**
                     * 队列类型：1-独占型，2-共享型
                     */
                    int64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYPARTITIONQUEUEREQUEST_H_
