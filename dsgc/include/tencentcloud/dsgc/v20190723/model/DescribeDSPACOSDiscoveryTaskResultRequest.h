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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKRESULTREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Filter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPACOSDiscoveryTaskResult请求参数结构体
                */
                class DescribeDSPACOSDiscoveryTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeDSPACOSDiscoveryTaskResultRequest();
                    ~DescribeDSPACOSDiscoveryTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0
                     * @return Offset 偏移量，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0
                     * @param _offset 偏移量，默认值为0
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
                     * 获取返回数量，默认值为20，最大值为100
                     * @return Limit 返回数量，默认值为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值为20，最大值为100
                     * @param _limit 返回数量，默认值为20，最大值为100
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
                     * 获取Array of Filter	此参数对外不可见。过滤数组。支持的Name：
BucketName 对象桶名
TaskID 任务ID，
TaskName 任务名，
DataSourceId：数据源ID，
ResourceRegion：资源所在地域
每项过滤条件最多支持5个。
                     * @return Filters Array of Filter	此参数对外不可见。过滤数组。支持的Name：
BucketName 对象桶名
TaskID 任务ID，
TaskName 任务名，
DataSourceId：数据源ID，
ResourceRegion：资源所在地域
每项过滤条件最多支持5个。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Array of Filter	此参数对外不可见。过滤数组。支持的Name：
BucketName 对象桶名
TaskID 任务ID，
TaskName 任务名，
DataSourceId：数据源ID，
ResourceRegion：资源所在地域
每项过滤条件最多支持5个。
                     * @param _filters Array of Filter	此参数对外不可见。过滤数组。支持的Name：
BucketName 对象桶名
TaskID 任务ID，
TaskName 任务名，
DataSourceId：数据源ID，
ResourceRegion：资源所在地域
每项过滤条件最多支持5个。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 偏移量，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Array of Filter	此参数对外不可见。过滤数组。支持的Name：
BucketName 对象桶名
TaskID 任务ID，
TaskName 任务名，
DataSourceId：数据源ID，
ResourceRegion：资源所在地域
每项过滤条件最多支持5个。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOSDISCOVERYTASKRESULTREQUEST_H_
