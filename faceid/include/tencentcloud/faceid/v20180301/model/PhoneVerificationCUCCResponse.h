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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCRESPONSE_H_

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
                * PhoneVerificationCUCC返回参数结构体
                */
                class PhoneVerificationCUCCResponse : public AbstractModel
                {
                public:
                    PhoneVerificationCUCCResponse();
                    ~PhoneVerificationCUCCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>认证结果码，收费情况如下。</p><ul><li>收费结果码：</li><li>0: 认证通过。</li><li>-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。</li><li>-不收费结果码：</li><li>-6: 手机号码不合法。</li><li>-7: 身份证号码有误。</li><li>-8: 姓名校验不通过。</li><li>-9: 没有记录。</li><li>-11: 验证中心服务繁忙。</li><li>-13：该号段不支持验证</li></ul>
                     * @return Result <p>认证结果码，收费情况如下。</p><ul><li>收费结果码：</li><li>0: 认证通过。</li><li>-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。</li><li>-不收费结果码：</li><li>-6: 手机号码不合法。</li><li>-7: 身份证号码有误。</li><li>-8: 姓名校验不通过。</li><li>-9: 没有记录。</li><li>-11: 验证中心服务繁忙。</li><li>-13：该号段不支持验证</li></ul>
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
                     * 获取<p>运营商名称。</p><ul><li>取值范围为[&quot;移动&quot;,&quot;联通&quot;,&quot;电信&quot;,&quot;&quot;]。</li></ul>
                     * @return Isp <p>运营商名称。</p><ul><li>取值范围为[&quot;移动&quot;,&quot;联通&quot;,&quot;电信&quot;,&quot;&quot;]。</li></ul>
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
                     * <p>认证结果码，收费情况如下。</p><ul><li>收费结果码：</li><li>0: 认证通过。</li><li>-4: 信息不一致（手机号已实名，但姓名和身份证号与实名信息不一致）。</li><li>-不收费结果码：</li><li>-6: 手机号码不合法。</li><li>-7: 身份证号码有误。</li><li>-8: 姓名校验不通过。</li><li>-9: 没有记录。</li><li>-11: 验证中心服务繁忙。</li><li>-13：该号段不支持验证</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>运营商名称。</p><ul><li>取值范围为[&quot;移动&quot;,&quot;联通&quot;,&quot;电信&quot;,&quot;&quot;]。</li></ul>
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

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

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONCUCCRESPONSE_H_
