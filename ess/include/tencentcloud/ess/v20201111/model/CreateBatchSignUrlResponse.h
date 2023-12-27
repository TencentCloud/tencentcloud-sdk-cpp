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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHSIGNURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHSIGNURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateBatchSignUrl返回参数结构体
                */
                class CreateBatchSignUrlResponse : public AbstractModel
                {
                public:
                    CreateBatchSignUrlResponse();
                    ~CreateBatchSignUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量签署链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。

注: 
1. 非小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return SignUrl 批量签署链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。

注: 
1. 非小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     * 
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间以 Unix 时间戳格式表示，默认生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
                     * @return ExpiredTime 链接过期时间以 Unix 时间戳格式表示，默认生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径

注: 
1. 小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return MiniAppPath 从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径

注: 
1. 小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetMiniAppPath() const;

                    /**
                     * 判断参数 MiniAppPath 是否已赋值
                     * @return MiniAppPath 是否已赋值
                     * 
                     */
                    bool MiniAppPathHasBeenSet() const;

                private:

                    /**
                     * 批量签署链接，以短链形式返回，短链的有效期参考回参中的 ExpiredTime。

注: 
1. 非小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 链接过期时间以 Unix 时间戳格式表示，默认生成链接时间起，往后7天有效期。过期后短链将失效，无法打开。
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 从客户小程序或者客户APP跳转至腾讯电子签小程序进行批量签署的跳转路径

注: 
1. 小程序和APP集成使用
2. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHSIGNURLRESPONSE_H_
