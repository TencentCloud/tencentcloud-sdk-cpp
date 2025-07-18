/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARDVERIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * BankCardVerification返回参数结构体
                */
                class BankCardVerificationResponse : public AbstractModel
                {
                public:
                    BankCardVerificationResponse();
                    ~BankCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码。
- 收费结果码：
'0': '认证通过'。
'-1': '认证未通过'。
'-5': '持卡人信息有误'。
'-6': '未开通无卡支付'。
'-7': '此卡被没收'。
'-8': '无效卡号'。
'-9': '此卡无对应发卡行'。
'-10': '该卡未初始化或睡眠卡'。
'-11': '作弊卡、吞卡'。
'-12': '此卡已挂失'。
'-13': '该卡已过期'。
'-14': '受限制的卡'。
'-15': '密码错误次数超限'。
'-16': '发卡行不支持此交易'。
'-20': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-17': '验证中心服务繁忙'。
'-18': '验证次数超限，请次日重试'。
'-19': '该证件号暂不支持核验，当前仅支持二代身份证'。	
                     * @return Result 认证结果码。
- 收费结果码：
'0': '认证通过'。
'-1': '认证未通过'。
'-5': '持卡人信息有误'。
'-6': '未开通无卡支付'。
'-7': '此卡被没收'。
'-8': '无效卡号'。
'-9': '此卡无对应发卡行'。
'-10': '该卡未初始化或睡眠卡'。
'-11': '作弊卡、吞卡'。
'-12': '此卡已挂失'。
'-13': '该卡已过期'。
'-14': '受限制的卡'。
'-15': '密码错误次数超限'。
'-16': '发卡行不支持此交易'。
'-20': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-17': '验证中心服务繁忙'。
'-18': '验证次数超限，请次日重试'。
'-19': '该证件号暂不支持核验，当前仅支持二代身份证'。	
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
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
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
                     * 认证结果码。
- 收费结果码：
'0': '认证通过'。
'-1': '认证未通过'。
'-5': '持卡人信息有误'。
'-6': '未开通无卡支付'。
'-7': '此卡被没收'。
'-8': '无效卡号'。
'-9': '此卡无对应发卡行'。
'-10': '该卡未初始化或睡眠卡'。
'-11': '作弊卡、吞卡'。
'-12': '此卡已挂失'。
'-13': '该卡已过期'。
'-14': '受限制的卡'。
'-15': '密码错误次数超限'。
'-16': '发卡行不支持此交易'。
'-20': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-17': '验证中心服务繁忙'。
'-18': '验证次数超限，请次日重试'。
'-19': '该证件号暂不支持核验，当前仅支持二代身份证'。	
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARDVERIFICATIONRESPONSE_H_
