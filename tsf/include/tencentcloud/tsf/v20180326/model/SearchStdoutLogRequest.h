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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHSTDOUTLOGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHSTDOUTLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * SearchStdoutLog请求参数结构体
                */
                class SearchStdoutLogRequest : public AbstractModel
                {
                public:
                    SearchStdoutLogRequest();
                    ~SearchStdoutLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器实例ID， 和 部署组 ID 二者必选其一，不能同时为空
可通过调用[DescribeClusterInstances](https://cloud.tencent.com/document/product/649/36048)查询已导入的实例列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=instance)进行查询。实例ID例如：ins-6decplwk



                     * @return InstanceId 机器实例ID， 和 部署组 ID 二者必选其一，不能同时为空
可通过调用[DescribeClusterInstances](https://cloud.tencent.com/document/product/649/36048)查询已导入的实例列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=instance)进行查询。实例ID例如：ins-6decplwk



                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置机器实例ID， 和 部署组 ID 二者必选其一，不能同时为空
可通过调用[DescribeClusterInstances](https://cloud.tencent.com/document/product/649/36048)查询已导入的实例列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=instance)进行查询。实例ID例如：ins-6decplwk



                     * @param _instanceId 机器实例ID， 和 部署组 ID 二者必选其一，不能同时为空
可通过调用[DescribeClusterInstances](https://cloud.tencent.com/document/product/649/36048)查询已导入的实例列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=instance)进行查询。实例ID例如：ins-6decplwk



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
                     * 获取单页请求配置数量，取值范围[1, 500]，默认值为100
                     * @return Limit 单页请求配置数量，取值范围[1, 500]，默认值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页请求配置数量，取值范围[1, 500]，默认值为100
                     * @param _limit 单页请求配置数量，取值范围[1, 500]，默认值为100
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
                     * 获取检索关键词
                     * @return SearchWords 检索关键词
                     * 
                     */
                    std::vector<std::string> GetSearchWords() const;

                    /**
                     * 设置检索关键词
                     * @param _searchWords 检索关键词
                     * 
                     */
                    void SetSearchWords(const std::vector<std::string>& _searchWords);

                    /**
                     * 判断参数 SearchWords 是否已赋值
                     * @return SearchWords 是否已赋值
                     * 
                     */
                    bool SearchWordsHasBeenSet() const;

                    /**
                     * 获取查询起始时间，格式yyyy-MM-dd HH:mm:ss
                     * @return StartTime 查询起始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _startTime 查询起始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取部署组ID，和 InstanceId 二者必选其一，不能同时为空
可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)或[DescribeGroups](https://cloud.tencent.com/document/product/649/36065)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-yo7kp9dv&tab=publish&subTab=group)进行查看
                     * @return GroupId 部署组ID，和 InstanceId 二者必选其一，不能同时为空
可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)或[DescribeGroups](https://cloud.tencent.com/document/product/649/36065)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-yo7kp9dv&tab=publish&subTab=group)进行查看
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，和 InstanceId 二者必选其一，不能同时为空
可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)或[DescribeGroups](https://cloud.tencent.com/document/product/649/36065)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-yo7kp9dv&tab=publish&subTab=group)进行查看
                     * @param _groupId 部署组ID，和 InstanceId 二者必选其一，不能同时为空
可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)或[DescribeGroups](https://cloud.tencent.com/document/product/649/36065)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-yo7kp9dv&tab=publish&subTab=group)进行查看
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取查询结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @return EndTime 查询结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _endTime 查询结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取请求偏移量，取值范围大于等于0，默认值为
0
                     * @return Offset 请求偏移量，取值范围大于等于0，默认值为
0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置请求偏移量，取值范围大于等于0，默认值为
0
                     * @param _offset 请求偏移量，取值范围大于等于0，默认值为
0
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
                     * 获取排序规则，time：按时间排序，score：按检索值排序，默认值"time"
                     * @return OrderBy 排序规则，time：按时间排序，score：按检索值排序，默认值"time"
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序规则，time：按时间排序，score：按检索值排序，默认值"time"
                     * @param _orderBy 排序规则，time：按时间排序，score：按检索值排序，默认值"time"
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
                     * 获取排序方式，取值 asc：升序 或 desc：降序，默认值desc
                     * @return OrderType 排序方式，取值 asc：升序 或 desc：降序，默认值desc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序方式，取值 asc：升序 或 desc：降序，默认值desc
                     * @param _orderType 排序方式，取值 asc：升序 或 desc：降序，默认值desc
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取检索类型，取值 LUCENE：Lucene检索，REGEXP：正则检索，NORMAL：普通检索
                     * @return SearchWordType 检索类型，取值 LUCENE：Lucene检索，REGEXP：正则检索，NORMAL：普通检索
                     * 
                     */
                    std::string GetSearchWordType() const;

                    /**
                     * 设置检索类型，取值 LUCENE：Lucene检索，REGEXP：正则检索，NORMAL：普通检索
                     * @param _searchWordType 检索类型，取值 LUCENE：Lucene检索，REGEXP：正则检索，NORMAL：普通检索
                     * 
                     */
                    void SetSearchWordType(const std::string& _searchWordType);

                    /**
                     * 判断参数 SearchWordType 是否已赋值
                     * @return SearchWordType 是否已赋值
                     * 
                     */
                    bool SearchWordTypeHasBeenSet() const;

                    /**
                     * 获取批量请求类型，取值 PAGE：分页查询，SCROLL：滚动查询，SEARCHAFTER：游标查询，默认值PAGE

                     * @return BatchType 批量请求类型，取值 PAGE：分页查询，SCROLL：滚动查询，SEARCHAFTER：游标查询，默认值PAGE

                     * 
                     */
                    std::string GetBatchType() const;

                    /**
                     * 设置批量请求类型，取值 PAGE：分页查询，SCROLL：滚动查询，SEARCHAFTER：游标查询，默认值PAGE

                     * @param _batchType 批量请求类型，取值 PAGE：分页查询，SCROLL：滚动查询，SEARCHAFTER：游标查询，默认值PAGE

                     * 
                     */
                    void SetBatchType(const std::string& _batchType);

                    /**
                     * 判断参数 BatchType 是否已赋值
                     * @return BatchType 是否已赋值
                     * 
                     */
                    bool BatchTypeHasBeenSet() const;

                    /**
                     * 获取游标ID
                     * @return ScrollId 游标ID
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 设置游标ID
                     * @param _scrollId 游标ID
                     * 
                     */
                    void SetScrollId(const std::string& _scrollId);

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                    /**
                     * 获取查询es使用searchAfter时，游标
                     * @return SearchAfter 查询es使用searchAfter时，游标
                     * 
                     */
                    std::vector<std::string> GetSearchAfter() const;

                    /**
                     * 设置查询es使用searchAfter时，游标
                     * @param _searchAfter 查询es使用searchAfter时，游标
                     * 
                     */
                    void SetSearchAfter(const std::vector<std::string>& _searchAfter);

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                private:

                    /**
                     * 机器实例ID， 和 部署组 ID 二者必选其一，不能同时为空
可通过调用[DescribeClusterInstances](https://cloud.tencent.com/document/product/649/36048)查询已导入的实例列表或登录[控制台](https://console.cloud.tencent.com/tsf/resource?rid=1&tab=instance)进行查询。实例ID例如：ins-6decplwk



                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 单页请求配置数量，取值范围[1, 500]，默认值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 检索关键词
                     */
                    std::vector<std::string> m_searchWords;
                    bool m_searchWordsHasBeenSet;

                    /**
                     * 查询起始时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 部署组ID，和 InstanceId 二者必选其一，不能同时为空
可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/product/649/36068)或[DescribeGroups](https://cloud.tencent.com/document/product/649/36065)查询已创建的部署组列表或登录[控制台](https://console.cloud.tencent.com/tsf/app-detail?rid=1&id=application-yo7kp9dv&tab=publish&subTab=group)进行查看
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 查询结束时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 请求偏移量，取值范围大于等于0，默认值为
0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序规则，time：按时间排序，score：按检索值排序，默认值"time"
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，取值 asc：升序 或 desc：降序，默认值desc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 检索类型，取值 LUCENE：Lucene检索，REGEXP：正则检索，NORMAL：普通检索
                     */
                    std::string m_searchWordType;
                    bool m_searchWordTypeHasBeenSet;

                    /**
                     * 批量请求类型，取值 PAGE：分页查询，SCROLL：滚动查询，SEARCHAFTER：游标查询，默认值PAGE

                     */
                    std::string m_batchType;
                    bool m_batchTypeHasBeenSet;

                    /**
                     * 游标ID
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                    /**
                     * 查询es使用searchAfter时，游标
                     */
                    std::vector<std::string> m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SEARCHSTDOUTLOGREQUEST_H_
