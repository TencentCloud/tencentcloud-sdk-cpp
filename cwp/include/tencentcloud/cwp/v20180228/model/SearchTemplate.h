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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHTEMPLATE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 快速搜索模板
                */
                class SearchTemplate : public AbstractModel
                {
                public:
                    SearchTemplate();
                    ~SearchTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索名称
                     * @return Name 检索名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置检索名称
                     * @param _name 检索名称
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
                     * 获取检索索引类型
                     * @return LogType 检索索引类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置检索索引类型
                     * @param _logType 检索索引类型
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取检索语句
                     * @return Condition 检索语句
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置检索语句
                     * @param _condition 检索语句
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取时间范围
                     * @return TimeRange 时间范围
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置时间范围
                     * @param _timeRange 时间范围
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取转换的检索语句内容
                     * @return Query 转换的检索语句内容
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置转换的检索语句内容
                     * @param _query 转换的检索语句内容
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取检索方式。输入框检索：standard,过滤，检索：simple
                     * @return Flag 检索方式。输入框检索：standard,过滤，检索：simple
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置检索方式。输入框检索：standard,过滤，检索：simple
                     * @param _flag 检索方式。输入框检索：standard,过滤，检索：simple
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取展示数据
                     * @return DisplayData 展示数据
                     * 
                     */
                    std::string GetDisplayData() const;

                    /**
                     * 设置展示数据
                     * @param _displayData 展示数据
                     * 
                     */
                    void SetDisplayData(const std::string& _displayData);

                    /**
                     * 判断参数 DisplayData 是否已赋值
                     * @return DisplayData 是否已赋值
                     * 
                     */
                    bool DisplayDataHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 检索名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检索索引类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 检索语句
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 时间范围
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 转换的检索语句内容
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 检索方式。输入框检索：standard,过滤，检索：simple
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 展示数据
                     */
                    std::string m_displayData;
                    bool m_displayDataHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHTEMPLATE_H_
