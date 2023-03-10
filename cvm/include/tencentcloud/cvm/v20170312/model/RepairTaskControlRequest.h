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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKCONTROLREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RepairTaskControl请求参数结构体
                */
                class RepairTaskControlRequest : public AbstractModel
                {
                public:
                    RepairTaskControlRequest();
                    ~RepairTaskControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待授权任务实例对应的产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
                     * @return Product 待授权任务实例对应的产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置待授权任务实例对应的产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
                     * @param Product 待授权任务实例对应的产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取指定待操作的实例ID列表，仅允许对列表中的实例ID相关的维修任务发起授权。
                     * @return InstanceIds 指定待操作的实例ID列表，仅允许对列表中的实例ID相关的维修任务发起授权。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置指定待操作的实例ID列表，仅允许对列表中的实例ID相关的维修任务发起授权。
                     * @param InstanceIds 指定待操作的实例ID列表，仅允许对列表中的实例ID相关的维修任务发起授权。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取维修任务ID。
                     * @return TaskId 维修任务ID。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置维修任务ID。
                     * @param TaskId 维修任务ID。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取操作类型，当前只支持传入`AuthorizeRepair`。
                     * @return Operate 操作类型，当前只支持传入`AuthorizeRepair`。
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作类型，当前只支持传入`AuthorizeRepair`。
                     * @param Operate 操作类型，当前只支持传入`AuthorizeRepair`。
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取预约授权时间，形如`2023-01-01 12:00:00`。预约时间需晚于当前时间至少5分钟，且在48小时之内。
                     * @return OrderAuthTime 预约授权时间，形如`2023-01-01 12:00:00`。预约时间需晚于当前时间至少5分钟，且在48小时之内。
                     */
                    std::string GetOrderAuthTime() const;

                    /**
                     * 设置预约授权时间，形如`2023-01-01 12:00:00`。预约时间需晚于当前时间至少5分钟，且在48小时之内。
                     * @param OrderAuthTime 预约授权时间，形如`2023-01-01 12:00:00`。预约时间需晚于当前时间至少5分钟，且在48小时之内。
                     */
                    void SetOrderAuthTime(const std::string& _orderAuthTime);

                    /**
                     * 判断参数 OrderAuthTime 是否已赋值
                     * @return OrderAuthTime 是否已赋值
                     */
                    bool OrderAuthTimeHasBeenSet() const;

                    /**
                     * 获取附加的授权处理策略。
                     * @return TaskSubMethod 附加的授权处理策略。
                     */
                    std::string GetTaskSubMethod() const;

                    /**
                     * 设置附加的授权处理策略。
                     * @param TaskSubMethod 附加的授权处理策略。
                     */
                    void SetTaskSubMethod(const std::string& _taskSubMethod);

                    /**
                     * 判断参数 TaskSubMethod 是否已赋值
                     * @return TaskSubMethod 是否已赋值
                     */
                    bool TaskSubMethodHasBeenSet() const;

                private:

                    /**
                     * 待授权任务实例对应的产品类型，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 指定待操作的实例ID列表，仅允许对列表中的实例ID相关的维修任务发起授权。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 维修任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作类型，当前只支持传入`AuthorizeRepair`。
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 预约授权时间，形如`2023-01-01 12:00:00`。预约时间需晚于当前时间至少5分钟，且在48小时之内。
                     */
                    std::string m_orderAuthTime;
                    bool m_orderAuthTimeHasBeenSet;

                    /**
                     * 附加的授权处理策略。
                     */
                    std::string m_taskSubMethod;
                    bool m_taskSubMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_REPAIRTASKCONTROLREQUEST_H_
