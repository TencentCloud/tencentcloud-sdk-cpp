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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/CommonNamespace.h>


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


                    /**
                     * 获取云产品的名字空间
                     * @return QceNamespaces 云产品的名字空间
                     */
                    CommonNamespace GetQceNamespaces() const;

                    /**
                     * 判断参数 QceNamespaces 是否已赋值
                     * @return QceNamespaces 是否已赋值
                     */
                    bool QceNamespacesHasBeenSet() const;

                    /**
                     * 获取自定义监控的命名空间
                     * @return CustomNamespaces 自定义监控的命名空间
                     */
                    CommonNamespace GetCustomNamespaces() const;

                    /**
                     * 判断参数 CustomNamespaces 是否已赋值
                     * @return CustomNamespaces 是否已赋值
                     */
                    bool CustomNamespacesHasBeenSet() const;

                private:

                    /**
                     * 云产品的名字空间
                     */
                    CommonNamespace m_qceNamespaces;
                    bool m_qceNamespacesHasBeenSet;

                    /**
                     * 自定义监控的命名空间
                     */
                    CommonNamespace m_customNamespaces;
                    bool m_customNamespacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALLNAMESPACESRESPONSE_H_
