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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_WAFTHREATENINTELLIGENCEDETAILS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_WAFTHREATENINTELLIGENCEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 当前WAF威胁情报封禁模块详情
                */
                class WafThreatenIntelligenceDetails : public AbstractModel
                {
                public:
                    WafThreatenIntelligenceDetails();
                    ~WafThreatenIntelligenceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封禁属性标签
                     * @return Tags 封禁属性标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置封禁属性标签
                     * @param _tags 封禁属性标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取封禁模组启用状态
                     * @return DefenseStatus 封禁模组启用状态
                     * 
                     */
                    int64_t GetDefenseStatus() const;

                    /**
                     * 设置封禁模组启用状态
                     * @param _defenseStatus 封禁模组启用状态
                     * 
                     */
                    void SetDefenseStatus(const int64_t& _defenseStatus);

                    /**
                     * 判断参数 DefenseStatus 是否已赋值
                     * @return DefenseStatus 是否已赋值
                     * 
                     */
                    bool DefenseStatusHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return LastUpdateTime 最后更新时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _lastUpdateTime 最后更新时间
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 封禁属性标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 封禁模组启用状态
                     */
                    int64_t m_defenseStatus;
                    bool m_defenseStatusHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_WAFTHREATENINTELLIGENCEDETAILS_H_
