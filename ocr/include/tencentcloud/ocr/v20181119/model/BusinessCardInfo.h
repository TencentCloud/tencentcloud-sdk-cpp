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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ItemCoord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 名片识别结果
                */
                class BusinessCardInfo : public AbstractModel
                {
                public:
                    BusinessCardInfo();
                    ~BusinessCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称（关键字，可能重复，比如多个手机），能识别的字段名为：
姓名、英文姓名、英文地址、公司、英文公司、职位、英文职位、部门、英文部门、手机、电话、传真、社交帐号、QQ、MSN、微信、微博、邮箱、邮编、网址、公司账号、其他。
                     * @return Name 识别出的字段名称（关键字，可能重复，比如多个手机），能识别的字段名为：
姓名、英文姓名、英文地址、公司、英文公司、职位、英文职位、部门、英文部门、手机、电话、传真、社交帐号、QQ、MSN、微信、微博、邮箱、邮编、网址、公司账号、其他。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称（关键字，可能重复，比如多个手机），能识别的字段名为：
姓名、英文姓名、英文地址、公司、英文公司、职位、英文职位、部门、英文部门、手机、电话、传真、社交帐号、QQ、MSN、微信、微博、邮箱、邮编、网址、公司账号、其他。
                     * @param _name 识别出的字段名称（关键字，可能重复，比如多个手机），能识别的字段名为：
姓名、英文姓名、英文地址、公司、英文公司、职位、英文职位、部门、英文部门、手机、电话、传真、社交帐号、QQ、MSN、微信、微博、邮箱、邮编、网址、公司账号、其他。
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
                     * 获取识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * @return Value 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     * @param _value 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
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
                     * 获取文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @return ItemCoord 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    ItemCoord GetItemCoord() const;

                    /**
                     * 设置文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * @param _itemCoord 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     * 
                     */
                    void SetItemCoord(const ItemCoord& _itemCoord);

                    /**
                     * 判断参数 ItemCoord 是否已赋值
                     * @return ItemCoord 是否已赋值
                     * 
                     */
                    bool ItemCoordHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段名称（关键字，可能重复，比如多个手机），能识别的字段名为：
姓名、英文姓名、英文地址、公司、英文公司、职位、英文职位、部门、英文部门、手机、电话、传真、社交帐号、QQ、MSN、微信、微博、邮箱、邮编、网址、公司账号、其他。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段name对应的字符串结果。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 文本行在旋转纠正之后的图像中的像素坐标，表示为（左上角x, 左上角y，宽width，高height）
                     */
                    ItemCoord m_itemCoord;
                    bool m_itemCoordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BUSINESSCARDINFO_H_
