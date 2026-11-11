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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINRESULTV2_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINRESULTV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/SqlExplainRowV2.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * EXPLAIN 输出结果。Names 为 EXPLAIN 列名顺序，Data 为按行展开的执行计划数据。
                */
                class SqlExplainResultV2 : public AbstractModel
                {
                public:
                    SqlExplainResultV2();
                    ~SqlExplainResultV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>EXPLAIN 列名顺序，与 Data 中每一行的字段一一对应。</p>
                     * @return Names <p>EXPLAIN 列名顺序，与 Data 中每一行的字段一一对应。</p>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>EXPLAIN 列名顺序，与 Data 中每一行的字段一一对应。</p>
                     * @param _names <p>EXPLAIN 列名顺序，与 Data 中每一行的字段一一对应。</p>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>执行计划行列表。</p>
                     * @return Data <p>执行计划行列表。</p>
                     * 
                     */
                    std::vector<SqlExplainRowV2> GetData() const;

                    /**
                     * 设置<p>执行计划行列表。</p>
                     * @param _data <p>执行计划行列表。</p>
                     * 
                     */
                    void SetData(const std::vector<SqlExplainRowV2>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>EXPLAIN 列名顺序，与 Data 中每一行的字段一一对应。</p>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>执行计划行列表。</p>
                     */
                    std::vector<SqlExplainRowV2> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINRESULTV2_H_
