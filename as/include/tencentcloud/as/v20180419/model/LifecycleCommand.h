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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 远程命令执行对象。
                */
                class LifecycleCommand : public AbstractModel
                {
                public:
                    LifecycleCommand();
                    ~LifecycleCommand() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取远程命令ID。若选择执行命令，则此项必填。
                     * @return CommandId 远程命令ID。若选择执行命令，则此项必填。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置远程命令ID。若选择执行命令，则此项必填。
                     * @param _commandId 远程命令ID。若选择执行命令，则此项必填。
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取自定义参数。字段类型为 json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 进行替换。
自定义参数最多20个。自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @return Parameters 自定义参数。字段类型为 json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 进行替换。
自定义参数最多20个。自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置自定义参数。字段类型为 json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 进行替换。
自定义参数最多20个。自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * @param _parameters 自定义参数。字段类型为 json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 进行替换。
自定义参数最多20个。自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * 远程命令ID。若选择执行命令，则此项必填。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 自定义参数。字段类型为 json encoded string。如：{"varA": "222"}。
key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。
如果未提供该参数取值，将使用 Command 的 DefaultParameters 进行替换。
自定义参数最多20个。自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLECOMMAND_H_
