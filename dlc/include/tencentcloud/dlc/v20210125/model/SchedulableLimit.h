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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULABLELIMIT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULABLELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 计费项最大可调度限制
                */
                class SchedulableLimit : public AbstractModel
                {
                public:
                    SchedulableLimit();
                    ~SchedulableLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>四层计费项，与 ResourceQuota[].ResourceSpec.BillingItem 同值</p>
                     * @return BillingItem <p>四层计费项，与 ResourceQuota[].ResourceSpec.BillingItem 同值</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>四层计费项，与 ResourceQuota[].ResourceSpec.BillingItem 同值</p>
                     * @param _billingItem <p>四层计费项，与 ResourceQuota[].ResourceSpec.BillingItem 同值</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>该计费项下单 worker/executor 可申请的最大可调度资源量，单位随计费项资源类型：CPU 计费项为 CU 数，GPU 计费项为 GU（卡）数</p>
                     * @return MaxSchedulableUnits <p>该计费项下单 worker/executor 可申请的最大可调度资源量，单位随计费项资源类型：CPU 计费项为 CU 数，GPU 计费项为 GU（卡）数</p>
                     * 
                     */
                    int64_t GetMaxSchedulableUnits() const;

                    /**
                     * 设置<p>该计费项下单 worker/executor 可申请的最大可调度资源量，单位随计费项资源类型：CPU 计费项为 CU 数，GPU 计费项为 GU（卡）数</p>
                     * @param _maxSchedulableUnits <p>该计费项下单 worker/executor 可申请的最大可调度资源量，单位随计费项资源类型：CPU 计费项为 CU 数，GPU 计费项为 GU（卡）数</p>
                     * 
                     */
                    void SetMaxSchedulableUnits(const int64_t& _maxSchedulableUnits);

                    /**
                     * 判断参数 MaxSchedulableUnits 是否已赋值
                     * @return MaxSchedulableUnits 是否已赋值
                     * 
                     */
                    bool MaxSchedulableUnitsHasBeenSet() const;

                private:

                    /**
                     * <p>四层计费项，与 ResourceQuota[].ResourceSpec.BillingItem 同值</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>该计费项下单 worker/executor 可申请的最大可调度资源量，单位随计费项资源类型：CPU 计费项为 CU 数，GPU 计费项为 GU（卡）数</p>
                     */
                    int64_t m_maxSchedulableUnits;
                    bool m_maxSchedulableUnitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SCHEDULABLELIMIT_H_
