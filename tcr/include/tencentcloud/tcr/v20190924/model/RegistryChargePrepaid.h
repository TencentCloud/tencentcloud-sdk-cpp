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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCHARGEPREPAID_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例预付费模式
                */
                class RegistryChargePrepaid : public AbstractModel
                {
                public:
                    RegistryChargePrepaid();
                    ~RegistryChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购买实例的时长，单位：月
                     * @return Period 购买实例的时长，单位：月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置购买实例的时长，单位：月
                     * @param _period 购买实例的时长，单位：月
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
                     * 获取自动续费标识，0：手动续费，1：自动续费，2：不续费并且不通知
                     * @return RenewFlag 自动续费标识，0：手动续费，1：自动续费，2：不续费并且不通知
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标识，0：手动续费，1：自动续费，2：不续费并且不通知
                     * @param _renewFlag 自动续费标识，0：手动续费，1：自动续费，2：不续费并且不通知
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * 购买实例的时长，单位：月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 自动续费标识，0：手动续费，1：自动续费，2：不续费并且不通知
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRYCHARGEPREPAID_H_
