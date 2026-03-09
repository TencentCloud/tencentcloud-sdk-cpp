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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_

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
                * DescribeTypeInstances请求参数结构体
                */
                class DescribeTypeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTypeInstancesRequest();
                    ~DescribeTypeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>（过滤条件）按照实例ID过滤</p>
                     * @return InstanceId <p>（过滤条件）按照实例ID过滤</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>（过滤条件）按照实例ID过滤</p>
                     * @param _instanceId <p>（过滤条件）按照实例ID过滤</p>
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
                     * 获取<p>（过滤条件）按照实例名称过滤，支持模糊查询</p>
                     * @return SearchWord <p>（过滤条件）按照实例名称过滤，支持模糊查询</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>（过滤条件）按照实例名称过滤，支持模糊查询</p>
                     * @param _searchWord <p>（过滤条件）按照实例名称过滤，支持模糊查询</p>
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
                     * 获取<p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * @return Status <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * @param _status <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，不填默认为0</p>
                     * @return Offset <p>偏移量，不填默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，不填默认为0</p>
                     * @param _offset <p>偏移量，不填默认为0</p>
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
                     * 获取<p>返回数量，不填则默认10，最大值100</p>
                     * @return Limit <p>返回数量，不填则默认10，最大值100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，不填则默认10，最大值100</p>
                     * @param _limit <p>返回数量，不填则默认10，最大值100</p>
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
                     * 获取<p>匹配标签key值。</p>
                     * @return TagKey <p>匹配标签key值。</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>匹配标签key值。</p>
                     * @param _tagKey <p>匹配标签key值。</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * <p>（过滤条件）按照实例ID过滤</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>（过滤条件）按照实例名称过滤，支持模糊查询</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>（过滤条件）实例的状态，不填默认返回全部</p><p>枚举值：</p><ul><li>-1： 创建失败</li><li>0： 创建中</li><li>1： 运行中</li><li>2： 删除中</li><li>3： 已删除</li><li>4： 删除失败</li><li>5： 隔离中</li><li>7： 升级中</li></ul>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>偏移量，不填默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，不填则默认10，最大值100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>匹配标签key值。</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBETYPEINSTANCESREQUEST_H_
