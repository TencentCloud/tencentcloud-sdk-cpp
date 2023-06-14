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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERBINDSETREQ_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERBINDSETREQ_H_

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
                * 绑定的源站信息
                */
                class RealServerBindSetReq : public AbstractModel
                {
                public:
                    RealServerBindSetReq();
                    ~RealServerBindSetReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站id
                     * @return RealServerId 源站id
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站id
                     * @param _realServerId 源站id
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
                     * 获取源站端口
                     * @return RealServerPort 源站端口
                     * 
                     */
                    uint64_t GetRealServerPort() const;

                    /**
                     * 设置源站端口
                     * @param _realServerPort 源站端口
                     * 
                     */
                    void SetRealServerPort(const uint64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     * 
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取源站IP
                     * @return RealServerIP 源站IP
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置源站IP
                     * @param _realServerIP 源站IP
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
                     * 获取源站权重
                     * @return RealServerWeight 源站权重
                     * 
                     */
                    uint64_t GetRealServerWeight() const;

                    /**
                     * 设置源站权重
                     * @param _realServerWeight 源站权重
                     * 
                     */
                    void SetRealServerWeight(const uint64_t& _realServerWeight);

                    /**
                     * 判断参数 RealServerWeight 是否已赋值
                     * @return RealServerWeight 是否已赋值
                     * 
                     */
                    bool RealServerWeightHasBeenSet() const;

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
                     * 源站id
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 源站端口
                     */
                    uint64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * 源站IP
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * 源站权重
                     */
                    uint64_t m_realServerWeight;
                    bool m_realServerWeightHasBeenSet;

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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERBINDSETREQ_H_
