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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRDBRULES_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRDBRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DataRules.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感识别任务RDB数据规则
                */
                class ScanTaskRDBRules : public AbstractModel
                {
                public:
                    ScanTaskRDBRules();
                    ~ScanTaskRDBRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则状态；0 不启用, 1 启用
                     * @return Status 规则状态；0 不启用, 1 启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则状态；0 不启用, 1 启用
                     * @param _status 规则状态；0 不启用, 1 启用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * @return MatchOperator 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * 
                     */
                    std::string GetMatchOperator() const;

                    /**
                     * 设置只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * @param _matchOperator 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     * 
                     */
                    void SetMatchOperator(const std::string& _matchOperator);

                    /**
                     * 判断参数 MatchOperator 是否已赋值
                     * @return MatchOperator 是否已赋值
                     * 
                     */
                    bool MatchOperatorHasBeenSet() const;

                    /**
                     * 获取字段名包含规则，最大支持选择9项
                     * @return MetaRule 字段名包含规则，最大支持选择9项
                     * 
                     */
                    DataRules GetMetaRule() const;

                    /**
                     * 设置字段名包含规则，最大支持选择9项
                     * @param _metaRule 字段名包含规则，最大支持选择9项
                     * 
                     */
                    void SetMetaRule(const DataRules& _metaRule);

                    /**
                     * 判断参数 MetaRule 是否已赋值
                     * @return MetaRule 是否已赋值
                     * 
                     */
                    bool MetaRuleHasBeenSet() const;

                    /**
                     * 获取内容包含规则，最大支持选择9项
                     * @return ContentRule 内容包含规则，最大支持选择9项
                     * 
                     */
                    DataRules GetContentRule() const;

                    /**
                     * 设置内容包含规则，最大支持选择9项
                     * @param _contentRule 内容包含规则，最大支持选择9项
                     * 
                     */
                    void SetContentRule(const DataRules& _contentRule);

                    /**
                     * 判断参数 ContentRule 是否已赋值
                     * @return ContentRule 是否已赋值
                     * 
                     */
                    bool ContentRuleHasBeenSet() const;

                private:

                    /**
                     * 规则状态；0 不启用, 1 启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 只能取and 、or两个值其中之一，and：字段和内容同时满足，or：字段和内容满足其一
                     */
                    std::string m_matchOperator;
                    bool m_matchOperatorHasBeenSet;

                    /**
                     * 字段名包含规则，最大支持选择9项
                     */
                    DataRules m_metaRule;
                    bool m_metaRuleHasBeenSet;

                    /**
                     * 内容包含规则，最大支持选择9项
                     */
                    DataRules m_contentRule;
                    bool m_contentRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRDBRULES_H_
