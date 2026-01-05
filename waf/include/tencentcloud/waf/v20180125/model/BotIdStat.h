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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDSTAT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Bot-Id规则统计信息
                */
                class BotIdStat : public AbstractModel
                {
                public:
                    BotIdStat();
                    ~BotIdStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模式：观察/拦截/自定义
                     * @return Pattern 模式：观察/拦截/自定义
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置模式：观察/拦截/自定义
                     * @param _pattern 模式：观察/拦截/自定义
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取规则总数
                     * @return TotalCount 规则总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置规则总数
                     * @param _totalCount 规则总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取配置观察的规则数
                     * @return MonitorCount 配置观察的规则数
                     * 
                     */
                    int64_t GetMonitorCount() const;

                    /**
                     * 设置配置观察的规则数
                     * @param _monitorCount 配置观察的规则数
                     * 
                     */
                    void SetMonitorCount(const int64_t& _monitorCount);

                    /**
                     * 判断参数 MonitorCount 是否已赋值
                     * @return MonitorCount 是否已赋值
                     * 
                     */
                    bool MonitorCountHasBeenSet() const;

                    /**
                     * 获取配置拦截的规则数
                     * @return InterceptCount 配置拦截的规则数
                     * 
                     */
                    int64_t GetInterceptCount() const;

                    /**
                     * 设置配置拦截的规则数
                     * @param _interceptCount 配置拦截的规则数
                     * 
                     */
                    void SetInterceptCount(const int64_t& _interceptCount);

                    /**
                     * 判断参数 InterceptCount 是否已赋值
                     * @return InterceptCount 是否已赋值
                     * 
                     */
                    bool InterceptCountHasBeenSet() const;

                    /**
                     * 获取配置重定向的规则数
                     * @return RedirectCount 配置重定向的规则数
                     * 
                     */
                    int64_t GetRedirectCount() const;

                    /**
                     * 设置配置重定向的规则数
                     * @param _redirectCount 配置重定向的规则数
                     * 
                     */
                    void SetRedirectCount(const int64_t& _redirectCount);

                    /**
                     * 判断参数 RedirectCount 是否已赋值
                     * @return RedirectCount 是否已赋值
                     * 
                     */
                    bool RedirectCountHasBeenSet() const;

                    /**
                     * 获取配置人机识别的规则数
                     * @return CaptchaCount 配置人机识别的规则数
                     * 
                     */
                    int64_t GetCaptchaCount() const;

                    /**
                     * 设置配置人机识别的规则数
                     * @param _captchaCount 配置人机识别的规则数
                     * 
                     */
                    void SetCaptchaCount(const int64_t& _captchaCount);

                    /**
                     * 判断参数 CaptchaCount 是否已赋值
                     * @return CaptchaCount 是否已赋值
                     * 
                     */
                    bool CaptchaCountHasBeenSet() const;

                    /**
                     * 获取全局防护等级
                     * @return ProtectLevel 全局防护等级
                     * 
                     */
                    std::string GetProtectLevel() const;

                    /**
                     * 设置全局防护等级
                     * @param _protectLevel 全局防护等级
                     * 
                     */
                    void SetProtectLevel(const std::string& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                    /**
                     * 获取全局重定向路径
                     * @return GlobalRedirect 全局重定向路径
                     * 
                     */
                    std::string GetGlobalRedirect() const;

                    /**
                     * 设置全局重定向路径
                     * @param _globalRedirect 全局重定向路径
                     * 
                     */
                    void SetGlobalRedirect(const std::string& _globalRedirect);

                    /**
                     * 判断参数 GlobalRedirect 是否已赋值
                     * @return GlobalRedirect 是否已赋值
                     * 
                     */
                    bool GlobalRedirectHasBeenSet() const;

                    /**
                     * 获取JS挑战的数目
                     * @return JsChallengeCount JS挑战的数目
                     * 
                     */
                    int64_t GetJsChallengeCount() const;

                    /**
                     * 设置JS挑战的数目
                     * @param _jsChallengeCount JS挑战的数目
                     * 
                     */
                    void SetJsChallengeCount(const int64_t& _jsChallengeCount);

                    /**
                     * 判断参数 JsChallengeCount 是否已赋值
                     * @return JsChallengeCount 是否已赋值
                     * 
                     */
                    bool JsChallengeCountHasBeenSet() const;

                private:

                    /**
                     * 模式：观察/拦截/自定义
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 规则总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 配置观察的规则数
                     */
                    int64_t m_monitorCount;
                    bool m_monitorCountHasBeenSet;

                    /**
                     * 配置拦截的规则数
                     */
                    int64_t m_interceptCount;
                    bool m_interceptCountHasBeenSet;

                    /**
                     * 配置重定向的规则数
                     */
                    int64_t m_redirectCount;
                    bool m_redirectCountHasBeenSet;

                    /**
                     * 配置人机识别的规则数
                     */
                    int64_t m_captchaCount;
                    bool m_captchaCountHasBeenSet;

                    /**
                     * 全局防护等级
                     */
                    std::string m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                    /**
                     * 全局重定向路径
                     */
                    std::string m_globalRedirect;
                    bool m_globalRedirectHasBeenSet;

                    /**
                     * JS挑战的数目
                     */
                    int64_t m_jsChallengeCount;
                    bool m_jsChallengeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTIDSTAT_H_
