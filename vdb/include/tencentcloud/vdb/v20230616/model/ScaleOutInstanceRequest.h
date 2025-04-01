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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需扩容节点数量的实例 ID。
                     * @return InstanceId 指定需扩容节点数量的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定需扩容节点数量的实例 ID。
                     * @param _instanceId 指定需扩容节点数量的实例 ID。
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
                     * 获取指定扩容后的节点数量。选项范围起始于当前实例已有的节点数，上限为30个节点。
                     * @return ReplicaNum 指定扩容后的节点数量。选项范围起始于当前实例已有的节点数，上限为30个节点。
                     * 
                     */
                    uint64_t GetReplicaNum() const;

                    /**
                     * 设置指定扩容后的节点数量。选项范围起始于当前实例已有的节点数，上限为30个节点。
                     * @param _replicaNum 指定扩容后的节点数量。选项范围起始于当前实例已有的节点数，上限为30个节点。
                     * 
                     */
                    void SetReplicaNum(const uint64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取指定水平扩容增加节点数量的时间。
- false：默认值，指在下一个维护时间段内执行增加节点数的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动扩容任务。维护时间的更多信息，请参维护时间窗。
- true：立即执行增加节点数的任务，请确保此时没有重大业务操作。
                     * @return RunNow 指定水平扩容增加节点数量的时间。
- false：默认值，指在下一个维护时间段内执行增加节点数的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动扩容任务。维护时间的更多信息，请参维护时间窗。
- true：立即执行增加节点数的任务，请确保此时没有重大业务操作。
                     * 
                     */
                    bool GetRunNow() const;

                    /**
                     * 设置指定水平扩容增加节点数量的时间。
- false：默认值，指在下一个维护时间段内执行增加节点数的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动扩容任务。维护时间的更多信息，请参维护时间窗。
- true：立即执行增加节点数的任务，请确保此时没有重大业务操作。
                     * @param _runNow 指定水平扩容增加节点数量的时间。
- false：默认值，指在下一个维护时间段内执行增加节点数的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动扩容任务。维护时间的更多信息，请参维护时间窗。
- true：立即执行增加节点数的任务，请确保此时没有重大业务操作。
                     * 
                     */
                    void SetRunNow(const bool& _runNow);

                    /**
                     * 判断参数 RunNow 是否已赋值
                     * @return RunNow 是否已赋值
                     * 
                     */
                    bool RunNowHasBeenSet() const;

                private:

                    /**
                     * 指定需扩容节点数量的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定扩容后的节点数量。选项范围起始于当前实例已有的节点数，上限为30个节点。
                     */
                    uint64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 指定水平扩容增加节点数量的时间。
- false：默认值，指在下一个维护时间段内执行增加节点数的任务。实例列表中“状态”列将显示“待执行配置变更”，等到维护时间窗内启动扩容任务。维护时间的更多信息，请参维护时间窗。
- true：立即执行增加节点数的任务，请确保此时没有重大业务操作。
                     */
                    bool m_runNow;
                    bool m_runNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_SCALEOUTINSTANCEREQUEST_H_
