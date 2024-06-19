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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVULRiskDetail请求参数结构体
                */
                class DescribeVULRiskDetailRequest : public AbstractModel
                {
                public:
                    DescribeVULRiskDetailRequest();
                    ~DescribeVULRiskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取风险id
                     * @return RiskId 风险id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险id
                     * @param _riskId 风险id
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取pcMgrId
                     * @return PCMGRId pcMgrId
                     * 
                     */
                    std::string GetPCMGRId() const;

                    /**
                     * 设置pcMgrId
                     * @param _pCMGRId pcMgrId
                     * 
                     */
                    void SetPCMGRId(const std::string& _pCMGRId);

                    /**
                     * 判断参数 PCMGRId 是否已赋值
                     * @return PCMGRId 是否已赋值
                     * 
                     */
                    bool PCMGRIdHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 风险id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * pcMgrId
                     */
                    std::string m_pCMGRId;
                    bool m_pCMGRIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULRISKDETAILREQUEST_H_
