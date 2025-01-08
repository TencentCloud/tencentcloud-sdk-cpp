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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SearchItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeServiceNodeInfos请求参数结构体
                */
                class DescribeServiceNodeInfosRequest : public AbstractModel
                {
                public:
                    DescribeServiceNodeInfosRequest();
                    ~DescribeServiceNodeInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取页码
                     * @return Offset 页码
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页码
                     * @param _offset 页码
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
                     * 获取页大小
                     * @return Limit 页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param _limit 页大小
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
                     * 获取搜索字段
                     * @return SearchText 搜索字段
                     * 
                     */
                    std::string GetSearchText() const;

                    /**
                     * 设置搜索字段
                     * @param _searchText 搜索字段
                     * 
                     */
                    void SetSearchText(const std::string& _searchText);

                    /**
                     * 判断参数 SearchText 是否已赋值
                     * @return SearchText 是否已赋值
                     * 
                     */
                    bool SearchTextHasBeenSet() const;

                    /**
                     * 获取'配置状态，-2：配置失败，-1:配置过期，1：已同步', -99 '全部'
                     * @return ConfStatus '配置状态，-2：配置失败，-1:配置过期，1：已同步', -99 '全部'
                     * 
                     */
                    int64_t GetConfStatus() const;

                    /**
                     * 设置'配置状态，-2：配置失败，-1:配置过期，1：已同步', -99 '全部'
                     * @param _confStatus '配置状态，-2：配置失败，-1:配置过期，1：已同步', -99 '全部'
                     * 
                     */
                    void SetConfStatus(const int64_t& _confStatus);

                    /**
                     * 判断参数 ConfStatus 是否已赋值
                     * @return ConfStatus 是否已赋值
                     * 
                     */
                    bool ConfStatusHasBeenSet() const;

                    /**
                     * 获取过滤条件：维护状态
0代表所有状态
1代表正常模式
2代表维护模式

                     * @return MaintainStateId 过滤条件：维护状态
0代表所有状态
1代表正常模式
2代表维护模式

                     * 
                     */
                    int64_t GetMaintainStateId() const;

                    /**
                     * 设置过滤条件：维护状态
0代表所有状态
1代表正常模式
2代表维护模式

                     * @param _maintainStateId 过滤条件：维护状态
0代表所有状态
1代表正常模式
2代表维护模式

                     * 
                     */
                    void SetMaintainStateId(const int64_t& _maintainStateId);

                    /**
                     * 判断参数 MaintainStateId 是否已赋值
                     * @return MaintainStateId 是否已赋值
                     * 
                     */
                    bool MaintainStateIdHasBeenSet() const;

                    /**
                     * 获取过滤条件：操作状态
0代表所有状态
1代表已启动
2代表已停止
                     * @return OperatorStateId 过滤条件：操作状态
0代表所有状态
1代表已启动
2代表已停止
                     * 
                     */
                    int64_t GetOperatorStateId() const;

                    /**
                     * 设置过滤条件：操作状态
0代表所有状态
1代表已启动
2代表已停止
                     * @param _operatorStateId 过滤条件：操作状态
0代表所有状态
1代表已启动
2代表已停止
                     * 
                     */
                    void SetOperatorStateId(const int64_t& _operatorStateId);

                    /**
                     * 判断参数 OperatorStateId 是否已赋值
                     * @return OperatorStateId 是否已赋值
                     * 
                     */
                    bool OperatorStateIdHasBeenSet() const;

                    /**
                     * 获取过滤条件：健康状态
"0"代表不可用
"1"代表良好
"-2"代表未知
"-99"代表所有
"-3"代表存在隐患
"-4"代表未探测
                     * @return HealthStateId 过滤条件：健康状态
"0"代表不可用
"1"代表良好
"-2"代表未知
"-99"代表所有
"-3"代表存在隐患
"-4"代表未探测
                     * 
                     */
                    std::string GetHealthStateId() const;

                    /**
                     * 设置过滤条件：健康状态
"0"代表不可用
"1"代表良好
"-2"代表未知
"-99"代表所有
"-3"代表存在隐患
"-4"代表未探测
                     * @param _healthStateId 过滤条件：健康状态
"0"代表不可用
"1"代表良好
"-2"代表未知
"-99"代表所有
"-3"代表存在隐患
"-4"代表未探测
                     * 
                     */
                    void SetHealthStateId(const std::string& _healthStateId);

                    /**
                     * 判断参数 HealthStateId 是否已赋值
                     * @return HealthStateId 是否已赋值
                     * 
                     */
                    bool HealthStateIdHasBeenSet() const;

                    /**
                     * 获取服务组件名称，都是大写例如YARN
                     * @return ServiceName 服务组件名称，都是大写例如YARN
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务组件名称，都是大写例如YARN
                     * @param _serviceName 服务组件名称，都是大写例如YARN
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取节点名称master,core,task,common,router
                     * @return NodeTypeName 节点名称master,core,task,common,router
                     * 
                     */
                    std::string GetNodeTypeName() const;

                    /**
                     * 设置节点名称master,core,task,common,router
                     * @param _nodeTypeName 节点名称master,core,task,common,router
                     * 
                     */
                    void SetNodeTypeName(const std::string& _nodeTypeName);

                    /**
                     * 判断参数 NodeTypeName 是否已赋值
                     * @return NodeTypeName 是否已赋值
                     * 
                     */
                    bool NodeTypeNameHasBeenSet() const;

                    /**
                     * 获取过滤条件：dn是否处于维护状态
0代表所有状态
1代表处于维护状态
                     * @return DataNodeMaintenanceId 过滤条件：dn是否处于维护状态
0代表所有状态
1代表处于维护状态
                     * 
                     */
                    int64_t GetDataNodeMaintenanceId() const;

                    /**
                     * 设置过滤条件：dn是否处于维护状态
0代表所有状态
1代表处于维护状态
                     * @param _dataNodeMaintenanceId 过滤条件：dn是否处于维护状态
0代表所有状态
1代表处于维护状态
                     * 
                     */
                    void SetDataNodeMaintenanceId(const int64_t& _dataNodeMaintenanceId);

                    /**
                     * 判断参数 DataNodeMaintenanceId 是否已赋值
                     * @return DataNodeMaintenanceId 是否已赋值
                     * 
                     */
                    bool DataNodeMaintenanceIdHasBeenSet() const;

                    /**
                     * 获取支持搜索的字段，目前支持 SearchType	：ipv4
                     * @return SearchFields 支持搜索的字段，目前支持 SearchType	：ipv4
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置支持搜索的字段，目前支持 SearchType	：ipv4
                     * @param _searchFields 支持搜索的字段，目前支持 SearchType	：ipv4
                     * 
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     * 
                     */
                    bool SearchFieldsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索字段
                     */
                    std::string m_searchText;
                    bool m_searchTextHasBeenSet;

                    /**
                     * '配置状态，-2：配置失败，-1:配置过期，1：已同步', -99 '全部'
                     */
                    int64_t m_confStatus;
                    bool m_confStatusHasBeenSet;

                    /**
                     * 过滤条件：维护状态
0代表所有状态
1代表正常模式
2代表维护模式

                     */
                    int64_t m_maintainStateId;
                    bool m_maintainStateIdHasBeenSet;

                    /**
                     * 过滤条件：操作状态
0代表所有状态
1代表已启动
2代表已停止
                     */
                    int64_t m_operatorStateId;
                    bool m_operatorStateIdHasBeenSet;

                    /**
                     * 过滤条件：健康状态
"0"代表不可用
"1"代表良好
"-2"代表未知
"-99"代表所有
"-3"代表存在隐患
"-4"代表未探测
                     */
                    std::string m_healthStateId;
                    bool m_healthStateIdHasBeenSet;

                    /**
                     * 服务组件名称，都是大写例如YARN
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 节点名称master,core,task,common,router
                     */
                    std::string m_nodeTypeName;
                    bool m_nodeTypeNameHasBeenSet;

                    /**
                     * 过滤条件：dn是否处于维护状态
0代表所有状态
1代表处于维护状态
                     */
                    int64_t m_dataNodeMaintenanceId;
                    bool m_dataNodeMaintenanceIdHasBeenSet;

                    /**
                     * 支持搜索的字段，目前支持 SearchType	：ipv4
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBESERVICENODEINFOSREQUEST_H_
