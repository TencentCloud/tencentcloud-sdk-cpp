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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_FAULTTOLERANCEDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_FAULTTOLERANCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * API Key容错策略配置
                */
                class FaultToleranceDTO : public AbstractModel
                {
                public:
                    FaultToleranceDTO();
                    ~FaultToleranceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用API Key容错配置</p>
                     * @return Enabled <p>是否启用API Key容错配置</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用API Key容错配置</p>
                     * @param _enabled <p>是否启用API Key容错配置</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>异常判定状态码，固定3位数字或字母</p>
                     * @return ErrorCodes <p>异常判定状态码，固定3位数字或字母</p>
                     * 
                     */
                    std::vector<std::string> GetErrorCodes() const;

                    /**
                     * 设置<p>异常判定状态码，固定3位数字或字母</p>
                     * @param _errorCodes <p>异常判定状态码，固定3位数字或字母</p>
                     * 
                     */
                    void SetErrorCodes(const std::vector<std::string>& _errorCodes);

                    /**
                     * 判断参数 ErrorCodes 是否已赋值
                     * @return ErrorCodes 是否已赋值
                     * 
                     */
                    bool ErrorCodesHasBeenSet() const;

                    /**
                     * 获取<p>连续异常次数</p><p>单位：次</p>
                     * @return ErrorCount <p>连续异常次数</p><p>单位：次</p>
                     * 
                     */
                    int64_t GetErrorCount() const;

                    /**
                     * 设置<p>连续异常次数</p><p>单位：次</p>
                     * @param _errorCount <p>连续异常次数</p><p>单位：次</p>
                     * 
                     */
                    void SetErrorCount(const int64_t& _errorCount);

                    /**
                     * 判断参数 ErrorCount 是否已赋值
                     * @return ErrorCount 是否已赋值
                     * 
                     */
                    bool ErrorCountHasBeenSet() const;

                    /**
                     * 获取<p>隔离时长</p><p>单位：秒</p>
                     * @return IsolationTime <p>隔离时长</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetIsolationTime() const;

                    /**
                     * 设置<p>隔离时长</p><p>单位：秒</p>
                     * @param _isolationTime <p>隔离时长</p><p>单位：秒</p>
                     * 
                     */
                    void SetIsolationTime(const int64_t& _isolationTime);

                    /**
                     * 判断参数 IsolationTime 是否已赋值
                     * @return IsolationTime 是否已赋值
                     * 
                     */
                    bool IsolationTimeHasBeenSet() const;

                    /**
                     * 获取<p>最多切换次数</p><p>置0为不开启自动切换</p>
                     * @return MaxSwitchCount <p>最多切换次数</p><p>置0为不开启自动切换</p>
                     * 
                     */
                    int64_t GetMaxSwitchCount() const;

                    /**
                     * 设置<p>最多切换次数</p><p>置0为不开启自动切换</p>
                     * @param _maxSwitchCount <p>最多切换次数</p><p>置0为不开启自动切换</p>
                     * 
                     */
                    void SetMaxSwitchCount(const int64_t& _maxSwitchCount);

                    /**
                     * 判断参数 MaxSwitchCount 是否已赋值
                     * @return MaxSwitchCount 是否已赋值
                     * 
                     */
                    bool MaxSwitchCountHasBeenSet() const;

                    /**
                     * 获取<p>切换总时间预算</p><p>单位：秒</p>
                     * @return SwitchTimeout <p>切换总时间预算</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetSwitchTimeout() const;

                    /**
                     * 设置<p>切换总时间预算</p><p>单位：秒</p>
                     * @param _switchTimeout <p>切换总时间预算</p><p>单位：秒</p>
                     * 
                     */
                    void SetSwitchTimeout(const int64_t& _switchTimeout);

                    /**
                     * 判断参数 SwitchTimeout 是否已赋值
                     * @return SwitchTimeout 是否已赋值
                     * 
                     */
                    bool SwitchTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用API Key容错配置</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>异常判定状态码，固定3位数字或字母</p>
                     */
                    std::vector<std::string> m_errorCodes;
                    bool m_errorCodesHasBeenSet;

                    /**
                     * <p>连续异常次数</p><p>单位：次</p>
                     */
                    int64_t m_errorCount;
                    bool m_errorCountHasBeenSet;

                    /**
                     * <p>隔离时长</p><p>单位：秒</p>
                     */
                    int64_t m_isolationTime;
                    bool m_isolationTimeHasBeenSet;

                    /**
                     * <p>最多切换次数</p><p>置0为不开启自动切换</p>
                     */
                    int64_t m_maxSwitchCount;
                    bool m_maxSwitchCountHasBeenSet;

                    /**
                     * <p>切换总时间预算</p><p>单位：秒</p>
                     */
                    int64_t m_switchTimeout;
                    bool m_switchTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_FAULTTOLERANCEDTO_H_
