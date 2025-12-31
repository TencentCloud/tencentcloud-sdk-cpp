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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_INTERCONNECTPAIR_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_INTERCONNECTPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AccessInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 接入防火墙的互联集合对
                */
                class InterconnectPair : public AbstractModel
                {
                public:
                    InterconnectPair();
                    ~InterconnectPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集合A
                     * @return GroupA 集合A
                     * 
                     */
                    std::vector<AccessInstanceInfo> GetGroupA() const;

                    /**
                     * 设置集合A
                     * @param _groupA 集合A
                     * 
                     */
                    void SetGroupA(const std::vector<AccessInstanceInfo>& _groupA);

                    /**
                     * 判断参数 GroupA 是否已赋值
                     * @return GroupA 是否已赋值
                     * 
                     */
                    bool GroupAHasBeenSet() const;

                    /**
                     * 获取集合B
                     * @return GroupB 集合B
                     * 
                     */
                    std::vector<AccessInstanceInfo> GetGroupB() const;

                    /**
                     * 设置集合B
                     * @param _groupB 集合B
                     * 
                     */
                    void SetGroupB(const std::vector<AccessInstanceInfo>& _groupB);

                    /**
                     * 判断参数 GroupB 是否已赋值
                     * @return GroupB 是否已赋值
                     * 
                     */
                    bool GroupBHasBeenSet() const;

                    /**
                     * 获取互联模式："CrossConnect": 交叉互联（组A内每个实例和组B内每个实例互联），"FullMesh": 全互联（组A实际和组B内容一致，相当于组内两两互联）
                     * @return InterconnectMode 互联模式："CrossConnect": 交叉互联（组A内每个实例和组B内每个实例互联），"FullMesh": 全互联（组A实际和组B内容一致，相当于组内两两互联）
                     * 
                     */
                    std::string GetInterconnectMode() const;

                    /**
                     * 设置互联模式："CrossConnect": 交叉互联（组A内每个实例和组B内每个实例互联），"FullMesh": 全互联（组A实际和组B内容一致，相当于组内两两互联）
                     * @param _interconnectMode 互联模式："CrossConnect": 交叉互联（组A内每个实例和组B内每个实例互联），"FullMesh": 全互联（组A实际和组B内容一致，相当于组内两两互联）
                     * 
                     */
                    void SetInterconnectMode(const std::string& _interconnectMode);

                    /**
                     * 判断参数 InterconnectMode 是否已赋值
                     * @return InterconnectMode 是否已赋值
                     * 
                     */
                    bool InterconnectModeHasBeenSet() const;

                private:

                    /**
                     * 集合A
                     */
                    std::vector<AccessInstanceInfo> m_groupA;
                    bool m_groupAHasBeenSet;

                    /**
                     * 集合B
                     */
                    std::vector<AccessInstanceInfo> m_groupB;
                    bool m_groupBHasBeenSet;

                    /**
                     * 互联模式："CrossConnect": 交叉互联（组A内每个实例和组B内每个实例互联），"FullMesh": 全互联（组A实际和组B内容一致，相当于组内两两互联）
                     */
                    std::string m_interconnectMode;
                    bool m_interconnectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_INTERCONNECTPAIR_H_
