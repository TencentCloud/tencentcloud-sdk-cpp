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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_

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
                * 网络攻击白名单规则
                */
                class NetAttackWhiteRule : public AbstractModel
                {
                public:
                    NetAttackWhiteRule();
                    ~NetAttackWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则id
                     * @return Id 规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id
                     * @param _id 规则id
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
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取0: 一组quuid 1: 所有主机
                     * @return Scope 0: 一组quuid 1: 所有主机
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置0: 一组quuid 1: 所有主机
                     * @param _scope 0: 一组quuid 1: 所有主机
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取是否处理之前的事件 0: 不处理 1:处理
                     * @return DealOldEvents 是否处理之前的事件 0: 不处理 1:处理
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置是否处理之前的事件 0: 不处理 1:处理
                     * @param _dealOldEvents 是否处理之前的事件 0: 不处理 1:处理
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取主机quuid 多个用;隔开
                     * @return Quuids 主机quuid 多个用;隔开
                     * 
                     */
                    std::string GetQuuids() const;

                    /**
                     * 设置主机quuid 多个用;隔开
                     * @param _quuids 主机quuid 多个用;隔开
                     * 
                     */
                    void SetQuuids(const std::string& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 多个用;隔开
                     * @return SrcIP 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 多个用;隔开
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 多个用;隔开
                     * @param _srcIP 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 多个用;隔开
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 0: 一组quuid 1: 所有主机
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 是否处理之前的事件 0: 不处理 1:处理
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * 主机quuid 多个用;隔开
                     */
                    std::string m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 来源IP 单IP:1.1.1.1  IP范围:1.1.1.1-1.1.2.1  IP范围：1.1.1.0/24 多个用;隔开
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKWHITERULE_H_
