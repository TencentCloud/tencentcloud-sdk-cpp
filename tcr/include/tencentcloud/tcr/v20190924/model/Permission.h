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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_PERMISSION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_PERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 策略
                */
                class Permission : public AbstractModel
                {
                public:
                    Permission();
                    ~Permission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源路径，目前仅支持Namespace
                     * @return Resource 资源路径，目前仅支持Namespace
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置资源路径，目前仅支持Namespace
                     * @param _resource 资源路径，目前仅支持Namespace
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取动作，目前仅支持：tcr:PushRepository、tcr:PullRepository、tcr:CreateRepository、tcr:CreateHelmChart、tcr:DescribeHelmCharts
                     * @return Actions 动作，目前仅支持：tcr:PushRepository、tcr:PullRepository、tcr:CreateRepository、tcr:CreateHelmChart、tcr:DescribeHelmCharts
                     * 
                     */
                    std::vector<std::string> GetActions() const;

                    /**
                     * 设置动作，目前仅支持：tcr:PushRepository、tcr:PullRepository、tcr:CreateRepository、tcr:CreateHelmChart、tcr:DescribeHelmCharts
                     * @param _actions 动作，目前仅支持：tcr:PushRepository、tcr:PullRepository、tcr:CreateRepository、tcr:CreateHelmChart、tcr:DescribeHelmCharts
                     * 
                     */
                    void SetActions(const std::vector<std::string>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * 资源路径，目前仅支持Namespace
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 动作，目前仅支持：tcr:PushRepository、tcr:PullRepository、tcr:CreateRepository、tcr:CreateHelmChart、tcr:DescribeHelmCharts
                     */
                    std::vector<std::string> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_PERMISSION_H_
