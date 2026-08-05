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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETHROTTLERULESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETHROTTLERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeThrottleRules请求参数结构体
                */
                class DescribeThrottleRulesRequest : public AbstractModel
                {
                public:
                    DescribeThrottleRulesRequest();
                    ~DescribeThrottleRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return InstanceId <p>实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _instanceId <p>实例Id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>关键字</p>
                     * @return SearchWord <p>关键字</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>关键字</p>
                     * @param _searchWord <p>关键字</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，不填则默认为20，最大值200</p>
                     * @return Limit <p>返回数量，不填则默认为20，最大值200</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，不填则默认为20，最大值200</p>
                     * @param _limit <p>返回数量，不填则默认为20，最大值200</p>
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
                     * 获取<p>偏移数，默认为0</p>
                     * @return Offset <p>偏移数，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移数，默认为0</p>
                     * @param _offset <p>偏移数，默认为0</p>
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
                     * 获取<p>限流维度</p><p>枚举值：</p><ul><li>1： 实例维度限流</li><li>2： topic维度限流</li></ul><p>默认值：1</p>
                     * @return ThrottleDimension <p>限流维度</p><p>枚举值：</p><ul><li>1： 实例维度限流</li><li>2： topic维度限流</li></ul><p>默认值：1</p>
                     * 
                     */
                    int64_t GetThrottleDimension() const;

                    /**
                     * 设置<p>限流维度</p><p>枚举值：</p><ul><li>1： 实例维度限流</li><li>2： topic维度限流</li></ul><p>默认值：1</p>
                     * @param _throttleDimension <p>限流维度</p><p>枚举值：</p><ul><li>1： 实例维度限流</li><li>2： topic维度限流</li></ul><p>默认值：1</p>
                     * 
                     */
                    void SetThrottleDimension(const int64_t& _throttleDimension);

                    /**
                     * 判断参数 ThrottleDimension 是否已赋值
                     * @return ThrottleDimension 是否已赋值
                     * 
                     */
                    bool ThrottleDimensionHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关键字</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>返回数量，不填则默认为20，最大值200</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移数，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限流维度</p><p>枚举值：</p><ul><li>1： 实例维度限流</li><li>2： topic维度限流</li></ul><p>默认值：1</p>
                     */
                    int64_t m_throttleDimension;
                    bool m_throttleDimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETHROTTLERULESREQUEST_H_
