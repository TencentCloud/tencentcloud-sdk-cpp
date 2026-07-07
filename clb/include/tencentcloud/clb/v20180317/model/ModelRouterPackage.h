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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERPACKAGE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由资源包
                */
                class ModelRouterPackage : public AbstractModel
                {
                public:
                    ModelRouterPackage();
                    ~ModelRouterPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型路由资源包总容量</p>
                     * @return CapacitySize <p>模型路由资源包总容量</p>
                     * 
                     */
                    std::string GetCapacitySize() const;

                    /**
                     * 设置<p>模型路由资源包总容量</p>
                     * @param _capacitySize <p>模型路由资源包总容量</p>
                     * 
                     */
                    void SetCapacitySize(const std::string& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包总余量</p>
                     * @return CapacityRemain <p>模型路由资源包总余量</p>
                     * 
                     */
                    std::string GetCapacityRemain() const;

                    /**
                     * 设置<p>模型路由资源包总余量</p>
                     * @param _capacityRemain <p>模型路由资源包总余量</p>
                     * 
                     */
                    void SetCapacityRemain(const std::string& _capacityRemain);

                    /**
                     * 判断参数 CapacityRemain 是否已赋值
                     * @return CapacityRemain 是否已赋值
                     * 
                     */
                    bool CapacityRemainHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包容量精确值</p>
                     * @return CapacitySizePrecise <p>模型路由资源包容量精确值</p>
                     * 
                     */
                    std::string GetCapacitySizePrecise() const;

                    /**
                     * 设置<p>模型路由资源包容量精确值</p>
                     * @param _capacitySizePrecise <p>模型路由资源包容量精确值</p>
                     * 
                     */
                    void SetCapacitySizePrecise(const std::string& _capacitySizePrecise);

                    /**
                     * 判断参数 CapacitySizePrecise 是否已赋值
                     * @return CapacitySizePrecise 是否已赋值
                     * 
                     */
                    bool CapacitySizePreciseHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包总余量精确值</p>
                     * @return CapacityRemainPrecise <p>模型路由资源包总余量精确值</p>
                     * 
                     */
                    std::string GetCapacityRemainPrecise() const;

                    /**
                     * 设置<p>模型路由资源包总余量精确值</p>
                     * @param _capacityRemainPrecise <p>模型路由资源包总余量精确值</p>
                     * 
                     */
                    void SetCapacityRemainPrecise(const std::string& _capacityRemainPrecise);

                    /**
                     * 判断参数 CapacityRemainPrecise 是否已赋值
                     * @return CapacityRemainPrecise 是否已赋值
                     * 
                     */
                    bool CapacityRemainPreciseHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包设置用尽续购标志位 0:未设置 1:用尽到期新购</p><p>取值范围：[0, 1]</p>
                     * @return AutoPurchaseFlag <p>模型路由资源包设置用尽续购标志位 0:未设置 1:用尽到期新购</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    uint64_t GetAutoPurchaseFlag() const;

                    /**
                     * 设置<p>模型路由资源包设置用尽续购标志位 0:未设置 1:用尽到期新购</p><p>取值范围：[0, 1]</p>
                     * @param _autoPurchaseFlag <p>模型路由资源包设置用尽续购标志位 0:未设置 1:用尽到期新购</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    void SetAutoPurchaseFlag(const uint64_t& _autoPurchaseFlag);

                    /**
                     * 判断参数 AutoPurchaseFlag 是否已赋值
                     * @return AutoPurchaseFlag 是否已赋值
                     * 
                     */
                    bool AutoPurchaseFlagHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包Id</p>
                     * @return ModelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    std::string GetModelRouterResourcePackageId() const;

                    /**
                     * 设置<p>模型路由资源包Id</p>
                     * @param _modelRouterResourcePackageId <p>模型路由资源包Id</p>
                     * 
                     */
                    void SetModelRouterResourcePackageId(const std::string& _modelRouterResourcePackageId);

                    /**
                     * 判断参数 ModelRouterResourcePackageId 是否已赋值
                     * @return ModelRouterResourcePackageId 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageIdHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包创建时间</p>
                     * @return CreateTime <p>模型路由资源包创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模型路由资源包创建时间</p>
                     * @param _createTime <p>模型路由资源包创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包抵扣开始时间</p>
                     * @return DeductionStartTime <p>模型路由资源包抵扣开始时间</p>
                     * 
                     */
                    std::string GetDeductionStartTime() const;

                    /**
                     * 设置<p>模型路由资源包抵扣开始时间</p>
                     * @param _deductionStartTime <p>模型路由资源包抵扣开始时间</p>
                     * 
                     */
                    void SetDeductionStartTime(const std::string& _deductionStartTime);

                    /**
                     * 判断参数 DeductionStartTime 是否已赋值
                     * @return DeductionStartTime 是否已赋值
                     * 
                     */
                    bool DeductionStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包抵扣截止时间</p>
                     * @return DeductionEndTime <p>模型路由资源包抵扣截止时间</p>
                     * 
                     */
                    std::string GetDeductionEndTime() const;

                    /**
                     * 设置<p>模型路由资源包抵扣截止时间</p>
                     * @param _deductionEndTime <p>模型路由资源包抵扣截止时间</p>
                     * 
                     */
                    void SetDeductionEndTime(const std::string& _deductionEndTime);

                    /**
                     * 判断参数 DeductionEndTime 是否已赋值
                     * @return DeductionEndTime 是否已赋值
                     * 
                     */
                    bool DeductionEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包失效时间</p>
                     * @return ExpiredTime <p>模型路由资源包失效时间</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置<p>模型路由资源包失效时间</p>
                     * @param _expiredTime <p>模型路由资源包失效时间</p>
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型路由资源包状态</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 已退款</li><li>2： 已过期</li><li>3： 已用完</li></ul>
                     * @return Status <p>模型路由资源包状态</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 已退款</li><li>2： 已过期</li><li>3： 已用完</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>模型路由资源包状态</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 已退款</li><li>2： 已过期</li><li>3： 已用完</li></ul>
                     * @param _status <p>模型路由资源包状态</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 已退款</li><li>2： 已过期</li><li>3： 已用完</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包总容量</p>
                     */
                    std::string m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * <p>模型路由资源包总余量</p>
                     */
                    std::string m_capacityRemain;
                    bool m_capacityRemainHasBeenSet;

                    /**
                     * <p>模型路由资源包容量精确值</p>
                     */
                    std::string m_capacitySizePrecise;
                    bool m_capacitySizePreciseHasBeenSet;

                    /**
                     * <p>模型路由资源包总余量精确值</p>
                     */
                    std::string m_capacityRemainPrecise;
                    bool m_capacityRemainPreciseHasBeenSet;

                    /**
                     * <p>模型路由资源包设置用尽续购标志位 0:未设置 1:用尽到期新购</p><p>取值范围：[0, 1]</p>
                     */
                    uint64_t m_autoPurchaseFlag;
                    bool m_autoPurchaseFlagHasBeenSet;

                    /**
                     * <p>模型路由资源包Id</p>
                     */
                    std::string m_modelRouterResourcePackageId;
                    bool m_modelRouterResourcePackageIdHasBeenSet;

                    /**
                     * <p>模型路由资源包创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模型路由资源包抵扣开始时间</p>
                     */
                    std::string m_deductionStartTime;
                    bool m_deductionStartTimeHasBeenSet;

                    /**
                     * <p>模型路由资源包抵扣截止时间</p>
                     */
                    std::string m_deductionEndTime;
                    bool m_deductionEndTimeHasBeenSet;

                    /**
                     * <p>模型路由资源包失效时间</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>模型路由资源包状态</p><p>枚举值：</p><ul><li>0： 有效</li><li>1： 已退款</li><li>2： 已过期</li><li>3： 已用完</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERPACKAGE_H_
