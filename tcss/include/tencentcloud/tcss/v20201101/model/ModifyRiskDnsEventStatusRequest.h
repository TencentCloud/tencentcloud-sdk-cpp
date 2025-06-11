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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyRiskDnsEventStatus请求参数结构体
                */
                class ModifyRiskDnsEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyRiskDnsEventStatusRequest();
                    ~ModifyRiskDnsEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取恶意请求事件ID数组。加白时必需，否则Filters和EventIDSet二者选其一。
                     * @return EventIDSet 恶意请求事件ID数组。加白时必需，否则Filters和EventIDSet二者选其一。
                     * 
                     */
                    std::vector<uint64_t> GetEventIDSet() const;

                    /**
                     * 设置恶意请求事件ID数组。加白时必需，否则Filters和EventIDSet二者选其一。
                     * @param _eventIDSet 恶意请求事件ID数组。加白时必需，否则Filters和EventIDSet二者选其一。
                     * 
                     */
                    void SetEventIDSet(const std::vector<uint64_t>& _eventIDSet);

                    /**
                     * 判断参数 EventIDSet 是否已赋值
                     * @return EventIDSet 是否已赋值
                     * 
                     */
                    bool EventIDSetHasBeenSet() const;

                    /**
                     * 获取标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
EVENT_ISOLATE_CONTAINER：隔离容器
EVENT_RESOTRE_CONTAINER：恢复容器
                     * @return EventStatus 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
EVENT_ISOLATE_CONTAINER：隔离容器
EVENT_RESOTRE_CONTAINER：恢复容器
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
EVENT_ISOLATE_CONTAINER：隔离容器
EVENT_RESOTRE_CONTAINER：恢复容器
                     * @param _eventStatus 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
EVENT_ISOLATE_CONTAINER：隔离容器
EVENT_RESOTRE_CONTAINER：恢复容器
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取白名单域名/IP
                     * @return Address 白名单域名/IP
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置白名单域名/IP
                     * @param _address 白名单域名/IP
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取相同的请求域名/IP事件加白处理
                     * @return AllSameEventAddWhite 相同的请求域名/IP事件加白处理
                     * 
                     */
                    bool GetAllSameEventAddWhite() const;

                    /**
                     * 设置相同的请求域名/IP事件加白处理
                     * @param _allSameEventAddWhite 相同的请求域名/IP事件加白处理
                     * 
                     */
                    void SetAllSameEventAddWhite(const bool& _allSameEventAddWhite);

                    /**
                     * 判断参数 AllSameEventAddWhite 是否已赋值
                     * @return AllSameEventAddWhite 是否已赋值
                     * 
                     */
                    bool AllSameEventAddWhiteHasBeenSet() const;

                    /**
                     * 获取加白的事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * @return AddWhiteEventType 加白的事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * 
                     */
                    std::string GetAddWhiteEventType() const;

                    /**
                     * 设置加白的事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * @param _addWhiteEventType 加白的事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     * 
                     */
                    void SetAddWhiteEventType(const std::string& _addWhiteEventType);

                    /**
                     * 判断参数 AddWhiteEventType 是否已赋值
                     * @return AddWhiteEventType 是否已赋值
                     * 
                     */
                    bool AddWhiteEventTypeHasBeenSet() const;

                private:

                    /**
                     * 恶意请求事件ID数组。加白时必需，否则Filters和EventIDSet二者选其一。
                     */
                    std::vector<uint64_t> m_eventIDSet;
                    bool m_eventIDSetHasBeenSet;

                    /**
                     * 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
EVENT_ISOLATE_CONTAINER：隔离容器
EVENT_RESOTRE_CONTAINER：恢复容器
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * 白名单域名/IP
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 相同的请求域名/IP事件加白处理
                     */
                    bool m_allSameEventAddWhite;
                    bool m_allSameEventAddWhiteHasBeenSet;

                    /**
                     * 加白的事件类型，恶意域名请求：DOMAIN，恶意IP请求：IP
                     */
                    std::string m_addWhiteEventType;
                    bool m_addWhiteEventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_
