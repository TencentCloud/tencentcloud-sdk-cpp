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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_REPORTSERVICEREGISTERREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_REPORTSERVICEREGISTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/ServiceRegisterInfo.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * ReportServiceRegister请求参数结构体
                */
                class ReportServiceRegisterRequest : public AbstractModel
                {
                public:
                    ReportServiceRegisterRequest();
                    ~ReportServiceRegisterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param _mallId 广场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取服务上报当前的服务能力信息
                     * @return ServiceRegisterInfos 服务上报当前的服务能力信息
                     * 
                     */
                    std::vector<ServiceRegisterInfo> GetServiceRegisterInfos() const;

                    /**
                     * 设置服务上报当前的服务能力信息
                     * @param _serviceRegisterInfos 服务上报当前的服务能力信息
                     * 
                     */
                    void SetServiceRegisterInfos(const std::vector<ServiceRegisterInfo>& _serviceRegisterInfos);

                    /**
                     * 判断参数 ServiceRegisterInfos 是否已赋值
                     * @return ServiceRegisterInfos 是否已赋值
                     * 
                     */
                    bool ServiceRegisterInfosHasBeenSet() const;

                    /**
                     * 获取服务内网Ip
                     * @return ServerIp 服务内网Ip
                     * 
                     */
                    std::string GetServerIp() const;

                    /**
                     * 设置服务内网Ip
                     * @param _serverIp 服务内网Ip
                     * 
                     */
                    void SetServerIp(const std::string& _serverIp);

                    /**
                     * 判断参数 ServerIp 是否已赋值
                     * @return ServerIp 是否已赋值
                     * 
                     */
                    bool ServerIpHasBeenSet() const;

                    /**
                     * 获取上报服务所在服务器的唯一ID
                     * @return ServerNodeId 上报服务所在服务器的唯一ID
                     * 
                     */
                    std::string GetServerNodeId() const;

                    /**
                     * 设置上报服务所在服务器的唯一ID
                     * @param _serverNodeId 上报服务所在服务器的唯一ID
                     * 
                     */
                    void SetServerNodeId(const std::string& _serverNodeId);

                    /**
                     * 判断参数 ServerNodeId 是否已赋值
                     * @return ServerNodeId 是否已赋值
                     * 
                     */
                    bool ServerNodeIdHasBeenSet() const;

                    /**
                     * 获取上报时间戳, 单位毫秒
                     * @return ReportTime 上报时间戳, 单位毫秒
                     * 
                     */
                    int64_t GetReportTime() const;

                    /**
                     * 设置上报时间戳, 单位毫秒
                     * @param _reportTime 上报时间戳, 单位毫秒
                     * 
                     */
                    void SetReportTime(const int64_t& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 服务上报当前的服务能力信息
                     */
                    std::vector<ServiceRegisterInfo> m_serviceRegisterInfos;
                    bool m_serviceRegisterInfosHasBeenSet;

                    /**
                     * 服务内网Ip
                     */
                    std::string m_serverIp;
                    bool m_serverIpHasBeenSet;

                    /**
                     * 上报服务所在服务器的唯一ID
                     */
                    std::string m_serverNodeId;
                    bool m_serverNodeIdHasBeenSet;

                    /**
                     * 上报时间戳, 单位毫秒
                     */
                    int64_t m_reportTime;
                    bool m_reportTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_REPORTSERVICEREGISTERREQUEST_H_
