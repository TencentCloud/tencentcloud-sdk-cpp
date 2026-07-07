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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULESTRUCTUREDTESTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULESTRUCTUREDTESTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm结构化数据项测试
                */
                class DspmIdentifyRuleStructuredTestItem : public AbstractModel
                {
                public:
                    DspmIdentifyRuleStructuredTestItem();
                    ~DspmIdentifyRuleStructuredTestItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数名</p>
                     * @return Name <p>参数名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>参数名</p>
                     * @param _name <p>参数名</p>
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
                     * 获取<p>参数类型</p>
                     * @return Value <p>参数类型</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>参数类型</p>
                     * @param _value <p>参数类型</p>
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
                     * <p>参数名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参数类型</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYRULESTRUCTUREDTESTITEM_H_
