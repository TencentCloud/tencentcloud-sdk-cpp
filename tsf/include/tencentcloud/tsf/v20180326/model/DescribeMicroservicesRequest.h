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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICESREQUEST_H_

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
                * DescribeMicroservices请求参数结构体
                */
                class DescribeMicroservicesRequest : public AbstractModel
                {
                public:
                    DescribeMicroservicesRequest();
                    ~DescribeMicroservicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID。该参数可以通过调用 [DescribeSimpleNamespaces](https://cloud.tencent.com/document/api/649/36096) 的返回值中的 NamespaceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?tab=namespace)查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * @return NamespaceId 命名空间ID。该参数可以通过调用 [DescribeSimpleNamespaces](https://cloud.tencent.com/document/api/649/36096) 的返回值中的 NamespaceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?tab=namespace)查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID。该参数可以通过调用 [DescribeSimpleNamespaces](https://cloud.tencent.com/document/api/649/36096) 的返回值中的 NamespaceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?tab=namespace)查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * @param _namespaceId 命名空间ID。该参数可以通过调用 [DescribeSimpleNamespaces](https://cloud.tencent.com/document/api/649/36096) 的返回值中的 NamespaceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?tab=namespace)查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取搜索字段。
                     * @return SearchWord 搜索字段。
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索字段。
                     * @param _searchWord 搜索字段。
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
                     * 获取排序字段。
- create_time：创建时间
默认为创建时间，暂不支持其他值。
                     * @return OrderBy 排序字段。
- create_time：创建时间
默认为创建时间，暂不支持其他值。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段。
- create_time：创建时间
默认为创建时间，暂不支持其他值。
                     * @param _orderBy 排序字段。
- create_time：创建时间
默认为创建时间，暂不支持其他值。
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
                     * 获取排序类型。
- 1：倒序
默认为倒序，暂不支持其他值。
                     * @return OrderType 排序类型。
- 1：倒序
默认为倒序，暂不支持其他值。
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序类型。
- 1：倒序
默认为倒序，暂不支持其他值。
                     * @param _orderType 排序类型。
- 1：倒序
默认为倒序，暂不支持其他值。
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

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
                     * 获取状态。
- online：在线
- offline：离线
- single_online：单点在线
                     * @return Status 状态。
- online：在线
- offline：离线
- single_online：单点在线
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置状态。
- online：在线
- offline：离线
- single_online：单点在线
                     * @param _status 状态。
- online：在线
- offline：离线
- single_online：单点在线
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取微服务ID列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @return MicroserviceIdList 微服务ID列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    std::vector<std::string> GetMicroserviceIdList() const;

                    /**
                     * 设置微服务ID列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @param _microserviceIdList 微服务ID列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    void SetMicroserviceIdList(const std::vector<std::string>& _microserviceIdList);

                    /**
                     * 判断参数 MicroserviceIdList 是否已赋值
                     * @return MicroserviceIdList 是否已赋值
                     * 
                     */
                    bool MicroserviceIdListHasBeenSet() const;

                    /**
                     * 获取微服务名称列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceName 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @return MicroserviceNameList 微服务名称列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceName 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    std::vector<std::string> GetMicroserviceNameList() const;

                    /**
                     * 设置微服务名称列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceName 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * @param _microserviceNameList 微服务名称列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceName 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     * 
                     */
                    void SetMicroserviceNameList(const std::vector<std::string>& _microserviceNameList);

                    /**
                     * 判断参数 MicroserviceNameList 是否已赋值
                     * @return MicroserviceNameList 是否已赋值
                     * 
                     */
                    bool MicroserviceNameListHasBeenSet() const;

                    /**
                     * 获取注册中心实例ID。业务预留参数，忽略传参。
                     * @return ConfigCenterInstanceId 注册中心实例ID。业务预留参数，忽略传参。
                     * 
                     */
                    std::string GetConfigCenterInstanceId() const;

                    /**
                     * 设置注册中心实例ID。业务预留参数，忽略传参。
                     * @param _configCenterInstanceId 注册中心实例ID。业务预留参数，忽略传参。
                     * 
                     */
                    void SetConfigCenterInstanceId(const std::string& _configCenterInstanceId);

                    /**
                     * 判断参数 ConfigCenterInstanceId 是否已赋值
                     * @return ConfigCenterInstanceId 是否已赋值
                     * 
                     */
                    bool ConfigCenterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID。该参数可以通过调用 [DescribeSimpleNamespaces](https://cloud.tencent.com/document/api/649/36096) 的返回值中的 NamespaceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tsf/resource?tab=namespace)查看；也可以调用[CreateNamespace](https://cloud.tencent.com/document/product/649/36098)创建新的命名空间。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 搜索字段。
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序字段。
- create_time：创建时间
默认为创建时间，暂不支持其他值。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型。
- 1：倒序
默认为倒序，暂不支持其他值。
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

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
                     * 状态。
- online：在线
- offline：离线
- single_online：单点在线
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 微服务ID列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     */
                    std::vector<std::string> m_microserviceIdList;
                    bool m_microserviceIdListHasBeenSet;

                    /**
                     * 微服务名称列表。该参数可以通过调用 [DescribeMicroservices](https://cloud.tencent.com/document/product/649/36084) 的返回值中的 MicroserviceName 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=service)查看；也可以调用[CreateMicroserviceWithDetailResp](https://cloud.tencent.com/document/product/649/85860)创建新的微服务。
                     */
                    std::vector<std::string> m_microserviceNameList;
                    bool m_microserviceNameListHasBeenSet;

                    /**
                     * 注册中心实例ID。业务预留参数，忽略传参。
                     */
                    std::string m_configCenterInstanceId;
                    bool m_configCenterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICESREQUEST_H_
