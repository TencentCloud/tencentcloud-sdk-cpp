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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TargetEntity.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyApiAnalyzeStatus请求参数结构体
                */
                class ModifyApiAnalyzeStatusRequest : public AbstractModel
                {
                public:
                    ModifyApiAnalyzeStatusRequest();
                    ~ModifyApiAnalyzeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开关状态
                     * @return Status 开关状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态
                     * @param _status 开关状态
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取需要批量开启的实体列表
                     * @return TargetList 需要批量开启的实体列表
                     * 
                     */
                    std::vector<TargetEntity> GetTargetList() const;

                    /**
                     * 设置需要批量开启的实体列表
                     * @param _targetList 需要批量开启的实体列表
                     * 
                     */
                    void SetTargetList(const std::vector<TargetEntity>& _targetList);

                    /**
                     * 判断参数 TargetList 是否已赋值
                     * @return TargetList 是否已赋值
                     * 
                     */
                    bool TargetListHasBeenSet() const;

                private:

                    /**
                     * 开关状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要批量开启的实体列表
                     */
                    std::vector<TargetEntity> m_targetList;
                    bool m_targetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAPIANALYZESTATUSREQUEST_H_
