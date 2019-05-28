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


                    /**
                     * 获取认证结果码。
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
-2: 身份证号错误
-3: 姓名错误
-4: 认证出错
                     * @return Result 认证结果码。
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
-2: 身份证号错误
-3: 姓名错误
-4: 认证出错
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取认证结果信息。
                     * @return Description 认证结果信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 认证结果码。
0: 姓名和身份证号一致
-1: 姓名和身份证号不一致
-2: 身份证号错误
-3: 姓名错误
-4: 认证出错
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 认证结果信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDVERIFICATIONRESPONSE_H_
