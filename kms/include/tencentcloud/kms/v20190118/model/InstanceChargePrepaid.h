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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 预付费计费信息
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>按月购买时长（1～100）月</p>
                     * @return Period <p>按月购买时长（1～100）月</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>按月购买时长（1～100）月</p>
                     * @param _period <p>按月购买时长（1～100）月</p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>续费标记（0:用户未设置，1:自动续费 2:不自动续费）</p>
                     * @return RenewFlag <p>续费标记（0:用户未设置，1:自动续费 2:不自动续费）</p>
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标记（0:用户未设置，1:自动续费 2:不自动续费）</p>
                     * @param _renewFlag <p>续费标记（0:用户未设置，1:自动续费 2:不自动续费）</p>
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>按月购买时长（1～100）月</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>续费标记（0:用户未设置，1:自动续费 2:不自动续费）</p>
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_INSTANCECHARGEPREPAID_H_
