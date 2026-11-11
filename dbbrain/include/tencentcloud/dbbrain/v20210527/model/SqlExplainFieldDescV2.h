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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINFIELDDESCV2_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINFIELDDESCV2_H_

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
                * 执行计划字段说明项。提供 EXPLAIN / VisualExplain 输出中各字段的中文释义，便于前端在展示可视化执行计划时进行翻译。
                */
                class SqlExplainFieldDescV2 : public AbstractModel
                {
                public:
                    SqlExplainFieldDescV2();
                    ~SqlExplainFieldDescV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>字段英文名，与 Explain / VisualExplain 中出现的字段一致，例如 access_type、key、rows。</p>
                     * @return Field <p>字段英文名，与 Explain / VisualExplain 中出现的字段一致，例如 access_type、key、rows。</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>字段英文名，与 Explain / VisualExplain 中出现的字段一致，例如 access_type、key、rows。</p>
                     * @param _field <p>字段英文名，与 Explain / VisualExplain 中出现的字段一致，例如 access_type、key、rows。</p>
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取<p>字段中文释义。</p>
                     * @return Desc <p>字段中文释义。</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>字段中文释义。</p>
                     * @param _desc <p>字段中文释义。</p>
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
                     * <p>字段英文名，与 Explain / VisualExplain 中出现的字段一致，例如 access_type、key、rows。</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>字段中文释义。</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLEXPLAINFIELDDESCV2_H_
