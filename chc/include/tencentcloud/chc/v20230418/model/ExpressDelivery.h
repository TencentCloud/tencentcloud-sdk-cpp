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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_EXPRESSDELIVERY_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_EXPRESSDELIVERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 快递寄件信息,快递寄件必填
                */
                class ExpressDelivery : public AbstractModel
                {
                public:
                    ExpressDelivery();
                    ~ExpressDelivery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取物流公司
                     * @return LogisticsCompany 物流公司
                     * 
                     */
                    std::string GetLogisticsCompany() const;

                    /**
                     * 设置物流公司
                     * @param _logisticsCompany 物流公司
                     * 
                     */
                    void SetLogisticsCompany(const std::string& _logisticsCompany);

                    /**
                     * 判断参数 LogisticsCompany 是否已赋值
                     * @return LogisticsCompany 是否已赋值
                     * 
                     */
                    bool LogisticsCompanyHasBeenSet() const;

                    /**
                     * 获取快递单号
                     * @return ExpressNumber 快递单号
                     * 
                     */
                    std::string GetExpressNumber() const;

                    /**
                     * 设置快递单号
                     * @param _expressNumber 快递单号
                     * 
                     */
                    void SetExpressNumber(const std::string& _expressNumber);

                    /**
                     * 判断参数 ExpressNumber 是否已赋值
                     * @return ExpressNumber 是否已赋值
                     * 
                     */
                    bool ExpressNumberHasBeenSet() const;

                private:

                    /**
                     * 物流公司
                     */
                    std::string m_logisticsCompany;
                    bool m_logisticsCompanyHasBeenSet;

                    /**
                     * 快递单号
                     */
                    std::string m_expressNumber;
                    bool m_expressNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_EXPRESSDELIVERY_H_
