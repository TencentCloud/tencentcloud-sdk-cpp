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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_ATTRIBUTEKEYDETAIL_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_ATTRIBUTEKEYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * AttributeKey值详情
                */
                class AttributeKeyDetail : public AbstractModel
                {
                public:
                    AttributeKeyDetail();
                    ~AttributeKeyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入框类型
                     * @return LabelType 输入框类型
                     * 
                     */
                    std::string GetLabelType() const;

                    /**
                     * 设置输入框类型
                     * @param _labelType 输入框类型
                     * 
                     */
                    void SetLabelType(const std::string& _labelType);

                    /**
                     * 判断参数 LabelType 是否已赋值
                     * @return LabelType 是否已赋值
                     * 
                     */
                    bool LabelTypeHasBeenSet() const;

                    /**
                     * 获取初始化展示
                     * @return Starter 初始化展示
                     * 
                     */
                    std::string GetStarter() const;

                    /**
                     * 设置初始化展示
                     * @param _starter 初始化展示
                     * 
                     */
                    void SetStarter(const std::string& _starter);

                    /**
                     * 判断参数 Starter 是否已赋值
                     * @return Starter 是否已赋值
                     * 
                     */
                    bool StarterHasBeenSet() const;

                    /**
                     * 获取展示排序
                     * @return Order 展示排序
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置展示排序
                     * @param _order 展示排序
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取AttributeKey值
                     * @return Value AttributeKey值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置AttributeKey值
                     * @param _value AttributeKey值
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
                     * 获取中文标签
                     * @return Label 中文标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置中文标签
                     * @param _label 中文标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 输入框类型
                     */
                    std::string m_labelType;
                    bool m_labelTypeHasBeenSet;

                    /**
                     * 初始化展示
                     */
                    std::string m_starter;
                    bool m_starterHasBeenSet;

                    /**
                     * 展示排序
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * AttributeKey值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 中文标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_ATTRIBUTEKEYDETAIL_H_
