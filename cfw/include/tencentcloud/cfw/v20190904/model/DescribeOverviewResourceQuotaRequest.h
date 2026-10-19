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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTAREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeOverviewResourceQuota请求参数结构体
                */
                class DescribeOverviewResourceQuotaRequest : public AbstractModel
                {
                public:
                    DescribeOverviewResourceQuotaRequest();
                    ~DescribeOverviewResourceQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回视图范围</p><p>默认值：不传该参数时，默认返回完整的资源与配额详情数据</p>
                     * @return Scene <p>返回视图范围</p><p>默认值：不传该参数时，默认返回完整的资源与配额详情数据</p>
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置<p>返回视图范围</p><p>默认值：不传该参数时，默认返回完整的资源与配额详情数据</p>
                     * @param _scene <p>返回视图范围</p><p>默认值：不传该参数时，默认返回完整的资源与配额详情数据</p>
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                private:

                    /**
                     * <p>返回视图范围</p><p>默认值：不传该参数时，默认返回完整的资源与配额详情数据</p>
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTAREQUEST_H_
