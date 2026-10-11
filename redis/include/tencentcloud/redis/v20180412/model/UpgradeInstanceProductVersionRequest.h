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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * UpgradeInstanceProductVersion请求参数结构体
                */
                class UpgradeInstanceProductVersionRequest : public AbstractModel
                {
                public:
                    UpgradeInstanceProductVersionRequest();
                    ~UpgradeInstanceProductVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>变更的目标产品类型。</p><p>枚举值：</p><ul><li>localv2： 通用 II 型</li></ul>
                     * @return TargetProductVersion <p>变更的目标产品类型。</p><p>枚举值：</p><ul><li>localv2： 通用 II 型</li></ul>
                     * 
                     */
                    std::string GetTargetProductVersion() const;

                    /**
                     * 设置<p>变更的目标产品类型。</p><p>枚举值：</p><ul><li>localv2： 通用 II 型</li></ul>
                     * @param _targetProductVersion <p>变更的目标产品类型。</p><p>枚举值：</p><ul><li>localv2： 通用 II 型</li></ul>
                     * 
                     */
                    void SetTargetProductVersion(const std::string& _targetProductVersion);

                    /**
                     * 判断参数 TargetProductVersion 是否已赋值
                     * @return TargetProductVersion 是否已赋值
                     * 
                     */
                    bool TargetProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>切换时间。</p><ul><li>1：维护时间窗切换。</li><li>2：立即切换。</li></ul>
                     * @return SwitchOption <p>切换时间。</p><ul><li>1：维护时间窗切换。</li><li>2：立即切换。</li></ul>
                     * 
                     */
                    int64_t GetSwitchOption() const;

                    /**
                     * 设置<p>切换时间。</p><ul><li>1：维护时间窗切换。</li><li>2：立即切换。</li></ul>
                     * @param _switchOption <p>切换时间。</p><ul><li>1：维护时间窗切换。</li><li>2：立即切换。</li></ul>
                     * 
                     */
                    void SetSwitchOption(const int64_t& _switchOption);

                    /**
                     * 判断参数 SwitchOption 是否已赋值
                     * @return SwitchOption 是否已赋值
                     * 
                     */
                    bool SwitchOptionHasBeenSet() const;

                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****，请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****，请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****，请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****，请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>变更的目标产品类型。</p><p>枚举值：</p><ul><li>localv2： 通用 II 型</li></ul>
                     */
                    std::string m_targetProductVersion;
                    bool m_targetProductVersionHasBeenSet;

                    /**
                     * <p>切换时间。</p><ul><li>1：维护时间窗切换。</li><li>2：立即切换。</li></ul>
                     */
                    int64_t m_switchOption;
                    bool m_switchOptionHasBeenSet;

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****，请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_UPGRADEINSTANCEPRODUCTVERSIONREQUEST_H_
