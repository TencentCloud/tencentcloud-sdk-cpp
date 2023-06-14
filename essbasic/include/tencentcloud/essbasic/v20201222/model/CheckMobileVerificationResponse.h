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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKMOBILEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKMOBILEVERIFICATIONRESPONSE_H_

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
                * CheckMobileVerification返回参数结构体
                */
                class CheckMobileVerificationResponse : public AbstractModel
                {
                public:
                    CheckMobileVerificationResponse();
                    ~CheckMobileVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测结果
计费结果码：
  0:  验证结果一致
  1:  手机号未实名
  2:  姓名和手机号不一致
  3:  信息不一致(手机号已实名,但姓名和身份证号与实名信息不一致)
不收费结果码:
  101: 查无记录
  102: 非法姓名(长度,格式等不正确)
  103: 非法手机号(长度,格式等不正确)
  104: 非法身份证号(长度,校验位等不正确)
  105: 认证未通过
  106: 验证平台异常
                     * @return Result 检测结果
计费结果码：
  0:  验证结果一致
  1:  手机号未实名
  2:  姓名和手机号不一致
  3:  信息不一致(手机号已实名,但姓名和身份证号与实名信息不一致)
不收费结果码:
  101: 查无记录
  102: 非法姓名(长度,格式等不正确)
  103: 非法手机号(长度,格式等不正确)
  104: 非法身份证号(长度,校验位等不正确)
  105: 认证未通过
  106: 验证平台异常
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
                     * 检测结果
计费结果码：
  0:  验证结果一致
  1:  手机号未实名
  2:  姓名和手机号不一致
  3:  信息不一致(手机号已实名,但姓名和身份证号与实名信息不一致)
不收费结果码:
  101: 查无记录
  102: 非法姓名(长度,格式等不正确)
  103: 非法手机号(长度,格式等不正确)
  104: 非法身份证号(长度,校验位等不正确)
  105: 认证未通过
  106: 验证平台异常
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

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKMOBILEVERIFICATIONRESPONSE_H_
