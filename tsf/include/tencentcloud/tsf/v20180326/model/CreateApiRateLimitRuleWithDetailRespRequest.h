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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIRATELIMITRULEWITHDETAILRESPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIRATELIMITRULEWITHDETAILRESPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateApiRateLimitRuleWithDetailResp请求参数结构体
                */
                class CreateApiRateLimitRuleWithDetailRespRequest : public AbstractModel
                {
                public:
                    CreateApiRateLimitRuleWithDetailRespRequest();
                    ~CreateApiRateLimitRuleWithDetailRespRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Api Id
                     * @return ApiId Api Id
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Api Id
                     * @param _apiId Api Id
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取qps值
                     * @return MaxQps qps值
                     * 
                     */
                    uint64_t GetMaxQps() const;

                    /**
                     * 设置qps值
                     * @param _maxQps qps值
                     * 
                     */
                    void SetMaxQps(const uint64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取开启/禁用，enabled/disabled, 不传默认开启
                     * @return UsableStatus 开启/禁用，enabled/disabled, 不传默认开启
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置开启/禁用，enabled/disabled, 不传默认开启
                     * @param _usableStatus 开启/禁用，enabled/disabled, 不传默认开启
                     * 
                     */
                    void SetUsableStatus(const std::string& _usableStatus);

                    /**
                     * 判断参数 UsableStatus 是否已赋值
                     * @return UsableStatus 是否已赋值
                     * 
                     */
                    bool UsableStatusHasBeenSet() const;

                private:

                    /**
                     * Api Id
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * qps值
                     */
                    uint64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 开启/禁用，enabled/disabled, 不传默认开启
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEAPIRATELIMITRULEWITHDETAILRESPREQUEST_H_
