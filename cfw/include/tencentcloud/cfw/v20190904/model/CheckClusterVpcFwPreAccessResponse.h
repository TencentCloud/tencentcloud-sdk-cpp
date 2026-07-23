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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/ClusterFwPreAccessCheckItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CheckClusterVpcFwPreAccess返回参数结构体
                */
                class CheckClusterVpcFwPreAccessResponse : public AbstractModel
                {
                public:
                    CheckClusterVpcFwPreAccessResponse();
                    ~CheckClusterVpcFwPreAccessResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检查项清单，按执行顺序返回。前端据此渲染检查项骨架，描述文案已按请求的 Language 返回对应语言（中文/英文）。检查通过轮询 DescribeClusterVpcFwSwitchs 接口读取 CheckResult 获取每个阶段的通过/失败状态。</p>
                     * @return CheckItems <p>检查项清单，按执行顺序返回。前端据此渲染检查项骨架，描述文案已按请求的 Language 返回对应语言（中文/英文）。检查通过轮询 DescribeClusterVpcFwSwitchs 接口读取 CheckResult 获取每个阶段的通过/失败状态。</p>
                     * 
                     */
                    std::vector<ClusterFwPreAccessCheckItem> GetCheckItems() const;

                    /**
                     * 判断参数 CheckItems 是否已赋值
                     * @return CheckItems 是否已赋值
                     * 
                     */
                    bool CheckItemsHasBeenSet() const;

                private:

                    /**
                     * <p>检查项清单，按执行顺序返回。前端据此渲染检查项骨架，描述文案已按请求的 Language 返回对应语言（中文/英文）。检查通过轮询 DescribeClusterVpcFwSwitchs 接口读取 CheckResult 获取每个阶段的通过/失败状态。</p>
                     */
                    std::vector<ClusterFwPreAccessCheckItem> m_checkItems;
                    bool m_checkItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CHECKCLUSTERVPCFWPREACCESSRESPONSE_H_
