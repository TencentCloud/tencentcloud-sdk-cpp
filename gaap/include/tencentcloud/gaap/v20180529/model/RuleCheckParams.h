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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 7层监听器转发规则健康检查相关参数
                */
                class RuleCheckParams : public AbstractModel
                {
                public:
                    RuleCheckParams();
                    ~RuleCheckParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检查的时间间隔
                     * @return DelayLoop 健康检查的时间间隔
                     * 
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置健康检查的时间间隔
                     * @param _delayLoop 健康检查的时间间隔
                     * 
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     * 
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取健康检查的响应超时时间
                     * @return ConnectTimeout 健康检查的响应超时时间
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置健康检查的响应超时时间
                     * @param _connectTimeout 健康检查的响应超时时间
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取健康检查的检查路径
                     * @return Path 健康检查的检查路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置健康检查的检查路径
                     * @param _path 健康检查的检查路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取健康检查的方法，GET/HEAD
                     * @return Method 健康检查的方法，GET/HEAD
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置健康检查的方法，GET/HEAD
                     * @param _method 健康检查的方法，GET/HEAD
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取确认源站正常的返回码，可选范围[100, 200, 300, 400, 500]
                     * @return StatusCode 确认源站正常的返回码，可选范围[100, 200, 300, 400, 500]
                     * 
                     */
                    std::vector<uint64_t> GetStatusCode() const;

                    /**
                     * 设置确认源站正常的返回码，可选范围[100, 200, 300, 400, 500]
                     * @param _statusCode 确认源站正常的返回码，可选范围[100, 200, 300, 400, 500]
                     * 
                     */
                    void SetStatusCode(const std::vector<uint64_t>& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取健康检查的检查域名。
当调用ModifyRuleAttribute时，不支持修改该参数。
                     * @return Domain 健康检查的检查域名。
当调用ModifyRuleAttribute时，不支持修改该参数。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置健康检查的检查域名。
当调用ModifyRuleAttribute时，不支持修改该参数。
                     * @param _domain 健康检查的检查域名。
当调用ModifyRuleAttribute时，不支持修改该参数。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取源站服务失败统计频率
                     * @return FailedCountInter 源站服务失败统计频率
                     * 
                     */
                    uint64_t GetFailedCountInter() const;

                    /**
                     * 设置源站服务失败统计频率
                     * @param _failedCountInter 源站服务失败统计频率
                     * 
                     */
                    void SetFailedCountInter(const uint64_t& _failedCountInter);

                    /**
                     * 判断参数 FailedCountInter 是否已赋值
                     * @return FailedCountInter 是否已赋值
                     * 
                     */
                    bool FailedCountInterHasBeenSet() const;

                    /**
                     * 获取源站健康性检查阀值，超过该阀值会屏蔽服务
                     * @return FailedThreshold 源站健康性检查阀值，超过该阀值会屏蔽服务
                     * 
                     */
                    uint64_t GetFailedThreshold() const;

                    /**
                     * 设置源站健康性检查阀值，超过该阀值会屏蔽服务
                     * @param _failedThreshold 源站健康性检查阀值，超过该阀值会屏蔽服务
                     * 
                     */
                    void SetFailedThreshold(const uint64_t& _failedThreshold);

                    /**
                     * 判断参数 FailedThreshold 是否已赋值
                     * @return FailedThreshold 是否已赋值
                     * 
                     */
                    bool FailedThresholdHasBeenSet() const;

                    /**
                     * 获取源站健康性检测超出阀值后，屏蔽的时间
                     * @return BlockInter 源站健康性检测超出阀值后，屏蔽的时间
                     * 
                     */
                    uint64_t GetBlockInter() const;

                    /**
                     * 设置源站健康性检测超出阀值后，屏蔽的时间
                     * @param _blockInter 源站健康性检测超出阀值后，屏蔽的时间
                     * 
                     */
                    void SetBlockInter(const uint64_t& _blockInter);

                    /**
                     * 判断参数 BlockInter 是否已赋值
                     * @return BlockInter 是否已赋值
                     * 
                     */
                    bool BlockInterHasBeenSet() const;

                private:

                    /**
                     * 健康检查的时间间隔
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * 健康检查的响应超时时间
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 健康检查的检查路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 健康检查的方法，GET/HEAD
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 确认源站正常的返回码，可选范围[100, 200, 300, 400, 500]
                     */
                    std::vector<uint64_t> m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 健康检查的检查域名。
当调用ModifyRuleAttribute时，不支持修改该参数。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 源站服务失败统计频率
                     */
                    uint64_t m_failedCountInter;
                    bool m_failedCountInterHasBeenSet;

                    /**
                     * 源站健康性检查阀值，超过该阀值会屏蔽服务
                     */
                    uint64_t m_failedThreshold;
                    bool m_failedThresholdHasBeenSet;

                    /**
                     * 源站健康性检测超出阀值后，屏蔽的时间
                     */
                    uint64_t m_blockInter;
                    bool m_blockInterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_
