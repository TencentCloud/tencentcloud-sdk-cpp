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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARDVERIFICATIONRESPONSE_H_

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
                * CheckBankCardVerification返回参数结构体
                */
                class CheckBankCardVerificationResponse : public AbstractModel
                {
                public:
                    CheckBankCardVerificationResponse();
                    ~CheckBankCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测结果
计费结果码：
  0:  认证通过
  1:  认证未通过
  2:  持卡人信息有误
  3:  未开通无卡支付
  4:  此卡被没收
  5:  无效卡号
  6:  此卡无对应发卡行
  7:  该卡未初始化或睡眠卡
  8:  作弊卡、吞卡
  9:  此卡已挂失
  10: 该卡已过期
  11: 受限制的卡
  12: 密码错误次数超限
  13: 发卡行不支持此交易
不收费结果码:
  101: 姓名校验不通过
  102: 银行卡号码有误
  103: 验证中心服务繁忙
  104: 身份证号码有误
  105: 手机号码不合法
                     * @return Result 检测结果
计费结果码：
  0:  认证通过
  1:  认证未通过
  2:  持卡人信息有误
  3:  未开通无卡支付
  4:  此卡被没收
  5:  无效卡号
  6:  此卡无对应发卡行
  7:  该卡未初始化或睡眠卡
  8:  作弊卡、吞卡
  9:  此卡已挂失
  10: 该卡已过期
  11: 受限制的卡
  12: 密码错误次数超限
  13: 发卡行不支持此交易
不收费结果码:
  101: 姓名校验不通过
  102: 银行卡号码有误
  103: 验证中心服务繁忙
  104: 身份证号码有误
  105: 手机号码不合法
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
  0:  认证通过
  1:  认证未通过
  2:  持卡人信息有误
  3:  未开通无卡支付
  4:  此卡被没收
  5:  无效卡号
  6:  此卡无对应发卡行
  7:  该卡未初始化或睡眠卡
  8:  作弊卡、吞卡
  9:  此卡已挂失
  10: 该卡已过期
  11: 受限制的卡
  12: 密码错误次数超限
  13: 发卡行不支持此交易
不收费结果码:
  101: 姓名校验不通过
  102: 银行卡号码有误
  103: 验证中心服务繁忙
  104: 身份证号码有误
  105: 手机号码不合法
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

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CHECKBANKCARDVERIFICATIONRESPONSE_H_
