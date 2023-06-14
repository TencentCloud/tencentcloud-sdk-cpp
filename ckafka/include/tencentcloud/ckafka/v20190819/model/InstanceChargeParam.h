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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例购买付费参数
                */
                class InstanceChargeParam : public AbstractModel
                {
                public:
                    InstanceChargeParam();
                    ~InstanceChargeParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例付费类型: PREPAID(包年包月), POSTPAID_BY_HOUR(按量付费)
                     * @return InstanceChargeType 实例付费类型: PREPAID(包年包月), POSTPAID_BY_HOUR(按量付费)
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例付费类型: PREPAID(包年包月), POSTPAID_BY_HOUR(按量付费)
                     * @param _instanceChargeType 实例付费类型: PREPAID(包年包月), POSTPAID_BY_HOUR(按量付费)
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
                     * 获取购买时长: 包年包月时需要填写, 按量计费无需填写
                     * @return InstanceChargePeriod 购买时长: 包年包月时需要填写, 按量计费无需填写
                     * 
                     */
                    int64_t GetInstanceChargePeriod() const;

                    /**
                     * 设置购买时长: 包年包月时需要填写, 按量计费无需填写
                     * @param _instanceChargePeriod 购买时长: 包年包月时需要填写, 按量计费无需填写
                     * 
                     */
                    void SetInstanceChargePeriod(const int64_t& _instanceChargePeriod);

                    /**
                     * 判断参数 InstanceChargePeriod 是否已赋值
                     * @return InstanceChargePeriod 是否已赋值
                     * 
                     */
                    bool InstanceChargePeriodHasBeenSet() const;

                private:

                    /**
                     * 实例付费类型: PREPAID(包年包月), POSTPAID_BY_HOUR(按量付费)
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 购买时长: 包年包月时需要填写, 按量计费无需填写
                     */
                    int64_t m_instanceChargePeriod;
                    bool m_instanceChargePeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCECHARGEPARAM_H_
