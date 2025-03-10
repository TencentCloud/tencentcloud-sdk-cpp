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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPROPERTY_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群属性
                */
                class ClusterProperty : public AbstractModel
                {
                public:
                    ClusterProperty();
                    ~ClusterProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点hostname命名模式
                     * @return NodeNameType 节点hostname命名模式
                     * 
                     */
                    std::string GetNodeNameType() const;

                    /**
                     * 设置节点hostname命名模式
                     * @param _nodeNameType 节点hostname命名模式
                     * 
                     */
                    void SetNodeNameType(const std::string& _nodeNameType);

                    /**
                     * 判断参数 NodeNameType 是否已赋值
                     * @return NodeNameType 是否已赋值
                     * 
                     */
                    bool NodeNameTypeHasBeenSet() const;

                private:

                    /**
                     * 节点hostname命名模式
                     */
                    std::string m_nodeNameType;
                    bool m_nodeNameTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERPROPERTY_H_
