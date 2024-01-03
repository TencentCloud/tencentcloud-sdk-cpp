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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeSpec请求参数结构体
                */
                class DescribeSpecRequest : public AbstractModel
                {
                public:
                    DescribeSpecRequest();
                    ~DescribeSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域信息，例如"ap-guangzhou-1"
                     * @return Zone 地域信息，例如"ap-guangzhou-1"
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域信息，例如"ap-guangzhou-1"
                     * @param _zone 地域信息，例如"ap-guangzhou-1"
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * @return PayMode 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * @param _payMode 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取是否弹性ck
                     * @return IsElastic 是否弹性ck
                     * 
                     */
                    bool GetIsElastic() const;

                    /**
                     * 设置是否弹性ck
                     * @param _isElastic 是否弹性ck
                     * 
                     */
                    void SetIsElastic(const bool& _isElastic);

                    /**
                     * 判断参数 IsElastic 是否已赋值
                     * @return IsElastic 是否已赋值
                     * 
                     */
                    bool IsElasticHasBeenSet() const;

                    /**
                     * 获取是否是购买页面需要的spec
                     * @return CaseType 是否是购买页面需要的spec
                     * 
                     */
                    int64_t GetCaseType() const;

                    /**
                     * 设置是否是购买页面需要的spec
                     * @param _caseType 是否是购买页面需要的spec
                     * 
                     */
                    void SetCaseType(const int64_t& _caseType);

                    /**
                     * 判断参数 CaseType 是否已赋值
                     * @return CaseType 是否已赋值
                     * 
                     */
                    bool CaseTypeHasBeenSet() const;

                private:

                    /**
                     * 地域信息，例如"ap-guangzhou-1"
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 计费类型，PREPAID 包年包月，POSTPAID_BY_HOUR 按量计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否弹性ck
                     */
                    bool m_isElastic;
                    bool m_isElasticHasBeenSet;

                    /**
                     * 是否是购买页面需要的spec
                     */
                    int64_t m_caseType;
                    bool m_caseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBESPECREQUEST_H_
