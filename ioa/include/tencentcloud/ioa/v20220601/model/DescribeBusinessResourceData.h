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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCEDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务资源列表数据对象集合
                */
                class DescribeBusinessResourceData : public AbstractModel
                {
                public:
                    DescribeBusinessResourceData();
                    ~DescribeBusinessResourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务资源id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId <p>业务资源id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServiceId() const;

                    /**
                     * 设置<p>业务资源id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId <p>业务资源id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const int64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>业务资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>业务资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>业务资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>业务资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资源类型:ip,domain,ip_section，对应ip，域名，ip段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType <p>资源类型:ip,domain,ip_section，对应ip，域名，ip段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>资源类型:ip,domain,ip_section，对应ip，域名，ip段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType <p>资源类型:ip,domain,ip_section，对应ip，域名，ip段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceAddress <p>业务资源地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceAddress() const;

                    /**
                     * 设置<p>业务资源地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceAddress <p>业务资源地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceAddress(const std::string& _serviceAddress);

                    /**
                     * 判断参数 ServiceAddress 是否已赋值
                     * @return ServiceAddress 是否已赋值
                     * 
                     */
                    bool ServiceAddressHasBeenSet() const;

                    /**
                     * 获取<p>业务资源端口 all,1-65535</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServicePort <p>业务资源端口 all,1-65535</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServicePort() const;

                    /**
                     * 设置<p>业务资源端口 all,1-65535</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _servicePort <p>业务资源端口 all,1-65535</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServicePort(const std::string& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     * 
                     */
                    bool ServicePortHasBeenSet() const;

                    /**
                     * 获取<p>业务资源创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>业务资源创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>业务资源创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>业务资源创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>业务资源最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>业务资源最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>业务资源最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>说明字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>说明字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>说明字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>说明字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>资源模块ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaId <p>资源模块ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置<p>资源模块ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaId <p>资源模块ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取<p>零信任网关id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartGateIds <p>零信任网关id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetSmartGateIds() const;

                    /**
                     * 设置<p>零信任网关id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartGateIds <p>零信任网关id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartGateIds(const std::vector<int64_t>& _smartGateIds);

                    /**
                     * 判断参数 SmartGateIds 是否已赋值
                     * @return SmartGateIds 是否已赋值
                     * 
                     */
                    bool SmartGateIdsHasBeenSet() const;

                    /**
                     * 获取<p>业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol <p>业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProtocol() const;

                    /**
                     * 设置<p>业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol <p>业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const int64_t& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>业务资源等级(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Levels <p>业务资源等级(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevels() const;

                    /**
                     * 设置<p>业务资源等级(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _levels <p>业务资源等级(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevels(const int64_t& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取<p>零信任网关名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartGateNames <p>零信任网关名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSmartGateNames() const;

                    /**
                     * 设置<p>零信任网关名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartGateNames <p>零信任网关名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartGateNames(const std::string& _smartGateNames);

                    /**
                     * 判断参数 SmartGateNames 是否已赋值
                     * @return SmartGateNames 是否已赋值
                     * 
                     */
                    bool SmartGateNamesHasBeenSet() const;

                    /**
                     * 获取<p>网关连通性(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectConn <p>网关连通性(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDirectConn() const;

                    /**
                     * 设置<p>网关连通性(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _directConn <p>网关连通性(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirectConn(const int64_t& _directConn);

                    /**
                     * 判断参数 DirectConn 是否已赋值
                     * @return DirectConn 是否已赋值
                     * 
                     */
                    bool DirectConnHasBeenSet() const;

                    /**
                     * 获取<p>网关连通性状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectState <p>网关连通性状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDetectState() const;

                    /**
                     * 设置<p>网关连通性状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectState <p>网关连通性状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectState(const int64_t& _detectState);

                    /**
                     * 判断参数 DetectState 是否已赋值
                     * @return DetectState 是否已赋值
                     * 
                     */
                    bool DetectStateHasBeenSet() const;

                    /**
                     * 获取<p>网关连通性信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectInfo <p>网关连通性信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetectInfo() const;

                    /**
                     * 设置<p>网关连通性信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectInfo <p>网关连通性信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectInfo(const std::string& _detectInfo);

                    /**
                     * 判断参数 DetectInfo 是否已赋值
                     * @return DetectInfo 是否已赋值
                     * 
                     */
                    bool DetectInfoHasBeenSet() const;

                    /**
                     * 获取<p>网关连通性创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectTime <p>网关连通性创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置<p>网关连通性创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectTime <p>网关连通性创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     * 
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>绑定的连接器组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectorGroupId <p>绑定的连接器组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectorGroupId() const;

                    /**
                     * 设置<p>绑定的连接器组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectorGroupId <p>绑定的连接器组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectorGroupId(const std::string& _connectorGroupId);

                    /**
                     * 判断参数 ConnectorGroupId 是否已赋值
                     * @return ConnectorGroupId 是否已赋值
                     * 
                     */
                    bool ConnectorGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定的连接器组的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectorGroupName <p>绑定的连接器组的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnectorGroupName() const;

                    /**
                     * 设置<p>绑定的连接器组的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectorGroupName <p>绑定的连接器组的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectorGroupName(const std::string& _connectorGroupName);

                    /**
                     * 判断参数 ConnectorGroupName 是否已赋值
                     * @return ConnectorGroupName 是否已赋值
                     * 
                     */
                    bool ConnectorGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>资源连通性可达最后的检测时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReachableTime <p>资源连通性可达最后的检测时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReachableTime() const;

                    /**
                     * 设置<p>资源连通性可达最后的检测时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reachableTime <p>资源连通性可达最后的检测时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReachableTime(const std::string& _reachableTime);

                    /**
                     * 判断参数 ReachableTime 是否已赋值
                     * @return ReachableTime 是否已赋值
                     * 
                     */
                    bool ReachableTimeHasBeenSet() const;

                    /**
                     * 获取<p>资源连通性可达状态,0：未检测，1：未连通，2：已连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReachableState <p>资源连通性可达状态,0：未检测，1：未连通，2：已连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReachableState() const;

                    /**
                     * 设置<p>资源连通性可达状态,0：未检测，1：未连通，2：已连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reachableState <p>资源连通性可达状态,0：未检测，1：未连通，2：已连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReachableState(const int64_t& _reachableState);

                    /**
                     * 判断参数 ReachableState 是否已赋值
                     * @return ReachableState 是否已赋值
                     * 
                     */
                    bool ReachableStateHasBeenSet() const;

                    /**
                     * 获取<p>访问类型:0-NGN 1-web(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType <p>访问类型:0-NGN 1-web(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>访问类型:0-NGN 1-web(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType <p>访问类型:0-NGN 1-web(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>web资源-后端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackendScheme <p>web资源-后端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackendScheme() const;

                    /**
                     * 设置<p>web资源-后端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backendScheme <p>web资源-后端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackendScheme(const std::string& _backendScheme);

                    /**
                     * 判断参数 BackendScheme 是否已赋值
                     * @return BackendScheme 是否已赋值
                     * 
                     */
                    bool BackendSchemeHasBeenSet() const;

                    /**
                     * 获取<p>web资源-后端路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackendPath <p>web资源-后端路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackendPath() const;

                    /**
                     * 设置<p>web资源-后端路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backendPath <p>web资源-后端路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackendPath(const std::string& _backendPath);

                    /**
                     * 判断参数 BackendPath 是否已赋值
                     * @return BackendPath 是否已赋值
                     * 
                     */
                    bool BackendPathHasBeenSet() const;

                    /**
                     * 获取<p>web资源-前端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontScheme <p>web资源-前端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontScheme() const;

                    /**
                     * 设置<p>web资源-前端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontScheme <p>web资源-前端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontScheme(const std::string& _frontScheme);

                    /**
                     * 判断参数 FrontScheme 是否已赋值
                     * @return FrontScheme 是否已赋值
                     * 
                     */
                    bool FrontSchemeHasBeenSet() const;

                    /**
                     * 获取<p>web资源-前端host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontHost <p>web资源-前端host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontHost() const;

                    /**
                     * 设置<p>web资源-前端host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontHost <p>web资源-前端host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontHost(const std::string& _frontHost);

                    /**
                     * 判断参数 FrontHost 是否已赋值
                     * @return FrontHost 是否已赋值
                     * 
                     */
                    bool FrontHostHasBeenSet() const;

                    /**
                     * 获取<p>web资源-前端host(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontPort <p>web资源-前端host(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFrontPort() const;

                    /**
                     * 设置<p>web资源-前端host(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontPort <p>web资源-前端host(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontPort(const int64_t& _frontPort);

                    /**
                     * 判断参数 FrontPort 是否已赋值
                     * @return FrontPort 是否已赋值
                     * 
                     */
                    bool FrontPortHasBeenSet() const;

                    /**
                     * 获取<p>web资源-前端路径 默认&quot;/&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontPath <p>web资源-前端路径 默认&quot;/&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrontPath() const;

                    /**
                     * 设置<p>web资源-前端路径 默认&quot;/&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frontPath <p>web资源-前端路径 默认&quot;/&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrontPath(const std::string& _frontPath);

                    /**
                     * 判断参数 FrontPath 是否已赋值
                     * @return FrontPath 是否已赋值
                     * 
                     */
                    bool FrontPathHasBeenSet() const;

                    /**
                     * 获取<p>web资源-是否禁用外网访问：0-可通过外网访问 1-不能通过外网访问(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisableFront <p>web资源-是否禁用外网访问：0-可通过外网访问 1-不能通过外网访问(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDisableFront() const;

                    /**
                     * 设置<p>web资源-是否禁用外网访问：0-可通过外网访问 1-不能通过外网访问(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disableFront <p>web资源-是否禁用外网访问：0-可通过外网访问 1-不能通过外网访问(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisableFront(const int64_t& _disableFront);

                    /**
                     * 判断参数 DisableFront 是否已赋值
                     * @return DisableFront 是否已赋值
                     * 
                     */
                    bool DisableFrontHasBeenSet() const;

                    /**
                     * 获取<p>web资源-租户自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomDomain <p>web资源-租户自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomDomain() const;

                    /**
                     * 设置<p>web资源-租户自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customDomain <p>web资源-租户自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomDomain(const std::string& _customDomain);

                    /**
                     * 判断参数 CustomDomain 是否已赋值
                     * @return CustomDomain 是否已赋值
                     * 
                     */
                    bool CustomDomainHasBeenSet() const;

                    /**
                     * 获取<p>web资源-自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomHost <p>web资源-自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomHost() const;

                    /**
                     * 设置<p>web资源-自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customHost <p>web资源-自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomHost(const std::string& _customHost);

                    /**
                     * 判断参数 CustomHost 是否已赋值
                     * @return CustomHost 是否已赋值
                     * 
                     */
                    bool CustomHostHasBeenSet() const;

                    /**
                     * 获取<p>web资源-Cname状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnameStatus <p>web资源-Cname状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCnameStatus() const;

                    /**
                     * 设置<p>web资源-Cname状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cnameStatus <p>web资源-Cname状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCnameStatus(const int64_t& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取<p>web资源-关联证书ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificateId <p>web资源-关联证书ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCertificateId() const;

                    /**
                     * 设置<p>web资源-关联证书ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificateId <p>web资源-关联证书ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificateId(const int64_t& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取<p>web资源类型：0-应用 1-API(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebGwResourceType <p>web资源类型：0-应用 1-API(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWebGwResourceType() const;

                    /**
                     * 设置<p>web资源类型：0-应用 1-API(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webGwResourceType <p>web资源类型：0-应用 1-API(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebGwResourceType(const int64_t& _webGwResourceType);

                    /**
                     * 判断参数 WebGwResourceType 是否已赋值
                     * @return WebGwResourceType 是否已赋值
                     * 
                     */
                    bool WebGwResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>web资源-如果选择API类型资源，则需要配置密钥(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return APISecretId <p>web资源-如果选择API类型资源，则需要配置密钥(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAPISecretId() const;

                    /**
                     * 设置<p>web资源-如果选择API类型资源，则需要配置密钥(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aPISecretId <p>web资源-如果选择API类型资源，则需要配置密钥(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAPISecretId(const int64_t& _aPISecretId);

                    /**
                     * 判断参数 APISecretId 是否已赋值
                     * @return APISecretId 是否已赋值
                     * 
                     */
                    bool APISecretIdHasBeenSet() const;

                    /**
                     * 获取<p>所属资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AreaName <p>所属资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAreaName() const;

                    /**
                     * 设置<p>所属资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _areaName <p>所属资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAreaName(const std::string& _areaName);

                    /**
                     * 判断参数 AreaName 是否已赋值
                     * @return AreaName 是否已赋值
                     * 
                     */
                    bool AreaNameHasBeenSet() const;

                    /**
                     * 获取<p>web资源-前端协议是HTTPS类型，需要配置证书</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSLCertId <p>web资源-前端协议是HTTPS类型，需要配置证书</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSLCertId() const;

                    /**
                     * 设置<p>web资源-前端协议是HTTPS类型，需要配置证书</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSLCertId <p>web资源-前端协议是HTTPS类型，需要配置证书</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSLCertId(const std::string& _sSLCertId);

                    /**
                     * 判断参数 SSLCertId 是否已赋值
                     * @return SSLCertId 是否已赋值
                     * 
                     */
                    bool SSLCertIdHasBeenSet() const;

                    /**
                     * 获取<p>web资源-是否启用依赖地址：0-不启用 1-启用(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableDependentAddr <p>web资源-是否启用依赖地址：0-不启用 1-启用(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEnableDependentAddr() const;

                    /**
                     * 设置<p>web资源-是否启用依赖地址：0-不启用 1-启用(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableDependentAddr <p>web资源-是否启用依赖地址：0-不启用 1-启用(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableDependentAddr(const int64_t& _enableDependentAddr);

                    /**
                     * 判断参数 EnableDependentAddr 是否已赋值
                     * @return EnableDependentAddr 是否已赋值
                     * 
                     */
                    bool EnableDependentAddrHasBeenSet() const;

                    /**
                     * 获取<p>web资源-依赖地址的后端服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DependentAddr <p>web资源-依赖地址的后端服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDependentAddr() const;

                    /**
                     * 设置<p>web资源-依赖地址的后端服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dependentAddr <p>web资源-依赖地址的后端服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDependentAddr(const std::string& _dependentAddr);

                    /**
                     * 判断参数 DependentAddr 是否已赋值
                     * @return DependentAddr 是否已赋值
                     * 
                     */
                    bool DependentAddrHasBeenSet() const;

                    /**
                     * 获取<p>web免鉴权：1-鉴权 2-免鉴权</p>
                     * @return WebGwNoAuth <p>web免鉴权：1-鉴权 2-免鉴权</p>
                     * 
                     */
                    int64_t GetWebGwNoAuth() const;

                    /**
                     * 设置<p>web免鉴权：1-鉴权 2-免鉴权</p>
                     * @param _webGwNoAuth <p>web免鉴权：1-鉴权 2-免鉴权</p>
                     * 
                     */
                    void SetWebGwNoAuth(const int64_t& _webGwNoAuth);

                    /**
                     * 判断参数 WebGwNoAuth 是否已赋值
                     * @return WebGwNoAuth 是否已赋值
                     * 
                     */
                    bool WebGwNoAuthHasBeenSet() const;

                    /**
                     * 获取<p>通道类型</p><p>枚举值：</p><ul><li>vpc： vpc类型</li><li>native： 专线类型</li></ul><p>默认值：native</p>
                     * @return ConnectorGroupType <p>通道类型</p><p>枚举值：</p><ul><li>vpc： vpc类型</li><li>native： 专线类型</li></ul><p>默认值：native</p>
                     * 
                     */
                    std::string GetConnectorGroupType() const;

                    /**
                     * 设置<p>通道类型</p><p>枚举值：</p><ul><li>vpc： vpc类型</li><li>native： 专线类型</li></ul><p>默认值：native</p>
                     * @param _connectorGroupType <p>通道类型</p><p>枚举值：</p><ul><li>vpc： vpc类型</li><li>native： 专线类型</li></ul><p>默认值：native</p>
                     * 
                     */
                    void SetConnectorGroupType(const std::string& _connectorGroupType);

                    /**
                     * 判断参数 ConnectorGroupType 是否已赋值
                     * @return ConnectorGroupType 是否已赋值
                     * 
                     */
                    bool ConnectorGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>域名后缀</p>
                     * @return DomainSuffix <p>域名后缀</p>
                     * 
                     */
                    std::string GetDomainSuffix() const;

                    /**
                     * 设置<p>域名后缀</p>
                     * @param _domainSuffix <p>域名后缀</p>
                     * 
                     */
                    void SetDomainSuffix(const std::string& _domainSuffix);

                    /**
                     * 判断参数 DomainSuffix 是否已赋值
                     * @return DomainSuffix 是否已赋值
                     * 
                     */
                    bool DomainSuffixHasBeenSet() const;

                private:

                    /**
                     * <p>业务资源id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>业务资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>资源类型:ip,domain,ip_section，对应ip，域名，ip段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>业务资源地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceAddress;
                    bool m_serviceAddressHasBeenSet;

                    /**
                     * <p>业务资源端口 all,1-65535</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * <p>业务资源创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>业务资源最后修改时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>说明字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>资源模块ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * <p>零信任网关id(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_smartGateIds;
                    bool m_smartGateIdsHasBeenSet;

                    /**
                     * <p>业务资源协议类型,3：所有,2：UDP，1：TCP(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>业务资源等级(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * <p>零信任网关名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_smartGateNames;
                    bool m_smartGateNamesHasBeenSet;

                    /**
                     * <p>网关连通性(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_directConn;
                    bool m_directConnHasBeenSet;

                    /**
                     * <p>网关连通性状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_detectState;
                    bool m_detectStateHasBeenSet;

                    /**
                     * <p>网关连通性信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectInfo;
                    bool m_detectInfoHasBeenSet;

                    /**
                     * <p>网关连通性创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * <p>绑定的连接器组Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectorGroupId;
                    bool m_connectorGroupIdHasBeenSet;

                    /**
                     * <p>绑定的连接器组的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connectorGroupName;
                    bool m_connectorGroupNameHasBeenSet;

                    /**
                     * <p>资源连通性可达最后的检测时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reachableTime;
                    bool m_reachableTimeHasBeenSet;

                    /**
                     * <p>资源连通性可达状态,0：未检测，1：未连通，2：已连通</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_reachableState;
                    bool m_reachableStateHasBeenSet;

                    /**
                     * <p>访问类型:0-NGN 1-web(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>web资源-后端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backendScheme;
                    bool m_backendSchemeHasBeenSet;

                    /**
                     * <p>web资源-后端路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backendPath;
                    bool m_backendPathHasBeenSet;

                    /**
                     * <p>web资源-前端协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontScheme;
                    bool m_frontSchemeHasBeenSet;

                    /**
                     * <p>web资源-前端host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontHost;
                    bool m_frontHostHasBeenSet;

                    /**
                     * <p>web资源-前端host(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_frontPort;
                    bool m_frontPortHasBeenSet;

                    /**
                     * <p>web资源-前端路径 默认&quot;/&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frontPath;
                    bool m_frontPathHasBeenSet;

                    /**
                     * <p>web资源-是否禁用外网访问：0-可通过外网访问 1-不能通过外网访问(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_disableFront;
                    bool m_disableFrontHasBeenSet;

                    /**
                     * <p>web资源-租户自定义域名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customDomain;
                    bool m_customDomainHasBeenSet;

                    /**
                     * <p>web资源-自定义host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customHost;
                    bool m_customHostHasBeenSet;

                    /**
                     * <p>web资源-Cname状态(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * <p>web资源-关联证书ID(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * <p>web资源类型：0-应用 1-API(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_webGwResourceType;
                    bool m_webGwResourceTypeHasBeenSet;

                    /**
                     * <p>web资源-如果选择API类型资源，则需要配置密钥(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_aPISecretId;
                    bool m_aPISecretIdHasBeenSet;

                    /**
                     * <p>所属资源组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_areaName;
                    bool m_areaNameHasBeenSet;

                    /**
                     * <p>web资源-前端协议是HTTPS类型，需要配置证书</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSLCertId;
                    bool m_sSLCertIdHasBeenSet;

                    /**
                     * <p>web资源-是否启用依赖地址：0-不启用 1-启用(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_enableDependentAddr;
                    bool m_enableDependentAddrHasBeenSet;

                    /**
                     * <p>web资源-依赖地址的后端服务器地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dependentAddr;
                    bool m_dependentAddrHasBeenSet;

                    /**
                     * <p>web免鉴权：1-鉴权 2-免鉴权</p>
                     */
                    int64_t m_webGwNoAuth;
                    bool m_webGwNoAuthHasBeenSet;

                    /**
                     * <p>通道类型</p><p>枚举值：</p><ul><li>vpc： vpc类型</li><li>native： 专线类型</li></ul><p>默认值：native</p>
                     */
                    std::string m_connectorGroupType;
                    bool m_connectorGroupTypeHasBeenSet;

                    /**
                     * <p>域名后缀</p>
                     */
                    std::string m_domainSuffix;
                    bool m_domainSuffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCEDATA_H_
