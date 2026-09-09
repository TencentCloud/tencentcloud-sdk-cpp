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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATECHANNELREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ChannelSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateChannel请求参数结构体
                */
                class CreateChannelRequest : public AbstractModel
                {
                public:
                    CreateChannelRequest();
                    ~CreateChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用业务ID</p>
                     * @return AppId <p>应用业务ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用业务ID</p>
                     * @param _appId <p>应用业务ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>渠道规格（场景/类型/名称/备注/配置，必填）</p>
                     * @return Spec <p>渠道规格（场景/类型/名称/备注/配置，必填）</p>
                     * 
                     */
                    ChannelSpec GetSpec() const;

                    /**
                     * 设置<p>渠道规格（场景/类型/名称/备注/配置，必填）</p>
                     * @param _spec <p>渠道规格（场景/类型/名称/备注/配置，必填）</p>
                     * 
                     */
                    void SetSpec(const ChannelSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * <p>应用业务ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>渠道规格（场景/类型/名称/备注/配置，必填）</p>
                     */
                    ChannelSpec m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATECHANNELREQUEST_H_
