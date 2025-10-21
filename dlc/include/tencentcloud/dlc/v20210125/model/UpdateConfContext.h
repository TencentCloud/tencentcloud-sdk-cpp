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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECONFCONTEXT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECONFCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Param.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 配置下发参数
                */
                class UpdateConfContext : public AbstractModel
                {
                public:
                    UpdateConfContext();
                    ~UpdateConfContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数类型，可选：StaticConfigType，DynamicConfigType
                     * @return ConfigType 参数类型，可选：StaticConfigType，DynamicConfigType
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置参数类型，可选：StaticConfigType，DynamicConfigType
                     * @param _configType 参数类型，可选：StaticConfigType，DynamicConfigType
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取参数的配置数组
                     * @return Params 参数的配置数组
                     * 
                     */
                    std::vector<Param> GetParams() const;

                    /**
                     * 设置参数的配置数组
                     * @param _params 参数的配置数组
                     * 
                     */
                    void SetParams(const std::vector<Param>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 参数类型，可选：StaticConfigType，DynamicConfigType
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 参数的配置数组
                     */
                    std::vector<Param> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATECONFCONTEXT_H_
