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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCTCCRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCTCCRESPONSE_H_

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
                * PhoneVerificationCTCC返回参数结构体
                */
                class PhoneVerificationCTCCResponse : public AbstractModel
                {
                public:
                    PhoneVerificationCTCCResponse();
                    ~PhoneVerificationCTCCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码，收费情况如下。
- 收费结果码：
0: 认证通过。
-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。

- 不收费结果码：
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
                     * @return Result 认证结果码，收费情况如下。
- 收费结果码：
0: 认证通过。
-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。

- 不收费结果码：
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
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
                     * 获取运营商名称。
- 取值范围为["移动","联通","电信",""]。
                     * @return Isp 运营商名称。
- 取值范围为["移动","联通","电信",""]。
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

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
                     * 认证结果码，收费情况如下。
- 收费结果码：
0: 认证通过。
-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。

- 不收费结果码：
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 运营商名称。
- 取值范围为["移动","联通","电信",""]。
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCTCCRESPONSE_H_
