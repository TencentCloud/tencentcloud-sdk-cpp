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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphEntities请求参数结构体
                */
                class DescribeResourceGraphEntitiesRequest : public AbstractModel
                {
                public:
                    DescribeResourceGraphEntitiesRequest();
                    ~DescribeResourceGraphEntitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<ul><li>Product 按【产品分组】精确匹配，可用参数：all / business_service / tke / cdb / redis / mongodb 。类型：String。必选：否</li><li>EntityClassName 按【实体类型】精确匹配，可用参数：all / app.service.application / tc.tke.cluster / tc.tkex.project / tc.cdb.instance / tc.redis.instance / tc.mongodb.instance / k8s.cluster / k8s.namespace / k8s.node / k8s.pod / k8s.ip / k8s.service / k8s.deployment / k8s.statefulset / k8s.statefulsetplus / k8s.daemonset / k8s.storageclass / k8s.persistentvolume / k8s.persistentvolumeclaim / k8s.secret。类型：String。必选：否</li><li>Name 按【实体名称】模糊匹配。类型：String。必选：否</li><li>ResourceId 按 【实体资源id】精确匹配。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 上限 10。</p>
                     * @return Filters <ul><li>Product 按【产品分组】精确匹配，可用参数：all / business_service / tke / cdb / redis / mongodb 。类型：String。必选：否</li><li>EntityClassName 按【实体类型】精确匹配，可用参数：all / app.service.application / tc.tke.cluster / tc.tkex.project / tc.cdb.instance / tc.redis.instance / tc.mongodb.instance / k8s.cluster / k8s.namespace / k8s.node / k8s.pod / k8s.ip / k8s.service / k8s.deployment / k8s.statefulset / k8s.statefulsetplus / k8s.daemonset / k8s.storageclass / k8s.persistentvolume / k8s.persistentvolumeclaim / k8s.secret。类型：String。必选：否</li><li>Name 按【实体名称】模糊匹配。类型：String。必选：否</li><li>ResourceId 按 【实体资源id】精确匹配。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 上限 10。</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<ul><li>Product 按【产品分组】精确匹配，可用参数：all / business_service / tke / cdb / redis / mongodb 。类型：String。必选：否</li><li>EntityClassName 按【实体类型】精确匹配，可用参数：all / app.service.application / tc.tke.cluster / tc.tkex.project / tc.cdb.instance / tc.redis.instance / tc.mongodb.instance / k8s.cluster / k8s.namespace / k8s.node / k8s.pod / k8s.ip / k8s.service / k8s.deployment / k8s.statefulset / k8s.statefulsetplus / k8s.daemonset / k8s.storageclass / k8s.persistentvolume / k8s.persistentvolumeclaim / k8s.secret。类型：String。必选：否</li><li>Name 按【实体名称】模糊匹配。类型：String。必选：否</li><li>ResourceId 按 【实体资源id】精确匹配。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 上限 10。</p>
                     * @param _filters <ul><li>Product 按【产品分组】精确匹配，可用参数：all / business_service / tke / cdb / redis / mongodb 。类型：String。必选：否</li><li>EntityClassName 按【实体类型】精确匹配，可用参数：all / app.service.application / tc.tke.cluster / tc.tkex.project / tc.cdb.instance / tc.redis.instance / tc.mongodb.instance / k8s.cluster / k8s.namespace / k8s.node / k8s.pod / k8s.ip / k8s.service / k8s.deployment / k8s.statefulset / k8s.statefulsetplus / k8s.daemonset / k8s.storageclass / k8s.persistentvolume / k8s.persistentvolumeclaim / k8s.secret。类型：String。必选：否</li><li>Name 按【实体名称】模糊匹配。类型：String。必选：否</li><li>ResourceId 按 【实体资源id】精确匹配。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 上限 10。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>查询偏移</p>
                     * @return NextCursor <p>查询偏移</p>
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 设置<p>查询偏移</p>
                     * @param _nextCursor <p>查询偏移</p>
                     * 
                     */
                    void SetNextCursor(const std::string& _nextCursor);

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取<p>分页单页数量，默认 20，最大 100</p>
                     * @return Limit <p>分页单页数量，默认 20，最大 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页单页数量，默认 20，最大 100</p>
                     * @param _limit <p>分页单页数量，默认 20，最大 100</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间</p><p>单位：毫秒</p>
                     * @return FromTime <p>查询开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetFromTime() const;

                    /**
                     * 设置<p>查询开始时间</p><p>单位：毫秒</p>
                     * @param _fromTime <p>查询开始时间</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetFromTime(const uint64_t& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间</p><p>单位：毫秒</p>
                     * @return ToTime <p>查询结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    uint64_t GetToTime() const;

                    /**
                     * 设置<p>查询结束时间</p><p>单位：毫秒</p>
                     * @param _toTime <p>查询结束时间</p><p>单位：毫秒</p>
                     * 
                     */
                    void SetToTime(const uint64_t& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                private:

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <ul><li>Product 按【产品分组】精确匹配，可用参数：all / business_service / tke / cdb / redis / mongodb 。类型：String。必选：否</li><li>EntityClassName 按【实体类型】精确匹配，可用参数：all / app.service.application / tc.tke.cluster / tc.tkex.project / tc.cdb.instance / tc.redis.instance / tc.mongodb.instance / k8s.cluster / k8s.namespace / k8s.node / k8s.pod / k8s.ip / k8s.service / k8s.deployment / k8s.statefulset / k8s.statefulsetplus / k8s.daemonset / k8s.storageclass / k8s.persistentvolume / k8s.persistentvolumeclaim / k8s.secret。类型：String。必选：否</li><li>Name 按【实体名称】模糊匹配。类型：String。必选：否</li><li>ResourceId 按 【实体资源id】精确匹配。类型：String。必选：否</li></ul><p>注意：每次请求的 Filters 上限 10。</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>查询偏移</p>
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * <p>分页单页数量，默认 20，最大 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询开始时间</p><p>单位：毫秒</p>
                     */
                    uint64_t m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * <p>查询结束时间</p><p>单位：毫秒</p>
                     */
                    uint64_t m_toTime;
                    bool m_toTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESREQUEST_H_
