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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ClbListener.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * clb实例详情
                */
                class ClbInstanceDetail : public AbstractModel
                {
                public:
                    ClbInstanceDetail();
                    ~ClbInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CLB实例ID
                     * @return LoadBalancerId CLB实例ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB实例ID
                     * @param _loadBalancerId CLB实例ID
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB实例名称
                     * @return LoadBalancerName CLB实例名称
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB实例名称
                     * @param _loadBalancerName CLB实例名称
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取CLB监听器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Listeners CLB监听器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClbListener> GetListeners() const;

                    /**
                     * 设置CLB监听器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listeners CLB监听器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListeners(const std::vector<ClbListener>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                private:

                    /**
                     * CLB实例ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB实例名称
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * CLB监听器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClbListener> m_listeners;
                    bool m_listenersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CLBINSTANCEDETAIL_H_
