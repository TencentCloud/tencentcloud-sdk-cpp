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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGTOPICINDEXINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGTOPICINDEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogIndexRuleInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志主题索性信息
                */
                class LogTopicIndexInfo : public AbstractModel
                {
                public:
                    LogTopicIndexInfo();
                    ~LogTopicIndexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主题</p>
                     * @return TopicId <p>主题</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题</p>
                     * @param _topicId <p>主题</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>规则</p>
                     * @return Rule <p>规则</p>
                     * 
                     */
                    LogIndexRuleInfo GetRule() const;

                    /**
                     * 设置<p>规则</p>
                     * @param _rule <p>规则</p>
                     * 
                     */
                    void SetRule(const LogIndexRuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否包含</p>
                     * @return IncludeInternalFields <p>是否包含</p>
                     * 
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 设置<p>是否包含</p>
                     * @param _includeInternalFields <p>是否包含</p>
                     * 
                     */
                    void SetIncludeInternalFields(const bool& _includeInternalFields);

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     * 
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取<p>元数据标签</p>
                     * @return MetadataFlag <p>元数据标签</p>
                     * 
                     */
                    int64_t GetMetadataFlag() const;

                    /**
                     * 设置<p>元数据标签</p>
                     * @param _metadataFlag <p>元数据标签</p>
                     * 
                     */
                    void SetMetadataFlag(const int64_t& _metadataFlag);

                    /**
                     * 判断参数 MetadataFlag 是否已赋值
                     * @return MetadataFlag 是否已赋值
                     * 
                     */
                    bool MetadataFlagHasBeenSet() const;

                private:

                    /**
                     * <p>主题</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规则</p>
                     */
                    LogIndexRuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>是否包含</p>
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * <p>元数据标签</p>
                     */
                    int64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGTOPICINDEXINFO_H_
