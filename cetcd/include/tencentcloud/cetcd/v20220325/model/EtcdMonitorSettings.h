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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMONITORSETTINGS_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMONITORSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/PrometheusCreationParam.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd监控设置
                */
                class EtcdMonitorSettings : public AbstractModel
                {
                public:
                    EtcdMonitorSettings();
                    ~EtcdMonitorSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prometheus创建参数
                     * @return PrometheusCreationParam Prometheus创建参数
                     * 
                     */
                    PrometheusCreationParam GetPrometheusCreationParam() const;

                    /**
                     * 设置Prometheus创建参数
                     * @param _prometheusCreationParam Prometheus创建参数
                     * 
                     */
                    void SetPrometheusCreationParam(const PrometheusCreationParam& _prometheusCreationParam);

                    /**
                     * 判断参数 PrometheusCreationParam 是否已赋值
                     * @return PrometheusCreationParam 是否已赋值
                     * 
                     */
                    bool PrometheusCreationParamHasBeenSet() const;

                    /**
                     * 获取Prometheus Id
                     * @return ExistedPrometheusInstanceId Prometheus Id
                     * 
                     */
                    std::string GetExistedPrometheusInstanceId() const;

                    /**
                     * 设置Prometheus Id
                     * @param _existedPrometheusInstanceId Prometheus Id
                     * 
                     */
                    void SetExistedPrometheusInstanceId(const std::string& _existedPrometheusInstanceId);

                    /**
                     * 判断参数 ExistedPrometheusInstanceId 是否已赋值
                     * @return ExistedPrometheusInstanceId 是否已赋值
                     * 
                     */
                    bool ExistedPrometheusInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Prometheus创建参数
                     */
                    PrometheusCreationParam m_prometheusCreationParam;
                    bool m_prometheusCreationParamHasBeenSet;

                    /**
                     * Prometheus Id
                     */
                    std::string m_existedPrometheusInstanceId;
                    bool m_existedPrometheusInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDMONITORSETTINGS_H_
