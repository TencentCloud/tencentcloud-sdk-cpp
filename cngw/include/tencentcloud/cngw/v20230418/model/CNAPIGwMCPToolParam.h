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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPARAM_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwMCPToolParam.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * MCP tool 参数
                */
                class CNAPIGwMCPToolParam : public AbstractModel
                {
                public:
                    CNAPIGwMCPToolParam();
                    ~CNAPIGwMCPToolParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>参数类型</p><p>枚举值：</p><ul><li>string： 字符串</li><li>number： 数字</li><li>boolean： 布尔</li><li>array： 数组</li><li>object： 对象</li></ul>
                     * @return Type <p>参数类型</p><p>枚举值：</p><ul><li>string： 字符串</li><li>number： 数字</li><li>boolean： 布尔</li><li>array： 数组</li><li>object： 对象</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>参数类型</p><p>枚举值：</p><ul><li>string： 字符串</li><li>number： 数字</li><li>boolean： 布尔</li><li>array： 数组</li><li>object： 对象</li></ul>
                     * @param _type <p>参数类型</p><p>枚举值：</p><ul><li>string： 字符串</li><li>number： 数字</li><li>boolean： 布尔</li><li>array： 数组</li><li>object： 对象</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>必填</p>
                     * @return Required <p>必填</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>必填</p>
                     * @param _required <p>必填</p>
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取<p>位置</p><p>枚举值：</p><ul><li>query： query</li><li>path： query</li><li>header： header</li><li>body： body</li></ul>
                     * @return Position <p>位置</p><p>枚举值：</p><ul><li>query： query</li><li>path： query</li><li>header： header</li><li>body： body</li></ul>
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置<p>位置</p><p>枚举值：</p><ul><li>query： query</li><li>path： query</li><li>header： header</li><li>body： body</li></ul>
                     * @param _position <p>位置</p><p>枚举值：</p><ul><li>query： query</li><li>path： query</li><li>header： header</li><li>body： body</li></ul>
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>默认值</p>
                     * @return Default <p>默认值</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _default <p>默认值</p>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>数组子项</p>
                     * @return Items <p>数组子项</p>
                     * 
                     */
                    CNAPIGwMCPToolParam GetItems() const;

                    /**
                     * 设置<p>数组子项</p>
                     * @param _items <p>数组子项</p>
                     * 
                     */
                    void SetItems(const CNAPIGwMCPToolParam& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>对象属性</p>
                     * @return Properties <p>对象属性</p>
                     * 
                     */
                    std::vector<CNAPIGwMCPToolParam> GetProperties() const;

                    /**
                     * 设置<p>对象属性</p>
                     * @param _properties <p>对象属性</p>
                     * 
                     */
                    void SetProperties(const std::vector<CNAPIGwMCPToolParam>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>转发到后端的名称</p><p>不填则使用原始名称</p>
                     * @return BackendName <p>转发到后端的名称</p><p>不填则使用原始名称</p>
                     * 
                     */
                    std::string GetBackendName() const;

                    /**
                     * 设置<p>转发到后端的名称</p><p>不填则使用原始名称</p>
                     * @param _backendName <p>转发到后端的名称</p><p>不填则使用原始名称</p>
                     * 
                     */
                    void SetBackendName(const std::string& _backendName);

                    /**
                     * 判断参数 BackendName 是否已赋值
                     * @return BackendName 是否已赋值
                     * 
                     */
                    bool BackendNameHasBeenSet() const;

                private:

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参数类型</p><p>枚举值：</p><ul><li>string： 字符串</li><li>number： 数字</li><li>boolean： 布尔</li><li>array： 数组</li><li>object： 对象</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>必填</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>位置</p><p>枚举值：</p><ul><li>query： query</li><li>path： query</li><li>header： header</li><li>body： body</li></ul>
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>数组子项</p>
                     */
                    CNAPIGwMCPToolParam m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>对象属性</p>
                     */
                    std::vector<CNAPIGwMCPToolParam> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>转发到后端的名称</p><p>不填则使用原始名称</p>
                     */
                    std::string m_backendName;
                    bool m_backendNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWMCPTOOLPARAM_H_
