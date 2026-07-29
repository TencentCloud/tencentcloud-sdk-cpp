/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICESENDGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICESENDGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NoticeUserInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 通知模板发送组信息
                */
                class NoticeSendGroup : public AbstractModel
                {
                public:
                    NoticeSendGroup();
                    ~NoticeSendGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发送组类型</p><p>枚举值：</p><ul><li>USER： 用户</li><li>GROUP： 用户组</li><li>OnCallForm： 值班表</li></ul>
                     * @return ReceiverType <p>发送组类型</p><p>枚举值：</p><ul><li>USER： 用户</li><li>GROUP： 用户组</li><li>OnCallForm： 值班表</li></ul>
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>发送组类型</p><p>枚举值：</p><ul><li>USER： 用户</li><li>GROUP： 用户组</li><li>OnCallForm： 值班表</li></ul>
                     * @param _receiverType <p>发送组类型</p><p>枚举值：</p><ul><li>USER： 用户</li><li>GROUP： 用户组</li><li>OnCallForm： 值班表</li></ul>
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取<p>通知人信息</p>
                     * @return Users <p>通知人信息</p>
                     * 
                     */
                    std::vector<NoticeUserInfo> GetUsers() const;

                    /**
                     * 设置<p>通知人信息</p>
                     * @param _users <p>通知人信息</p>
                     * 
                     */
                    void SetUsers(const std::vector<NoticeUserInfo>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * <p>发送组类型</p><p>枚举值：</p><ul><li>USER： 用户</li><li>GROUP： 用户组</li><li>OnCallForm： 值班表</li></ul>
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>通知人信息</p>
                     */
                    std::vector<NoticeUserInfo> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICESENDGROUP_H_
