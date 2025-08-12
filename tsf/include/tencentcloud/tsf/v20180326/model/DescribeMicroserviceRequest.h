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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Filter.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeMicroservice请求参数结构体
                */
                class DescribeMicroserviceRequest : public AbstractModel
                {
                public:
                    DescribeMicroserviceRequest();
                    ~DescribeMicroserviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @return MicroserviceId 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @param _microserviceId 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取返回数量，默认为20，最大值为50。
                     * @return Limit 返回数量，默认为20，最大值为50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为50。
                     * @param _limit 返回数量，默认为20，最大值为50。
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
                     * 获取部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @return GroupIds 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * @param _groupIds 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。多个 filter 之间是与关系，单个 filter 多个 value 之间是或关系。
参考：[{"Name":"LanIp","Values":["172.16.16.139"]}]
filter name 取值范围：
- id：实例ID
- name：实例名
- lan-ip：内网IP
- node-ip：所在节点IP
                     * @return Filters 过滤条件。多个 filter 之间是与关系，单个 filter 多个 value 之间是或关系。
参考：[{"Name":"LanIp","Values":["172.16.16.139"]}]
filter name 取值范围：
- id：实例ID
- name：实例名
- lan-ip：内网IP
- node-ip：所在节点IP
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。多个 filter 之间是与关系，单个 filter 多个 value 之间是或关系。
参考：[{"Name":"LanIp","Values":["172.16.16.139"]}]
filter name 取值范围：
- id：实例ID
- name：实例名
- lan-ip：内网IP
- node-ip：所在节点IP
                     * @param _filters 过滤条件。多个 filter 之间是与关系，单个 filter 多个 value 之间是或关系。
参考：[{"Name":"LanIp","Values":["172.16.16.139"]}]
filter name 取值范围：
- id：实例ID
- name：实例名
- lan-ip：内网IP
- node-ip：所在节点IP
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
                     * 微服务ID。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 部署组ID。该参数可以通过调用 [DescribeSimpleGroups](https://cloud.tencent.com/document/product/649/36064) 的返回值中的 GroupId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource)-查看部署组页查看；也可以调用[CreateGroup](https://cloud.tencent.com/document/product/649/36074)创建新的部署组。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 过滤条件。多个 filter 之间是与关系，单个 filter 多个 value 之间是或关系。
参考：[{"Name":"LanIp","Values":["172.16.16.139"]}]
filter name 取值范围：
- id：实例ID
- name：实例名
- lan-ip：内网IP
- node-ip：所在节点IP
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICEREQUEST_H_
