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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILTERS_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 不满意回复检索过滤
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索，用户问题或答案
                     * @return Query 检索，用户问题或答案
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置检索，用户问题或答案
                     * @param _query 检索，用户问题或答案
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
                     * 获取错误类型检索

                     * @return Reasons 错误类型检索

                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置错误类型检索

                     * @param _reasons 错误类型检索

                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                    /**
                     * 获取处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * @return HandlingStatuses 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * 
                     */
                    std::vector<uint64_t> GetHandlingStatuses() const;

                    /**
                     * 设置处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * @param _handlingStatuses 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     * 
                     */
                    void SetHandlingStatuses(const std::vector<uint64_t>& _handlingStatuses);

                    /**
                     * 判断参数 HandlingStatuses 是否已赋值
                     * @return HandlingStatuses 是否已赋值
                     * 
                     */
                    bool HandlingStatusesHasBeenSet() const;

                private:

                    /**
                     * 检索，用户问题或答案
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 错误类型检索

                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * 处理状态 0-待处理 1-已拒答 2-已忽略 3-已添加为新问答 4-已添加为相似问
                     */
                    std::vector<uint64_t> m_handlingStatuses;
                    bool m_handlingStatusesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILTERS_H_
