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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSTATISTICSITEM_H_

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
                * dspm统计项
                */
                class DspmStatisticsItem : public AbstractModel
                {
                public:
                    DspmStatisticsItem();
                    ~DspmStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>统计项名称</p>
                     * @return Name <p>统计项名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>统计项名称</p>
                     * @param _name <p>统计项名称</p>
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
                     * 获取<p>统计值</p>
                     * @return Value <p>统计值</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>统计值</p>
                     * @param _value <p>统计值</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Desc <p>描述</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _desc <p>描述</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * <p>统计项名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>统计值</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSTATISTICSITEM_H_
