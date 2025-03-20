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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * AclRule列表接口出参
                */
                class AclRule : public AbstractModel
                {
                public:
                    AclRule();
                    ~AclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ACL规则名
                     * @return RuleName ACL规则名
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置ACL规则名
                     * @param _ruleName ACL规则名
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ACL规则匹配类型，目前只支持前缀匹配，枚举值列表：PREFIXED
                     * @return PatternType ACL规则匹配类型，目前只支持前缀匹配，枚举值列表：PREFIXED
                     * 
                     */
                    std::string GetPatternType() const;

                    /**
                     * 设置ACL规则匹配类型，目前只支持前缀匹配，枚举值列表：PREFIXED
                     * @param _patternType ACL规则匹配类型，目前只支持前缀匹配，枚举值列表：PREFIXED
                     * 
                     */
                    void SetPatternType(const std::string& _patternType);

                    /**
                     * 判断参数 PatternType 是否已赋值
                     * @return PatternType 是否已赋值
                     * 
                     */
                    bool PatternTypeHasBeenSet() const;

                    /**
                     * 获取表示前缀匹配的前缀的值
                     * @return Pattern 表示前缀匹配的前缀的值
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置表示前缀匹配的前缀的值
                     * @param _pattern 表示前缀匹配的前缀的值
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
                     * 获取Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * @return ResourceType Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     * @param _resourceType Acl资源类型,目前只支持Topic,枚举值列表：Topic
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
                     * 获取该规则所包含的ACL信息
                     * @return AclList 该规则所包含的ACL信息
                     * 
                     */
                    std::string GetAclList() const;

                    /**
                     * 设置该规则所包含的ACL信息
                     * @param _aclList 该规则所包含的ACL信息
                     * 
                     */
                    void SetAclList(const std::string& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     * 
                     */
                    bool AclListHasBeenSet() const;

                    /**
                     * 获取规则所创建的时间
                     * @return CreateTimeStamp 规则所创建的时间
                     * 
                     */
                    std::string GetCreateTimeStamp() const;

                    /**
                     * 设置规则所创建的时间
                     * @param _createTimeStamp 规则所创建的时间
                     * 
                     */
                    void SetCreateTimeStamp(const std::string& _createTimeStamp);

                    /**
                     * 判断参数 CreateTimeStamp 是否已赋值
                     * @return CreateTimeStamp 是否已赋值
                     * 
                     */
                    bool CreateTimeStampHasBeenSet() const;

                    /**
                     * 获取预设ACL规则是否应用到新增的topic中
                     * @return IsApplied 预设ACL规则是否应用到新增的topic中
                     * 
                     */
                    int64_t GetIsApplied() const;

                    /**
                     * 设置预设ACL规则是否应用到新增的topic中
                     * @param _isApplied 预设ACL规则是否应用到新增的topic中
                     * 
                     */
                    void SetIsApplied(const int64_t& _isApplied);

                    /**
                     * 判断参数 IsApplied 是否已赋值
                     * @return IsApplied 是否已赋值
                     * 
                     */
                    bool IsAppliedHasBeenSet() const;

                    /**
                     * 获取规则更新时间
                     * @return UpdateTimeStamp 规则更新时间
                     * 
                     */
                    std::string GetUpdateTimeStamp() const;

                    /**
                     * 设置规则更新时间
                     * @param _updateTimeStamp 规则更新时间
                     * 
                     */
                    void SetUpdateTimeStamp(const std::string& _updateTimeStamp);

                    /**
                     * 判断参数 UpdateTimeStamp 是否已赋值
                     * @return UpdateTimeStamp 是否已赋值
                     * 
                     */
                    bool UpdateTimeStampHasBeenSet() const;

                    /**
                     * 获取规则的备注
                     * @return Comment 规则的备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置规则的备注
                     * @param _comment 规则的备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取其中一个显示的对应的TopicName
                     * @return TopicName 其中一个显示的对应的TopicName
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置其中一个显示的对应的TopicName
                     * @param _topicName 其中一个显示的对应的TopicName
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
                     * 获取应用该ACL规则的Topic数
                     * @return TopicCount 应用该ACL规则的Topic数
                     * 
                     */
                    int64_t GetTopicCount() const;

                    /**
                     * 设置应用该ACL规则的Topic数
                     * @param _topicCount 应用该ACL规则的Topic数
                     * 
                     */
                    void SetTopicCount(const int64_t& _topicCount);

                    /**
                     * 判断参数 TopicCount 是否已赋值
                     * @return TopicCount 是否已赋值
                     * 
                     */
                    bool TopicCountHasBeenSet() const;

                    /**
                     * 获取patternType的中文显示
                     * @return PatternTypeTitle patternType的中文显示
                     * 
                     */
                    std::string GetPatternTypeTitle() const;

                    /**
                     * 设置patternType的中文显示
                     * @param _patternTypeTitle patternType的中文显示
                     * 
                     */
                    void SetPatternTypeTitle(const std::string& _patternTypeTitle);

                    /**
                     * 判断参数 PatternTypeTitle 是否已赋值
                     * @return PatternTypeTitle 是否已赋值
                     * 
                     */
                    bool PatternTypeTitleHasBeenSet() const;

                private:

                    /**
                     * ACL规则名
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ACL规则匹配类型，目前只支持前缀匹配，枚举值列表：PREFIXED
                     */
                    std::string m_patternType;
                    bool m_patternTypeHasBeenSet;

                    /**
                     * 表示前缀匹配的前缀的值
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Acl资源类型,目前只支持Topic,枚举值列表：Topic
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 该规则所包含的ACL信息
                     */
                    std::string m_aclList;
                    bool m_aclListHasBeenSet;

                    /**
                     * 规则所创建的时间
                     */
                    std::string m_createTimeStamp;
                    bool m_createTimeStampHasBeenSet;

                    /**
                     * 预设ACL规则是否应用到新增的topic中
                     */
                    int64_t m_isApplied;
                    bool m_isAppliedHasBeenSet;

                    /**
                     * 规则更新时间
                     */
                    std::string m_updateTimeStamp;
                    bool m_updateTimeStampHasBeenSet;

                    /**
                     * 规则的备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 其中一个显示的对应的TopicName
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 应用该ACL规则的Topic数
                     */
                    int64_t m_topicCount;
                    bool m_topicCountHasBeenSet;

                    /**
                     * patternType的中文显示
                     */
                    std::string m_patternTypeTitle;
                    bool m_patternTypeTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRULE_H_
