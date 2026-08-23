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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_

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
                * DescribeSkillScanAlertDetail请求参数结构体
                */
                class DescribeSkillScanAlertDetailRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanAlertDetailRequest();
                    ~DescribeSkillScanAlertDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警记录 ID<br>取值参考：通过 DescribeSkillScanAlertList 接口获取</p>
                     * @return ID <p>告警记录 ID<br>取值参考：通过 DescribeSkillScanAlertList 接口获取</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>告警记录 ID<br>取值参考：通过 DescribeSkillScanAlertList 接口获取</p>
                     * @param _iD <p>告警记录 ID<br>取值参考：通过 DescribeSkillScanAlertList 接口获取</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取集团账号的成员 id
                     * @return MemberId 集团账号的成员 id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员 id
                     * @param _memberId 集团账号的成员 id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>告警记录 ID<br>取值参考：通过 DescribeSkillScanAlertList 接口获取</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 集团账号的成员 id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANALERTDETAILREQUEST_H_
