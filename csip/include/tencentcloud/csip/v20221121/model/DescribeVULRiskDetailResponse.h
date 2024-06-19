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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ServiceSupport.h>
#include <tencentcloud/csip/v20221121/model/VulTrend.h>
#include <tencentcloud/csip/v20221121/model/VULRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVULRiskDetail返回参数结构体
                */
                class DescribeVULRiskDetailResponse : public AbstractModel
                {
                public:
                    DescribeVULRiskDetailResponse();
                    ~DescribeVULRiskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全产品支持情况
                     * @return ServiceSupport 安全产品支持情况
                     * 
                     */
                    std::vector<ServiceSupport> GetServiceSupport() const;

                    /**
                     * 判断参数 ServiceSupport 是否已赋值
                     * @return ServiceSupport 是否已赋值
                     * 
                     */
                    bool ServiceSupportHasBeenSet() const;

                    /**
                     * 获取漏洞趋势
                     * @return VulTrend 漏洞趋势
                     * 
                     */
                    std::vector<VulTrend> GetVulTrend() const;

                    /**
                     * 判断参数 VulTrend 是否已赋值
                     * @return VulTrend 是否已赋值
                     * 
                     */
                    bool VulTrendHasBeenSet() const;

                    /**
                     * 获取漏洞补充信息
                     * @return VulData 漏洞补充信息
                     * 
                     */
                    VULRiskInfo GetVulData() const;

                    /**
                     * 判断参数 VulData 是否已赋值
                     * @return VulData 是否已赋值
                     * 
                     */
                    bool VulDataHasBeenSet() const;

                    /**
                     * 获取小助手问答id
                     * @return QuestionId 小助手问答id
                     * 
                     */
                    std::string GetQuestionId() const;

                    /**
                     * 判断参数 QuestionId 是否已赋值
                     * @return QuestionId 是否已赋值
                     * 
                     */
                    bool QuestionIdHasBeenSet() const;

                    /**
                     * 获取会话id
                     * @return SessionId 会话id
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 安全产品支持情况
                     */
                    std::vector<ServiceSupport> m_serviceSupport;
                    bool m_serviceSupportHasBeenSet;

                    /**
                     * 漏洞趋势
                     */
                    std::vector<VulTrend> m_vulTrend;
                    bool m_vulTrendHasBeenSet;

                    /**
                     * 漏洞补充信息
                     */
                    VULRiskInfo m_vulData;
                    bool m_vulDataHasBeenSet;

                    /**
                     * 小助手问答id
                     */
                    std::string m_questionId;
                    bool m_questionIdHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILRESPONSE_H_
