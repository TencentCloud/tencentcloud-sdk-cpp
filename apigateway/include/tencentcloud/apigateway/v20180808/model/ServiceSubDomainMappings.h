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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICESUBDOMAINMAPPINGS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICESUBDOMAINMAPPINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/PathMapping.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 服务自定义域名路径映射
                */
                class ServiceSubDomainMappings : public AbstractModel
                {
                public:
                    ServiceSubDomainMappings();
                    ~ServiceSubDomainMappings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否使用默认路径映射，为 True 表示使用默认路径映射；为 False 的话，表示使用自定义路径映射，此时 PathMappingSet 不为空。
                     * @return IsDefaultMapping 是否使用默认路径映射，为 True 表示使用默认路径映射；为 False 的话，表示使用自定义路径映射，此时 PathMappingSet 不为空。
                     * 
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置是否使用默认路径映射，为 True 表示使用默认路径映射；为 False 的话，表示使用自定义路径映射，此时 PathMappingSet 不为空。
                     * @param _isDefaultMapping 是否使用默认路径映射，为 True 表示使用默认路径映射；为 False 的话，表示使用自定义路径映射，此时 PathMappingSet 不为空。
                     * 
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     * 
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取自定义路径映射列表。
                     * @return PathMappingSet 自定义路径映射列表。
                     * 
                     */
                    std::vector<PathMapping> GetPathMappingSet() const;

                    /**
                     * 设置自定义路径映射列表。
                     * @param _pathMappingSet 自定义路径映射列表。
                     * 
                     */
                    void SetPathMappingSet(const std::vector<PathMapping>& _pathMappingSet);

                    /**
                     * 判断参数 PathMappingSet 是否已赋值
                     * @return PathMappingSet 是否已赋值
                     * 
                     */
                    bool PathMappingSetHasBeenSet() const;

                private:

                    /**
                     * 是否使用默认路径映射，为 True 表示使用默认路径映射；为 False 的话，表示使用自定义路径映射，此时 PathMappingSet 不为空。
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * 自定义路径映射列表。
                     */
                    std::vector<PathMapping> m_pathMappingSet;
                    bool m_pathMappingSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICESUBDOMAINMAPPINGS_H_
