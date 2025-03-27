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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IPLineInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 调度域名信息
                */
                class SchedulingDomainInfo : public AbstractModel
                {
                public:
                    SchedulingDomainInfo();
                    ~SchedulingDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调度域名
                     * @return Domain 调度域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置调度域名
                     * @param _domain 调度域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取线路IP列表
                     * @return LineIPList 线路IP列表
                     * 
                     */
                    std::vector<IPLineInfo> GetLineIPList() const;

                    /**
                     * 设置线路IP列表
                     * @param _lineIPList 线路IP列表
                     * 
                     */
                    void SetLineIPList(const std::vector<IPLineInfo>& _lineIPList);

                    /**
                     * 判断参数 LineIPList 是否已赋值
                     * @return LineIPList 是否已赋值
                     * 
                     */
                    bool LineIPListHasBeenSet() const;

                    /**
                     * 获取调度方式，当前仅支持优先级的方式，取值[priority]
                     * @return Method 调度方式，当前仅支持优先级的方式，取值[priority]
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置调度方式，当前仅支持优先级的方式，取值[priority]
                     * @param _method 调度方式，当前仅支持优先级的方式，取值[priority]
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取调度域名解析记录的TTL值
                     * @return TTL 调度域名解析记录的TTL值
                     * 
                     */
                    uint64_t GetTTL() const;

                    /**
                     * 设置调度域名解析记录的TTL值
                     * @param _tTL 调度域名解析记录的TTL值
                     * 
                     */
                    void SetTTL(const uint64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     * 
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取运行状态，取值[
0：未运行
1：运行中
2：运行异常
]
                     * @return Status 运行状态，取值[
0：未运行
1：运行中
2：运行异常
]
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置运行状态，取值[
0：未运行
1：运行中
2：运行异常
]
                     * @param _status 运行状态，取值[
0：未运行
1：运行中
2：运行异常
]
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
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
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
                     * 获取最后修改时间
                     * @return ModifyTime 最后修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最后修改时间
                     * @param _modifyTime 最后修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取域名名称
                     * @return UsrDomainName 域名名称
                     * 
                     */
                    std::string GetUsrDomainName() const;

                    /**
                     * 设置域名名称
                     * @param _usrDomainName 域名名称
                     * 
                     */
                    void SetUsrDomainName(const std::string& _usrDomainName);

                    /**
                     * 判断参数 UsrDomainName 是否已赋值
                     * @return UsrDomainName 是否已赋值
                     * 
                     */
                    bool UsrDomainNameHasBeenSet() const;

                private:

                    /**
                     * 调度域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 线路IP列表
                     */
                    std::vector<IPLineInfo> m_lineIPList;
                    bool m_lineIPListHasBeenSet;

                    /**
                     * 调度方式，当前仅支持优先级的方式，取值[priority]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 调度域名解析记录的TTL值
                     */
                    uint64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 运行状态，取值[
0：未运行
1：运行中
2：运行异常
]
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 域名名称
                     */
                    std::string m_usrDomainName;
                    bool m_usrDomainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SCHEDULINGDOMAININFO_H_
