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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESUBUSERACCESSPOLICYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESUBUSERACCESSPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSubUserAccessPolicy返回参数结构体
                */
                class DescribeSubUserAccessPolicyResponse : public AbstractModel
                {
                public:
                    DescribeSubUserAccessPolicyResponse();
                    ~DescribeSubUserAccessPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户访问策略
                     * @return PolicyDocument 子用户访问策略
                     * 
                     */
                    std::string GetPolicyDocument() const;

                    /**
                     * 判断参数 PolicyDocument 是否已赋值
                     * @return PolicyDocument 是否已赋值
                     * 
                     */
                    bool PolicyDocumentHasBeenSet() const;

                private:

                    /**
                     * 子用户访问策略
                     */
                    std::string m_policyDocument;
                    bool m_policyDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESUBUSERACCESSPOLICYRESPONSE_H_
