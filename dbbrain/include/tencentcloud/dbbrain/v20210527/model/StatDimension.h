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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATDIMENSION_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATDIMENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 会话统计的维度信息,可以多个维度
                */
                class StatDimension : public AbstractModel
                {
                public:
                    StatDimension();
                    ~StatDimension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度名称，目前仅支持：SqlTag。
                     * @return Dimension 维度名称，目前仅支持：SqlTag。
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置维度名称，目前仅支持：SqlTag。
                     * @param _dimension 维度名称，目前仅支持：SqlTag。
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取SQL 标签过滤与统计信息
示例：

示例 1：[p=position] 统计包含 p=position 标签的 SQL 会话。
示例 2：[p] 统计包含 p 标签的 SQL 会话。
示例 3：[p=position, c=idCard] 统计同时包含 p=position 标签和 c=idCard 标签的 SQL 会话。
                     * @return Data SQL 标签过滤与统计信息
示例：

示例 1：[p=position] 统计包含 p=position 标签的 SQL 会话。
示例 2：[p] 统计包含 p 标签的 SQL 会话。
示例 3：[p=position, c=idCard] 统计同时包含 p=position 标签和 c=idCard 标签的 SQL 会话。
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 设置SQL 标签过滤与统计信息
示例：

示例 1：[p=position] 统计包含 p=position 标签的 SQL 会话。
示例 2：[p] 统计包含 p 标签的 SQL 会话。
示例 3：[p=position, c=idCard] 统计同时包含 p=position 标签和 c=idCard 标签的 SQL 会话。
                     * @param _data SQL 标签过滤与统计信息
示例：

示例 1：[p=position] 统计包含 p=position 标签的 SQL 会话。
示例 2：[p] 统计包含 p 标签的 SQL 会话。
示例 3：[p=position, c=idCard] 统计同时包含 p=position 标签和 c=idCard 标签的 SQL 会话。
                     * 
                     */
                    void SetData(const std::vector<std::string>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 维度名称，目前仅支持：SqlTag。
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * SQL 标签过滤与统计信息
示例：

示例 1：[p=position] 统计包含 p=position 标签的 SQL 会话。
示例 2：[p] 统计包含 p 标签的 SQL 会话。
示例 3：[p=position, c=idCard] 统计同时包含 p=position 标签和 c=idCard 标签的 SQL 会话。
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATDIMENSION_H_
