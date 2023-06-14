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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 查询与特定scenario关联的job的参数
                */
                class ScenarioRelatedJobsParams : public AbstractModel
                {
                public:
                    ScenarioRelatedJobsParams();
                    ~ScenarioRelatedJobsParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取job偏移量
                     * @return Offset job偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置job偏移量
                     * @param _offset job偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制最多查询的job数
                     * @return Limit 限制最多查询的job数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制最多查询的job数
                     * @param _limit 限制最多查询的job数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderBy 排序字段
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段
                     * @param _orderBy 排序字段
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取是否升序
                     * @return Ascend 是否升序
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置是否升序
                     * @param _ascend 是否升序
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                private:

                    /**
                     * job偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制最多查询的job数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否升序
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCENARIORELATEDJOBSPARAMS_H_
