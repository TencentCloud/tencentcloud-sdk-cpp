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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_

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
                * 大屏网络攻击日志
                */
                class ScreenDefendAttackLog : public AbstractModel
                {
                public:
                    ScreenDefendAttackLog();
                    ~ScreenDefendAttackLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志ID
                     * @return Id 日志ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置日志ID
                     * @param _id 日志ID
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
                     * 获取客户端ID
                     * @return Uuid 客户端ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端ID
                     * @param _uuid 客户端ID
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
                     * 获取来源IP
                     * @return SrcIp 来源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置来源IP
                     * @param _srcIp 来源IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取来源端口
                     * @return SrcPort 来源端口
                     * 
                     */
                    uint64_t GetSrcPort() const;

                    /**
                     * 设置来源端口
                     * @param _srcPort 来源端口
                     * 
                     */
                    void SetSrcPort(const uint64_t& _srcPort);

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取攻击方式
                     * @return HttpMethod 攻击方式
                     * 
                     */
                    std::string GetHttpMethod() const;

                    /**
                     * 设置攻击方式
                     * @param _httpMethod 攻击方式
                     * 
                     */
                    void SetHttpMethod(const std::string& _httpMethod);

                    /**
                     * 判断参数 HttpMethod 是否已赋值
                     * @return HttpMethod 是否已赋值
                     * 
                     */
                    bool HttpMethodHasBeenSet() const;

                    /**
                     * 获取威胁类型
                     * @return VulType 威胁类型
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 设置威胁类型
                     * @param _vulType 威胁类型
                     * 
                     */
                    void SetVulType(const std::string& _vulType);

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取攻击时间
                     * @return CreatedTime 攻击时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置攻击时间
                     * @param _createdTime 攻击时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DstPort 目标端口
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置目标端口
                     * @param _dstPort 目标端口
                     * 
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取主机 quuid
                     * @return Quuid 主机 quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机 quuid
                     * @param _quuid 主机 quuid
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
                     * 获取目标IP
                     * @return DstIp 目标IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP
                     * @param _dstIp 目标IP
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 来源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 来源端口
                     */
                    uint64_t m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * 攻击方式
                     */
                    std::string m_httpMethod;
                    bool m_httpMethodHasBeenSet;

                    /**
                     * 威胁类型
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 攻击时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 主机 quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 目标IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_
