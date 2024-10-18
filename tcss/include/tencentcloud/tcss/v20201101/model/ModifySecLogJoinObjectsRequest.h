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
                     * 获取绑定列表
                     * @return BindList 绑定列表
                     * 
                     */
                    std::vector<std::string> GetBindList() const;

                    /**
                     * 设置绑定列表
                     * @param _bindList 绑定列表
                     * 
                     */
                    void SetBindList(const std::vector<std::string>& _bindList);

                    /**
                     * 判断参数 BindList 是否已赋值
                     * @return BindList 是否已赋值
                     * 
                     */
                    bool BindListHasBeenSet() const;

                    /**
                     * 获取待解绑列表，节点范围为全部时，含义为需剔除资产列表
                     * @return UnBindList 待解绑列表，节点范围为全部时，含义为需剔除资产列表
                     * 
                     */
                    std::vector<std::string> GetUnBindList() const;

                    /**
                     * 设置待解绑列表，节点范围为全部时，含义为需剔除资产列表
                     * @param _unBindList 待解绑列表，节点范围为全部时，含义为需剔除资产列表
                     * 
                     */
                    void SetUnBindList(const std::vector<std::string>& _unBindList);

                    /**
                     * 判断参数 UnBindList 是否已赋值
                     * @return UnBindList 是否已赋值
                     * 
                     */
                    bool UnBindListHasBeenSet() const;

                    /**
                     * 获取节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * @return NodeType 节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * @param _nodeType 节点类型:
NORMAL: 普通节点(默认值)
SUPER: 超级节点

                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取日志节点范围类型,0自选 1全部
                     * @return RangeType 日志节点范围类型,0自选 1全部
                     * 
                     */
                    int64_t GetRangeType() const;

                    /**
                     * 设置日志节点范围类型,0自选 1全部
                     * @param _rangeType 日志节点范围类型,0自选 1全部
                     * 
                     */
                    void SetRangeType(const int64_t& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取新增资产是否自动加入，节点范围为全部时生效
                     * @return AutoJoin 新增资产是否自动加入，节点范围为全部时生效
                     * 
                     */
                    bool GetAutoJoin() const;

                    /**
                     * 设置新增资产是否自动加入，节点范围为全部时生效
                     * @param _autoJoin 新增资产是否自动加入，节点范围为全部时生效
                     * 
                     */
                    void SetAutoJoin(const bool& _autoJoin);

                    /**
                     * 判断参数 AutoJoin 是否已赋值
                     * @return AutoJoin 是否已赋值
                     * 
                     */
                    bool AutoJoinHasBeenSet() const;

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
                     * 绑定列表
                     */
                    std::vector<std::string> m_bindList;
                    bool m_bindListHasBeenSet;

                    /**
                     * 待解绑列表，节点范围为全部时，含义为需剔除资产列表
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

                    /**
                     * 日志节点范围类型,0自选 1全部
                     */
                    int64_t m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * 新增资产是否自动加入，节点范围为全部时生效
                     */
                    bool m_autoJoin;
                    bool m_autoJoinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGJOINOBJECTSREQUEST_H_
