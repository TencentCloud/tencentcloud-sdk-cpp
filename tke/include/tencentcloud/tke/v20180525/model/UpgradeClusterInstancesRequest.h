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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/UpgradeNodeResetParam.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpgradeClusterInstances请求参数结构体
                */
                class UpgradeClusterInstancesRequest : public AbstractModel
                {
                public:
                    UpgradeClusterInstancesRequest();
                    ~UpgradeClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取create 表示开始一次升级任务
pause 表示停止任务
resume表示继续任务
abort表示终止任务
                     * @return Operation create 表示开始一次升级任务
pause 表示停止任务
resume表示继续任务
abort表示终止任务
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置create 表示开始一次升级任务
pause 表示停止任务
resume表示继续任务
abort表示终止任务
                     * @param _operation create 表示开始一次升级任务
pause 表示停止任务
resume表示继续任务
abort表示终止任务
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取升级类型，只有Operation是create需要设置
reset 大版本重装升级
hot 小版本热升级
major 大版本原地升级
                     * @return UpgradeType 升级类型，只有Operation是create需要设置
reset 大版本重装升级
hot 小版本热升级
major 大版本原地升级
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型，只有Operation是create需要设置
reset 大版本重装升级
hot 小版本热升级
major 大版本原地升级
                     * @param _upgradeType 升级类型，只有Operation是create需要设置
reset 大版本重装升级
hot 小版本热升级
major 大版本原地升级
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取需要升级的节点列表
                     * @return InstanceIds 需要升级的节点列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要升级的节点列表
                     * @param _instanceIds 需要升级的节点列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取当节点重新加入集群时候所使用的参数，参考添加已有节点接口
                     * @return ResetParam 当节点重新加入集群时候所使用的参数，参考添加已有节点接口
                     * 
                     */
                    UpgradeNodeResetParam GetResetParam() const;

                    /**
                     * 设置当节点重新加入集群时候所使用的参数，参考添加已有节点接口
                     * @param _resetParam 当节点重新加入集群时候所使用的参数，参考添加已有节点接口
                     * 
                     */
                    void SetResetParam(const UpgradeNodeResetParam& _resetParam);

                    /**
                     * 判断参数 ResetParam 是否已赋值
                     * @return ResetParam 是否已赋值
                     * 
                     */
                    bool ResetParamHasBeenSet() const;

                    /**
                     * 获取是否忽略节点升级前检查
                     * @return SkipPreCheck 是否忽略节点升级前检查
                     * 
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置是否忽略节点升级前检查
                     * @param _skipPreCheck 是否忽略节点升级前检查
                     * 
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     * 
                     */
                    bool SkipPreCheckHasBeenSet() const;

                    /**
                     * 获取最大可容忍的不可用Pod比例
                     * @return MaxNotReadyPercent 最大可容忍的不可用Pod比例
                     * 
                     */
                    double GetMaxNotReadyPercent() const;

                    /**
                     * 设置最大可容忍的不可用Pod比例
                     * @param _maxNotReadyPercent 最大可容忍的不可用Pod比例
                     * 
                     */
                    void SetMaxNotReadyPercent(const double& _maxNotReadyPercent);

                    /**
                     * 判断参数 MaxNotReadyPercent 是否已赋值
                     * @return MaxNotReadyPercent 是否已赋值
                     * 
                     */
                    bool MaxNotReadyPercentHasBeenSet() const;

                    /**
                     * 获取是否升级节点运行时，默认false不升级
                     * @return UpgradeRunTime 是否升级节点运行时，默认false不升级
                     * 
                     */
                    bool GetUpgradeRunTime() const;

                    /**
                     * 设置是否升级节点运行时，默认false不升级
                     * @param _upgradeRunTime 是否升级节点运行时，默认false不升级
                     * 
                     */
                    void SetUpgradeRunTime(const bool& _upgradeRunTime);

                    /**
                     * 判断参数 UpgradeRunTime 是否已赋值
                     * @return UpgradeRunTime 是否已赋值
                     * 
                     */
                    bool UpgradeRunTimeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * create 表示开始一次升级任务
pause 表示停止任务
resume表示继续任务
abort表示终止任务
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 升级类型，只有Operation是create需要设置
reset 大版本重装升级
hot 小版本热升级
major 大版本原地升级
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 需要升级的节点列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 当节点重新加入集群时候所使用的参数，参考添加已有节点接口
                     */
                    UpgradeNodeResetParam m_resetParam;
                    bool m_resetParamHasBeenSet;

                    /**
                     * 是否忽略节点升级前检查
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                    /**
                     * 最大可容忍的不可用Pod比例
                     */
                    double m_maxNotReadyPercent;
                    bool m_maxNotReadyPercentHasBeenSet;

                    /**
                     * 是否升级节点运行时，默认false不升级
                     */
                    bool m_upgradeRunTime;
                    bool m_upgradeRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
