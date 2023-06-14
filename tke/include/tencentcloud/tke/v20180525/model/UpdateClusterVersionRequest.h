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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateClusterVersion请求参数结构体
                */
                class UpdateClusterVersionRequest : public AbstractModel
                {
                public:
                    UpdateClusterVersionRequest();
                    ~UpdateClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群 Id
                     * @return ClusterId 集群 Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群 Id
                     * @param _clusterId 集群 Id
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
                     * 获取需要升级到的版本
                     * @return DstVersion 需要升级到的版本
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置需要升级到的版本
                     * @param _dstVersion 需要升级到的版本
                     * 
                     */
                    void SetDstVersion(const std::string& _dstVersion);

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取集群自定义参数
                     * @return ExtraArgs 集群自定义参数
                     * 
                     */
                    ClusterExtraArgs GetExtraArgs() const;

                    /**
                     * 设置集群自定义参数
                     * @param _extraArgs 集群自定义参数
                     * 
                     */
                    void SetExtraArgs(const ClusterExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取可容忍的最大不可用pod数目
                     * @return MaxNotReadyPercent 可容忍的最大不可用pod数目
                     * 
                     */
                    double GetMaxNotReadyPercent() const;

                    /**
                     * 设置可容忍的最大不可用pod数目
                     * @param _maxNotReadyPercent 可容忍的最大不可用pod数目
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
                     * 获取是否跳过预检查阶段
                     * @return SkipPreCheck 是否跳过预检查阶段
                     * 
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置是否跳过预检查阶段
                     * @param _skipPreCheck 是否跳过预检查阶段
                     * 
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     * 
                     */
                    bool SkipPreCheckHasBeenSet() const;

                private:

                    /**
                     * 集群 Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 需要升级到的版本
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * 集群自定义参数
                     */
                    ClusterExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * 可容忍的最大不可用pod数目
                     */
                    double m_maxNotReadyPercent;
                    bool m_maxNotReadyPercentHasBeenSet;

                    /**
                     * 是否跳过预检查阶段
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATECLUSTERVERSIONREQUEST_H_
