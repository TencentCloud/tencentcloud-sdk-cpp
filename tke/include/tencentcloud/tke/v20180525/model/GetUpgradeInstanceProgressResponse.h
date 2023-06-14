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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradeProgressItem.h>
#include <tencentcloud/tke/v20180525/model/InstanceUpgradeClusterStatus.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetUpgradeInstanceProgress返回参数结构体
                */
                class GetUpgradeInstanceProgressResponse : public AbstractModel
                {
                public:
                    GetUpgradeInstanceProgressResponse();
                    ~GetUpgradeInstanceProgressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取升级节点总数
                     * @return Total 升级节点总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已升级节点总数
                     * @return Done 已升级节点总数
                     * 
                     */
                    int64_t GetDone() const;

                    /**
                     * 判断参数 Done 是否已赋值
                     * @return Done 是否已赋值
                     * 
                     */
                    bool DoneHasBeenSet() const;

                    /**
                     * 获取升级任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
                     * @return LifeState 升级任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取各节点升级进度详情
                     * @return Instances 各节点升级进度详情
                     * 
                     */
                    std::vector<InstanceUpgradeProgressItem> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取集群当前状态
                     * @return ClusterStatus 集群当前状态
                     * 
                     */
                    InstanceUpgradeClusterStatus GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                private:

                    /**
                     * 升级节点总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已升级节点总数
                     */
                    int64_t m_done;
                    bool m_doneHasBeenSet;

                    /**
                     * 升级任务生命周期
process 运行中
paused 已停止
pauing 正在停止
done  已完成
timeout 已超时
aborted 已取消
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * 各节点升级进度详情
                     */
                    std::vector<InstanceUpgradeProgressItem> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 集群当前状态
                     */
                    InstanceUpgradeClusterStatus m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSRESPONSE_H_
