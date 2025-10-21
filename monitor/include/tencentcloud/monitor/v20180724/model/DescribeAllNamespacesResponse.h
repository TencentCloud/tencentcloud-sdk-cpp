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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/CommonNamespace.h>
#include <tencentcloud/monitor/v20180724/model/CommonNamespaceNew.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAllNamespaces返回参数结构体
                */
                class DescribeAllNamespacesResponse : public AbstractModel
                {
                public:
                    DescribeAllNamespacesResponse();
                    ~DescribeAllNamespacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云产品的告警策略类型，已废弃
                     * @return QceNamespaces 云产品的告警策略类型，已废弃
                     * 
                     */
                    CommonNamespace GetQceNamespaces() const;

                    /**
                     * 判断参数 QceNamespaces 是否已赋值
                     * @return QceNamespaces 是否已赋值
                     * 
                     */
                    bool QceNamespacesHasBeenSet() const;

                    /**
                     * 获取其他告警策略类型，已废弃
                     * @return CustomNamespaces 其他告警策略类型，已废弃
                     * 
                     */
                    CommonNamespace GetCustomNamespaces() const;

                    /**
                     * 判断参数 CustomNamespaces 是否已赋值
                     * @return CustomNamespaces 是否已赋值
                     * 
                     */
                    bool CustomNamespacesHasBeenSet() const;

                    /**
                     * 获取云产品的告警策略类型
                     * @return QceNamespacesNew 云产品的告警策略类型
                     * 
                     */
                    std::vector<CommonNamespace> GetQceNamespacesNew() const;

                    /**
                     * 判断参数 QceNamespacesNew 是否已赋值
                     * @return QceNamespacesNew 是否已赋值
                     * 
                     */
                    bool QceNamespacesNewHasBeenSet() const;

                    /**
                     * 获取其他告警策略类型，暂不支持
                     * @return CustomNamespacesNew 其他告警策略类型，暂不支持
                     * 
                     */
                    std::vector<CommonNamespace> GetCustomNamespacesNew() const;

                    /**
                     * 判断参数 CustomNamespacesNew 是否已赋值
                     * @return CustomNamespacesNew 是否已赋值
                     * 
                     */
                    bool CustomNamespacesNewHasBeenSet() const;

                    /**
                     * 获取通用告警策略类型(包括：应用性能监控，前端性能监控，云拨测)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonNamespaces 通用告警策略类型(包括：应用性能监控，前端性能监控，云拨测)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonNamespaceNew> GetCommonNamespaces() const;

                    /**
                     * 判断参数 CommonNamespaces 是否已赋值
                     * @return CommonNamespaces 是否已赋值
                     * 
                     */
                    bool CommonNamespacesHasBeenSet() const;

                private:

                    /**
                     * 云产品的告警策略类型，已废弃
                     */
                    CommonNamespace m_qceNamespaces;
                    bool m_qceNamespacesHasBeenSet;

                    /**
                     * 其他告警策略类型，已废弃
                     */
                    CommonNamespace m_customNamespaces;
                    bool m_customNamespacesHasBeenSet;

                    /**
                     * 云产品的告警策略类型
                     */
                    std::vector<CommonNamespace> m_qceNamespacesNew;
                    bool m_qceNamespacesNewHasBeenSet;

                    /**
                     * 其他告警策略类型，暂不支持
                     */
                    std::vector<CommonNamespace> m_customNamespacesNew;
                    bool m_customNamespacesNewHasBeenSet;

                    /**
                     * 通用告警策略类型(包括：应用性能监控，前端性能监控，云拨测)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonNamespaceNew> m_commonNamespaces;
                    bool m_commonNamespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
