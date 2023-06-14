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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEPRODUCTDYNAMICREGISTERRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEPRODUCTDYNAMICREGISTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeProductDynamicRegister返回参数结构体
                */
                class DescribeProductDynamicRegisterResponse : public AbstractModel
                {
                public:
                    DescribeProductDynamicRegisterResponse();
                    ~DescribeProductDynamicRegisterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取动态注册类型，0-关闭 1-预创建设备 2-自动创建设备
                     * @return RegisterType 动态注册类型，0-关闭 1-预创建设备 2-自动创建设备
                     * 
                     */
                    uint64_t GetRegisterType() const;

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     * 
                     */
                    bool RegisterTypeHasBeenSet() const;

                    /**
                     * 获取动态注册产品密钥
                     * @return ProductSecret 动态注册产品密钥
                     * 
                     */
                    std::string GetProductSecret() const;

                    /**
                     * 判断参数 ProductSecret 是否已赋值
                     * @return ProductSecret 是否已赋值
                     * 
                     */
                    bool ProductSecretHasBeenSet() const;

                    /**
                     * 获取动态注册设备上限
                     * @return RegisterLimit 动态注册设备上限
                     * 
                     */
                    uint64_t GetRegisterLimit() const;

                    /**
                     * 判断参数 RegisterLimit 是否已赋值
                     * @return RegisterLimit 是否已赋值
                     * 
                     */
                    bool RegisterLimitHasBeenSet() const;

                private:

                    /**
                     * 动态注册类型，0-关闭 1-预创建设备 2-自动创建设备
                     */
                    uint64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

                    /**
                     * 动态注册产品密钥
                     */
                    std::string m_productSecret;
                    bool m_productSecretHasBeenSet;

                    /**
                     * 动态注册设备上限
                     */
                    uint64_t m_registerLimit;
                    bool m_registerLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEPRODUCTDYNAMICREGISTERRESPONSE_H_
