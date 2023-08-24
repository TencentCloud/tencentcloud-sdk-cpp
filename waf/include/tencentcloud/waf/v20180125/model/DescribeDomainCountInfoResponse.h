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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomainCountInfo返回参数结构体
                */
                class DescribeDomainCountInfoResponse : public AbstractModel
                {
                public:
                    DescribeDomainCountInfoResponse();
                    ~DescribeDomainCountInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名总数
                     * @return AllDomain 域名总数
                     * 
                     */
                    uint64_t GetAllDomain() const;

                    /**
                     * 判断参数 AllDomain 是否已赋值
                     * @return AllDomain 是否已赋值
                     * 
                     */
                    bool AllDomainHasBeenSet() const;

                    /**
                     * 获取最近发现时间
                     * @return UpdateTime 最近发现时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取接入域名总数
                     * @return WafDomainCount 接入域名总数
                     * 
                     */
                    uint64_t GetWafDomainCount() const;

                    /**
                     * 判断参数 WafDomainCount 是否已赋值
                     * @return WafDomainCount 是否已赋值
                     * 
                     */
                    bool WafDomainCountHasBeenSet() const;

                    /**
                     * 获取剩下配额
                     * @return LeftDomainCount 剩下配额
                     * 
                     */
                    uint64_t GetLeftDomainCount() const;

                    /**
                     * 判断参数 LeftDomainCount 是否已赋值
                     * @return LeftDomainCount 是否已赋值
                     * 
                     */
                    bool LeftDomainCountHasBeenSet() const;

                    /**
                     * 获取开启防护域名数
                     * @return OpenWafDomain 开启防护域名数
                     * 
                     */
                    uint64_t GetOpenWafDomain() const;

                    /**
                     * 判断参数 OpenWafDomain 是否已赋值
                     * @return OpenWafDomain 是否已赋值
                     * 
                     */
                    bool OpenWafDomainHasBeenSet() const;

                private:

                    /**
                     * 域名总数
                     */
                    uint64_t m_allDomain;
                    bool m_allDomainHasBeenSet;

                    /**
                     * 最近发现时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 接入域名总数
                     */
                    uint64_t m_wafDomainCount;
                    bool m_wafDomainCountHasBeenSet;

                    /**
                     * 剩下配额
                     */
                    uint64_t m_leftDomainCount;
                    bool m_leftDomainCountHasBeenSet;

                    /**
                     * 开启防护域名数
                     */
                    uint64_t m_openWafDomain;
                    bool m_openWafDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINCOUNTINFORESPONSE_H_
