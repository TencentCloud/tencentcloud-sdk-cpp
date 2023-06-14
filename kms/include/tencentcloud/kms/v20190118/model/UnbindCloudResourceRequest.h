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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * UnbindCloudResource请求参数结构体
                */
                class UnbindCloudResourceRequest : public AbstractModel
                {
                public:
                    UnbindCloudResourceRequest();
                    ~UnbindCloudResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cmk的ID
                     * @return KeyId cmk的ID
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置cmk的ID
                     * @param _keyId cmk的ID
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
                     * 获取云产品的唯一性标识符
                     * @return ProductId 云产品的唯一性标识符
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置云产品的唯一性标识符
                     * @param _productId 云产品的唯一性标识符
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取资源/实例ID，由调用方根据自己的云产品特征来定义，以字符串形式做存储。
                     * @return ResourceId 资源/实例ID，由调用方根据自己的云产品特征来定义，以字符串形式做存储。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源/实例ID，由调用方根据自己的云产品特征来定义，以字符串形式做存储。
                     * @param _resourceId 资源/实例ID，由调用方根据自己的云产品特征来定义，以字符串形式做存储。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * cmk的ID
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 云产品的唯一性标识符
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 资源/实例ID，由调用方根据自己的云产品特征来定义，以字符串形式做存储。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_UNBINDCLOUDRESOURCEREQUEST_H_
