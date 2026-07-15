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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_

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
                * MobileNetworkTimeVerification返回参数结构体
                */
                class MobileNetworkTimeVerificationResponse : public AbstractModel
                {
                public:
                    MobileNetworkTimeVerificationResponse();
                    ~MobileNetworkTimeVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>-0: 成功。<br>-2: 手机号不存在<br>-3: 手机号存在，但无法查询到在网时长。</p></li><li><p>不收费结果码：<br>-1: 手机号格式不正确。<br>-4: 验证中心服务繁忙。<br>-5：认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
                     * @return Result <p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>-0: 成功。<br>-2: 手机号不存在<br>-3: 手机号存在，但无法查询到在网时长。</p></li><li><p>不收费结果码：<br>-1: 手机号格式不正确。<br>-4: 验证中心服务繁忙。<br>-5：认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
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

                    /**
                     * 获取<p>在网时长区间。</p><ul><li>格式为[a,b)，表示在网时长在a个月以上，b个月以下。</li><li>若b为+时表示没有上限。</li></ul>
                     * @return Range <p>在网时长区间。</p><ul><li>格式为[a,b)，表示在网时长在a个月以上，b个月以下。</li><li>若b为+时表示没有上限。</li></ul>
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                private:

                    /**
                     * <p>认证结果码，收费情况如下。</p><ul><li><p>收费结果码：<br>-0: 成功。<br>-2: 手机号不存在<br>-3: 手机号存在，但无法查询到在网时长。</p></li><li><p>不收费结果码：<br>-1: 手机号格式不正确。<br>-4: 验证中心服务繁忙。<br>-5：认证次数超过当日限制，请次日重试。<br>-13：该号段不支持验证</p></li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务结果描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>在网时长区间。</p><ul><li>格式为[a,b)，表示在网时长在a个月以上，b个月以下。</li><li>若b为+时表示没有上限。</li></ul>
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_
