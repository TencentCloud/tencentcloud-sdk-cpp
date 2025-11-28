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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_MIXNODECONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_MIXNODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 动态并发配置
                */
                class MixNodeConfig : public AbstractModel
                {
                public:
                    MixNodeConfig();
                    ~MixNodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU机型名
                     * @return NodeSpec GPU机型名
                     * 
                     */
                    std::string GetNodeSpec() const;

                    /**
                     * 设置GPU机型名
                     * @param _nodeSpec GPU机型名
                     * 
                     */
                    void SetNodeSpec(const std::string& _nodeSpec);

                    /**
                     * 判断参数 NodeSpec 是否已赋值
                     * @return NodeSpec 是否已赋值
                     * 
                     */
                    bool NodeSpecHasBeenSet() const;

                    /**
                     * 获取并发个数
                     * @return Num 并发个数
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置并发个数
                     * @param _num 并发个数
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * GPU机型名
                     */
                    std::string m_nodeSpec;
                    bool m_nodeSpecHasBeenSet;

                    /**
                     * 并发个数
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_MIXNODECONFIG_H_
