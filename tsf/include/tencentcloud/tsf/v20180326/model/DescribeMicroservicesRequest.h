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
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
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
                     * 获取搜索字段
                     * @return SearchWord 搜索字段
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索字段
                     * @param _searchWord 搜索字段
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
                     * 获取排序类型
                     * @return OrderType 排序类型
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序类型
                     * @param _orderType 排序类型
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取分页个数
                     * @return Limit 分页个数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数
                     * @param _limit 分页个数
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
                     * 获取状态过滤，online、offline、single_online
                     * @return Status 状态过滤，online、offline、single_online
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置状态过滤，online、offline、single_online
                     * @param _status 状态过滤，online、offline、single_online
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
                     * 获取IdList
                     * @return MicroserviceIdList IdList
                     * 
                     */
                    std::vector<std::string> GetMicroserviceIdList() const;

                    /**
                     * 设置IdList
                     * @param _microserviceIdList IdList
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
                     * 获取搜索的服务名列表
                     * @return MicroserviceNameList 搜索的服务名列表
                     * 
                     */
                    std::vector<std::string> GetMicroserviceNameList() const;

                    /**
                     * 设置搜索的服务名列表
                     * @param _microserviceNameList 搜索的服务名列表
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
                     * 获取注册中心实例id
                     * @return ConfigCenterInstanceId 注册中心实例id
                     * 
                     */
                    std::string GetConfigCenterInstanceId() const;

                    /**
                     * 设置注册中心实例id
                     * @param _configCenterInstanceId 注册中心实例id
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
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 搜索字段
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 状态过滤，online、offline、single_online
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * IdList
                     */
                    std::vector<std::string> m_microserviceIdList;
                    bool m_microserviceIdListHasBeenSet;

                    /**
                     * 搜索的服务名列表
                     */
                    std::vector<std::string> m_microserviceNameList;
                    bool m_microserviceNameListHasBeenSet;

                    /**
                     * 注册中心实例id
                     */
                    std::string m_configCenterInstanceId;
                    bool m_configCenterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEMICROSERVICESREQUEST_H_
