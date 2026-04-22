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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 容器额外配置
                */
                class ContainerExtraConf : public AbstractModel
                {
                public:
                    ContainerExtraConf();
                    ~ContainerExtraConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计算作业代理访问类型，如Spark作业和RayCluster UI；不填写默认使用Internal</p><p>枚举值：</p><ul><li>Internal： 使用内网LB代理访问</li><li>Public： 使用公网LB代理访问</li><li>None： 不创建LB代理访问</li></ul>
                     * @return JobAccessProxyType <p>计算作业代理访问类型，如Spark作业和RayCluster UI；不填写默认使用Internal</p><p>枚举值：</p><ul><li>Internal： 使用内网LB代理访问</li><li>Public： 使用公网LB代理访问</li><li>None： 不创建LB代理访问</li></ul>
                     * 
                     */
                    std::string GetJobAccessProxyType() const;

                    /**
                     * 设置<p>计算作业代理访问类型，如Spark作业和RayCluster UI；不填写默认使用Internal</p><p>枚举值：</p><ul><li>Internal： 使用内网LB代理访问</li><li>Public： 使用公网LB代理访问</li><li>None： 不创建LB代理访问</li></ul>
                     * @param _jobAccessProxyType <p>计算作业代理访问类型，如Spark作业和RayCluster UI；不填写默认使用Internal</p><p>枚举值：</p><ul><li>Internal： 使用内网LB代理访问</li><li>Public： 使用公网LB代理访问</li><li>None： 不创建LB代理访问</li></ul>
                     * 
                     */
                    void SetJobAccessProxyType(const std::string& _jobAccessProxyType);

                    /**
                     * 判断参数 JobAccessProxyType 是否已赋值
                     * @return JobAccessProxyType 是否已赋值
                     * 
                     */
                    bool JobAccessProxyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>计算作业代理访问类型，如Spark作业和RayCluster UI；不填写默认使用Internal</p><p>枚举值：</p><ul><li>Internal： 使用内网LB代理访问</li><li>Public： 使用公网LB代理访问</li><li>None： 不创建LB代理访问</li></ul>
                     */
                    std::string m_jobAccessProxyType;
                    bool m_jobAccessProxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CONTAINEREXTRACONF_H_
