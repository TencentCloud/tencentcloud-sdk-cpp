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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_BINDRESOURCERESULT_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_BINDRESOURCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/BindResourceRegionResult.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 绑定资源结果
                */
                class BindResourceResult : public AbstractModel
                {
                public:
                    BindResourceResult();
                    ~BindResourceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）
                     * @return ResourceType 资源类型：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）
                     * @param _resourceType 资源类型：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取绑定资源地域结果
                     * @return BindResourceRegionResult 绑定资源地域结果
                     * 
                     */
                    std::vector<BindResourceRegionResult> GetBindResourceRegionResult() const;

                    /**
                     * 设置绑定资源地域结果
                     * @param _bindResourceRegionResult 绑定资源地域结果
                     * 
                     */
                    void SetBindResourceRegionResult(const std::vector<BindResourceRegionResult>& _bindResourceRegionResult);

                    /**
                     * 判断参数 BindResourceRegionResult 是否已赋值
                     * @return BindResourceRegionResult 是否已赋值
                     * 
                     */
                    bool BindResourceRegionResultHasBeenSet() const;

                private:

                    /**
                     * 资源类型：clb、cdn、waf、live、vod、ddos、tke、apigateway、tcb、teo（edgeOne）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 绑定资源地域结果
                     */
                    std::vector<BindResourceRegionResult> m_bindResourceRegionResult;
                    bool m_bindResourceRegionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_BINDRESOURCERESULT_H_
