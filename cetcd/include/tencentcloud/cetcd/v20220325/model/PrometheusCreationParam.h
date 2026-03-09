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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_PROMETHEUSCREATIONPARAM_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_PROMETHEUSCREATIONPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * Prometheus创建参数
                */
                class PrometheusCreationParam : public AbstractModel
                {
                public:
                    PrometheusCreationParam();
                    ~PrometheusCreationParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取保存时长，只支持天单位
12d = 12天
                     * @return DataRetention 保存时长，只支持天单位
12d = 12天
                     * 
                     */
                    int64_t GetDataRetention() const;

                    /**
                     * 设置保存时长，只支持天单位
12d = 12天
                     * @param _dataRetention 保存时长，只支持天单位
12d = 12天
                     * 
                     */
                    void SetDataRetention(const int64_t& _dataRetention);

                    /**
                     * 判断参数 DataRetention 是否已赋值
                     * @return DataRetention 是否已赋值
                     * 
                     */
                    bool DataRetentionHasBeenSet() const;

                    /**
                     * 获取grafana用户名
                     * @return GrafanaUserName grafana用户名
                     * 
                     */
                    std::string GetGrafanaUserName() const;

                    /**
                     * 设置grafana用户名
                     * @param _grafanaUserName grafana用户名
                     * 
                     */
                    void SetGrafanaUserName(const std::string& _grafanaUserName);

                    /**
                     * 判断参数 GrafanaUserName 是否已赋值
                     * @return GrafanaUserName 是否已赋值
                     * 
                     */
                    bool GrafanaUserNameHasBeenSet() const;

                    /**
                     * 获取grafana密码
                     * @return GrafanaPassword grafana密码
                     * 
                     */
                    std::string GetGrafanaPassword() const;

                    /**
                     * 设置grafana密码
                     * @param _grafanaPassword grafana密码
                     * 
                     */
                    void SetGrafanaPassword(const std::string& _grafanaPassword);

                    /**
                     * 判断参数 GrafanaPassword 是否已赋值
                     * @return GrafanaPassword 是否已赋值
                     * 
                     */
                    bool GrafanaPasswordHasBeenSet() const;

                private:

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 保存时长，只支持天单位
12d = 12天
                     */
                    int64_t m_dataRetention;
                    bool m_dataRetentionHasBeenSet;

                    /**
                     * grafana用户名
                     */
                    std::string m_grafanaUserName;
                    bool m_grafanaUserNameHasBeenSet;

                    /**
                     * grafana密码
                     */
                    std::string m_grafanaPassword;
                    bool m_grafanaPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_PROMETHEUSCREATIONPARAM_H_
