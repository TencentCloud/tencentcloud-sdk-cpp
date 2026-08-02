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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERINFOINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERINFOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 创建模型路由时的集群信息
                */
                class ClusterInfoInput : public AbstractModel
                {
                public:
                    ClusterInfoInput();
                    ~ClusterInfoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p><p>枚举值：</p><ul><li>Exclusive： 独占集群</li><li>Public： 公有云共享集群</li></ul>
                     * @return Type <p>集群类型</p><p>枚举值：</p><ul><li>Exclusive： 独占集群</li><li>Public： 公有云共享集群</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>集群类型</p><p>枚举值：</p><ul><li>Exclusive： 独占集群</li><li>Public： 公有云共享集群</li></ul>
                     * @param _type <p>集群类型</p><p>枚举值：</p><ul><li>Exclusive： 独占集群</li><li>Public： 公有云共享集群</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群类型</p><p>枚举值：</p><ul><li>Exclusive： 独占集群</li><li>Public： 公有云共享集群</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLUSTERINFOINPUT_H_
