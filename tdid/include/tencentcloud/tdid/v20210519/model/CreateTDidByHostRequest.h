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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateTDidByHost请求参数结构体
                */
                class CreateTDidByHostRequest : public AbstractModel
                {
                public:
                    CreateTDidByHostRequest();
                    ~CreateTDidByHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID应用ID
                     * @return DAPId DID应用ID
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用ID
                     * @param _dAPId DID应用ID
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取自定义DID文档json属性
                     * @return CustomAttribute 自定义DID文档json属性
                     * 
                     */
                    std::string GetCustomAttribute() const;

                    /**
                     * 设置自定义DID文档json属性
                     * @param _customAttribute 自定义DID文档json属性
                     * 
                     */
                    void SetCustomAttribute(const std::string& _customAttribute);

                    /**
                     * 判断参数 CustomAttribute 是否已赋值
                     * @return CustomAttribute 是否已赋值
                     * 
                     */
                    bool CustomAttributeHasBeenSet() const;

                private:

                    /**
                     * DID应用ID
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 自定义DID文档json属性
                     */
                    std::string m_customAttribute;
                    bool m_customAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYHOSTREQUEST_H_
