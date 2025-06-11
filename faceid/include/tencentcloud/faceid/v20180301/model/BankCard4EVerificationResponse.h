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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_

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
                * BankCard4EVerification返回参数结构体
                */
                class BankCard4EVerificationResponse : public AbstractModel
                {
                public:
                    BankCard4EVerificationResponse();
                    ~BankCard4EVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码。
- 收费结果码：
'0': '认证通过'。
'-1': '认证未通过'。
'-6': '持卡人信息有误'。
'-7': '未开通无卡支付'。
'-8': '此卡被没收'。
'-9': '无效卡号'。
'-10': '此卡无对应发卡行'。
'-11': '该卡未初始化或睡眠卡'。
'-12': '作弊卡、吞卡'。
'-13': '此卡已挂失'。
'-14': '该卡已过期'。
'-15': '受限制的卡'。
'-16': '密码错误次数超限'。
'-17': '发卡行不支持此交易'。
'-21': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-5': '手机号码不合法'。
'-18': '验证中心服务繁忙'。
'-19': '验证次数超限，请次日重试'。
'-20': '该证件号暂不支持核验，当前仅支持二代身份证'。
                     * @return Result 认证结果码。
- 收费结果码：
'0': '认证通过'。
'-1': '认证未通过'。
'-6': '持卡人信息有误'。
'-7': '未开通无卡支付'。
'-8': '此卡被没收'。
'-9': '无效卡号'。
'-10': '此卡无对应发卡行'。
'-11': '该卡未初始化或睡眠卡'。
'-12': '作弊卡、吞卡'。
'-13': '此卡已挂失'。
'-14': '该卡已过期'。
'-15': '受限制的卡'。
'-16': '密码错误次数超限'。
'-17': '发卡行不支持此交易'。
'-21': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-5': '手机号码不合法'。
'-18': '验证中心服务繁忙'。
'-19': '验证次数超限，请次日重试'。
'-20': '该证件号暂不支持核验，当前仅支持二代身份证'。
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
'-6': '持卡人信息有误'。
'-7': '未开通无卡支付'。
'-8': '此卡被没收'。
'-9': '无效卡号'。
'-10': '此卡无对应发卡行'。
'-11': '该卡未初始化或睡眠卡'。
'-12': '作弊卡、吞卡'。
'-13': '此卡已挂失'。
'-14': '该卡已过期'。
'-15': '受限制的卡'。
'-16': '密码错误次数超限'。
'-17': '发卡行不支持此交易'。
'-21': '卡状态异常或卡号错误'。

- 不收费结果码：
'-2': '姓名校验不通过'。
'-3': '身份证号码有误'。
'-4': '银行卡号格式有误'。
'-5': '手机号码不合法'。
'-18': '验证中心服务繁忙'。
'-19': '验证次数超限，请次日重试'。
'-20': '该证件号暂不支持核验，当前仅支持二代身份证'。
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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BANKCARD4EVERIFICATIONRESPONSE_H_
