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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEGRAYREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEGRAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/VersionFlowInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * ReleaseGray请求参数结构体
                */
                class ReleaseGrayRequest : public AbstractModel
                {
                public:
                    ReleaseGrayRequest();
                    ~ReleaseGrayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名
                     * @return ServerName 服务名
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置服务名
                     * @param _serverName 服务名
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取灰度类型
                     * @return GrayType 灰度类型
                     * 
                     */
                    std::string GetGrayType() const;

                    /**
                     * 设置灰度类型
                     * @param _grayType 灰度类型
                     * 
                     */
                    void SetGrayType(const std::string& _grayType);

                    /**
                     * 判断参数 GrayType 是否已赋值
                     * @return GrayType 是否已赋值
                     * 
                     */
                    bool GrayTypeHasBeenSet() const;

                    /**
                     * 获取流量类型
                     * @return TrafficType 流量类型
                     * 
                     */
                    std::string GetTrafficType() const;

                    /**
                     * 设置流量类型
                     * @param _trafficType 流量类型
                     * 
                     */
                    void SetTrafficType(const std::string& _trafficType);

                    /**
                     * 判断参数 TrafficType 是否已赋值
                     * @return TrafficType 是否已赋值
                     * 
                     */
                    bool TrafficTypeHasBeenSet() const;

                    /**
                     * 获取流量策略
                     * @return VersionFlowItems 流量策略
                     * 
                     */
                    std::vector<VersionFlowInfo> GetVersionFlowItems() const;

                    /**
                     * 设置流量策略
                     * @param _versionFlowItems 流量策略
                     * 
                     */
                    void SetVersionFlowItems(const std::vector<VersionFlowInfo>& _versionFlowItems);

                    /**
                     * 判断参数 VersionFlowItems 是否已赋值
                     * @return VersionFlowItems 是否已赋值
                     * 
                     */
                    bool VersionFlowItemsHasBeenSet() const;

                    /**
                     * 获取操作标识
                     * @return OperatorRemark 操作标识
                     * 
                     */
                    std::string GetOperatorRemark() const;

                    /**
                     * 设置操作标识
                     * @param _operatorRemark 操作标识
                     * 
                     */
                    void SetOperatorRemark(const std::string& _operatorRemark);

                    /**
                     * 判断参数 OperatorRemark 是否已赋值
                     * @return OperatorRemark 是否已赋值
                     * 
                     */
                    bool OperatorRemarkHasBeenSet() const;

                    /**
                     * 获取流量比例
                     * @return GrayFlowRatio 流量比例
                     * 
                     */
                    int64_t GetGrayFlowRatio() const;

                    /**
                     * 设置流量比例
                     * @param _grayFlowRatio 流量比例
                     * 
                     */
                    void SetGrayFlowRatio(const int64_t& _grayFlowRatio);

                    /**
                     * 判断参数 GrayFlowRatio 是否已赋值
                     * @return GrayFlowRatio 是否已赋值
                     * 
                     */
                    bool GrayFlowRatioHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * 灰度类型
                     */
                    std::string m_grayType;
                    bool m_grayTypeHasBeenSet;

                    /**
                     * 流量类型
                     */
                    std::string m_trafficType;
                    bool m_trafficTypeHasBeenSet;

                    /**
                     * 流量策略
                     */
                    std::vector<VersionFlowInfo> m_versionFlowItems;
                    bool m_versionFlowItemsHasBeenSet;

                    /**
                     * 操作标识
                     */
                    std::string m_operatorRemark;
                    bool m_operatorRemarkHasBeenSet;

                    /**
                     * 流量比例
                     */
                    int64_t m_grayFlowRatio;
                    bool m_grayFlowRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_RELEASEGRAYREQUEST_H_
