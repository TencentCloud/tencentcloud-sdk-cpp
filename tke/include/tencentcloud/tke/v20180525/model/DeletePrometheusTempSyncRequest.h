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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_

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
                * DeletePrometheusTempSync请求参数结构体
                */
                class DeletePrometheusTempSyncRequest : public AbstractModel
                {
                public:
                    DeletePrometheusTempSyncRequest();
                    ~DeletePrometheusTempSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
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
                     * 获取取消同步的对象列表
                     * @return Targets 取消同步的对象列表
                     * 
                     */
                    std::vector<PrometheusTemplateSyncTarget> GetTargets() const;

                    /**
                     * 设置取消同步的对象列表
                     * @param _targets 取消同步的对象列表
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
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 取消同步的对象列表
                     */
                    std::vector<PrometheusTemplateSyncTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_
