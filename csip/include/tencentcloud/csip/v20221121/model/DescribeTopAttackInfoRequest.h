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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_

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
                * DescribeTopAttackInfo请求参数结构体
                */
                class DescribeTopAttackInfoRequest : public AbstractModel
                {
                public:
                    DescribeTopAttackInfoRequest();
                    ~DescribeTopAttackInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取被调用的集团账号的成员id
                     * @return OperatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetOperatedMemberId() const;

                    /**
                     * 设置被调用的集团账号的成员id
                     * @param _operatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    void SetOperatedMemberId(const std::vector<std::string>& _operatedMemberId);

                    /**
                     * 判断参数 OperatedMemberId 是否已赋值
                     * @return OperatedMemberId 是否已赋值
                     * 
                     */
                    bool OperatedMemberIdHasBeenSet() const;

                private:

                    /**
                     * 被调用的集团账号的成员id
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_
