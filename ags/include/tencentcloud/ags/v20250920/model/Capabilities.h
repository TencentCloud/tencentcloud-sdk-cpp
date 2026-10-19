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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CAPABILITIES_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CAPABILITIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 可以添加到正在运行的容器中或从中移除的 POSIX POSIX capabilities。
                */
                class Capabilities : public AbstractModel
                {
                public:
                    Capabilities();
                    ~Capabilities() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>要添加的capabilities</p><p>取值参考：[&quot;SYS_ADMIN&quot;]</p>
                     * @return Add <p>要添加的capabilities</p><p>取值参考：[&quot;SYS_ADMIN&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetAdd() const;

                    /**
                     * 设置<p>要添加的capabilities</p><p>取值参考：[&quot;SYS_ADMIN&quot;]</p>
                     * @param _add <p>要添加的capabilities</p><p>取值参考：[&quot;SYS_ADMIN&quot;]</p>
                     * 
                     */
                    void SetAdd(const std::vector<std::string>& _add);

                    /**
                     * 判断参数 Add 是否已赋值
                     * @return Add 是否已赋值
                     * 
                     */
                    bool AddHasBeenSet() const;

                    /**
                     * 获取<p>要移除的capabilities</p><p>取值参考：[&quot;ALL&quot;]</p>
                     * @return Drop <p>要移除的capabilities</p><p>取值参考：[&quot;ALL&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetDrop() const;

                    /**
                     * 设置<p>要移除的capabilities</p><p>取值参考：[&quot;ALL&quot;]</p>
                     * @param _drop <p>要移除的capabilities</p><p>取值参考：[&quot;ALL&quot;]</p>
                     * 
                     */
                    void SetDrop(const std::vector<std::string>& _drop);

                    /**
                     * 判断参数 Drop 是否已赋值
                     * @return Drop 是否已赋值
                     * 
                     */
                    bool DropHasBeenSet() const;

                private:

                    /**
                     * <p>要添加的capabilities</p><p>取值参考：[&quot;SYS_ADMIN&quot;]</p>
                     */
                    std::vector<std::string> m_add;
                    bool m_addHasBeenSet;

                    /**
                     * <p>要移除的capabilities</p><p>取值参考：[&quot;ALL&quot;]</p>
                     */
                    std::vector<std::string> m_drop;
                    bool m_dropHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CAPABILITIES_H_
