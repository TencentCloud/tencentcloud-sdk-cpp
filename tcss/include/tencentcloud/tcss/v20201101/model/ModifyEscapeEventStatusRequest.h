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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_

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
                * ModifyEscapeEventStatus请求参数结构体
                */
                class ModifyEscapeEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyEscapeEventStatusRequest();
                    ~ModifyEscapeEventStatusRequest() = default;
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
                     * 获取标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
                     * @return Status 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
                     * @param _status 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
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

                    /**
                     * 获取加白镜像ID数组
                     * @return ImageIDs 加白镜像ID数组
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置加白镜像ID数组
                     * @param _imageIDs 加白镜像ID数组
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取加白事件类型
   ESCAPE_CGROUPS：利用cgroup机制逃逸
   ESCAPE_TAMPER_SENSITIVE_FILE：篡改敏感文件逃逸
   ESCAPE_DOCKER_API：访问Docker API接口逃逸
   ESCAPE_VUL_OCCURRED：逃逸漏洞利用
   MOUNT_SENSITIVE_PTAH：敏感路径挂载
   PRIVILEGE_CONTAINER_START：特权容器
   PRIVILEGE：程序提权逃逸
                     * @return EventType 加白事件类型
   ESCAPE_CGROUPS：利用cgroup机制逃逸
   ESCAPE_TAMPER_SENSITIVE_FILE：篡改敏感文件逃逸
   ESCAPE_DOCKER_API：访问Docker API接口逃逸
   ESCAPE_VUL_OCCURRED：逃逸漏洞利用
   MOUNT_SENSITIVE_PTAH：敏感路径挂载
   PRIVILEGE_CONTAINER_START：特权容器
   PRIVILEGE：程序提权逃逸
                     * 
                     */
                    std::vector<std::string> GetEventType() const;

                    /**
                     * 设置加白事件类型
   ESCAPE_CGROUPS：利用cgroup机制逃逸
   ESCAPE_TAMPER_SENSITIVE_FILE：篡改敏感文件逃逸
   ESCAPE_DOCKER_API：访问Docker API接口逃逸
   ESCAPE_VUL_OCCURRED：逃逸漏洞利用
   MOUNT_SENSITIVE_PTAH：敏感路径挂载
   PRIVILEGE_CONTAINER_START：特权容器
   PRIVILEGE：程序提权逃逸
                     * @param _eventType 加白事件类型
   ESCAPE_CGROUPS：利用cgroup机制逃逸
   ESCAPE_TAMPER_SENSITIVE_FILE：篡改敏感文件逃逸
   ESCAPE_DOCKER_API：访问Docker API接口逃逸
   ESCAPE_VUL_OCCURRED：逃逸漏洞利用
   MOUNT_SENSITIVE_PTAH：敏感路径挂载
   PRIVILEGE_CONTAINER_START：特权容器
   PRIVILEGE：程序提权逃逸
                     * 
                     */
                    void SetEventType(const std::vector<std::string>& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * 处理事件ids
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                    /**
                     * 标记事件的状态：
EVENT_UNDEAL:未处理（取消忽略），
EVENT_DEALED:已处理，
EVENT_IGNORE:忽略，
EVENT_DELETE：已删除
EVENT_ADD_WHITE：加白
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 加白镜像ID数组
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * 加白事件类型
   ESCAPE_CGROUPS：利用cgroup机制逃逸
   ESCAPE_TAMPER_SENSITIVE_FILE：篡改敏感文件逃逸
   ESCAPE_DOCKER_API：访问Docker API接口逃逸
   ESCAPE_VUL_OCCURRED：逃逸漏洞利用
   MOUNT_SENSITIVE_PTAH：敏感路径挂载
   PRIVILEGE_CONTAINER_START：特权容器
   PRIVILEGE：程序提权逃逸
                     */
                    std::vector<std::string> m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_
