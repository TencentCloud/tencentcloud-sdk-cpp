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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_

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
                * ModifyOrganizationAccountStatus请求参数结构体
                */
                class ModifyOrganizationAccountStatusRequest : public AbstractModel
                {
                public:
                    ModifyOrganizationAccountStatusRequest();
                    ~ModifyOrganizationAccountStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改集团账号状态，1 开启， 2关闭
                     * @return Status 修改集团账号状态，1 开启， 2关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置修改集团账号状态，1 开启， 2关闭
                     * @param _status 修改集团账号状态，1 开启， 2关闭
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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

                private:

                    /**
                     * 修改集团账号状态，1 开启， 2关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYORGANIZATIONACCOUNTSTATUSREQUEST_H_
