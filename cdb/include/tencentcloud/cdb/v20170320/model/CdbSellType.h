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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 售卖实例类型
                */
                class CdbSellType : public AbstractModel
                {
                public:
                    CdbSellType();
                    ~CdbSellType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>售卖实例名称。<br>Z3：是高可用类型，对应规格中的 DeviceType，包含 UNIVERSAL，EXCLUSIVE。<br>CVM：是基础版类型，对应规格中的 DeviceType 是 BASIC（已下线）。<br>TKE：是基础版v2类型，对应规格中的 DeviceType 是 BASIC_V2。<br>CLOUD_NATIVE_CLUSTER：表示云盘版标准型。<br>CLOUD_NATIVE_CLUSTER_EXCLUSIVE：表示云盘版加强型。<br>CLOUD_NATIVE_CLUSTER_ULTRA：表示云盘版旗舰型。<br>CLOUD_NATIVE_SINGLE_NODE：表示云盘版单节点<br>ECONOMICAL：表示经济型。</p>
                     * @return TypeName <p>售卖实例名称。<br>Z3：是高可用类型，对应规格中的 DeviceType，包含 UNIVERSAL，EXCLUSIVE。<br>CVM：是基础版类型，对应规格中的 DeviceType 是 BASIC（已下线）。<br>TKE：是基础版v2类型，对应规格中的 DeviceType 是 BASIC_V2。<br>CLOUD_NATIVE_CLUSTER：表示云盘版标准型。<br>CLOUD_NATIVE_CLUSTER_EXCLUSIVE：表示云盘版加强型。<br>CLOUD_NATIVE_CLUSTER_ULTRA：表示云盘版旗舰型。<br>CLOUD_NATIVE_SINGLE_NODE：表示云盘版单节点<br>ECONOMICAL：表示经济型。</p>
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置<p>售卖实例名称。<br>Z3：是高可用类型，对应规格中的 DeviceType，包含 UNIVERSAL，EXCLUSIVE。<br>CVM：是基础版类型，对应规格中的 DeviceType 是 BASIC（已下线）。<br>TKE：是基础版v2类型，对应规格中的 DeviceType 是 BASIC_V2。<br>CLOUD_NATIVE_CLUSTER：表示云盘版标准型。<br>CLOUD_NATIVE_CLUSTER_EXCLUSIVE：表示云盘版加强型。<br>CLOUD_NATIVE_CLUSTER_ULTRA：表示云盘版旗舰型。<br>CLOUD_NATIVE_SINGLE_NODE：表示云盘版单节点<br>ECONOMICAL：表示经济型。</p>
                     * @param _typeName <p>售卖实例名称。<br>Z3：是高可用类型，对应规格中的 DeviceType，包含 UNIVERSAL，EXCLUSIVE。<br>CVM：是基础版类型，对应规格中的 DeviceType 是 BASIC（已下线）。<br>TKE：是基础版v2类型，对应规格中的 DeviceType 是 BASIC_V2。<br>CLOUD_NATIVE_CLUSTER：表示云盘版标准型。<br>CLOUD_NATIVE_CLUSTER_EXCLUSIVE：表示云盘版加强型。<br>CLOUD_NATIVE_CLUSTER_ULTRA：表示云盘版旗舰型。<br>CLOUD_NATIVE_SINGLE_NODE：表示云盘版单节点<br>ECONOMICAL：表示经济型。</p>
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取<p>引擎版本号</p>
                     * @return EngineVersion <p>引擎版本号</p>
                     * 
                     */
                    std::vector<std::string> GetEngineVersion() const;

                    /**
                     * 设置<p>引擎版本号</p>
                     * @param _engineVersion <p>引擎版本号</p>
                     * 
                     */
                    void SetEngineVersion(const std::vector<std::string>& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>售卖规格Id</p>
                     * @return ConfigIds <p>售卖规格Id</p>
                     * 
                     */
                    std::vector<int64_t> GetConfigIds() const;

                    /**
                     * 设置<p>售卖规格Id</p>
                     * @param _configIds <p>售卖规格Id</p>
                     * 
                     */
                    void SetConfigIds(const std::vector<int64_t>& _configIds);

                    /**
                     * 判断参数 ConfigIds 是否已赋值
                     * @return ConfigIds 是否已赋值
                     * 
                     */
                    bool ConfigIdsHasBeenSet() const;

                private:

                    /**
                     * <p>售卖实例名称。<br>Z3：是高可用类型，对应规格中的 DeviceType，包含 UNIVERSAL，EXCLUSIVE。<br>CVM：是基础版类型，对应规格中的 DeviceType 是 BASIC（已下线）。<br>TKE：是基础版v2类型，对应规格中的 DeviceType 是 BASIC_V2。<br>CLOUD_NATIVE_CLUSTER：表示云盘版标准型。<br>CLOUD_NATIVE_CLUSTER_EXCLUSIVE：表示云盘版加强型。<br>CLOUD_NATIVE_CLUSTER_ULTRA：表示云盘版旗舰型。<br>CLOUD_NATIVE_SINGLE_NODE：表示云盘版单节点<br>ECONOMICAL：表示经济型。</p>
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * <p>引擎版本号</p>
                     */
                    std::vector<std::string> m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>售卖规格Id</p>
                     */
                    std::vector<int64_t> m_configIds;
                    bool m_configIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_
