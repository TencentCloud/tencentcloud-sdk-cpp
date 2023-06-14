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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞数量按等级分布统计结果实体
                */
                class VulLevelInfo : public AbstractModel
                {
                public:
                    VulLevelInfo();
                    ~VulLevelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取// 危害等级：1-低危；2-中危；3-高危；4-严重
                     * @return VulLevel // 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置// 危害等级：1-低危；2-中危；3-高危；4-严重
                     * @param _vulLevel // 危害等级：1-低危；2-中危；3-高危；4-严重
                     * 
                     */
                    void SetVulLevel(const uint64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Count 数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置数量
                     * @param _count 数量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * // 危害等级：1-低危；2-中危；3-高危；4-严重
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELINFO_H_
