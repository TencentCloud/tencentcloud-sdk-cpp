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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYREVERSESHELLSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYREVERSESHELLSTATUSREQUEST_H_

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
                * ModifyReverseShellStatus请求参数结构体
                */
                class ModifyReverseShellStatusRequest : public AbstractModel
                {
                public:
                    ModifyReverseShellStatusRequest();
                    ~ModifyReverseShellStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处理事件ids
                     * @return EventIdSet 处理事件ids
                     * 
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置处理事件ids
                     * @param _eventIdSet 处理事件ids
                     * 
                     */
                    void SetEventIdSet(const std::vector<std::string>& _eventIdSet);

                    /**
                     * 判断参数 EventIdSet 是否已赋值
                     * @return EventIdSet 是否已赋值
                     * 
                     */
                    bool EventIdSetHasBeenSet() const;

                    /**
                     * 获取标记事件的状态，   
    EVENT_DEALED:事件处理
    EVENT_INGNORE"：事件忽略
     EVENT_DEL:事件删除
     EVENT_ADD_WHITE:事件加白
                     * @return Status 标记事件的状态，   
    EVENT_DEALED:事件处理
    EVENT_INGNORE"：事件忽略
     EVENT_DEL:事件删除
     EVENT_ADD_WHITE:事件加白
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置标记事件的状态，   
    EVENT_DEALED:事件处理
    EVENT_INGNORE"：事件忽略
     EVENT_DEL:事件删除
     EVENT_ADD_WHITE:事件加白
                     * @param _status 标记事件的状态，   
    EVENT_DEALED:事件处理
    EVENT_INGNORE"：事件忽略
     EVENT_DEL:事件删除
     EVENT_ADD_WHITE:事件加白
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
                     * 获取事件备注
                     * @return Remark 事件备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置事件备注
                     * @param _remark 事件备注
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
                     * 处理事件ids
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                    /**
                     * 标记事件的状态，   
    EVENT_DEALED:事件处理
    EVENT_INGNORE"：事件忽略
     EVENT_DEL:事件删除
     EVENT_ADD_WHITE:事件加白
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 事件备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYREVERSESHELLSTATUSREQUEST_H_
