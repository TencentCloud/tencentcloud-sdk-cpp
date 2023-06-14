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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXWECHATAUTHRESULTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXWECHATAUTHRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexWechatAuthResult请求参数结构体
                */
                class QueryFlexWechatAuthResultRequest : public AbstractModel
                {
                public:
                    QueryFlexWechatAuthResultRequest();
                    ~QueryFlexWechatAuthResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户核身单号
                     * @return AuthNo 商户核身单号
                     * 
                     */
                    std::string GetAuthNo() const;

                    /**
                     * 设置商户核身单号
                     * @param _authNo 商户核身单号
                     * 
                     */
                    void SetAuthNo(const std::string& _authNo);

                    /**
                     * 判断参数 AuthNo 是否已赋值
                     * @return AuthNo 是否已赋值
                     * 
                     */
                    bool AuthNoHasBeenSet() const;

                    /**
                     * 获取环境类型
test 测试
release 生产
sandbox 沙箱
                     * @return Environment 环境类型
test 测试
release 生产
sandbox 沙箱
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
test 测试
release 生产
sandbox 沙箱
                     * @param _environment 环境类型
test 测试
release 生产
sandbox 沙箱
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 商户核身单号
                     */
                    std::string m_authNo;
                    bool m_authNoHasBeenSet;

                    /**
                     * 环境类型
test 测试
release 生产
sandbox 沙箱
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXWECHATAUTHRESULTREQUEST_H_
