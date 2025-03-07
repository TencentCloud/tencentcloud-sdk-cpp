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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_AFFINITY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_AFFINITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CommonOption.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 亲和规则
                */
                class Affinity : public AbstractModel
                {
                public:
                    Affinity();
                    ~Affinity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取亲和性范围
                     * @return Scope 亲和性范围
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置亲和性范围
                     * @param _scope 亲和性范围
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取亲和规则的权重
                     * @return Weight 亲和规则的权重
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置亲和规则的权重
                     * @param _weight 亲和规则的权重
                     * 
                     */
                    void SetWeight(const std::string& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Paths -
                     * 
                     */
                    std::vector<CommonOption> GetPaths() const;

                    /**
                     * 设置-
                     * @param _paths -
                     * 
                     */
                    void SetPaths(const std::vector<CommonOption>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * 亲和性范围
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 亲和规则的权重
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CommonOption> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_AFFINITY_H_
