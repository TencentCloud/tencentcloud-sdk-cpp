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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGENERALSKUSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGENERALSKUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/GeneralSKU.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQGeneralSKUs返回参数结构体
                */
                class DescribeRocketMQGeneralSKUsResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQGeneralSKUsResponse();
                    ~DescribeRocketMQGeneralSKUsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取商品配置信息
                     * @return Skus 商品配置信息
                     * 
                     */
                    std::vector<GeneralSKU> GetSkus() const;

                    /**
                     * 判断参数 Skus 是否已赋值
                     * @return Skus 是否已赋值
                     * 
                     */
                    bool SkusHasBeenSet() const;

                private:

                    /**
                     * 商品配置信息
                     */
                    std::vector<GeneralSKU> m_skus;
                    bool m_skusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQGENERALSKUSRESPONSE_H_
