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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDVERIFICATIONRESPONSE_H_

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
                * IdCardVerification返回参数结构体
                */
                class IdCardVerificationResponse : public AbstractModel
                {
                public:
                    IdCardVerificationResponse();
                    ~IdCardVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码，收费情况如下。
收费结果码：
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
不收费结果码：
-2: 非法身份证号（长度、校验位等不正确）
-3: 非法姓名（长度、格式等不正确）
-4: 证件库服务异常
-5: 证件库中无此身份证记录
-6: 权威比对系统升级中，请稍后再试
-7: 认证次数超过当日限制
                     * @return Result 认证结果码，收费情况如下。
收费结果码：
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
不收费结果码：
-2: 非法身份证号（长度、校验位等不正确）
-3: 非法姓名（长度、格式等不正确）
-4: 证件库服务异常
-5: 证件库中无此身份证记录
-6: 权威比对系统升级中，请稍后再试
-7: 认证次数超过当日限制
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 认证结果码，收费情况如下。
收费结果码：
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
不收费结果码：
-2: 非法身份证号（长度、校验位等不正确）
-3: 非法姓名（长度、格式等不正确）
-4: 证件库服务异常
-5: 证件库中无此身份证记录
-6: 权威比对系统升级中，请稍后再试
-7: 认证次数超过当日限制
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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDVERIFICATIONRESPONSE_H_
