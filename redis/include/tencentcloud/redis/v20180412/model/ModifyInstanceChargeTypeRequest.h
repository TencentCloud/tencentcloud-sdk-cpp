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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceChargeType请求参数结构体
                */
                class ModifyInstanceChargeTypeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceChargeTypeRequest();
                    ~ModifyInstanceChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID数组</p><p>入参限制：批量操作数组长度不超过20</p>
                     * @return InstanceIds <p>实例ID数组</p><p>入参限制：批量操作数组长度不超过20</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID数组</p><p>入参限制：批量操作数组长度不超过20</p>
                     * @param _instanceIds <p>实例ID数组</p><p>入参限制：批量操作数组长度不超过20</p>
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
                     * 获取<p>修改计费模式的操作类型</p><p>枚举值：</p><ul><li>PREPAID： 按量计费转包年包月</li><li>POSTPAID： 包年包月转按量计费</li></ul>
                     * @return InstanceChargeType <p>修改计费模式的操作类型</p><p>枚举值：</p><ul><li>PREPAID： 按量计费转包年包月</li><li>POSTPAID： 包年包月转按量计费</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>修改计费模式的操作类型</p><p>枚举值：</p><ul><li>PREPAID： 按量计费转包年包月</li><li>POSTPAID： 包年包月转按量计费</li></ul>
                     * @param _instanceChargeType <p>修改计费模式的操作类型</p><p>枚举值：</p><ul><li>PREPAID： 按量计费转包年包月</li><li>POSTPAID： 包年包月转按量计费</li></ul>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>购买时长，仅当InstanceChargeType=PREPAID时需要传</p><p>取值范围：[1, 36]</p><p>单位：月</p>
                     * @return Period <p>购买时长，仅当InstanceChargeType=PREPAID时需要传</p><p>取值范围：[1, 36]</p><p>单位：月</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，仅当InstanceChargeType=PREPAID时需要传</p><p>取值范围：[1, 36]</p><p>单位：月</p>
                     * @param _period <p>购买时长，仅当InstanceChargeType=PREPAID时需要传</p><p>取值范围：[1, 36]</p><p>单位：月</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID数组</p><p>入参限制：批量操作数组长度不超过20</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>修改计费模式的操作类型</p><p>枚举值：</p><ul><li>PREPAID： 按量计费转包年包月</li><li>POSTPAID： 包年包月转按量计费</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>购买时长，仅当InstanceChargeType=PREPAID时需要传</p><p>取值范围：[1, 36]</p><p>单位：月</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCECHARGETYPEREQUEST_H_
