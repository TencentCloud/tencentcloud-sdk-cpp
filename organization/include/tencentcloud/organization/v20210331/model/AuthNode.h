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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUTHNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUTHNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 互信主体主要信息
                */
                class AuthNode : public AbstractModel
                {
                public:
                    AuthNode();
                    ~AuthNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取互信主体关系ID
                     * @return RelationId 互信主体关系ID
                     * 
                     */
                    int64_t GetRelationId() const;

                    /**
                     * 设置互信主体关系ID
                     * @param _relationId 互信主体关系ID
                     * 
                     */
                    void SetRelationId(const int64_t& _relationId);

                    /**
                     * 判断参数 RelationId 是否已赋值
                     * @return RelationId 是否已赋值
                     * 
                     */
                    bool RelationIdHasBeenSet() const;

                    /**
                     * 获取互信主体名称
                     * @return AuthName 互信主体名称
                     * 
                     */
                    std::string GetAuthName() const;

                    /**
                     * 设置互信主体名称
                     * @param _authName 互信主体名称
                     * 
                     */
                    void SetAuthName(const std::string& _authName);

                    /**
                     * 判断参数 AuthName 是否已赋值
                     * @return AuthName 是否已赋值
                     * 
                     */
                    bool AuthNameHasBeenSet() const;

                    /**
                     * 获取主体管理员
                     * @return Manager 主体管理员
                     * 
                     */
                    MemberMainInfo GetManager() const;

                    /**
                     * 设置主体管理员
                     * @param _manager 主体管理员
                     * 
                     */
                    void SetManager(const MemberMainInfo& _manager);

                    /**
                     * 判断参数 Manager 是否已赋值
                     * @return Manager 是否已赋值
                     * 
                     */
                    bool ManagerHasBeenSet() const;

                private:

                    /**
                     * 互信主体关系ID
                     */
                    int64_t m_relationId;
                    bool m_relationIdHasBeenSet;

                    /**
                     * 互信主体名称
                     */
                    std::string m_authName;
                    bool m_authNameHasBeenSet;

                    /**
                     * 主体管理员
                     */
                    MemberMainInfo m_manager;
                    bool m_managerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_AUTHNODE_H_
