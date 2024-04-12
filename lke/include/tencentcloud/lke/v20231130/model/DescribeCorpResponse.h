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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeCorp返回参数结构体
                */
                class DescribeCorpResponse : public AbstractModel
                {
                public:
                    DescribeCorpResponse();
                    ~DescribeCorpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID

                     * @return CorpBizId 企业ID

                     * 
                     */
                    std::string GetCorpBizId() const;

                    /**
                     * 判断参数 CorpBizId 是否已赋值
                     * @return CorpBizId 是否已赋值
                     * 
                     */
                    bool CorpBizIdHasBeenSet() const;

                    /**
                     * 获取机器人配额

                     * @return RobotQuota 机器人配额

                     * 
                     */
                    uint64_t GetRobotQuota() const;

                    /**
                     * 判断参数 RobotQuota 是否已赋值
                     * @return RobotQuota 是否已赋值
                     * 
                     */
                    bool RobotQuotaHasBeenSet() const;

                    /**
                     * 获取企业全称

                     * @return FullName 企业全称

                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                private:

                    /**
                     * 企业ID

                     */
                    std::string m_corpBizId;
                    bool m_corpBizIdHasBeenSet;

                    /**
                     * 机器人配额

                     */
                    uint64_t m_robotQuota;
                    bool m_robotQuotaHasBeenSet;

                    /**
                     * 企业全称

                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_
