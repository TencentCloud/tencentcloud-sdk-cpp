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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPUBLICNETWORKPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPUBLICNETWORKPARAM_H_

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
                * 公网带宽参数
                */
                class InquiryPublicNetworkParam : public AbstractModel
                {
                public:
                    InquiryPublicNetworkParam();
                    ~InquiryPublicNetworkParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网计费模式: BANDWIDTH_PREPAID(包年包月), BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时计费)
                     * @return PublicNetworkChargeType 公网计费模式: BANDWIDTH_PREPAID(包年包月), BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时计费)
                     * 
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置公网计费模式: BANDWIDTH_PREPAID(包年包月), BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时计费)
                     * @param _publicNetworkChargeType 公网计费模式: BANDWIDTH_PREPAID(包年包月), BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时计费)
                     * 
                     */
                    void SetPublicNetworkChargeType(const std::string& _publicNetworkChargeType);

                    /**
                     * 判断参数 PublicNetworkChargeType 是否已赋值
                     * @return PublicNetworkChargeType 是否已赋值
                     * 
                     */
                    bool PublicNetworkChargeTypeHasBeenSet() const;

                    /**
                     * 获取公网带宽, 单位MB
                     * @return PublicNetworkMonthly 公网带宽, 单位MB
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置公网带宽, 单位MB
                     * @param _publicNetworkMonthly 公网带宽, 单位MB
                     * 
                     */
                    void SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly);

                    /**
                     * 判断参数 PublicNetworkMonthly 是否已赋值
                     * @return PublicNetworkMonthly 是否已赋值
                     * 
                     */
                    bool PublicNetworkMonthlyHasBeenSet() const;

                private:

                    /**
                     * 公网计费模式: BANDWIDTH_PREPAID(包年包月), BANDWIDTH_POSTPAID_BY_HOUR(带宽按小时计费)
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * 公网带宽, 单位MB
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPUBLICNETWORKPARAM_H_
