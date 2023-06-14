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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKIDCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKIDCARDVERIFICATIONRESPONSE_H_

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
                * CheckIdCardVerification返回参数结构体
                */
                class CheckIdCardVerificationResponse : public AbstractModel
                {
                public:
                    CheckIdCardVerificationResponse();
                    ~CheckIdCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测结果; 
收费错误码:
  0: 通过,
  1: 姓名和身份证号不一致,
免费错误码:
  101: 非法身份证号(长度,格式等不正确),
  102: 非法姓名(长度,格式等不正确),
  103: 验证平台异常,
  104: 证件库中无此身份证记录
                     * @return Result 检测结果; 
收费错误码:
  0: 通过,
  1: 姓名和身份证号不一致,
免费错误码:
  101: 非法身份证号(长度,格式等不正确),
  102: 非法姓名(长度,格式等不正确),
  103: 验证平台异常,
  104: 证件库中无此身份证记录
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
                     * 获取结果描述; 未通过时必选
                     * @return Description 结果描述; 未通过时必选
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
                     * 检测结果; 
收费错误码:
  0: 通过,
  1: 姓名和身份证号不一致,
免费错误码:
  101: 非法身份证号(长度,格式等不正确),
  102: 非法姓名(长度,格式等不正确),
  103: 验证平台异常,
  104: 证件库中无此身份证记录
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 结果描述; 未通过时必选
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKIDCARDVERIFICATIONRESPONSE_H_
