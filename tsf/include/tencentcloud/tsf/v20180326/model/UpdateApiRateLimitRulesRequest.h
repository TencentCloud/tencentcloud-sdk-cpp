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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIRATELIMITRULESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIRATELIMITRULESREQUEST_H_

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
                * UpdateApiRateLimitRules请求参数结构体
                */
                class UpdateApiRateLimitRulesRequest : public AbstractModel
                {
                public:
                    UpdateApiRateLimitRulesRequest();
                    ~UpdateApiRateLimitRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取API ID 列表
                     * @return ApiIds API ID 列表
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置API ID 列表
                     * @param _apiIds API ID 列表
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                    /**
                     * 获取开启/禁用，enabled/disabled
                     * @return UsableStatus 开启/禁用，enabled/disabled
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置开启/禁用，enabled/disabled
                     * @param _usableStatus 开启/禁用，enabled/disabled
                     * 
                     */
                    void SetUsableStatus(const std::string& _usableStatus);

                    /**
                     * 判断参数 UsableStatus 是否已赋值
                     * @return UsableStatus 是否已赋值
                     * 
                     */
                    bool UsableStatusHasBeenSet() const;

                    /**
                     * 获取QPS值。开启限流规则时，必填
                     * @return MaxQps QPS值。开启限流规则时，必填
                     * 
                     */
                    int64_t GetMaxQps() const;

                    /**
                     * 设置QPS值。开启限流规则时，必填
                     * @param _maxQps QPS值。开启限流规则时，必填
                     * 
                     */
                    void SetMaxQps(const int64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取旧格式 method 与 path 分开，新格式 path-<Method>,如 /checkToken-GET，默认为新格式
                     * @return UsePathAndMethodFormat 旧格式 method 与 path 分开，新格式 path-<Method>,如 /checkToken-GET，默认为新格式
                     * 
                     */
                    bool GetUsePathAndMethodFormat() const;

                    /**
                     * 设置旧格式 method 与 path 分开，新格式 path-<Method>,如 /checkToken-GET，默认为新格式
                     * @param _usePathAndMethodFormat 旧格式 method 与 path 分开，新格式 path-<Method>,如 /checkToken-GET，默认为新格式
                     * 
                     */
                    void SetUsePathAndMethodFormat(const bool& _usePathAndMethodFormat);

                    /**
                     * 判断参数 UsePathAndMethodFormat 是否已赋值
                     * @return UsePathAndMethodFormat 是否已赋值
                     * 
                     */
                    bool UsePathAndMethodFormatHasBeenSet() const;

                private:

                    /**
                     * API ID 列表
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                    /**
                     * 开启/禁用，enabled/disabled
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                    /**
                     * QPS值。开启限流规则时，必填
                     */
                    int64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 旧格式 method 与 path 分开，新格式 path-<Method>,如 /checkToken-GET，默认为新格式
                     */
                    bool m_usePathAndMethodFormat;
                    bool m_usePathAndMethodFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEAPIRATELIMITRULESREQUEST_H_
