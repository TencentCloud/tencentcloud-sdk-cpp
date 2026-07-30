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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKPHONEANDNAMERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKPHONEANDNAMERESPONSE_H_

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
                * CheckPhoneAndName返回参数结构体
                */
                class CheckPhoneAndNameResponse : public AbstractModel
                {
                public:
                    CheckPhoneAndNameResponse();
                    ~CheckPhoneAndNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>0: 验证结果一致。<br>1: 验证结果不一致。</p></li><li><p>不收费结果码：<br>-1:查无记录。<br>-2:引擎未知错误。<br>-3:引擎服务异常。<br>-4:姓名校验不通过。<br>-5:手机号码不合法。<br>-6: 认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
                     * @return Result <p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>0: 验证结果一致。<br>1: 验证结果不一致。</p></li><li><p>不收费结果码：<br>-1:查无记录。<br>-2:引擎未知错误。<br>-3:引擎服务异常。<br>-4:姓名校验不通过。<br>-5:手机号码不合法。<br>-6: 认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
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
                     * 获取<p>业务结果描述。</p>
                     * @return Description <p>业务结果描述。</p>
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
                     * <p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>0: 验证结果一致。<br>1: 验证结果不一致。</p></li><li><p>不收费结果码：<br>-1:查无记录。<br>-2:引擎未知错误。<br>-3:引擎服务异常。<br>-4:姓名校验不通过。<br>-5:手机号码不合法。<br>-6: 认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务结果描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKPHONEANDNAMERESPONSE_H_
