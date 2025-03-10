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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/RuntimeConfig.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 第三方节点池信息
                */
                class ExternalNodePoolInfo : public AbstractModel
                {
                public:
                    ExternalNodePoolInfo();
                    ~ExternalNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方节点Runtime配置
                     * @return RuntimeConfig 第三方节点Runtime配置
                     * 
                     */
                    RuntimeConfig GetRuntimeConfig() const;

                    /**
                     * 设置第三方节点Runtime配置
                     * @param _runtimeConfig 第三方节点Runtime配置
                     * 
                     */
                    void SetRuntimeConfig(const RuntimeConfig& _runtimeConfig);

                    /**
                     * 判断参数 RuntimeConfig 是否已赋值
                     * @return RuntimeConfig 是否已赋值
                     * 
                     */
                    bool RuntimeConfigHasBeenSet() const;

                    /**
                     * 获取节点数
                     * @return NodesNum 节点数
                     * 
                     */
                    uint64_t GetNodesNum() const;

                    /**
                     * 设置节点数
                     * @param _nodesNum 节点数
                     * 
                     */
                    void SetNodesNum(const uint64_t& _nodesNum);

                    /**
                     * 判断参数 NodesNum 是否已赋值
                     * @return NodesNum 是否已赋值
                     * 
                     */
                    bool NodesNumHasBeenSet() const;

                private:

                    /**
                     * 第三方节点Runtime配置
                     */
                    RuntimeConfig m_runtimeConfig;
                    bool m_runtimeConfigHasBeenSet;

                    /**
                     * 节点数
                     */
                    uint64_t m_nodesNum;
                    bool m_nodesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_EXTERNALNODEPOOLINFO_H_
