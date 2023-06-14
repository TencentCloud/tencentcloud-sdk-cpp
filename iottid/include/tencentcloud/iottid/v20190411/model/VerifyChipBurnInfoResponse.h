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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFORESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * VerifyChipBurnInfo返回参数结构体
                */
                class VerifyChipBurnInfoResponse : public AbstractModel
                {
                public:
                    VerifyChipBurnInfoResponse();
                    ~VerifyChipBurnInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证结果
                     * @return Pass 验证结果
                     * 
                     */
                    bool GetPass() const;

                    /**
                     * 判断参数 Pass 是否已赋值
                     * @return Pass 是否已赋值
                     * 
                     */
                    bool PassHasBeenSet() const;

                    /**
                     * 获取已验证次数
                     * @return VerifiedTimes 已验证次数
                     * 
                     */
                    uint64_t GetVerifiedTimes() const;

                    /**
                     * 判断参数 VerifiedTimes 是否已赋值
                     * @return VerifiedTimes 是否已赋值
                     * 
                     */
                    bool VerifiedTimesHasBeenSet() const;

                    /**
                     * 获取剩余验证次数
                     * @return LeftTimes 剩余验证次数
                     * 
                     */
                    uint64_t GetLeftTimes() const;

                    /**
                     * 判断参数 LeftTimes 是否已赋值
                     * @return LeftTimes 是否已赋值
                     * 
                     */
                    bool LeftTimesHasBeenSet() const;

                private:

                    /**
                     * 验证结果
                     */
                    bool m_pass;
                    bool m_passHasBeenSet;

                    /**
                     * 已验证次数
                     */
                    uint64_t m_verifiedTimes;
                    bool m_verifiedTimesHasBeenSet;

                    /**
                     * 剩余验证次数
                     */
                    uint64_t m_leftTimes;
                    bool m_leftTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_VERIFYCHIPBURNINFORESPONSE_H_
