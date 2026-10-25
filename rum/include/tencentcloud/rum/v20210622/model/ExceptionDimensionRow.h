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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDIMENSIONROW_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDIMENSIONROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ExceptionBucket.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 异常维度值的同批完整分类计数；TotalCount为互斥主类之和，Items包含全部适用类型。
                */
                class ExceptionDimensionRow : public AbstractModel
                {
                public:
                    ExceptionDimensionRow();
                    ~ExceptionDimensionRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>由目录域、维度或TagKey及归一化值确定的稳定、不透明唯一标识。</p>
                     * @return RowKey <p>由目录域、维度或TagKey及归一化值确定的稳定、不透明唯一标识。</p>
                     * 
                     */
                    std::string GetRowKey() const;

                    /**
                     * 设置<p>由目录域、维度或TagKey及归一化值确定的稳定、不透明唯一标识。</p>
                     * @param _rowKey <p>由目录域、维度或TagKey及归一化值确定的稳定、不透明唯一标识。</p>
                     * 
                     */
                    void SetRowKey(const std::string& _rowKey);

                    /**
                     * 判断参数 RowKey 是否已赋值
                     * @return RowKey 是否已赋值
                     * 
                     */
                    bool RowKeyHasBeenSet() const;

                    /**
                     * 获取<p>维度显示值；标签保留原始值，普通province/platform/network_type按既有显示别名归一化。</p>
                     * @return Value <p>维度显示值；标签保留原始值，普通province/platform/network_type按既有显示别名归一化。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>维度显示值；标签保留原始值，普通province/platform/network_type按既有显示别名归一化。</p>
                     * @param _value <p>维度显示值；标签保留原始值，普通province/platform/network_type按既有显示别名归一化。</p>
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
                     * 获取<p>本行全部 IncludedInTotal=true 主项的 Count 之和，安全非负整数。</p>
                     * @return TotalCount <p>本行全部 IncludedInTotal=true 主项的 Count 之和，安全非负整数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>本行全部 IncludedInTotal=true 主项的 Count 之和，安全非负整数。</p>
                     * @param _totalCount <p>本行全部 IncludedInTotal=true 主项的 Count 之和，安全非负整数。</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>完整固定分类向量，含0计数及适用包含项；不按数量裁剪。</p>
                     * @return Items <p>完整固定分类向量，含0计数及适用包含项；不按数量裁剪。</p>
                     * 
                     */
                    std::vector<ExceptionBucket> GetItems() const;

                    /**
                     * 设置<p>完整固定分类向量，含0计数及适用包含项；不按数量裁剪。</p>
                     * @param _items <p>完整固定分类向量，含0计数及适用包含项；不按数量裁剪。</p>
                     * 
                     */
                    void SetItems(const std::vector<ExceptionBucket>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>由目录域、维度或TagKey及归一化值确定的稳定、不透明唯一标识。</p>
                     */
                    std::string m_rowKey;
                    bool m_rowKeyHasBeenSet;

                    /**
                     * <p>维度显示值；标签保留原始值，普通province/platform/network_type按既有显示别名归一化。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>本行全部 IncludedInTotal=true 主项的 Count 之和，安全非负整数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>完整固定分类向量，含0计数及适用包含项；不按数量裁剪。</p>
                     */
                    std::vector<ExceptionBucket> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONDIMENSIONROW_H_
