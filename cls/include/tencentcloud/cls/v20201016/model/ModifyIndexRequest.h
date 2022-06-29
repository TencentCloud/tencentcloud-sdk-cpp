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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyIndex请求参数结构体
                */
                class ModifyIndexRequest : public AbstractModel
                {
                public:
                    ModifyIndexRequest();
                    ~ModifyIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param TopicId 日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取默认不生效
                     * @return Status 默认不生效
                     */
                    bool GetStatus() const;

                    /**
                     * 设置默认不生效
                     * @param Status 默认不生效
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取索引规则
                     * @return Rule 索引规则
                     */
                    RuleInfo GetRule() const;

                    /**
                     * 设置索引规则
                     * @param Rule 索引规则
                     */
                    void SetRule(const RuleInfo& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取全文索引系统预置字段标记，默认false。  false:不包含系统预置字段， true:包含系统预置字段
                     * @return IncludeInternalFields 全文索引系统预置字段标记，默认false。  false:不包含系统预置字段， true:包含系统预置字段
                     */
                    bool GetIncludeInternalFields() const;

                    /**
                     * 设置全文索引系统预置字段标记，默认false。  false:不包含系统预置字段， true:包含系统预置字段
                     * @param IncludeInternalFields 全文索引系统预置字段标记，默认false。  false:不包含系统预置字段， true:包含系统预置字段
                     */
                    void SetIncludeInternalFields(const bool& _includeInternalFields);

                    /**
                     * 判断参数 IncludeInternalFields 是否已赋值
                     * @return IncludeInternalFields 是否已赋值
                     */
                    bool IncludeInternalFieldsHasBeenSet() const;

                    /**
                     * 获取元数据相关标志位，默认为0。 0：全文索引包括开启键值索引的元数据字段， 1：全文索引包括所有元数据字段，2：全文索引不包括元数据字段。
                     * @return MetadataFlag 元数据相关标志位，默认为0。 0：全文索引包括开启键值索引的元数据字段， 1：全文索引包括所有元数据字段，2：全文索引不包括元数据字段。
                     */
                    uint64_t GetMetadataFlag() const;

                    /**
                     * 设置元数据相关标志位，默认为0。 0：全文索引包括开启键值索引的元数据字段， 1：全文索引包括所有元数据字段，2：全文索引不包括元数据字段。
                     * @param MetadataFlag 元数据相关标志位，默认为0。 0：全文索引包括开启键值索引的元数据字段， 1：全文索引包括所有元数据字段，2：全文索引不包括元数据字段。
                     */
                    void SetMetadataFlag(const uint64_t& _metadataFlag);

                    /**
                     * 判断参数 MetadataFlag 是否已赋值
                     * @return MetadataFlag 是否已赋值
                     */
                    bool MetadataFlagHasBeenSet() const;

                private:

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 默认不生效
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 索引规则
                     */
                    RuleInfo m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 全文索引系统预置字段标记，默认false。  false:不包含系统预置字段， true:包含系统预置字段
                     */
                    bool m_includeInternalFields;
                    bool m_includeInternalFieldsHasBeenSet;

                    /**
                     * 元数据相关标志位，默认为0。 0：全文索引包括开启键值索引的元数据字段， 1：全文索引包括所有元数据字段，2：全文索引不包括元数据字段。
                     */
                    uint64_t m_metadataFlag;
                    bool m_metadataFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYINDEXREQUEST_H_
