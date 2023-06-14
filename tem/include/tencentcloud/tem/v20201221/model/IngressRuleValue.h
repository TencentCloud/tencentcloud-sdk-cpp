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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEVALUE_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/IngressRulePath.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Ingress Rule Value 配置
                */
                class IngressRuleValue : public AbstractModel
                {
                public:
                    IngressRuleValue();
                    ~IngressRuleValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取rule 整体配置
                     * @return Paths rule 整体配置
                     * 
                     */
                    std::vector<IngressRulePath> GetPaths() const;

                    /**
                     * 设置rule 整体配置
                     * @param _paths rule 整体配置
                     * 
                     */
                    void SetPaths(const std::vector<IngressRulePath>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * rule 整体配置
                     */
                    std::vector<IngressRulePath> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEVALUE_H_
