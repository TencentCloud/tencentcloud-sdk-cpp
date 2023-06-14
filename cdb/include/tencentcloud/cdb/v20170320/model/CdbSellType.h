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
                     * 获取售卖实例名称。Z3是高可用类型对应规格中的DeviceType包含UNIVERSAL,EXCLUSIVE；CVM是基础版类型对应规格中的DeviceType是BASIC；TKE是基础型v2类型对应规格中的DeviceType是BASIC_V2。
                     * @return TypeName 售卖实例名称。Z3是高可用类型对应规格中的DeviceType包含UNIVERSAL,EXCLUSIVE；CVM是基础版类型对应规格中的DeviceType是BASIC；TKE是基础型v2类型对应规格中的DeviceType是BASIC_V2。
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置售卖实例名称。Z3是高可用类型对应规格中的DeviceType包含UNIVERSAL,EXCLUSIVE；CVM是基础版类型对应规格中的DeviceType是BASIC；TKE是基础型v2类型对应规格中的DeviceType是BASIC_V2。
                     * @param _typeName 售卖实例名称。Z3是高可用类型对应规格中的DeviceType包含UNIVERSAL,EXCLUSIVE；CVM是基础版类型对应规格中的DeviceType是BASIC；TKE是基础型v2类型对应规格中的DeviceType是BASIC_V2。
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
                     * 获取引擎版本号
                     * @return EngineVersion 引擎版本号
                     * 
                     */
                    std::vector<std::string> GetEngineVersion() const;

                    /**
                     * 设置引擎版本号
                     * @param _engineVersion 引擎版本号
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
                     * 获取售卖规格Id
                     * @return ConfigIds 售卖规格Id
                     * 
                     */
                    std::vector<int64_t> GetConfigIds() const;

                    /**
                     * 设置售卖规格Id
                     * @param _configIds 售卖规格Id
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
                     * 售卖实例名称。Z3是高可用类型对应规格中的DeviceType包含UNIVERSAL,EXCLUSIVE；CVM是基础版类型对应规格中的DeviceType是BASIC；TKE是基础型v2类型对应规格中的DeviceType是BASIC_V2。
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 引擎版本号
                     */
                    std::vector<std::string> m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 售卖规格Id
                     */
                    std::vector<int64_t> m_configIds;
                    bool m_configIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_
