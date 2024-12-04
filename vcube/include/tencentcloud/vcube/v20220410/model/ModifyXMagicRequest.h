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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYXMAGICREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYXMAGICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * ModifyXMagic请求参数结构体
                */
                class ModifyXMagicRequest : public AbstractModel
                {
                public:
                    ModifyXMagicRequest();
                    ~ModifyXMagicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param _resourceId 资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取优图licenseId
                     * @return XMagicId 优图licenseId
                     * 
                     */
                    std::string GetXMagicId() const;

                    /**
                     * 设置优图licenseId
                     * @param _xMagicId 优图licenseId
                     * 
                     */
                    void SetXMagicId(const std::string& _xMagicId);

                    /**
                     * 判断参数 XMagicId 是否已赋值
                     * @return XMagicId 是否已赋值
                     * 
                     */
                    bool XMagicIdHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 优图licenseId
                     */
                    std::string m_xMagicId;
                    bool m_xMagicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYXMAGICREQUEST_H_
