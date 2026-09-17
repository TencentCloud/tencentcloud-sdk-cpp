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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AIAnalysisDataScopeEntry.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * AI 分析的数据范围。DataScopeType值是CLSLogTopic。DataScopeEntry是数组结构，TopicId类型和Region类型是必填。实例： [{"Key":"TopicId",Value:"work-topic"},{"Key":"Region",Value:"ap-guangzhou"}]
                */
                class AIAnalysisDataScope : public AbstractModel
                {
                public:
                    AIAnalysisDataScope();
                    ~AIAnalysisDataScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警AI诊断时查询的数据范围（查询哪些日志主题）</p>
                     * @return DataScopeEntry <p>告警AI诊断时查询的数据范围（查询哪些日志主题）</p>
                     * 
                     */
                    std::vector<AIAnalysisDataScopeEntry> GetDataScopeEntry() const;

                    /**
                     * 设置<p>告警AI诊断时查询的数据范围（查询哪些日志主题）</p>
                     * @param _dataScopeEntry <p>告警AI诊断时查询的数据范围（查询哪些日志主题）</p>
                     * 
                     */
                    void SetDataScopeEntry(const std::vector<AIAnalysisDataScopeEntry>& _dataScopeEntry);

                    /**
                     * 判断参数 DataScopeEntry 是否已赋值
                     * @return DataScopeEntry 是否已赋值
                     * 
                     */
                    bool DataScopeEntryHasBeenSet() const;

                    /**
                     * 获取<p>告警AI诊断的数据范围类型</p><p>枚举值：</p><ul><li>CLSLogTopic： 日志主题</li></ul><p>默认值：CLSLogTopic</p>
                     * @return DataScopeType <p>告警AI诊断的数据范围类型</p><p>枚举值：</p><ul><li>CLSLogTopic： 日志主题</li></ul><p>默认值：CLSLogTopic</p>
                     * 
                     */
                    std::string GetDataScopeType() const;

                    /**
                     * 设置<p>告警AI诊断的数据范围类型</p><p>枚举值：</p><ul><li>CLSLogTopic： 日志主题</li></ul><p>默认值：CLSLogTopic</p>
                     * @param _dataScopeType <p>告警AI诊断的数据范围类型</p><p>枚举值：</p><ul><li>CLSLogTopic： 日志主题</li></ul><p>默认值：CLSLogTopic</p>
                     * 
                     */
                    void SetDataScopeType(const std::string& _dataScopeType);

                    /**
                     * 判断参数 DataScopeType 是否已赋值
                     * @return DataScopeType 是否已赋值
                     * 
                     */
                    bool DataScopeTypeHasBeenSet() const;

                private:

                    /**
                     * <p>告警AI诊断时查询的数据范围（查询哪些日志主题）</p>
                     */
                    std::vector<AIAnalysisDataScopeEntry> m_dataScopeEntry;
                    bool m_dataScopeEntryHasBeenSet;

                    /**
                     * <p>告警AI诊断的数据范围类型</p><p>枚举值：</p><ul><li>CLSLogTopic： 日志主题</li></ul><p>默认值：CLSLogTopic</p>
                     */
                    std::string m_dataScopeType;
                    bool m_dataScopeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_AIANALYSISDATASCOPE_H_
