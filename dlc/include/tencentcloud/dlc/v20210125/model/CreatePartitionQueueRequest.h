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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONQUEUEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONQUEUEREQUEST_H_

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
                * CreatePartitionQueue请求参数结构体
                */
                class CreatePartitionQueueRequest : public AbstractModel
                {
                public:
                    CreatePartitionQueueRequest();
                    ~CreatePartitionQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分区编码</p>
                     * @return PartitionCode <p>分区编码</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>分区编码</p>
                     * @param _partitionCode <p>分区编码</p>
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
                     * 获取<p>资源规格列表，定义队列的资源类型及大小范围</p>
                     * @return ResourceUsages <p>资源规格列表，定义队列的资源类型及大小范围</p>
                     * 
                     */
                    std::vector<ResourceUsage> GetResourceUsages() const;

                    /**
                     * 设置<p>资源规格列表，定义队列的资源类型及大小范围</p>
                     * @param _resourceUsages <p>资源规格列表，定义队列的资源类型及大小范围</p>
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
                     * 获取<p>队列类型：1-独占型，2-共享型</p>
                     * @return QueueType <p>队列类型：1-独占型，2-共享型</p>
                     * 
                     */
                    int64_t GetQueueType() const;

                    /**
                     * 设置<p>队列类型：1-独占型，2-共享型</p>
                     * @param _queueType <p>队列类型：1-独占型，2-共享型</p>
                     * 
                     */
                    void SetQueueType(const int64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取<p>队列编码（不可变 code）：透传时按 RFC1123 校验并作为队列的固定标识；未透传时系统自动生成（格式 dlc-rg-xxxxxxxx）。落库后不可修改</p>
                     * @return QueueName <p>队列编码（不可变 code）：透传时按 RFC1123 校验并作为队列的固定标识；未透传时系统自动生成（格式 dlc-rg-xxxxxxxx）。落库后不可修改</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列编码（不可变 code）：透传时按 RFC1123 校验并作为队列的固定标识；未透传时系统自动生成（格式 dlc-rg-xxxxxxxx）。落库后不可修改</p>
                     * @param _queueName <p>队列编码（不可变 code）：透传时按 RFC1123 校验并作为队列的固定标识；未透传时系统自动生成（格式 dlc-rg-xxxxxxxx）。落库后不可修改</p>
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
                     * 获取<p>队列别名（显示名）：用户可见、可修改；未提供时等于最终 QueueName。可与其它队列重复</p>
                     * @return Alias <p>队列别名（显示名）：用户可见、可修改；未提供时等于最终 QueueName。可与其它队列重复</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>队列别名（显示名）：用户可见、可修改；未提供时等于最终 QueueName。可与其它队列重复</p>
                     * @param _alias <p>队列别名（显示名）：用户可见、可修改；未提供时等于最终 QueueName。可与其它队列重复</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>队列描述</p>
                     * @return Description <p>队列描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>队列描述</p>
                     * @param _description <p>队列描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>分区编码</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>资源规格列表，定义队列的资源类型及大小范围</p>
                     */
                    std::vector<ResourceUsage> m_resourceUsages;
                    bool m_resourceUsagesHasBeenSet;

                    /**
                     * <p>队列类型：1-独占型，2-共享型</p>
                     */
                    int64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * <p>队列编码（不可变 code）：透传时按 RFC1123 校验并作为队列的固定标识；未透传时系统自动生成（格式 dlc-rg-xxxxxxxx）。落库后不可修改</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>队列别名（显示名）：用户可见、可修改；未提供时等于最终 QueueName。可与其它队列重复</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>队列描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEPARTITIONQUEUEREQUEST_H_
