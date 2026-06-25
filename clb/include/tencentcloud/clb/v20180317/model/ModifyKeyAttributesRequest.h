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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RateLimitConfigForKey.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyKeyAttributes请求参数结构体
                */
                class ModifyKeyAttributesRequest : public AbstractModel
                {
                public:
                    ModifyKeyAttributesRequest();
                    ~ModifyKeyAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID</p>
                     * @return ModelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID</p>
                     * @param _modelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>API Key的ID</p>
                     * @return KeyId <p>API Key的ID</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>API Key的ID</p>
                     * @param _keyId <p>API Key的ID</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>Key的名称</p>
                     * @return KeyName <p>Key的名称</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>Key的名称</p>
                     * @param _keyName <p>Key的名称</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>限速配置</p>
                     * @return RateLimitConfig <p>限速配置</p>
                     * 
                     */
                    RateLimitConfigForKey GetRateLimitConfig() const;

                    /**
                     * 设置<p>限速配置</p>
                     * @param _rateLimitConfig <p>限速配置</p>
                     * 
                     */
                    void SetRateLimitConfig(const RateLimitConfigForKey& _rateLimitConfig);

                    /**
                     * 判断参数 RateLimitConfig 是否已赋值
                     * @return RateLimitConfig 是否已赋值
                     * 
                     */
                    bool RateLimitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>API Key的ID</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>Key的名称</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>限速配置</p>
                     */
                    RateLimitConfigForKey m_rateLimitConfig;
                    bool m_rateLimitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYKEYATTRIBUTESREQUEST_H_
