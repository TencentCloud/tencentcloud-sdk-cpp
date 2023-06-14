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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NoticeBindPolicys.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeleteAlarmNotices请求参数结构体
                */
                class DeleteAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DeleteAlarmNoticesRequest();
                    ~DeleteAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名，这里填“monitor”
                     * @return Module 模块名，这里填“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”
                     * @param _module 模块名，这里填“monitor”
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取告警通知模板id列表
                     * @return NoticeIds 告警通知模板id列表
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置告警通知模板id列表
                     * @param _noticeIds 告警通知模板id列表
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取通知模板与策略绑定关系
                     * @return NoticeBindPolicys 通知模板与策略绑定关系
                     * 
                     */
                    std::vector<NoticeBindPolicys> GetNoticeBindPolicys() const;

                    /**
                     * 设置通知模板与策略绑定关系
                     * @param _noticeBindPolicys 通知模板与策略绑定关系
                     * 
                     */
                    void SetNoticeBindPolicys(const std::vector<NoticeBindPolicys>& _noticeBindPolicys);

                    /**
                     * 判断参数 NoticeBindPolicys 是否已赋值
                     * @return NoticeBindPolicys 是否已赋值
                     * 
                     */
                    bool NoticeBindPolicysHasBeenSet() const;

                private:

                    /**
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 告警通知模板id列表
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 通知模板与策略绑定关系
                     */
                    std::vector<NoticeBindPolicys> m_noticeBindPolicys;
                    bool m_noticeBindPolicysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEALARMNOTICESREQUEST_H_
