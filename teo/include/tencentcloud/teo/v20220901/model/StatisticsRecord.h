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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_STATISTICSRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_STATISTICSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 统计结果行。
                */
                class StatisticsRecord : public AbstractModel
                {
                public:
                    StatisticsRecord();
                    ~StatisticsRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>列表单行记录。</p>
                     * @return Record <p>列表单行记录。</p>
                     * 
                     */
                    std::vector<std::string> GetRecord() const;

                    /**
                     * 设置<p>列表单行记录。</p>
                     * @param _record <p>列表单行记录。</p>
                     * 
                     */
                    void SetRecord(const std::vector<std::string>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                private:

                    /**
                     * <p>列表单行记录。</p>
                     */
                    std::vector<std::string> m_record;
                    bool m_recordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_STATISTICSRECORD_H_
