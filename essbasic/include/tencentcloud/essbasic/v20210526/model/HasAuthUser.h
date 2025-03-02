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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHUSER_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 被授权的用户信息
                */
                class HasAuthUser : public AbstractModel
                {
                public:
                    HasAuthUser();
                    ~HasAuthUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


                     * @return OpenId 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


                     * @param _openId 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 第三方应用平台自定义，对应第三方平台子客企业员工的唯一标识。


                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHUSER_H_
