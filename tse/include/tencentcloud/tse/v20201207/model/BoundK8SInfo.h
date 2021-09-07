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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_BOUNDK8SINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_BOUNDK8SINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务治理引擎绑定的kubernetes信息
                */
                class BoundK8SInfo : public AbstractModel
                {
                public:
                    BoundK8SInfo();
                    ~BoundK8SInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定的kubernetes集群ID
                     * @return BoundClusterId 绑定的kubernetes集群ID
                     */
                    std::string GetBoundClusterId() const;

                    /**
                     * 设置绑定的kubernetes集群ID
                     * @param BoundClusterId 绑定的kubernetes集群ID
                     */
                    void SetBoundClusterId(const std::string& _boundClusterId);

                    /**
                     * 判断参数 BoundClusterId 是否已赋值
                     * @return BoundClusterId 是否已赋值
                     */
                    bool BoundClusterIdHasBeenSet() const;

                    /**
                     * 获取绑定的kubernetes的集群类型，分tke和eks两种
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoundClusterType 绑定的kubernetes的集群类型，分tke和eks两种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBoundClusterType() const;

                    /**
                     * 设置绑定的kubernetes的集群类型，分tke和eks两种
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BoundClusterType 绑定的kubernetes的集群类型，分tke和eks两种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBoundClusterType(const std::string& _boundClusterType);

                    /**
                     * 判断参数 BoundClusterType 是否已赋值
                     * @return BoundClusterType 是否已赋值
                     */
                    bool BoundClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 绑定的kubernetes集群ID
                     */
                    std::string m_boundClusterId;
                    bool m_boundClusterIdHasBeenSet;

                    /**
                     * 绑定的kubernetes的集群类型，分tke和eks两种
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_boundClusterType;
                    bool m_boundClusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_BOUNDK8SINFO_H_
