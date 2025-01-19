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
                     * 获取认证结果码，收费情况如下。
- 收费结果码：
0: 成功。
-2: 手机号不存在。
-3: 手机号存在，但无法查询到在网时长。

- 不收费结果码：
-1: 手机号格式不正确。
-4: 验证中心服务繁忙。
-5：认证次数超过当日限制，请次日重试。
                     * @return Result 认证结果码，收费情况如下。
- 收费结果码：
0: 成功。
-2: 手机号不存在。
-3: 手机号存在，但无法查询到在网时长。

- 不收费结果码：
-1: 手机号格式不正确。
-4: 验证中心服务繁忙。
-5：认证次数超过当日限制，请次日重试。
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

                    /**
                     * 获取在网时长区间。
- 格式为[a,b)，表示在网时长在a个月以上，b个月以下。
- 若b为+时表示没有上限。
                     * @return Range 在网时长区间。
- 格式为[a,b)，表示在网时长在a个月以上，b个月以下。
- 若b为+时表示没有上限。
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
                     * 认证结果码，收费情况如下。
- 收费结果码：
0: 成功。
-2: 手机号不存在。
-3: 手机号存在，但无法查询到在网时长。

- 不收费结果码：
-1: 手机号格式不正确。
-4: 验证中心服务繁忙。
-5：认证次数超过当日限制，请次日重试。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 在网时长区间。
- 格式为[a,b)，表示在网时长在a个月以上，b个月以下。
- 若b为+时表示没有上限。
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_MOBILENETWORKTIMEVERIFICATIONRESPONSE_H_
