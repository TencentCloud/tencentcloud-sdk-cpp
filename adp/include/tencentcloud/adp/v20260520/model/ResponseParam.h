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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESPONSEPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESPONSEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 定义工具的回复参数
                */
                class ResponseParam : public AbstractModel
                {
                public:
                    ResponseParam();
                    ~ResponseParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变量描述
                     * @return Description 变量描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置变量描述
                     * @param _description 变量描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * @return Type 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     * @param _type 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
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
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 覆盖（全量替换） |
| 1 | 增量追加 |
                     * @return RenderMode 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 覆盖（全量替换） |
| 1 | 增量追加 |
                     * 
                     */
                    int64_t GetRenderMode() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 覆盖（全量替换） |
| 1 | 增量追加 |
                     * @param _renderMode 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 覆盖（全量替换） |
| 1 | 增量追加 |
                     * 
                     */
                    void SetRenderMode(const int64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取只对 OBJECT 或 ARRAY_OBJECT 类型有用
                     * @return SubParams 只对 OBJECT 或 ARRAY_OBJECT 类型有用
                     * 
                     */
                    std::vector<ResponseParam> GetSubParams() const;

                    /**
                     * 设置只对 OBJECT 或 ARRAY_OBJECT 类型有用
                     * @param _subParams 只对 OBJECT 或 ARRAY_OBJECT 类型有用
                     * 
                     */
                    void SetSubParams(const std::vector<ResponseParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                private:

                    /**
                     * 变量描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数类型

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 默认值是string，如果不填就按string处理 |
| 1 |  |
| 2 |  |
| 3 |  |
| 4 |  |
| 5 |  |
| 6 |  |
| 7 |  |
| 8 |  |
| 9 |  |
| 20 |  |
| 99 | 空值 |
| 100 | 未指定类型，用于类型为OneOf和AnyOf的场景 |
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 覆盖（全量替换） |
| 1 | 增量追加 |
                     */
                    int64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * 只对 OBJECT 或 ARRAY_OBJECT 类型有用
                     */
                    std::vector<ResponseParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESPONSEPARAM_H_
