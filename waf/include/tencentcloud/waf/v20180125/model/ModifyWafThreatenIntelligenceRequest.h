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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFTHREATENINTELLIGENCEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFTHREATENINTELLIGENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/WafThreatenIntelligenceDetails.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyWafThreatenIntelligence请求参数结构体
                */
                class ModifyWafThreatenIntelligenceRequest : public AbstractModel
                {
                public:
                    ModifyWafThreatenIntelligenceRequest();
                    ~ModifyWafThreatenIntelligenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置WAF威胁情报封禁模块详情
                     * @return WafThreatenIntelligenceDetails 配置WAF威胁情报封禁模块详情
                     */
                    WafThreatenIntelligenceDetails GetWafThreatenIntelligenceDetails() const;

                    /**
                     * 设置配置WAF威胁情报封禁模块详情
                     * @param WafThreatenIntelligenceDetails 配置WAF威胁情报封禁模块详情
                     */
                    void SetWafThreatenIntelligenceDetails(const WafThreatenIntelligenceDetails& _wafThreatenIntelligenceDetails);

                    /**
                     * 判断参数 WafThreatenIntelligenceDetails 是否已赋值
                     * @return WafThreatenIntelligenceDetails 是否已赋值
                     */
                    bool WafThreatenIntelligenceDetailsHasBeenSet() const;

                private:

                    /**
                     * 配置WAF威胁情报封禁模块详情
                     */
                    WafThreatenIntelligenceDetails m_wafThreatenIntelligenceDetails;
                    bool m_wafThreatenIntelligenceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYWAFTHREATENINTELLIGENCEREQUEST_H_
