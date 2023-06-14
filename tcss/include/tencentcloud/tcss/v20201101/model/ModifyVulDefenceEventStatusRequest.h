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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_

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
                * ModifyVulDefenceEventStatus请求参数结构体
                */
                class ModifyVulDefenceEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyVulDefenceEventStatusRequest();
                    ~ModifyVulDefenceEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件IDs数组
                     * @return EventIDs 事件IDs数组
                     * 
                     */
                    std::vector<int64_t> GetEventIDs() const;

                    /**
                     * 设置事件IDs数组
                     * @param _eventIDs 事件IDs数组
                     * 
                     */
                    void SetEventIDs(const std::vector<int64_t>& _eventIDs);

                    /**
                     * 判断参数 EventIDs 是否已赋值
                     * @return EventIDs 是否已赋值
                     * 
                     */
                    bool EventIDsHasBeenSet() const;

                    /**
                     * 获取操作状态：
EVENT_DEALED：已处理，EVENT_IGNORE：忽略，EVENT_ISOLATE_CONTAINER：隔离容器，EVENT_DEL：删除
                     * @return Status 操作状态：
EVENT_DEALED：已处理，EVENT_IGNORE：忽略，EVENT_ISOLATE_CONTAINER：隔离容器，EVENT_DEL：删除
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置操作状态：
EVENT_DEALED：已处理，EVENT_IGNORE：忽略，EVENT_ISOLATE_CONTAINER：隔离容器，EVENT_DEL：删除
                     * @param _status 操作状态：
EVENT_DEALED：已处理，EVENT_IGNORE：忽略，EVENT_ISOLATE_CONTAINER：隔离容器，EVENT_DEL：删除
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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

                private:

                    /**
                     * 事件IDs数组
                     */
                    std::vector<int64_t> m_eventIDs;
                    bool m_eventIDsHasBeenSet;

                    /**
                     * 操作状态：
EVENT_DEALED：已处理，EVENT_IGNORE：忽略，EVENT_ISOLATE_CONTAINER：隔离容器，EVENT_DEL：删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCEEVENTSTATUSREQUEST_H_
