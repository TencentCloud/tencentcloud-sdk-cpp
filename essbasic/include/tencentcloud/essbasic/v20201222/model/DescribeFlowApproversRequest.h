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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWAPPROVERSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWAPPROVERSREQUEST_H_

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
                * DescribeFlowApprovers请求参数结构体
                */
                class DescribeFlowApproversRequest : public AbstractModel
                {
                public:
                    DescribeFlowApproversRequest();
                    ~DescribeFlowApproversRequest() = default;
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
                     * 获取需要查询的流程ID
                     * @return FlowId 需要查询的流程ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置需要查询的流程ID
                     * @param _flowId 需要查询的流程ID
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取需要查询的用户ID，为空则默认查询所有用户信息
                     * @return UserId 需要查询的用户ID，为空则默认查询所有用户信息
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要查询的用户ID，为空则默认查询所有用户信息
                     * @param _userId 需要查询的用户ID，为空则默认查询所有用户信息
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取需要查询的签署ID，为空则不按签署ID过滤
                     * @return SignId 需要查询的签署ID，为空则不按签署ID过滤
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置需要查询的签署ID，为空则不按签署ID过滤
                     * @param _signId 需要查询的签署ID，为空则不按签署ID过滤
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 需要查询的流程ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 需要查询的用户ID，为空则默认查询所有用户信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 需要查询的签署ID，为空则不按签署ID过滤
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFLOWAPPROVERSREQUEST_H_
