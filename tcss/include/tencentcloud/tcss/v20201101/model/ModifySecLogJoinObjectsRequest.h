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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_

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
                * ModifySecLogJoinObjects请求参数结构体
                */
                class ModifySecLogJoinObjectsRequest : public AbstractModel
                {
                public:
                    ModifySecLogJoinObjectsRequest();
                    ~ModifySecLogJoinObjectsRequest() = default;
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
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     * @param LogType 日志类型
bash日志: container_bash
容器启动: container_launch
k8sApi: k8s_api
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取绑定主机quuid列表
                     * @return BindList 绑定主机quuid列表
                     */
                    std::vector<std::string> GetBindList() const;

                    /**
                     * 设置绑定主机quuid列表
                     * @param BindList 绑定主机quuid列表
                     */
                    void SetBindList(const std::vector<std::string>& _bindList);

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     */
                    bool BindListHasBeenSet() const;

                    /**
                     * 获取待解绑主机quuid列表
                     * @return UnBindList 待解绑主机quuid列表
                     */
                    std::vector<std::string> GetUnBindList() const;

                    /**
                     * 设置待解绑主机quuid列表
                     * @param UnBindList 待解绑主机quuid列表
                     */
                    void SetUnBindList(const std::vector<std::string>& _unBindList);

                    /**
                     * 判断参数 UnBindList 是否已赋值
                     * @return UnBindList 是否已赋值
                     */
                    bool UnBindListHasBeenSet() const;

                    /**
                     * 获取节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * @return NodeType 节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * @param NodeType 节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

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
                     * 绑定主机quuid列表
                     */
                    std::vector<std::string> m_bindList;
                    bool m_bindListHasBeenSet;

                    /**
                     * 待解绑主机quuid列表
                     */
                    std::vector<std::string> m_unBindList;
                    bool m_unBindListHasBeenSet;

                    /**
                     * 节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
