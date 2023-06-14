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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeMultiDevices请求参数结构体
                */
                class DescribeMultiDevicesRequest : public AbstractModel
                {
                public:
                    DescribeMultiDevicesRequest();
                    ~DescribeMultiDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID，创建产品时腾讯云为用户分配全局唯一的 ID
                     * @return ProductId 产品 ID，创建产品时腾讯云为用户分配全局唯一的 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID，创建产品时腾讯云为用户分配全局唯一的 ID
                     * @param _productId 产品 ID，创建产品时腾讯云为用户分配全局唯一的 ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取任务 ID，由批量创建设备接口返回
                     * @return TaskId 任务 ID，由批量创建设备接口返回
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID，由批量创建设备接口返回
                     * @param _taskId 任务 ID，由批量创建设备接口返回
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页大小，每页返回的设备个数
                     * @return Limit 分页大小，每页返回的设备个数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，每页返回的设备个数
                     * @param _limit 分页大小，每页返回的设备个数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 产品 ID，创建产品时腾讯云为用户分配全局唯一的 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 任务 ID，由批量创建设备接口返回
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，每页返回的设备个数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESREQUEST_H_
