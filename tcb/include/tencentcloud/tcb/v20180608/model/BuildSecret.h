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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSECRET_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建密钥
                */
                class BuildSecret : public AbstractModel
                {
                public:
                    BuildSecret();
                    ~BuildSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标准化为 DNS Label 风格；构建时注入为 $SECRET_&lt;NAME&gt;（同时也提供原大写形式 $SECRET_&lt;NAME_UPPERCASE&gt;）</p>
                     * @return Name <p>标准化为 DNS Label 风格；构建时注入为 $SECRET_&lt;NAME&gt;（同时也提供原大写形式 $SECRET_&lt;NAME_UPPERCASE&gt;）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>标准化为 DNS Label 风格；构建时注入为 $SECRET_&lt;NAME&gt;（同时也提供原大写形式 $SECRET_&lt;NAME_UPPERCASE&gt;）</p>
                     * @param _name <p>标准化为 DNS Label 风格；构建时注入为 $SECRET_&lt;NAME&gt;（同时也提供原大写形式 $SECRET_&lt;NAME_UPPERCASE&gt;）</p>
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
                     * 获取<p>平台 AES 加密落库；DescribeVersion 永不回显明文</p>
                     * @return Value <p>平台 AES 加密落库；DescribeVersion 永不回显明文</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>平台 AES 加密落库；DescribeVersion 永不回显明文</p>
                     * @param _value <p>平台 AES 加密落库；DescribeVersion 永不回显明文</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>标准化为 DNS Label 风格；构建时注入为 $SECRET_&lt;NAME&gt;（同时也提供原大写形式 $SECRET_&lt;NAME_UPPERCASE&gt;）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>平台 AES 加密落库；DescribeVersion 永不回显明文</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSECRET_H_
