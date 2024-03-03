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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TagCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTopAttackInfo返回参数结构体
                */
                class DescribeTopAttackInfoResponse : public AbstractModel
                {
                public:
                    DescribeTopAttackInfoResponse();
                    ~DescribeTopAttackInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Top攻击类型/攻击者次数
                     * @return TopAttackInfo Top攻击类型/攻击者次数
                     * 
                     */
                    std::vector<TagCount> GetTopAttackInfo() const;

                    /**
                     * 判断参数 TopAttackInfo 是否已赋值
                     * @return TopAttackInfo 是否已赋值
                     * 
                     */
                    bool TopAttackInfoHasBeenSet() const;

                private:

                    /**
                     * Top攻击类型/攻击者次数
                     */
                    std::vector<TagCount> m_topAttackInfo;
                    bool m_topAttackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFORESPONSE_H_
