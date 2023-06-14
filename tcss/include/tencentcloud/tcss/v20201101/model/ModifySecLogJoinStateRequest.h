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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINSTATEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINSTATEREQUEST_H_

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
                * ModifySecLogJoinState请求参数结构体
                */
                class ModifySecLogJoinStateRequest : public AbstractModel
                {
                public:
                    ModifySecLogJoinStateRequest();
                    ~ModifySecLogJoinStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     * @return LogType 日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     * @param _logType 日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取状态(true:开 false:关)
                     * @return State 状态(true:开 false:关)
                     * 
                     */
                    bool GetState() const;

                    /**
                     * 设置状态(true:开 false:关)
                     * @param _state 状态(true:开 false:关)
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 状态(true:开 false:关)
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINSTATEREQUEST_H_
