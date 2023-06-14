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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TriggerAction.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PutProvisionedConcurrencyConfig请求参数结构体
                */
                class PutProvisionedConcurrencyConfigRequest : public AbstractModel
                {
                public:
                    PutProvisionedConcurrencyConfigRequest();
                    ~PutProvisionedConcurrencyConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要设置预置并发的函数的名称
                     * @return FunctionName 需要设置预置并发的函数的名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置需要设置预置并发的函数的名称
                     * @param _functionName 需要设置预置并发的函数的名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取函数的版本号，注：$LATEST版本不支持预置并发
                     * @return Qualifier 函数的版本号，注：$LATEST版本不支持预置并发
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数的版本号，注：$LATEST版本不支持预置并发
                     * @param _qualifier 函数的版本号，注：$LATEST版本不支持预置并发
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取预置并发数量，注：所有版本的预置并发数总和存在上限限制，当前的上限是：函数最大并发配额 - 100
                     * @return VersionProvisionedConcurrencyNum 预置并发数量，注：所有版本的预置并发数总和存在上限限制，当前的上限是：函数最大并发配额 - 100
                     * 
                     */
                    uint64_t GetVersionProvisionedConcurrencyNum() const;

                    /**
                     * 设置预置并发数量，注：所有版本的预置并发数总和存在上限限制，当前的上限是：函数最大并发配额 - 100
                     * @param _versionProvisionedConcurrencyNum 预置并发数量，注：所有版本的预置并发数总和存在上限限制，当前的上限是：函数最大并发配额 - 100
                     * 
                     */
                    void SetVersionProvisionedConcurrencyNum(const uint64_t& _versionProvisionedConcurrencyNum);

                    /**
                     * 判断参数 VersionProvisionedConcurrencyNum 是否已赋值
                     * @return VersionProvisionedConcurrencyNum 是否已赋值
                     * 
                     */
                    bool VersionProvisionedConcurrencyNumHasBeenSet() const;

                    /**
                     * 获取函数所属命名空间，默认为default
                     * @return Namespace 函数所属命名空间，默认为default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数所属命名空间，默认为default
                     * @param _namespace 函数所属命名空间，默认为default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取定时预置任务
                     * @return TriggerActions 定时预置任务
                     * 
                     */
                    std::vector<TriggerAction> GetTriggerActions() const;

                    /**
                     * 设置定时预置任务
                     * @param _triggerActions 定时预置任务
                     * 
                     */
                    void SetTriggerActions(const std::vector<TriggerAction>& _triggerActions);

                    /**
                     * 判断参数 TriggerActions 是否已赋值
                     * @return TriggerActions 是否已赋值
                     * 
                     */
                    bool TriggerActionsHasBeenSet() const;

                    /**
                     * 获取预置类型，
静态预置：Default
动态追踪并发利用率指标预置：ConcurrencyUtilizationTracking
预置类型二选一，设置静态预置时可以设置VersionProvisionedConcurrencyNum。

动态利用率预置可以设置TrackingTarget，MinCapacity，MaxCapacity，保持向后兼容性此时VersionProvisionedConcurrencyNum设置为0.
                     * @return ProvisionedType 预置类型，
静态预置：Default
动态追踪并发利用率指标预置：ConcurrencyUtilizationTracking
预置类型二选一，设置静态预置时可以设置VersionProvisionedConcurrencyNum。

动态利用率预置可以设置TrackingTarget，MinCapacity，MaxCapacity，保持向后兼容性此时VersionProvisionedConcurrencyNum设置为0.
                     * 
                     */
                    std::string GetProvisionedType() const;

                    /**
                     * 设置预置类型，
静态预置：Default
动态追踪并发利用率指标预置：ConcurrencyUtilizationTracking
预置类型二选一，设置静态预置时可以设置VersionProvisionedConcurrencyNum。

动态利用率预置可以设置TrackingTarget，MinCapacity，MaxCapacity，保持向后兼容性此时VersionProvisionedConcurrencyNum设置为0.
                     * @param _provisionedType 预置类型，
静态预置：Default
动态追踪并发利用率指标预置：ConcurrencyUtilizationTracking
预置类型二选一，设置静态预置时可以设置VersionProvisionedConcurrencyNum。

动态利用率预置可以设置TrackingTarget，MinCapacity，MaxCapacity，保持向后兼容性此时VersionProvisionedConcurrencyNum设置为0.
                     * 
                     */
                    void SetProvisionedType(const std::string& _provisionedType);

                    /**
                     * 判断参数 ProvisionedType 是否已赋值
                     * @return ProvisionedType 是否已赋值
                     * 
                     */
                    bool ProvisionedTypeHasBeenSet() const;

                    /**
                     * 获取指标追踪的并发利用率。设置范围(0,1)
                     * @return TrackingTarget 指标追踪的并发利用率。设置范围(0,1)
                     * 
                     */
                    double GetTrackingTarget() const;

                    /**
                     * 设置指标追踪的并发利用率。设置范围(0,1)
                     * @param _trackingTarget 指标追踪的并发利用率。设置范围(0,1)
                     * 
                     */
                    void SetTrackingTarget(const double& _trackingTarget);

                    /**
                     * 判断参数 TrackingTarget 是否已赋值
                     * @return TrackingTarget 是否已赋值
                     * 
                     */
                    bool TrackingTargetHasBeenSet() const;

                    /**
                     * 获取缩容时的最小值, 最小值为1
                     * @return MinCapacity 缩容时的最小值, 最小值为1
                     * 
                     */
                    uint64_t GetMinCapacity() const;

                    /**
                     * 设置缩容时的最小值, 最小值为1
                     * @param _minCapacity 缩容时的最小值, 最小值为1
                     * 
                     */
                    void SetMinCapacity(const uint64_t& _minCapacity);

                    /**
                     * 判断参数 MinCapacity 是否已赋值
                     * @return MinCapacity 是否已赋值
                     * 
                     */
                    bool MinCapacityHasBeenSet() const;

                    /**
                     * 获取扩容时的最大值
                     * @return MaxCapacity 扩容时的最大值
                     * 
                     */
                    uint64_t GetMaxCapacity() const;

                    /**
                     * 设置扩容时的最大值
                     * @param _maxCapacity 扩容时的最大值
                     * 
                     */
                    void SetMaxCapacity(const uint64_t& _maxCapacity);

                    /**
                     * 判断参数 MaxCapacity 是否已赋值
                     * @return MaxCapacity 是否已赋值
                     * 
                     */
                    bool MaxCapacityHasBeenSet() const;

                private:

                    /**
                     * 需要设置预置并发的函数的名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 函数的版本号，注：$LATEST版本不支持预置并发
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 预置并发数量，注：所有版本的预置并发数总和存在上限限制，当前的上限是：函数最大并发配额 - 100
                     */
                    uint64_t m_versionProvisionedConcurrencyNum;
                    bool m_versionProvisionedConcurrencyNumHasBeenSet;

                    /**
                     * 函数所属命名空间，默认为default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 定时预置任务
                     */
                    std::vector<TriggerAction> m_triggerActions;
                    bool m_triggerActionsHasBeenSet;

                    /**
                     * 预置类型，
静态预置：Default
动态追踪并发利用率指标预置：ConcurrencyUtilizationTracking
预置类型二选一，设置静态预置时可以设置VersionProvisionedConcurrencyNum。

动态利用率预置可以设置TrackingTarget，MinCapacity，MaxCapacity，保持向后兼容性此时VersionProvisionedConcurrencyNum设置为0.
                     */
                    std::string m_provisionedType;
                    bool m_provisionedTypeHasBeenSet;

                    /**
                     * 指标追踪的并发利用率。设置范围(0,1)
                     */
                    double m_trackingTarget;
                    bool m_trackingTargetHasBeenSet;

                    /**
                     * 缩容时的最小值, 最小值为1
                     */
                    uint64_t m_minCapacity;
                    bool m_minCapacityHasBeenSet;

                    /**
                     * 扩容时的最大值
                     */
                    uint64_t m_maxCapacity;
                    bool m_maxCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUTPROVISIONEDCONCURRENCYCONFIGREQUEST_H_
