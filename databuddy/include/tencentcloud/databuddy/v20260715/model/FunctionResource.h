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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FUNCTIONRESOURCE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FUNCTIONRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 函数资源
                */
                class FunctionResource : public AbstractModel
                {
                public:
                    FunctionResource();
                    ~FunctionResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型，取值如file(文件)、jar(jar包)、archive(归档文件)等
                     * @return ResourceType 资源类型，取值如file(文件)、jar(jar包)、archive(归档文件)等
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，取值如file(文件)、jar(jar包)、archive(归档文件)等
                     * @param _resourceType 资源类型，取值如file(文件)、jar(jar包)、archive(归档文件)等
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源路径
                     * @return Uri 资源路径
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置资源路径
                     * @param _uri 资源路径
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * 资源类型，取值如file(文件)、jar(jar包)、archive(归档文件)等
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源路径
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FUNCTIONRESOURCE_H_
