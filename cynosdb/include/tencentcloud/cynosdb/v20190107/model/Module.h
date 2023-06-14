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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 系统支持的模块
                */
                class Module : public AbstractModel
                {
                public:
                    Module();
                    ~Module() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否支持，可选值:yes,no
                     * @return IsDisable 是否支持，可选值:yes,no
                     * 
                     */
                    std::string GetIsDisable() const;

                    /**
                     * 设置是否支持，可选值:yes,no
                     * @param _isDisable 是否支持，可选值:yes,no
                     * 
                     */
                    void SetIsDisable(const std::string& _isDisable);

                    /**
                     * 判断参数 IsDisable 是否已赋值
                     * @return IsDisable 是否已赋值
                     * 
                     */
                    bool IsDisableHasBeenSet() const;

                    /**
                     * 获取模块名
                     * @return ModuleName 模块名
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置模块名
                     * @param _moduleName 模块名
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
                     * 是否支持，可选值:yes,no
                     */
                    std::string m_isDisable;
                    bool m_isDisableHasBeenSet;

                    /**
                     * 模块名
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODULE_H_
