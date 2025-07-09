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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_

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
                * CreateAccessKeyCheckTask请求参数结构体
                */
                class CreateAccessKeyCheckTaskRequest : public AbstractModel
                {
                public:
                    CreateAccessKeyCheckTaskRequest();
                    ~CreateAccessKeyCheckTaskRequest() = default;
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
                     * 获取风险列表
                     * @return RiskIDList 风险列表
                     * 
                     */
                    std::vector<int64_t> GetRiskIDList() const;

                    /**
                     * 设置风险列表
                     * @param _riskIDList 风险列表
                     * 
                     */
                    void SetRiskIDList(const std::vector<int64_t>& _riskIDList);

                    /**
                     * 判断参数 RiskIDList 是否已赋值
                     * @return RiskIDList 是否已赋值
                     * 
                     */
                    bool RiskIDListHasBeenSet() const;

                    /**
                     * 获取访问密钥列表
                     * @return AccessKeyList 访问密钥列表
                     * 
                     */
                    std::vector<std::string> GetAccessKeyList() const;

                    /**
                     * 设置访问密钥列表
                     * @param _accessKeyList 访问密钥列表
                     * 
                     */
                    void SetAccessKeyList(const std::vector<std::string>& _accessKeyList);

                    /**
                     * 判断参数 AccessKeyList 是否已赋值
                     * @return AccessKeyList 是否已赋值
                     * 
                     */
                    bool AccessKeyListHasBeenSet() const;

                    /**
                     * 获取账号uin列表
                     * @return SubUinList 账号uin列表
                     * 
                     */
                    std::vector<std::string> GetSubUinList() const;

                    /**
                     * 设置账号uin列表
                     * @param _subUinList 账号uin列表
                     * 
                     */
                    void SetSubUinList(const std::vector<std::string>& _subUinList);

                    /**
                     * 判断参数 SubUinList 是否已赋值
                     * @return SubUinList 是否已赋值
                     * 
                     */
                    bool SubUinListHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 风险列表
                     */
                    std::vector<int64_t> m_riskIDList;
                    bool m_riskIDListHasBeenSet;

                    /**
                     * 访问密钥列表
                     */
                    std::vector<std::string> m_accessKeyList;
                    bool m_accessKeyListHasBeenSet;

                    /**
                     * 账号uin列表
                     */
                    std::vector<std::string> m_subUinList;
                    bool m_subUinListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_
