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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_

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
                * 数据加工的资源信息
                */
                class DataTransformResouceInfo : public AbstractModel
                {
                public:
                    DataTransformResouceInfo();
                    ~DataTransformResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志主题ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
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
                     * 获取<p>别名<br>限制：不能包含字符 |。</p>
                     * @return Alias <p>别名<br>限制：不能包含字符 |。</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>别名<br>限制：不能包含字符 |。</p>
                     * @param _alias <p>别名<br>限制：不能包含字符 |。</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>是否是跨账号主题，false不是跨账号主题，true是跨账号主题</p><p>默认值：false</p>
                     * @return IsCrossAccount <p>是否是跨账号主题，false不是跨账号主题，true是跨账号主题</p><p>默认值：false</p>
                     * 
                     */
                    bool GetIsCrossAccount() const;

                    /**
                     * 设置<p>是否是跨账号主题，false不是跨账号主题，true是跨账号主题</p><p>默认值：false</p>
                     * @param _isCrossAccount <p>是否是跨账号主题，false不是跨账号主题，true是跨账号主题</p><p>默认值：false</p>
                     * 
                     */
                    void SetIsCrossAccount(const bool& _isCrossAccount);

                    /**
                     * 判断参数 IsCrossAccount 是否已赋值
                     * @return IsCrossAccount 是否已赋值
                     * 
                     */
                    bool IsCrossAccountHasBeenSet() const;

                    /**
                     * 获取<p>跨账号场景下，被投递账号给投递账号创建的角色ARN值，在被投递账号的角色里查找</p>
                     * @return RoleARN <p>跨账号场景下，被投递账号给投递账号创建的角色ARN值，在被投递账号的角色里查找</p>
                     * 
                     */
                    std::string GetRoleARN() const;

                    /**
                     * 设置<p>跨账号场景下，被投递账号给投递账号创建的角色ARN值，在被投递账号的角色里查找</p>
                     * @param _roleARN <p>跨账号场景下，被投递账号给投递账号创建的角色ARN值，在被投递账号的角色里查找</p>
                     * 
                     */
                    void SetRoleARN(const std::string& _roleARN);

                    /**
                     * 判断参数 RoleARN 是否已赋值
                     * @return RoleARN 是否已赋值
                     * 
                     */
                    bool RoleARNHasBeenSet() const;

                    /**
                     * 获取<p>外部ID值，可以在被投递账号的角色-载体里找到该值</p>
                     * @return ExternalId <p>外部ID值，可以在被投递账号的角色-载体里找到该值</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>外部ID值，可以在被投递账号的角色-载体里找到该值</p>
                     * @param _externalId <p>外部ID值，可以在被投递账号的角色-载体里找到该值</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>topic名称</p>
                     * @return TopicName <p>topic名称</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>topic名称</p>
                     * @param _topicName <p>topic名称</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>日志集的名称</p>
                     * @return LogsetName <p>日志集的名称</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置<p>日志集的名称</p>
                     * @param _logsetName <p>日志集的名称</p>
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>别名<br>限制：不能包含字符 |。</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>是否是跨账号主题，false不是跨账号主题，true是跨账号主题</p><p>默认值：false</p>
                     */
                    bool m_isCrossAccount;
                    bool m_isCrossAccountHasBeenSet;

                    /**
                     * <p>跨账号场景下，被投递账号给投递账号创建的角色ARN值，在被投递账号的角色里查找</p>
                     */
                    std::string m_roleARN;
                    bool m_roleARNHasBeenSet;

                    /**
                     * <p>外部ID值，可以在被投递账号的角色-载体里找到该值</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>topic名称</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>日志集的名称</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DATATRANSFORMRESOUCEINFO_H_
