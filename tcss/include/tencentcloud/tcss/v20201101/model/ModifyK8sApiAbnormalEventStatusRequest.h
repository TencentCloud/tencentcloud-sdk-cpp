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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALEVENTSTATUSREQUEST_H_

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
                * ModifyK8sApiAbnormalEventStatus请求参数结构体
                */
                class ModifyK8sApiAbnormalEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyK8sApiAbnormalEventStatusRequest();
                    ~ModifyK8sApiAbnormalEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件ID集合
                     * @return EventIDSet 事件ID集合
                     * 
                     */
                    std::vector<uint64_t> GetEventIDSet() const;

                    /**
                     * 设置事件ID集合
                     * @param _eventIDSet 事件ID集合
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 事件ID集合
                     */
                    std::vector<uint64_t> m_eventIDSet;
                    bool m_eventIDSetHasBeenSet;

                    /**
                     * 状态
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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALEVENTSTATUSREQUEST_H_
