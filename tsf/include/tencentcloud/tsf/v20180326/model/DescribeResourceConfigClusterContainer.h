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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGCLUSTERCONTAINER_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGCLUSTERCONTAINER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 返回给前端的控制信息
                */
                class DescribeResourceConfigClusterContainer : public AbstractModel
                {
                public:
                    DescribeResourceConfigClusterContainer();
                    ~DescribeResourceConfigClusterContainer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否需要子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedSubnetWhenCreatingCluster 是否需要子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNeedSubnetWhenCreatingCluster() const;

                    /**
                     * 设置是否需要子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needSubnetWhenCreatingCluster 是否需要子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNeedSubnetWhenCreatingCluster(const bool& _needSubnetWhenCreatingCluster);

                    /**
                     * 判断参数 NeedSubnetWhenCreatingCluster 是否已赋值
                     * @return NeedSubnetWhenCreatingCluster 是否已赋值
                     * 
                     */
                    bool NeedSubnetWhenCreatingClusterHasBeenSet() const;

                private:

                    /**
                     * 是否需要子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needSubnetWhenCreatingCluster;
                    bool m_needSubnetWhenCreatingClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGCLUSTERCONTAINER_H_
