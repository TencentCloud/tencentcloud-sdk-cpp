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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREF_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源引用参数
                */
                class ResourceRef : public AbstractModel
                {
                public:
                    ResourceRef();
                    ~ResourceRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
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
                     * 获取资源版本ID，-1表示使用最新版本
                     * @return Version 资源版本ID，-1表示使用最新版本
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置资源版本ID，-1表示使用最新版本
                     * @param _version 资源版本ID，-1表示使用最新版本
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取引用资源类型，例如主资源设置为1，代表main class所在的jar包
                     * @return Type 引用资源类型，例如主资源设置为1，代表main class所在的jar包
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置引用资源类型，例如主资源设置为1，代表main class所在的jar包
                     * @param _type 引用资源类型，例如主资源设置为1，代表main class所在的jar包
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源版本ID，-1表示使用最新版本
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 引用资源类型，例如主资源设置为1，代表main class所在的jar包
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREF_H_
