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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 产品支持情况
                */
                class ServiceSupport : public AbstractModel
                {
                public:
                    ServiceSupport();
                    ~ServiceSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品名称:
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @return ServiceName 产品名称:
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置产品名称:
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * @param _serviceName 产品名称:
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取已处理的资产总数
                     * @return SupportHandledCount 已处理的资产总数
                     * 
                     */
                    int64_t GetSupportHandledCount() const;

                    /**
                     * 设置已处理的资产总数
                     * @param _supportHandledCount 已处理的资产总数
                     * 
                     */
                    void SetSupportHandledCount(const int64_t& _supportHandledCount);

                    /**
                     * 判断参数 SupportHandledCount 是否已赋值
                     * @return SupportHandledCount 是否已赋值
                     * 
                     */
                    bool SupportHandledCountHasBeenSet() const;

                    /**
                     * 获取支持的资产总数
                     * @return SupportTotalCount 支持的资产总数
                     * 
                     */
                    int64_t GetSupportTotalCount() const;

                    /**
                     * 设置支持的资产总数
                     * @param _supportTotalCount 支持的资产总数
                     * 
                     */
                    void SetSupportTotalCount(const int64_t& _supportTotalCount);

                    /**
                     * 判断参数 SupportTotalCount 是否已赋值
                     * @return SupportTotalCount 是否已赋值
                     * 
                     */
                    bool SupportTotalCountHasBeenSet() const;

                    /**
                     * 获取是否支持该产品1支持；0不支持
                     * @return IsSupport 是否支持该产品1支持；0不支持
                     * 
                     */
                    bool GetIsSupport() const;

                    /**
                     * 设置是否支持该产品1支持；0不支持
                     * @param _isSupport 是否支持该产品1支持；0不支持
                     * 
                     */
                    void SetIsSupport(const bool& _isSupport);

                    /**
                     * 判断参数 IsSupport 是否已赋值
                     * @return IsSupport 是否已赋值
                     * 
                     */
                    bool IsSupportHasBeenSet() const;

                private:

                    /**
                     * 产品名称:
"cfw_waf_virtual", "cwp_detect", "cwp_defense", "cwp_fix"
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 已处理的资产总数
                     */
                    int64_t m_supportHandledCount;
                    bool m_supportHandledCountHasBeenSet;

                    /**
                     * 支持的资产总数
                     */
                    int64_t m_supportTotalCount;
                    bool m_supportTotalCountHasBeenSet;

                    /**
                     * 是否支持该产品1支持；0不支持
                     */
                    bool m_isSupport;
                    bool m_isSupportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SERVICESUPPORT_H_
