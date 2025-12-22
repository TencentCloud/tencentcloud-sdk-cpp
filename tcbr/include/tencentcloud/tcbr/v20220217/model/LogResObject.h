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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_LOGRESOBJECT_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_LOGRESOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/LogObject.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * CLS日志结果
                */
                class LogResObject : public AbstractModel
                {
                public:
                    LogResObject();
                    ~LogResObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取获取更多检索结果的游标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Context 获取更多检索结果的游标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置获取更多检索结果的游标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _context 获取更多检索结果的游标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取搜索结果是否已经全部返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListOver 搜索结果是否已经全部返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 设置搜索结果是否已经全部返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listOver 搜索结果是否已经全部返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListOver(const bool& _listOver);

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取日志内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 日志内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogObject> GetResults() const;

                    /**
                     * 设置日志内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _results 日志内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResults(const std::vector<LogObject>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 获取更多检索结果的游标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 搜索结果是否已经全部返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 日志内容信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogObject> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_LOGRESOBJECT_H_
