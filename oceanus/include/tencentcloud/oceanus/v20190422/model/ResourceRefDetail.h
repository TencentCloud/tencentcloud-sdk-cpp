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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFDETAIL_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFDETAIL_H_

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
                * JobConfig引用资源信息
                */
                class ResourceRefDetail : public AbstractModel
                {
                public:
                    ResourceRefDetail();
                    ~ResourceRefDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
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
                     * 获取资源版本，-1表示使用最新版本
                     * @return Version 资源版本，-1表示使用最新版本
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置资源版本，-1表示使用最新版本
                     * @param _version 资源版本，-1表示使用最新版本
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
                     * 获取资源名称
                     * @return Name 资源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param _name 资源名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取1: 主资源
                     * @return Type 1: 主资源
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1: 主资源
                     * @param _type 1: 主资源
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取1: 系统内置资源
                     * @return SystemProvide 1: 系统内置资源
                     * 
                     */
                    int64_t GetSystemProvide() const;

                    /**
                     * 设置1: 系统内置资源
                     * @param _systemProvide 1: 系统内置资源
                     * 
                     */
                    void SetSystemProvide(const int64_t& _systemProvide);

                    /**
                     * 判断参数 SystemProvide 是否已赋值
                     * @return SystemProvide 是否已赋值
                     * 
                     */
                    bool SystemProvideHasBeenSet() const;

                    /**
                     * 获取Connector
                     * @return Connector Connector
                     * 
                     */
                    std::string GetConnector() const;

                    /**
                     * 设置Connector
                     * @param _connector Connector
                     * 
                     */
                    void SetConnector(const std::string& _connector);

                    /**
                     * 判断参数 Connector 是否已赋值
                     * @return Connector 是否已赋值
                     * 
                     */
                    bool ConnectorHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源版本，-1表示使用最新版本
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 1: 主资源
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1: 系统内置资源
                     */
                    int64_t m_systemProvide;
                    bool m_systemProvideHasBeenSet;

                    /**
                     * Connector
                     */
                    std::string m_connector;
                    bool m_connectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFDETAIL_H_
