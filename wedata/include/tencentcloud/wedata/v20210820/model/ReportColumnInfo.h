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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTCOLUMNINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTCOLUMNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 上报表元数据的字段结构
                */
                class ReportColumnInfo : public AbstractModel
                {
                public:
                    ReportColumnInfo();
                    ~ReportColumnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称,字符长度128内
                     * @return Name 字段名称,字符长度128内
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称,字符长度128内
                     * @param _name 字段名称,字符长度128内
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
                     * 获取字段类型,字符长度128内
                     * @return Type 字段类型,字符长度128内
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型,字符长度128内
                     * @param _type 字段类型,字符长度128内
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
                     * 获取字段位置,1开始
                     * @return Position 字段位置,1开始
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置字段位置,1开始
                     * @param _position 字段位置,1开始
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取字段描述,字符长度256内
                     * @return Description 字段描述,字符长度256内
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置字段描述,字符长度256内
                     * @param _description 字段描述,字符长度256内
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
                     * 获取创建时间戳,毫秒,为空默认当前时间
                     * @return CreateTime 创建时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间戳,毫秒,为空默认当前时间
                     * @param _createTime 创建时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间戳,毫秒,为空默认当前时间
                     * @return ModifiedTime 修改时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间戳,毫秒,为空默认当前时间
                     * @param _modifiedTime 修改时间戳,毫秒,为空默认当前时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 字段名称,字符长度128内
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段类型,字符长度128内
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段位置,1开始
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 字段描述,字符长度256内
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间戳,毫秒,为空默认当前时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间戳,毫秒,为空默认当前时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTCOLUMNINFO_H_
