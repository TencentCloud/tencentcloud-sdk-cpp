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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESSSTATISTIC_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESSSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/SessionItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实时会话统计详情。
                */
                class ProcessStatistic : public AbstractModel
                {
                public:
                    ProcessStatistic();
                    ~ProcessStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话详情数组。
                     * @return Items 会话详情数组。
                     * 
                     */
                    std::vector<SessionItem> GetItems() const;

                    /**
                     * 设置会话详情数组。
                     * @param _items 会话详情数组。
                     * 
                     */
                    void SetItems(const std::vector<SessionItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总连接数。
                     * @return AllConnSum 总连接数。
                     * 
                     */
                    int64_t GetAllConnSum() const;

                    /**
                     * 设置总连接数。
                     * @param _allConnSum 总连接数。
                     * 
                     */
                    void SetAllConnSum(const int64_t& _allConnSum);

                    /**
                     * 判断参数 AllConnSum 是否已赋值
                     * @return AllConnSum 是否已赋值
                     * 
                     */
                    bool AllConnSumHasBeenSet() const;

                    /**
                     * 获取总活跃连接数。
                     * @return ActiveConnSum 总活跃连接数。
                     * 
                     */
                    int64_t GetActiveConnSum() const;

                    /**
                     * 设置总活跃连接数。
                     * @param _activeConnSum 总活跃连接数。
                     * 
                     */
                    void SetActiveConnSum(const int64_t& _activeConnSum);

                    /**
                     * 判断参数 ActiveConnSum 是否已赋值
                     * @return ActiveConnSum 是否已赋值
                     * 
                     */
                    bool ActiveConnSumHasBeenSet() const;

                private:

                    /**
                     * 会话详情数组。
                     */
                    std::vector<SessionItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总连接数。
                     */
                    int64_t m_allConnSum;
                    bool m_allConnSumHasBeenSet;

                    /**
                     * 总活跃连接数。
                     */
                    int64_t m_activeConnSum;
                    bool m_activeConnSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_PROCESSSTATISTIC_H_
