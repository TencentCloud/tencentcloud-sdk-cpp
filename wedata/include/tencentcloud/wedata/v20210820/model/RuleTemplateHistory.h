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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATEHISTORY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则模版变更历史记录视图
                */
                class RuleTemplateHistory : public AbstractModel
                {
                public:
                    RuleTemplateHistory();
                    ~RuleTemplateHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param TemplateId 模版ID
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置版本
                     * @param Version 版本
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取用户Id
                     * @return UserId 用户Id
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置用户Id
                     * @param UserId 用户Id
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户昵称
                     * @return UserName 用户昵称
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户昵称
                     * @param UserName 用户昵称
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取变更类型1.新增2.修改3.删除
                     * @return AlterType 变更类型1.新增2.修改3.删除
                     */
                    uint64_t GetAlterType() const;

                    /**
                     * 设置变更类型1.新增2.修改3.删除
                     * @param AlterType 变更类型1.新增2.修改3.删除
                     */
                    void SetAlterType(const uint64_t& _alterType);

                    /**
                     * 判断参数 AlterType 是否已赋值
                     * @return AlterType 是否已赋值
                     */
                    bool AlterTypeHasBeenSet() const;

                    /**
                     * 获取变更内容
                     * @return AlterContent 变更内容
                     */
                    std::string GetAlterContent() const;

                    /**
                     * 设置变更内容
                     * @param AlterContent 变更内容
                     */
                    void SetAlterContent(const std::string& _alterContent);

                    /**
                     * 判断参数 AlterContent 是否已赋值
                     * @return AlterContent 是否已赋值
                     */
                    bool AlterContentHasBeenSet() const;

                private:

                    /**
                     * 模版ID
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 版本
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 用户Id
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 变更类型1.新增2.修改3.删除
                     */
                    uint64_t m_alterType;
                    bool m_alterTypeHasBeenSet;

                    /**
                     * 变更内容
                     */
                    std::string m_alterContent;
                    bool m_alterContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULETEMPLATEHISTORY_H_
