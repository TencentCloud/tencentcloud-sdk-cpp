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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXTERNALROLE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXTERNALROLE_H_

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
                * 跨账户投递外部角色
                */
                class ExternalRole : public AbstractModel
                {
                public:
                    ExternalRole();
                    ~ExternalRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>跨账户投递-用户角色RoleArn</p>
                     * @return RoleArn <p>跨账户投递-用户角色RoleArn</p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>跨账户投递-用户角色RoleArn</p>
                     * @param _roleArn <p>跨账户投递-用户角色RoleArn</p>
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
                     * 获取<p>跨账户投递-用户角色名称</p>
                     * @return ExternalId <p>跨账户投递-用户角色名称</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>跨账户投递-用户角色名称</p>
                     * @param _externalId <p>跨账户投递-用户角色名称</p>
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
                     * <p>跨账户投递-用户角色RoleArn</p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>跨账户投递-用户角色名称</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTERNALROLE_H_
