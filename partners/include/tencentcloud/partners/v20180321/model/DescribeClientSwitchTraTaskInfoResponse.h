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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFORESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeClientSwitchTraTaskInfo返回参数结构体
                */
                class DescribeClientSwitchTraTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeClientSwitchTraTaskInfoResponse();
                    ~DescribeClientSwitchTraTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户UIN
                     * @return ClientUin 客户UIN
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取切换类型：代理,代采
                     * @return SwitchType 切换类型：代理,代采
                     * 
                     */
                    std::string GetSwitchType() const;

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取ok，符合，fail，不符合
                     * @return Result ok，符合，fail，不符合
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取切换链接
                     * @return SwitchUrl 切换链接
                     * 
                     */
                    std::string GetSwitchUrl() const;

                    /**
                     * 判断参数 SwitchUrl 是否已赋值
                     * @return SwitchUrl 是否已赋值
                     * 
                     */
                    bool SwitchUrlHasBeenSet() const;

                    /**
                     * 获取不符合的原因
                     * @return ResultMsg 不符合的原因
                     * 
                     */
                    std::string GetResultMsg() const;

                    /**
                     * 判断参数 ResultMsg 是否已赋值
                     * @return ResultMsg 是否已赋值
                     * 
                     */
                    bool ResultMsgHasBeenSet() const;

                private:

                    /**
                     * 客户UIN
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 切换类型：代理,代采
                     */
                    std::string m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * ok，符合，fail，不符合
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 切换链接
                     */
                    std::string m_switchUrl;
                    bool m_switchUrlHasBeenSet;

                    /**
                     * 不符合的原因
                     */
                    std::string m_resultMsg;
                    bool m_resultMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTSWITCHTRATASKINFORESPONSE_H_
