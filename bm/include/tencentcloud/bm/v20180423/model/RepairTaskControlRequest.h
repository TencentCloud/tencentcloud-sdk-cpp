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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_REPAIRTASKCONTROLREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_REPAIRTASKCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
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
                     * 获取维修任务ID
                     * @return TaskId 维修任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置维修任务ID
                     * @param _taskId 维修任务ID
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
                     * 获取操作
                     * @return Operate 操作
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作
                     * @param _operate 操作
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取需要重新维修操作的备注信息，可提供返场维修原因，以便驻场快速针对问题定位解决。
                     * @return OperateRemark 需要重新维修操作的备注信息，可提供返场维修原因，以便驻场快速针对问题定位解决。
                     * 
                     */
                    std::string GetOperateRemark() const;

                    /**
                     * 设置需要重新维修操作的备注信息，可提供返场维修原因，以便驻场快速针对问题定位解决。
                     * @param _operateRemark 需要重新维修操作的备注信息，可提供返场维修原因，以便驻场快速针对问题定位解决。
                     * 
                     */
                    void SetOperateRemark(const std::string& _operateRemark);

                    /**
                     * 判断参数 OperateRemark 是否已赋值
                     * @return OperateRemark 是否已赋值
                     * 
                     */
                    bool OperateRemarkHasBeenSet() const;

                private:

                    /**
                     * 维修任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 操作
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 需要重新维修操作的备注信息，可提供返场维修原因，以便驻场快速针对问题定位解决。
                     */
                    std::string m_operateRemark;
                    bool m_operateRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_REPAIRTASKCONTROLREQUEST_H_
