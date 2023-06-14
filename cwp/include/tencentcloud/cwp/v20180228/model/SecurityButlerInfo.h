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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 安全管家列表信息
                */
                class SecurityButlerInfo : public AbstractModel
                {
                public:
                    SecurityButlerInfo();
                    ~SecurityButlerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据id
                     * @return Id 数据id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置数据id
                     * @param _id 数据id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    uint64_t GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
                     * 
                     */
                    void SetOrderId(const uint64_t& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取cvm id
                     * @return Quuid cvm id
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm id
                     * @param _quuid cvm id
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取服务状态 0-服务中,1-已到期 2已销毁
                     * @return Status 服务状态 0-服务中,1-已到期 2已销毁
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置服务状态 0-服务中,1-已到期 2已销毁
                     * @param _status 服务状态 0-服务中,1-已到期 2已销毁
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务开始时间
                     * @return StartTime 服务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置服务开始时间
                     * @param _startTime 服务开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取服务结束时间
                     * @return EndTime 服务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置服务结束时间
                     * @param _endTime 服务结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机Ip
                     * @return HostIp 主机Ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机Ip
                     * @param _hostIp 主机Ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机 uuid
                     * @return Uuid 主机 uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机 uuid
                     * @param _uuid 主机 uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机风险数
                     * @return RiskCount 主机风险数
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置主机风险数
                     * @param _riskCount 主机风险数
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                private:

                    /**
                     * 数据id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 订单id
                     */
                    uint64_t m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * cvm id
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 服务状态 0-服务中,1-已到期 2已销毁
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 服务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机Ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机 uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机风险数
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYBUTLERINFO_H_
