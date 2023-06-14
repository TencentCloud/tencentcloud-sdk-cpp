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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_

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
                * 源站绑定信息查询，BindStatus， 0: 未被绑定 1：被规则或者监听器绑定
                */
                class RealServerStatus : public AbstractModel
                {
                public:
                    RealServerStatus();
                    ~RealServerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站ID。
                     * @return RealServerId 源站ID。
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置源站ID。
                     * @param _realServerId 源站ID。
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
                     * 获取0表示未被绑定 1表示被规则或者监听器绑定。
                     * @return BindStatus 0表示未被绑定 1表示被规则或者监听器绑定。
                     * 
                     */
                    int64_t GetBindStatus() const;

                    /**
                     * 设置0表示未被绑定 1表示被规则或者监听器绑定。
                     * @param _bindStatus 0表示未被绑定 1表示被规则或者监听器绑定。
                     * 
                     */
                    void SetBindStatus(const int64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取绑定此源站的通道ID，没有绑定时为空字符串。
                     * @return ProxyId 绑定此源站的通道ID，没有绑定时为空字符串。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置绑定此源站的通道ID，没有绑定时为空字符串。
                     * @param _proxyId 绑定此源站的通道ID，没有绑定时为空字符串。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取绑定此源站的通道组ID，没有绑定时为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 绑定此源站的通道组ID，没有绑定时为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置绑定此源站的通道组ID，没有绑定时为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 绑定此源站的通道组ID，没有绑定时为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 源站ID。
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 0表示未被绑定 1表示被规则或者监听器绑定。
                     */
                    int64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 绑定此源站的通道ID，没有绑定时为空字符串。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 绑定此源站的通道组ID，没有绑定时为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_
