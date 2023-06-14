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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYLIFECYCLERULESREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYLIFECYCLERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/LifeCycleRule.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * ModifyLifeCycleRules请求参数结构体
                */
                class ModifyLifeCycleRulesRequest : public AbstractModel
                {
                public:
                    ModifyLifeCycleRulesRequest();
                    ~ModifyLifeCycleRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个生命周期规则，上限为10
                     * @return LifeCycleRules 多个生命周期规则，上限为10
                     * 
                     */
                    std::vector<LifeCycleRule> GetLifeCycleRules() const;

                    /**
                     * 设置多个生命周期规则，上限为10
                     * @param _lifeCycleRules 多个生命周期规则，上限为10
                     * 
                     */
                    void SetLifeCycleRules(const std::vector<LifeCycleRule>& _lifeCycleRules);

                    /**
                     * 判断参数 LifeCycleRules 是否已赋值
                     * @return LifeCycleRules 是否已赋值
                     * 
                     */
                    bool LifeCycleRulesHasBeenSet() const;

                private:

                    /**
                     * 多个生命周期规则，上限为10
                     */
                    std::vector<LifeCycleRule> m_lifeCycleRules;
                    bool m_lifeCycleRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_MODIFYLIFECYCLERULESREQUEST_H_
