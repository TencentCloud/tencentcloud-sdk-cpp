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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SYNCPROMETHEUSTEMPREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SYNCPROMETHEUSTEMPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusTemplateSyncTarget.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * SyncPrometheusTemp请求参数结构体
                */
                class SyncPrometheusTempRequest : public AbstractModel
                {
                public:
                    SyncPrometheusTempRequest();
                    ~SyncPrometheusTempRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return TemplateId 实例id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置实例id
                     * @param _templateId 实例id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取同步目标
                     * @return Targets 同步目标
                     * 
                     */
                    std::vector<PrometheusTemplateSyncTarget> GetTargets() const;

                    /**
                     * 设置同步目标
                     * @param _targets 同步目标
                     * 
                     */
                    void SetTargets(const std::vector<PrometheusTemplateSyncTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 同步目标
                     */
                    std::vector<PrometheusTemplateSyncTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SYNCPROMETHEUSTEMPREQUEST_H_
