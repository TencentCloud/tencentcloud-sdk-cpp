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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosPolicyInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateCosPolicy请求参数结构体
                */
                class CreateCosPolicyRequest : public AbstractModel
                {
                public:
                    CreateCosPolicyRequest();
                    ~CreateCosPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略信息
                     * @return CosPolicyInfo 策略信息
                     * 
                     */
                    CosPolicyInfo GetCosPolicyInfo() const;

                    /**
                     * 设置策略信息
                     * @param _cosPolicyInfo 策略信息
                     * 
                     */
                    void SetCosPolicyInfo(const CosPolicyInfo& _cosPolicyInfo);

                    /**
                     * 判断参数 CosPolicyInfo 是否已赋值
                     * @return CosPolicyInfo 是否已赋值
                     * 
                     */
                    bool CosPolicyInfoHasBeenSet() const;

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
                     * 策略信息
                     */
                    CosPolicyInfo m_cosPolicyInfo;
                    bool m_cosPolicyInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSPOLICYREQUEST_H_
