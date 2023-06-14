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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CheckVerifyCodeMatchFlowId返回参数结构体
                */
                class CheckVerifyCodeMatchFlowIdResponse : public AbstractModel
                {
                public:
                    CheckVerifyCodeMatchFlowIdResponse();
                    ~CheckVerifyCodeMatchFlowIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true: 验证码正确，false: 验证码错误
                     * @return Success true: 验证码正确，false: 验证码错误
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取0: 验证码正确 1:验证码错误或过期 2:验证码错误 3:验证码和流程不匹配 4:验证码输入错误超过次数 5:内部错误
6:参数错误
                     * @return Result 0: 验证码正确 1:验证码错误或过期 2:验证码错误 3:验证码和流程不匹配 4:验证码输入错误超过次数 5:内部错误
6:参数错误
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取结果描述
                     * @return Description 结果描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * true: 验证码正确，false: 验证码错误
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 0: 验证码正确 1:验证码错误或过期 2:验证码错误 3:验证码和流程不匹配 4:验证码输入错误超过次数 5:内部错误
6:参数错误
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 结果描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKVERIFYCODEMATCHFLOWIDRESPONSE_H_
