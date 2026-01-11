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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELUSERAUTHORITY_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELUSERAUTHORITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 用户对象的权限
                */
                class ModelUserAuthority : public AbstractModel
                {
                public:
                    ModelUserAuthority();
                    ~ModelUserAuthority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取模块，分为知识库knowledge、数据源datasource、自定义场景scene
                     * @return Module 模块，分为知识库knowledge、数据源datasource、自定义场景scene
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块，分为知识库knowledge、数据源datasource、自定义场景scene
                     * @param _module 模块，分为知识库knowledge、数据源datasource、自定义场景scene
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取对象创建者
                     * @return CreatorUin 对象创建者
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置对象创建者
                     * @param _creatorUin 对象创建者
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取对象id,分为知识库id、数据源id、场景id
                     * @return ObjectId 对象id,分为知识库id、数据源id、场景id
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置对象id,分为知识库id、数据源id、场景id
                     * @param _objectId 对象id,分为知识库id、数据源id、场景id
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取作用范围：1仅自己使用，2指定用户，0全员
                     * @return UseScope 作用范围：1仅自己使用，2指定用户，0全员
                     * 
                     */
                    int64_t GetUseScope() const;

                    /**
                     * 设置作用范围：1仅自己使用，2指定用户，0全员
                     * @param _useScope 作用范围：1仅自己使用，2指定用户，0全员
                     * 
                     */
                    void SetUseScope(const int64_t& _useScope);

                    /**
                     * 判断参数 UseScope 是否已赋值
                     * @return UseScope 是否已赋值
                     * 
                     */
                    bool UseScopeHasBeenSet() const;

                    /**
                     * 获取可使用的用户列表
                     * @return AuthorityUins 可使用的用户列表
                     * 
                     */
                    std::vector<std::string> GetAuthorityUins() const;

                    /**
                     * 设置可使用的用户列表
                     * @param _authorityUins 可使用的用户列表
                     * 
                     */
                    void SetAuthorityUins(const std::vector<std::string>& _authorityUins);

                    /**
                     * 判断参数 AuthorityUins 是否已赋值
                     * @return AuthorityUins 是否已赋值
                     * 
                     */
                    bool AuthorityUinsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 模块，分为知识库knowledge、数据源datasource、自定义场景scene
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 对象创建者
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 对象id,分为知识库id、数据源id、场景id
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 作用范围：1仅自己使用，2指定用户，0全员
                     */
                    int64_t m_useScope;
                    bool m_useScopeHasBeenSet;

                    /**
                     * 可使用的用户列表
                     */
                    std::vector<std::string> m_authorityUins;
                    bool m_authorityUinsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODELUSERAUTHORITY_H_
