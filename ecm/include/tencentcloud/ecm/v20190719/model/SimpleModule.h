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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SIMPLEMODULE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SIMPLEMODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Module的简要信息
                */
                class SimpleModule : public AbstractModel
                {
                public:
                    SimpleModule();
                    ~SimpleModule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模块ID
                     * @return ModuleId 模块ID
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块ID
                     * @param _moduleId 模块ID
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取模块名称
                     * @return ModuleName 模块名称
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置模块名称
                     * @param _moduleName 模块名称
                     * 
                     */
                    void SetModuleName(const std::string& _moduleName);

                    /**
                     * 判断参数 ModuleName 是否已赋值
                     * @return ModuleName 是否已赋值
                     * 
                     */
                    bool ModuleNameHasBeenSet() const;

                private:

                    /**
                     * 模块ID
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 模块名称
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SIMPLEMODULE_H_
