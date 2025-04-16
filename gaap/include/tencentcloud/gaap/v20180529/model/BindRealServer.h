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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 已绑定的源站信息
                */
                class BindRealServer : public AbstractModel
                {
                public:
                    BindRealServer();
                    ~BindRealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站ID
                     * @return RealServerId 源站ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID
                     * @param _realServerId 源站ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取源站IP或者域名
                     * @return RealServerIP 源站IP或者域名
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站IP或者域名
                     * @param _realServerIP 源站IP或者域名
                     * 
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取该源站所占权重
                     * @return RealServerWeight 该源站所占权重
                     * 
                     */
                    int64_t GetRealServerWeight() const;

                    /**
                     * 设置该源站所占权重
                     * @param _realServerWeight 该源站所占权重
                     * 
                     */
                    void SetRealServerWeight(const int64_t& _realServerWeight);

                    /**
                     * 判断参数 RealServerWeight 是否已赋值
                     * @return RealServerWeight 是否已赋值
                     * 
                     */
                    bool RealServerWeightHasBeenSet() const;

                    /**
                     * 获取源站健康检查状态，其中：
0表示正常；
1表示异常。
未开启健康检查状态时，该状态始终为正常。
                     * @return RealServerStatus 源站健康检查状态，其中：
0表示正常；
1表示异常。
未开启健康检查状态时，该状态始终为正常。
                     * 
                     */
                    int64_t GetRealServerStatus() const;

                    /**
                     * 设置源站健康检查状态，其中：
0表示正常；
1表示异常。
未开启健康检查状态时，该状态始终为正常。
                     * @param _realServerStatus 源站健康检查状态，其中：
0表示正常；
1表示异常。
未开启健康检查状态时，该状态始终为正常。
                     * 
                     */
                    void SetRealServerStatus(const int64_t& _realServerStatus);

                    /**
                     * 判断参数 RealServerStatus 是否已赋值
                     * @return RealServerStatus 是否已赋值
                     * 
                     */
                    bool RealServerStatusHasBeenSet() const;

                    /**
                     * 获取源站的端口号
                     * @return RealServerPort 源站的端口号
                     * 
                     */
                    int64_t GetRealServerPort() const;

                    /**
                     * 设置源站的端口号
                     * @param _realServerPort 源站的端口号
                     * 
                     */
                    void SetRealServerPort(const int64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     * 
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。状态异常，但该字段为空时，表示域名解析异常。
                     * @return DownIPList 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。状态异常，但该字段为空时，表示域名解析异常。
                     * 
                     */
                    std::vector<std::string> GetDownIPList() const;

                    /**
                     * 设置当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。状态异常，但该字段为空时，表示域名解析异常。
                     * @param _downIPList 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。状态异常，但该字段为空时，表示域名解析异常。
                     * 
                     */
                    void SetDownIPList(const std::vector<std::string>& _downIPList);

                    /**
                     * 判断参数 DownIPList 是否已赋值
                     * @return DownIPList 是否已赋值
                     * 
                     */
                    bool DownIPListHasBeenSet() const;

                    /**
                     * 获取源站主备角色：master表示主，slave表示备，该参数必须在监听器打开了源站主备模式。
                     * @return RealServerFailoverRole 源站主备角色：master表示主，slave表示备，该参数必须在监听器打开了源站主备模式。
                     * 
                     */
                    std::string GetRealServerFailoverRole() const;

                    /**
                     * 设置源站主备角色：master表示主，slave表示备，该参数必须在监听器打开了源站主备模式。
                     * @param _realServerFailoverRole 源站主备角色：master表示主，slave表示备，该参数必须在监听器打开了源站主备模式。
                     * 
                     */
                    void SetRealServerFailoverRole(const std::string& _realServerFailoverRole);

                    /**
                     * 判断参数 RealServerFailoverRole 是否已赋值
                     * @return RealServerFailoverRole 是否已赋值
                     * 
                     */
                    bool RealServerFailoverRoleHasBeenSet() const;

                private:

                    /**
                     * 源站ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 源站IP或者域名
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * 该源站所占权重
                     */
                    int64_t m_realServerWeight;
                    bool m_realServerWeightHasBeenSet;

                    /**
                     * 源站健康检查状态，其中：
0表示正常；
1表示异常。
未开启健康检查状态时，该状态始终为正常。
                     */
                    int64_t m_realServerStatus;
                    bool m_realServerStatusHasBeenSet;

                    /**
                     * 源站的端口号
                     */
                    int64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * 当源站为域名时，域名被解析成一个或者多个IP，该字段表示其中异常的IP列表。状态异常，但该字段为空时，表示域名解析异常。
                     */
                    std::vector<std::string> m_downIPList;
                    bool m_downIPListHasBeenSet;

                    /**
                     * 源站主备角色：master表示主，slave表示备，该参数必须在监听器打开了源站主备模式。
                     */
                    std::string m_realServerFailoverRole;
                    bool m_realServerFailoverRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_
