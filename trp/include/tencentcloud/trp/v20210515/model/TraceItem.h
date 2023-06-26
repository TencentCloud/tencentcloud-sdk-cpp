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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceItem.h>
#include <tencentcloud/trp/v20210515/model/TraceData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 溯源数据项 Type 的枚举值

text:文本类型, longtext:长文本类型, banner:单图片类型, image:多图片类型, video:视频类型, mp:小程序类型

具体组合如下
- Type: "text" 文本类型, 对应值 Value: "文本字符串"
- Type: "longtext" 长文本类型, 对应值 Value: "长文本字符串, 支持换行\n"
- Type: "banner" 单图片类型, 对应图片地址 Value: "https://sample.cdn.com/xxx.jpg"
- Type: "image" 多图片类型, 对应图片地址 Values: ["https://sample.cdn.com/1.jpg", "https://sample.cdn.com/2.jpg"]
- Type: "video" 视频类型, 对应视频地址 Value: "https://sample.cdn.com/xxx.mp4"
- Type: "mp" 小程序类型, 对应配置 Values: ["WXAPPID", "WXAPP_PATH", "跳转说明"]
                */
                class TraceItem : public AbstractModel
                {
                public:
                    TraceItem();
                    ~TraceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
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
                     * 获取字段值
                     * @return Value 字段值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字段值
                     * @param _value 字段值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取字段类型
text:文本类型, 
longtext:长文本类型, banner:单图片类型, image:多图片类型,
video:视频类型,
mp:小程序类型
                     * @return Type 字段类型
text:文本类型, 
longtext:长文本类型, banner:单图片类型, image:多图片类型,
video:视频类型,
mp:小程序类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
text:文本类型, 
longtext:长文本类型, banner:单图片类型, image:多图片类型,
video:视频类型,
mp:小程序类型
                     * @param _type 字段类型
text:文本类型, 
longtext:长文本类型, banner:单图片类型, image:多图片类型,
video:视频类型,
mp:小程序类型
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
                     * 获取多个值
                     * @return Values 多个值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置多个值
                     * @param _values 多个值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取只读
                     * @return ReadOnly 只读
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置只读
                     * @param _readOnly 只读
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取扫码展示
                     * @return Hidden 扫码展示
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置扫码展示
                     * @param _hidden 扫码展示
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取类型标识
                     * @return Key 类型标识
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置类型标识
                     * @param _key 类型标识
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return Ext 扩展字段
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置扩展字段
                     * @param _ext 扩展字段
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取额外属性
                     * @return Attrs 额外属性
                     * 
                     */
                    std::vector<TraceItem> GetAttrs() const;

                    /**
                     * 设置额外属性
                     * @param _attrs 额外属性
                     * 
                     */
                    void SetAttrs(const std::vector<TraceItem>& _attrs);

                    /**
                     * 判断参数 Attrs 是否已赋值
                     * @return Attrs 是否已赋值
                     * 
                     */
                    bool AttrsHasBeenSet() const;

                    /**
                     * 获取子页面，只读
                     * @return List 子页面，只读
                     * 
                     */
                    std::vector<TraceData> GetList() const;

                    /**
                     * 设置子页面，只读
                     * @param _list 子页面，只读
                     * 
                     */
                    void SetList(const std::vector<TraceData>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 字段类型
text:文本类型, 
longtext:长文本类型, banner:单图片类型, image:多图片类型,
video:视频类型,
mp:小程序类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 多个值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 只读
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 扫码展示
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 类型标识
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 额外属性
                     */
                    std::vector<TraceItem> m_attrs;
                    bool m_attrsHasBeenSet;

                    /**
                     * 子页面，只读
                     */
                    std::vector<TraceData> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_
