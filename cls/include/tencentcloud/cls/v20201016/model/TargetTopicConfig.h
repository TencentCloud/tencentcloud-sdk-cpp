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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 目标主题配置
                */
                class TargetTopicConfig : public AbstractModel
                {
                public:
                    TargetTopicConfig();
                    ~TargetTopicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标账号类型。</p><p>枚举值：</p><ul><li>1： 当前主账号</li><li>2： 其他主账号</li></ul>
                     * @return AccountType <p>目标账号类型。</p><p>枚举值：</p><ul><li>1： 当前主账号</li><li>2： 其他主账号</li></ul>
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置<p>目标账号类型。</p><p>枚举值：</p><ul><li>1： 当前主账号</li><li>2： 其他主账号</li></ul>
                     * @param _accountType <p>目标账号类型。</p><p>枚举值：</p><ul><li>1： 当前主账号</li><li>2： 其他主账号</li></ul>
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>目标地域</p><p>参数格式：ap-guangzhou</p>
                     * @return Region <p>目标地域</p><p>参数格式：ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>目标地域</p><p>参数格式：ap-guangzhou</p>
                     * @param _region <p>目标地域</p><p>参数格式：ap-guangzhou</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>目标日志集id</p>
                     * @return LogsetId <p>目标日志集id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>目标日志集id</p>
                     * @param _logsetId <p>目标日志集id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>目标日志主题id</p>
                     * @return TopicId <p>目标日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>目标日志主题id</p>
                     * @param _topicId <p>目标日志主题id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>角色ARN</p><p>AccountType=2时必填</p>
                     * @return RoleArn <p>角色ARN</p><p>AccountType=2时必填</p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>角色ARN</p><p>AccountType=2时必填</p>
                     * @param _roleArn <p>角色ARN</p><p>AccountType=2时必填</p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>外部ID</p><p>AccountType=2时必填</p>
                     * @return ExternalId <p>外部ID</p><p>AccountType=2时必填</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>外部ID</p><p>AccountType=2时必填</p>
                     * @param _externalId <p>外部ID</p><p>AccountType=2时必填</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                private:

                    /**
                     * <p>目标账号类型。</p><p>枚举值：</p><ul><li>1： 当前主账号</li><li>2： 其他主账号</li></ul>
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>目标地域</p><p>参数格式：ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>目标日志集id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>目标日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>角色ARN</p><p>AccountType=2时必填</p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>外部ID</p><p>AccountType=2时必填</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TARGETTOPICCONFIG_H_
