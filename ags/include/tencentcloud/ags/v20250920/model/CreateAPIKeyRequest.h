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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATEAPIKEYREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATEAPIKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateAPIKey请求参数结构体
                */
                class CreateAPIKeyRequest : public AbstractModel
                {
                public:
                    CreateAPIKeyRequest();
                    ~CreateAPIKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API密钥名称，方便用户记忆
                     * @return Name API密钥名称，方便用户记忆
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API密钥名称，方便用户记忆
                     * @param _name API密钥名称，方便用户记忆
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * API密钥名称，方便用户记忆
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATEAPIKEYREQUEST_H_
