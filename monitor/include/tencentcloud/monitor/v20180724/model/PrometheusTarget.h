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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTARGET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * prometheus一个抓取目标的信息
                */
                class PrometheusTarget : public AbstractModel
                {
                public:
                    PrometheusTarget();
                    ~PrometheusTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取抓取目标的URL
                     * @return Url 抓取目标的URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置抓取目标的URL
                     * @param _url 抓取目标的URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * @return State target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * @param _state target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 抓取目标的URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * target当前状态,当前支持
up = 健康
down = 不健康
unknown = 未知
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSTARGET_H_
