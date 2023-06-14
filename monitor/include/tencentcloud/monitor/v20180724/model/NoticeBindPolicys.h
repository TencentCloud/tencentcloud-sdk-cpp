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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEBINDPOLICYS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEBINDPOLICYS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 通知模板与策略绑定关系
                */
                class NoticeBindPolicys : public AbstractModel
                {
                public:
                    NoticeBindPolicys();
                    ~NoticeBindPolicys() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警通知模板 ID
                     * @return NoticeId 告警通知模板 ID
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置告警通知模板 ID
                     * @param _noticeId 告警通知模板 ID
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取告警通知模板绑定的告警策略ID列表
                     * @return PolicyIds 告警通知模板绑定的告警策略ID列表
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置告警通知模板绑定的告警策略ID列表
                     * @param _policyIds 告警通知模板绑定的告警策略ID列表
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * 告警通知模板 ID
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * 告警通知模板绑定的告警策略ID列表
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTICEBINDPOLICYS_H_
