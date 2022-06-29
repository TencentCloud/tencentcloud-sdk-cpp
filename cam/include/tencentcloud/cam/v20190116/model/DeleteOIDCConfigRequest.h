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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEOIDCCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEOIDCCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DeleteOIDCConfig请求参数结构体
                */
                class DeleteOIDCConfigRequest : public AbstractModel
                {
                public:
                    DeleteOIDCConfigRequest();
                    ~DeleteOIDCConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取OIDC身份提供商名称
                     * @return Name OIDC身份提供商名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置OIDC身份提供商名称
                     * @param Name OIDC身份提供商名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * OIDC身份提供商名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEOIDCCONFIGREQUEST_H_
