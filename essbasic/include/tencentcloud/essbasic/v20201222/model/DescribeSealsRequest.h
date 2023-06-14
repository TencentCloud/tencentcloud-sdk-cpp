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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeSeals请求参数结构体
                */
                class DescribeSealsRequest : public AbstractModel
                {
                public:
                    DescribeSealsRequest();
                    ~DescribeSealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取印章ID列表
                     * @return SealIds 印章ID列表
                     * 
                     */
                    std::vector<std::string> GetSealIds() const;

                    /**
                     * 设置印章ID列表
                     * @param _sealIds 印章ID列表
                     * 
                     */
                    void SetSealIds(const std::vector<std::string>& _sealIds);

                    /**
                     * 判断参数 SealIds 是否已赋值
                     * @return SealIds 是否已赋值
                     * 
                     */
                    bool SealIdsHasBeenSet() const;

                    /**
                     * 获取用户唯一标识
                     * @return UserId 用户唯一标识
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识
                     * @param _userId 用户唯一标识
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 印章ID列表
                     */
                    std::vector<std::string> m_sealIds;
                    bool m_sealIdsHasBeenSet;

                    /**
                     * 用户唯一标识
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBESEALSREQUEST_H_
