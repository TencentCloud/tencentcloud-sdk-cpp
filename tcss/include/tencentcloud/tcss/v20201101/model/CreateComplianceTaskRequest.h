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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateComplianceTask请求参数结构体
                */
                class CreateComplianceTaskRequest : public AbstractModel
                {
                public:
                    CreateComplianceTaskRequest();
                    ~CreateComplianceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定要扫描的资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
AssetTypeSet, PolicySetId, PeriodTaskId三个参数，必须要给其中一个参数填写有效的值。
                     * @return AssetTypeSet 指定要扫描的资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
AssetTypeSet, PolicySetId, PeriodTaskId三个参数，必须要给其中一个参数填写有效的值。
                     * 
                     */
                    std::vector<std::string> GetAssetTypeSet() const;

                    /**
                     * 设置指定要扫描的资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
AssetTypeSet, PolicySetId, PeriodTaskId三个参数，必须要给其中一个参数填写有效的值。
                     * @param _assetTypeSet 指定要扫描的资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
AssetTypeSet, PolicySetId, PeriodTaskId三个参数，必须要给其中一个参数填写有效的值。
                     * 
                     */
                    void SetAssetTypeSet(const std::vector<std::string>& _assetTypeSet);

                    /**
                     * 判断参数 AssetTypeSet 是否已赋值
                     * @return AssetTypeSet 是否已赋值
                     * 
                     */
                    bool AssetTypeSetHasBeenSet() const;

                    /**
                     * 获取按照策略集ID指定的策略执行合规检查。
                     * @return PolicySetId 按照策略集ID指定的策略执行合规检查。
                     * 
                     */
                    uint64_t GetPolicySetId() const;

                    /**
                     * 设置按照策略集ID指定的策略执行合规检查。
                     * @param _policySetId 按照策略集ID指定的策略执行合规检查。
                     * 
                     */
                    void SetPolicySetId(const uint64_t& _policySetId);

                    /**
                     * 判断参数 PolicySetId 是否已赋值
                     * @return PolicySetId 是否已赋值
                     * 
                     */
                    bool PolicySetIdHasBeenSet() const;

                    /**
                     * 获取按照定时任务ID指定的策略执行合规检查。
                     * @return PeriodTaskId 按照定时任务ID指定的策略执行合规检查。
                     * 
                     */
                    uint64_t GetPeriodTaskId() const;

                    /**
                     * 设置按照定时任务ID指定的策略执行合规检查。
                     * @param _periodTaskId 按照定时任务ID指定的策略执行合规检查。
                     * 
                     */
                    void SetPeriodTaskId(const uint64_t& _periodTaskId);

                    /**
                     * 判断参数 PeriodTaskId 是否已赋值
                     * @return PeriodTaskId 是否已赋值
                     * 
                     */
                    bool PeriodTaskIdHasBeenSet() const;

                private:

                    /**
                     * 指定要扫描的资产类型列表。
ASSET_CONTAINER, 容器
ASSET_IMAGE, 镜像
ASSET_HOST, 主机
ASSET_K8S, K8S资产
AssetTypeSet, PolicySetId, PeriodTaskId三个参数，必须要给其中一个参数填写有效的值。
                     */
                    std::vector<std::string> m_assetTypeSet;
                    bool m_assetTypeSetHasBeenSet;

                    /**
                     * 按照策略集ID指定的策略执行合规检查。
                     */
                    uint64_t m_policySetId;
                    bool m_policySetIdHasBeenSet;

                    /**
                     * 按照定时任务ID指定的策略执行合规检查。
                     */
                    uint64_t m_periodTaskId;
                    bool m_periodTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPLIANCETASKREQUEST_H_
