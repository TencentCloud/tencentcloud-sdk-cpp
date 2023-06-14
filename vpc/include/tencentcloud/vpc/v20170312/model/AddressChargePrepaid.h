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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用于描述弹性公网IP的费用对象
                */
                class AddressChargePrepaid : public AbstractModel
                {
                public:
                    AddressChargePrepaid();
                    ~AddressChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购买实例的时长，单位是月。可支持时长：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36
                     * @return Period 购买实例的时长，单位是月。可支持时长：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买实例的时长，单位是月。可支持时长：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36
                     * @param _period 购买实例的时长，单位是月。可支持时长：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标志。0表示手动续费，1表示自动续费，2表示到期不续费。默认缺省为0即手动续费
                     * @return AutoRenewFlag 自动续费标志。0表示手动续费，1表示自动续费，2表示到期不续费。默认缺省为0即手动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志。0表示手动续费，1表示自动续费，2表示到期不续费。默认缺省为0即手动续费
                     * @param _autoRenewFlag 自动续费标志。0表示手动续费，1表示自动续费，2表示到期不续费。默认缺省为0即手动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 购买实例的时长，单位是月。可支持时长：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 自动续费标志。0表示手动续费，1表示自动续费，2表示到期不续费。默认缺省为0即手动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSCHARGEPREPAID_H_
