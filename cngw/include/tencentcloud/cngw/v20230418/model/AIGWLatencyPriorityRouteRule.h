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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLATENCYPRIORITYROUTERULE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLATENCYPRIORITYROUTERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关延迟优先路由模型服务
                */
                class AIGWLatencyPriorityRouteRule : public AbstractModel
                {
                public:
                    AIGWLatencyPriorityRouteRule();
                    ~AIGWLatencyPriorityRouteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型服务id</p>
                     * @return ModelServiceId <p>模型服务id</p>
                     * 
                     */
                    std::string GetModelServiceId() const;

                    /**
                     * 设置<p>模型服务id</p>
                     * @param _modelServiceId <p>模型服务id</p>
                     * 
                     */
                    void SetModelServiceId(const std::string& _modelServiceId);

                    /**
                     * 判断参数 ModelServiceId 是否已赋值
                     * @return ModelServiceId 是否已赋值
                     * 
                     */
                    bool ModelServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>模型服务id</p>
                     */
                    std::string m_modelServiceId;
                    bool m_modelServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLATENCYPRIORITYROUTERULE_H_
