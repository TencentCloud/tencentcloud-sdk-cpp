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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_RESOURCETYPEREGIONS_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_RESOURCETYPEREGIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 云资源地域列表
                */
                class ResourceTypeRegions : public AbstractModel
                {
                public:
                    ResourceTypeRegions();
                    ~ResourceTypeRegions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云资源类型，支持clb、waf、apigateway、cos、tke、tse、tcb
                     * @return ResourceType 云资源类型，支持clb、waf、apigateway、cos、tke、tse、tcb
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置云资源类型，支持clb、waf、apigateway、cos、tke、tse、tcb
                     * @param _resourceType 云资源类型，支持clb、waf、apigateway、cos、tke、tse、tcb
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
                     * 获取地域列表
                     * @return Regions 地域列表
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置地域列表
                     * @param _regions 地域列表
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * 云资源类型，支持clb、waf、apigateway、cos、tke、tse、tcb
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_RESOURCETYPEREGIONS_H_
