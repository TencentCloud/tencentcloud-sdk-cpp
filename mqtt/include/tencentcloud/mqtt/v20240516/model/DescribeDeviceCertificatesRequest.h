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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/Filter.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeDeviceCertificates请求参数结构体
                */
                class DescribeDeviceCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeDeviceCertificatesRequest();
                    ~DescribeDeviceCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取支持搜索参数
ClientId：客户端id，根据实际业务使用获取
CaSn：所属的CA证书SN序列号 可以从 [查询集群CA证书列表](https://cloud.tencent.com/document/api/1778/116206) 或者实际业务使用获取
DeviceCertificateSn：设备证书SN序列号 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
DeviceCertificateCn：设备证书CN 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
OrganizationalUnit：证书OU
NotAfterEnd：过期时间小于等于指定时间的证书
NotAfterStart：过期时间大于等于指定时间的证书
Status：设备证书状态     ACTIVE（激活）； INACTIVE（未激活）REVOKED（吊销）；PENDING_ACTIVATION（注册待激活）

                     * @return Filters 支持搜索参数
ClientId：客户端id，根据实际业务使用获取
CaSn：所属的CA证书SN序列号 可以从 [查询集群CA证书列表](https://cloud.tencent.com/document/api/1778/116206) 或者实际业务使用获取
DeviceCertificateSn：设备证书SN序列号 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
DeviceCertificateCn：设备证书CN 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
OrganizationalUnit：证书OU
NotAfterEnd：过期时间小于等于指定时间的证书
NotAfterStart：过期时间大于等于指定时间的证书
Status：设备证书状态     ACTIVE（激活）； INACTIVE（未激活）REVOKED（吊销）；PENDING_ACTIVATION（注册待激活）

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置支持搜索参数
ClientId：客户端id，根据实际业务使用获取
CaSn：所属的CA证书SN序列号 可以从 [查询集群CA证书列表](https://cloud.tencent.com/document/api/1778/116206) 或者实际业务使用获取
DeviceCertificateSn：设备证书SN序列号 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
DeviceCertificateCn：设备证书CN 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
OrganizationalUnit：证书OU
NotAfterEnd：过期时间小于等于指定时间的证书
NotAfterStart：过期时间大于等于指定时间的证书
Status：设备证书状态     ACTIVE（激活）； INACTIVE（未激活）REVOKED（吊销）；PENDING_ACTIVATION（注册待激活）

                     * @param _filters 支持搜索参数
ClientId：客户端id，根据实际业务使用获取
CaSn：所属的CA证书SN序列号 可以从 [查询集群CA证书列表](https://cloud.tencent.com/document/api/1778/116206) 或者实际业务使用获取
DeviceCertificateSn：设备证书SN序列号 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
DeviceCertificateCn：设备证书CN 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
OrganizationalUnit：证书OU
NotAfterEnd：过期时间小于等于指定时间的证书
NotAfterStart：过期时间大于等于指定时间的证书
Status：设备证书状态     ACTIVE（激活）； INACTIVE（未激活）REVOKED（吊销）；PENDING_ACTIVATION（注册待激活）

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
                     * 获取分页limit，默认20，最大100
                     * @return Limit 分页limit，默认20，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页limit，默认20，最大100
                     * @param _limit 分页limit，默认20，最大100
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
                     * 获取分页偏移量，默认0
                     * @return Offset 分页偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认0
                     * @param _offset 分页偏移量，默认0
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
                     * 获取排序规则
    CREATE_TIME_DESC, 创建时间降序
    CREATE_TIME_ASC,创建时间升序
    UPDATE_TIME_DESC,更新时间降序
    UPDATE_TIME_ASC,更新时间升序
                     * @return OrderBy 排序规则
    CREATE_TIME_DESC, 创建时间降序
    CREATE_TIME_ASC,创建时间升序
    UPDATE_TIME_DESC,更新时间降序
    UPDATE_TIME_ASC,更新时间升序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序规则
    CREATE_TIME_DESC, 创建时间降序
    CREATE_TIME_ASC,创建时间升序
    UPDATE_TIME_DESC,更新时间降序
    UPDATE_TIME_ASC,更新时间升序
                     * @param _orderBy 排序规则
    CREATE_TIME_DESC, 创建时间降序
    CREATE_TIME_ASC,创建时间升序
    UPDATE_TIME_DESC,更新时间降序
    UPDATE_TIME_ASC,更新时间升序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 支持搜索参数
ClientId：客户端id，根据实际业务使用获取
CaSn：所属的CA证书SN序列号 可以从 [查询集群CA证书列表](https://cloud.tencent.com/document/api/1778/116206) 或者实际业务使用获取
DeviceCertificateSn：设备证书SN序列号 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
DeviceCertificateCn：设备证书CN 可从[查询设备证书详情](https://cloud.tencent.com/document/api/1778/113748) 获取
OrganizationalUnit：证书OU
NotAfterEnd：过期时间小于等于指定时间的证书
NotAfterStart：过期时间大于等于指定时间的证书
Status：设备证书状态     ACTIVE（激活）； INACTIVE（未激活）REVOKED（吊销）；PENDING_ACTIVATION（注册待激活）

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页limit，默认20，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序规则
    CREATE_TIME_DESC, 创建时间降序
    CREATE_TIME_ASC,创建时间升序
    UPDATE_TIME_DESC,更新时间降序
    UPDATE_TIME_ASC,更新时间升序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATESREQUEST_H_
