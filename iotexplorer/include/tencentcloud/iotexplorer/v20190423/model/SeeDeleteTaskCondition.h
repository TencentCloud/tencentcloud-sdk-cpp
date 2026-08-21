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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDELETETASKCONDITION_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDELETETASKCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 任务删除条件
                */
                class SeeDeleteTaskCondition : public AbstractModel
                {
                public:
                    SeeDeleteTaskCondition();
                    ~SeeDeleteTaskCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>条件类型。</p><p>枚举值：</p><ul><li>TaskId： 精确匹配任务 ID</li><li>TimeRange： 匹配任务时间范围与指定范围有重合的任务。值的格式为 <code>UnixTimestampStart,UnixTimestampEnd</code>，其中起止时间均为秒级 UNIX 时间戳，且结束时间不早于起始时间</li><li>CreateTimeBefore： 匹配在指定时间前创建的任务。值为秒级 UNIX 时间戳</li><li>COSURI： 精确匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li><li>COSURIPrefix： 按前缀匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li></ul>
                     * @return Type <p>条件类型。</p><p>枚举值：</p><ul><li>TaskId： 精确匹配任务 ID</li><li>TimeRange： 匹配任务时间范围与指定范围有重合的任务。值的格式为 <code>UnixTimestampStart,UnixTimestampEnd</code>，其中起止时间均为秒级 UNIX 时间戳，且结束时间不早于起始时间</li><li>CreateTimeBefore： 匹配在指定时间前创建的任务。值为秒级 UNIX 时间戳</li><li>COSURI： 精确匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li><li>COSURIPrefix： 按前缀匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>条件类型。</p><p>枚举值：</p><ul><li>TaskId： 精确匹配任务 ID</li><li>TimeRange： 匹配任务时间范围与指定范围有重合的任务。值的格式为 <code>UnixTimestampStart,UnixTimestampEnd</code>，其中起止时间均为秒级 UNIX 时间戳，且结束时间不早于起始时间</li><li>CreateTimeBefore： 匹配在指定时间前创建的任务。值为秒级 UNIX 时间戳</li><li>COSURI： 精确匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li><li>COSURIPrefix： 按前缀匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li></ul>
                     * @param _type <p>条件类型。</p><p>枚举值：</p><ul><li>TaskId： 精确匹配任务 ID</li><li>TimeRange： 匹配任务时间范围与指定范围有重合的任务。值的格式为 <code>UnixTimestampStart,UnixTimestampEnd</code>，其中起止时间均为秒级 UNIX 时间戳，且结束时间不早于起始时间</li><li>CreateTimeBefore： 匹配在指定时间前创建的任务。值为秒级 UNIX 时间戳</li><li>COSURI： 精确匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li><li>COSURIPrefix： 按前缀匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li></ul>
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
                     * 获取<p>条件值列表。同一条件内的多个值之间为 OR 关系，至少传入一个非空值。</p>
                     * @return Values <p>条件值列表。同一条件内的多个值之间为 OR 关系，至少传入一个非空值。</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>条件值列表。同一条件内的多个值之间为 OR 关系，至少传入一个非空值。</p>
                     * @param _values <p>条件值列表。同一条件内的多个值之间为 OR 关系，至少传入一个非空值。</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>条件类型。</p><p>枚举值：</p><ul><li>TaskId： 精确匹配任务 ID</li><li>TimeRange： 匹配任务时间范围与指定范围有重合的任务。值的格式为 <code>UnixTimestampStart,UnixTimestampEnd</code>，其中起止时间均为秒级 UNIX 时间戳，且结束时间不早于起始时间</li><li>CreateTimeBefore： 匹配在指定时间前创建的任务。值为秒级 UNIX 时间戳</li><li>COSURI： 精确匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li><li>COSURIPrefix： 按前缀匹配任务来源 COS URI，值必须以 <code>cos://</code> 开头</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>条件值列表。同一条件内的多个值之间为 OR 关系，至少传入一个非空值。</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEDELETETASKCONDITION_H_
