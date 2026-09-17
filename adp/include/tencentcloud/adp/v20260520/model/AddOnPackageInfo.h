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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 计费增值包用量信息
                */
                class AddOnPackageInfo : public AbstractModel
                {
                public:
                    AddOnPackageInfo();
                    ~AddOnPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>增值包总量</p>
                     * @return AddOnTotal <p>增值包总量</p>
                     * 
                     */
                    double GetAddOnTotal() const;

                    /**
                     * 设置<p>增值包总量</p>
                     * @param _addOnTotal <p>增值包总量</p>
                     * 
                     */
                    void SetAddOnTotal(const double& _addOnTotal);

                    /**
                     * 判断参数 AddOnTotal 是否已赋值
                     * @return AddOnTotal 是否已赋值
                     * 
                     */
                    bool AddOnTotalHasBeenSet() const;

                    /**
                     * 获取<p>增值包用量</p>
                     * @return AddOnUsage <p>增值包用量</p>
                     * 
                     */
                    double GetAddOnUsage() const;

                    /**
                     * 设置<p>增值包用量</p>
                     * @param _addOnUsage <p>增值包用量</p>
                     * 
                     */
                    void SetAddOnUsage(const double& _addOnUsage);

                    /**
                     * 判断参数 AddOnUsage 是否已赋值
                     * @return AddOnUsage 是否已赋值
                     * 
                     */
                    bool AddOnUsageHasBeenSet() const;

                    /**
                     * 获取<p>专属并发总数</p>
                     * @return ExclusiveConcurrency <p>专属并发总数</p>
                     * 
                     */
                    uint64_t GetExclusiveConcurrency() const;

                    /**
                     * 设置<p>专属并发总数</p>
                     * @param _exclusiveConcurrency <p>专属并发总数</p>
                     * 
                     */
                    void SetExclusiveConcurrency(const uint64_t& _exclusiveConcurrency);

                    /**
                     * 判断参数 ExclusiveConcurrency 是否已赋值
                     * @return ExclusiveConcurrency 是否已赋值
                     * 
                     */
                    bool ExclusiveConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>资源包状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>2： 已用完</li><li>3： 已过期</li></ul>
                     * @return ResourceStatus <p>资源包状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>2： 已用完</li><li>3： 已过期</li></ul>
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置<p>资源包状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>2： 已用完</li><li>3： 已过期</li></ul>
                     * @param _resourceStatus <p>资源包状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>2： 已用完</li><li>3： 已过期</li></ul>
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取<p>专属并发状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * @return ConcurrencyStatus <p>专属并发状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * 
                     */
                    uint64_t GetConcurrencyStatus() const;

                    /**
                     * 设置<p>专属并发状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * @param _concurrencyStatus <p>专属并发状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * 
                     */
                    void SetConcurrencyStatus(const uint64_t& _concurrencyStatus);

                    /**
                     * 判断参数 ConcurrencyStatus 是否已赋值
                     * @return ConcurrencyStatus 是否已赋值
                     * 
                     */
                    bool ConcurrencyStatusHasBeenSet() const;

                    /**
                     * 获取<p>专属tpm</p>
                     * @return ExclusiveTpm <p>专属tpm</p>
                     * 
                     */
                    uint64_t GetExclusiveTpm() const;

                    /**
                     * 设置<p>专属tpm</p>
                     * @param _exclusiveTpm <p>专属tpm</p>
                     * 
                     */
                    void SetExclusiveTpm(const uint64_t& _exclusiveTpm);

                    /**
                     * 判断参数 ExclusiveTpm 是否已赋值
                     * @return ExclusiveTpm 是否已赋值
                     * 
                     */
                    bool ExclusiveTpmHasBeenSet() const;

                    /**
                     * 获取<p>专属tpm状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * @return ExclusiveTpmStatus <p>专属tpm状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * 
                     */
                    uint64_t GetExclusiveTpmStatus() const;

                    /**
                     * 设置<p>专属tpm状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * @param _exclusiveTpmStatus <p>专属tpm状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     * 
                     */
                    void SetExclusiveTpmStatus(const uint64_t& _exclusiveTpmStatus);

                    /**
                     * 判断参数 ExclusiveTpmStatus 是否已赋值
                     * @return ExclusiveTpmStatus 是否已赋值
                     * 
                     */
                    bool ExclusiveTpmStatusHasBeenSet() const;

                    /**
                     * 获取<p>专属计算单元</p>
                     * @return ExclusiveComputeUnit <p>专属计算单元</p>
                     * 
                     */
                    uint64_t GetExclusiveComputeUnit() const;

                    /**
                     * 设置<p>专属计算单元</p>
                     * @param _exclusiveComputeUnit <p>专属计算单元</p>
                     * 
                     */
                    void SetExclusiveComputeUnit(const uint64_t& _exclusiveComputeUnit);

                    /**
                     * 判断参数 ExclusiveComputeUnit 是否已赋值
                     * @return ExclusiveComputeUnit 是否已赋值
                     * 
                     */
                    bool ExclusiveComputeUnitHasBeenSet() const;

                    /**
                     * 获取<p>专属计算单元状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li><li>4： 已销毁</li><li>5： 已隔离</li><li>6： 未生效</li><li>7： 暂不可用（套餐包过期时）</li></ul>
                     * @return ExclusiveComputeUnitStatus <p>专属计算单元状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li><li>4： 已销毁</li><li>5： 已隔离</li><li>6： 未生效</li><li>7： 暂不可用（套餐包过期时）</li></ul>
                     * 
                     */
                    uint64_t GetExclusiveComputeUnitStatus() const;

                    /**
                     * 设置<p>专属计算单元状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li><li>4： 已销毁</li><li>5： 已隔离</li><li>6： 未生效</li><li>7： 暂不可用（套餐包过期时）</li></ul>
                     * @param _exclusiveComputeUnitStatus <p>专属计算单元状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li><li>4： 已销毁</li><li>5： 已隔离</li><li>6： 未生效</li><li>7： 暂不可用（套餐包过期时）</li></ul>
                     * 
                     */
                    void SetExclusiveComputeUnitStatus(const uint64_t& _exclusiveComputeUnitStatus);

                    /**
                     * 判断参数 ExclusiveComputeUnitStatus 是否已赋值
                     * @return ExclusiveComputeUnitStatus 是否已赋值
                     * 
                     */
                    bool ExclusiveComputeUnitStatusHasBeenSet() const;

                private:

                    /**
                     * <p>增值包总量</p>
                     */
                    double m_addOnTotal;
                    bool m_addOnTotalHasBeenSet;

                    /**
                     * <p>增值包用量</p>
                     */
                    double m_addOnUsage;
                    bool m_addOnUsageHasBeenSet;

                    /**
                     * <p>专属并发总数</p>
                     */
                    uint64_t m_exclusiveConcurrency;
                    bool m_exclusiveConcurrencyHasBeenSet;

                    /**
                     * <p>资源包状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>2： 已用完</li><li>3： 已过期</li></ul>
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * <p>专属并发状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     */
                    uint64_t m_concurrencyStatus;
                    bool m_concurrencyStatusHasBeenSet;

                    /**
                     * <p>专属tpm</p>
                     */
                    uint64_t m_exclusiveTpm;
                    bool m_exclusiveTpmHasBeenSet;

                    /**
                     * <p>专属tpm状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li></ul>
                     */
                    uint64_t m_exclusiveTpmStatus;
                    bool m_exclusiveTpmStatusHasBeenSet;

                    /**
                     * <p>专属计算单元</p>
                     */
                    uint64_t m_exclusiveComputeUnit;
                    bool m_exclusiveComputeUnitHasBeenSet;

                    /**
                     * <p>专属计算单元状态</p><p>枚举值：</p><ul><li>1： 可使</li><li>3： 已过期</li><li>4： 已销毁</li><li>5： 已隔离</li><li>6： 未生效</li><li>7： 暂不可用（套餐包过期时）</li></ul>
                     */
                    uint64_t m_exclusiveComputeUnitStatus;
                    bool m_exclusiveComputeUnitStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ADDONPACKAGEINFO_H_
