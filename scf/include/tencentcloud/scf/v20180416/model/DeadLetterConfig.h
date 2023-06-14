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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_DEADLETTERCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_DEADLETTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 死信队列参数
                */
                class DeadLetterConfig : public AbstractModel
                {
                public:
                    DeadLetterConfig();
                    ~DeadLetterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取死信队列模式
                     * @return Type 死信队列模式
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置死信队列模式
                     * @param _type 死信队列模式
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
                     * 获取死信队列名称
                     * @return Name 死信队列名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置死信队列名称
                     * @param _name 死信队列名称
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
                     * 获取死信队列主题模式的标签形式
                     * @return FilterType 死信队列主题模式的标签形式
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置死信队列主题模式的标签形式
                     * @param _filterType 死信队列主题模式的标签形式
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                private:

                    /**
                     * 死信队列模式
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 死信队列名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 死信队列主题模式的标签形式
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_DEADLETTERCONFIG_H_
