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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKQUEUENAMEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKQUEUENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckQueueName请求参数结构体
                */
                class CheckQueueNameRequest : public AbstractModel
                {
                public:
                    CheckQueueNameRequest();
                    ~CheckQueueNameRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取分区编码，用于校验同分区下队列名称是否重复
                     * @return PartitionCode 分区编码，用于校验同分区下队列名称是否重复
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置分区编码，用于校验同分区下队列名称是否重复
                     * @param _partitionCode 分区编码，用于校验同分区下队列名称是否重复
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                private:

                    /**
                     * 队列名称
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 分区编码，用于校验同分区下队列名称是否重复
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKQUEUENAMEREQUEST_H_
