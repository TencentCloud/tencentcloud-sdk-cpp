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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AssistantCidr.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAssistantCidr返回参数结构体
                */
                class ModifyAssistantCidrResponse : public AbstractModel
                {
                public:
                    ModifyAssistantCidrResponse();
                    ~ModifyAssistantCidrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取辅助CIDR数组。
                     * @return AssistantCidrSet 辅助CIDR数组。
                     * 
                     */
                    std::vector<AssistantCidr> GetAssistantCidrSet() const;

                    /**
                     * 判断参数 AssistantCidrSet 是否已赋值
                     * @return AssistantCidrSet 是否已赋值
                     * 
                     */
                    bool AssistantCidrSetHasBeenSet() const;

                private:

                    /**
                     * 辅助CIDR数组。
                     */
                    std::vector<AssistantCidr> m_assistantCidrSet;
                    bool m_assistantCidrSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRRESPONSE_H_
