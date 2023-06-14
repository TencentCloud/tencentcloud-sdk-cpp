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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERBZCONF_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERBZCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 用于创建负载均衡的个性化配置。
                */
                class CreateLoadBalancerBzConf : public AbstractModel
                {
                public:
                    CreateLoadBalancerBzConf();
                    ~CreateLoadBalancerBzConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按月/按小时计费。
                     * @return BzPayMode 按月/按小时计费。
                     * 
                     */
                    std::string GetBzPayMode() const;

                    /**
                     * 设置按月/按小时计费。
                     * @param _bzPayMode 按月/按小时计费。
                     * 
                     */
                    void SetBzPayMode(const std::string& _bzPayMode);

                    /**
                     * 判断参数 BzPayMode 是否已赋值
                     * @return BzPayMode 是否已赋值
                     * 
                     */
                    bool BzPayModeHasBeenSet() const;

                    /**
                     * 获取四层可选按带宽，连接数衡量。
                     * @return BzL4Metrics 四层可选按带宽，连接数衡量。
                     * 
                     */
                    std::string GetBzL4Metrics() const;

                    /**
                     * 设置四层可选按带宽，连接数衡量。
                     * @param _bzL4Metrics 四层可选按带宽，连接数衡量。
                     * 
                     */
                    void SetBzL4Metrics(const std::string& _bzL4Metrics);

                    /**
                     * 判断参数 BzL4Metrics 是否已赋值
                     * @return BzL4Metrics 是否已赋值
                     * 
                     */
                    bool BzL4MetricsHasBeenSet() const;

                    /**
                     * 获取七层可选按qps衡量。
                     * @return BzL7Metrics 七层可选按qps衡量。
                     * 
                     */
                    std::string GetBzL7Metrics() const;

                    /**
                     * 设置七层可选按qps衡量。
                     * @param _bzL7Metrics 七层可选按qps衡量。
                     * 
                     */
                    void SetBzL7Metrics(const std::string& _bzL7Metrics);

                    /**
                     * 判断参数 BzL7Metrics 是否已赋值
                     * @return BzL7Metrics 是否已赋值
                     * 
                     */
                    bool BzL7MetricsHasBeenSet() const;

                private:

                    /**
                     * 按月/按小时计费。
                     */
                    std::string m_bzPayMode;
                    bool m_bzPayModeHasBeenSet;

                    /**
                     * 四层可选按带宽，连接数衡量。
                     */
                    std::string m_bzL4Metrics;
                    bool m_bzL4MetricsHasBeenSet;

                    /**
                     * 七层可选按qps衡量。
                     */
                    std::string m_bzL7Metrics;
                    bool m_bzL7MetricsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATELOADBALANCERBZCONF_H_
