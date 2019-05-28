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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SellConfig.h>


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
                class SellType : public AbstractModel
                {
                public:
                    SellType();
                    ~SellType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取售卖实例名称
                     * @return TypeName 售卖实例名称
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置售卖实例名称
                     * @param TypeName 售卖实例名称
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取内核版本号
                     * @return EngineVersion 内核版本号
                     */
                    std::vector<std::string> GetEngineVersion() const;

                    /**
                     * 设置内核版本号
                     * @param EngineVersion 内核版本号
                     */
                    void SetEngineVersion(const std::vector<std::string>& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取售卖规格详细配置
                     * @return Configs 售卖规格详细配置
                     */
                    std::vector<SellConfig> GetConfigs() const;

                    /**
                     * 设置售卖规格详细配置
                     * @param Configs 售卖规格详细配置
                     */
                    void SetConfigs(const std::vector<SellConfig>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * 售卖实例名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 内核版本号
                     */
                    std::vector<std::string> m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 售卖规格详细配置
                     */
                    std::vector<SellConfig> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SELLTYPE_H_
