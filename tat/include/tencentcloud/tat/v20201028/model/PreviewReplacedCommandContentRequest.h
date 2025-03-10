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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * PreviewReplacedCommandContent请求参数结构体
                */
                class PreviewReplacedCommandContentRequest : public AbstractModel
                {
                public:
                    PreviewReplacedCommandContentRequest();
                    ~PreviewReplacedCommandContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本次预览采用的自定义参数。字段类型为 json encoded string，如：{"varA": "222"}。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果有设置过 DefaultParameters 或 DefaultParameterConfs，会与 Parameters 进行叠加，优先使用 Parameters 的值。

key 为自定义参数名称，value 为该参数的取值。kv 均为字符串型。
自定义参数最多 20 个。
自定义参数名称需符合以下规范：字符数目上限 64，可选范围【a-zA-Z0-9-_】。
如果将预览的 CommandId 设置过 DefaultParameters，本参数可以为空。
                     * @return Parameters 本次预览采用的自定义参数。字段类型为 json encoded string，如：{"varA": "222"}。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果有设置过 DefaultParameters 或 DefaultParameterConfs，会与 Parameters 进行叠加，优先使用 Parameters 的值。

key 为自定义参数名称，value 为该参数的取值。kv 均为字符串型。
自定义参数最多 20 个。
自定义参数名称需符合以下规范：字符数目上限 64，可选范围【a-zA-Z0-9-_】。
如果将预览的 CommandId 设置过 DefaultParameters，本参数可以为空。
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置本次预览采用的自定义参数。字段类型为 json encoded string，如：{"varA": "222"}。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果有设置过 DefaultParameters 或 DefaultParameterConfs，会与 Parameters 进行叠加，优先使用 Parameters 的值。

key 为自定义参数名称，value 为该参数的取值。kv 均为字符串型。
自定义参数最多 20 个。
自定义参数名称需符合以下规范：字符数目上限 64，可选范围【a-zA-Z0-9-_】。
如果将预览的 CommandId 设置过 DefaultParameters，本参数可以为空。
                     * @param _parameters 本次预览采用的自定义参数。字段类型为 json encoded string，如：{"varA": "222"}。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果有设置过 DefaultParameters 或 DefaultParameterConfs，会与 Parameters 进行叠加，优先使用 Parameters 的值。

key 为自定义参数名称，value 为该参数的取值。kv 均为字符串型。
自定义参数最多 20 个。
自定义参数名称需符合以下规范：字符数目上限 64，可选范围【a-zA-Z0-9-_】。
如果将预览的 CommandId 设置过 DefaultParameters，本参数可以为空。
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取要进行替换预览的命令。
可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
CommandId 与 Content，必须且只能提供一个。
                     * @return CommandId 要进行替换预览的命令。
可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
CommandId 与 Content，必须且只能提供一个。
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置要进行替换预览的命令。
可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
CommandId 与 Content，必须且只能提供一个。
                     * @param _commandId 要进行替换预览的命令。
可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
CommandId 与 Content，必须且只能提供一个。
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
                     * 获取要预览的命令内容，经 Base64 编码，长度不可超过 64KB。
CommandId 与 Content，必须且只能提供一个。
                     * @return Content 要预览的命令内容，经 Base64 编码，长度不可超过 64KB。
CommandId 与 Content，必须且只能提供一个。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置要预览的命令内容，经 Base64 编码，长度不可超过 64KB。
CommandId 与 Content，必须且只能提供一个。
                     * @param _content 要预览的命令内容，经 Base64 编码，长度不可超过 64KB。
CommandId 与 Content，必须且只能提供一个。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 本次预览采用的自定义参数。字段类型为 json encoded string，如：{"varA": "222"}。
仅在命令的 EnableParameter 为 true 时，才允许设置此参数。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取命令的 EnableParameter 设置。
如果有设置过 DefaultParameters 或 DefaultParameterConfs，会与 Parameters 进行叠加，优先使用 Parameters 的值。

key 为自定义参数名称，value 为该参数的取值。kv 均为字符串型。
自定义参数最多 20 个。
自定义参数名称需符合以下规范：字符数目上限 64，可选范围【a-zA-Z0-9-_】。
如果将预览的 CommandId 设置过 DefaultParameters，本参数可以为空。
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 要进行替换预览的命令。
可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
CommandId 与 Content，必须且只能提供一个。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 要预览的命令内容，经 Base64 编码，长度不可超过 64KB。
CommandId 与 Content，必须且只能提供一个。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_PREVIEWREPLACEDCOMMANDCONTENTREQUEST_H_
