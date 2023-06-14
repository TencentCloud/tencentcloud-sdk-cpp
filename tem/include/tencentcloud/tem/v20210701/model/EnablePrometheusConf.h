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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEPROMETHEUSCONF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEPROMETHEUSCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 开启prometheus监控配置
                */
                class EnablePrometheusConf : public AbstractModel
                {
                public:
                    EnablePrometheusConf();
                    ~EnablePrometheusConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用开放的监听端口
                     * @return Port 应用开放的监听端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置应用开放的监听端口
                     * @param _port 应用开放的监听端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取业务指标暴露的url path
                     * @return Path 业务指标暴露的url path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置业务指标暴露的url path
                     * @param _path 业务指标暴露的url path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * 应用开放的监听端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 业务指标暴露的url path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_ENABLEPROMETHEUSCONF_H_
