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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEPATHREWRITE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEPATHREWRITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTP访问服务路径重写配置
                */
                class HTTPServicePathRewrite : public AbstractModel
                {
                public:
                    HTTPServicePathRewrite();
                    ~HTTPServicePathRewrite() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径前缀重写。StaticStorePrefix、Prefix只能填一个
                     * @return Prefix 路径前缀重写。StaticStorePrefix、Prefix只能填一个
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置路径前缀重写。StaticStorePrefix、Prefix只能填一个
                     * @param _prefix 路径前缀重写。StaticStorePrefix、Prefix只能填一个
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                private:

                    /**
                     * 路径前缀重写。StaticStorePrefix、Prefix只能填一个
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEPATHREWRITE_H_
