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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEREFUND_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEREFUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述退款详情。
                */
                class InstanceRefund : public AbstractModel
                {
                public:
                    InstanceRefund();
                    ~InstanceRefund() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例Id。
                     * @return InstanceId 实例Id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id。
                     * @param _instanceId 实例Id。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取退款数额。
                     * @return Refunds 退款数额。
                     * 
                     */
                    double GetRefunds() const;

                    /**
                     * 设置退款数额。
                     * @param _refunds 退款数额。
                     * 
                     */
                    void SetRefunds(const double& _refunds);

                    /**
                     * 判断参数 Refunds 是否已赋值
                     * @return Refunds 是否已赋值
                     * 
                     */
                    bool RefundsHasBeenSet() const;

                    /**
                     * 获取退款详情。
                     * @return PriceDetail 退款详情。
                     * 
                     */
                    std::string GetPriceDetail() const;

                    /**
                     * 设置退款详情。
                     * @param _priceDetail 退款详情。
                     * 
                     */
                    void SetPriceDetail(const std::string& _priceDetail);

                    /**
                     * 判断参数 PriceDetail 是否已赋值
                     * @return PriceDetail 是否已赋值
                     * 
                     */
                    bool PriceDetailHasBeenSet() const;

                private:

                    /**
                     * 实例Id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 退款数额。
                     */
                    double m_refunds;
                    bool m_refundsHasBeenSet;

                    /**
                     * 退款详情。
                     */
                    std::string m_priceDetail;
                    bool m_priceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCEREFUND_H_
