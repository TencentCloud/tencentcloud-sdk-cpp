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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CIC的权限策略
                */
                class RolePolicie : public AbstractModel
                {
                public:
                    RolePolicie();
                    ~RolePolicie() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID。
                     * @return RolePolicyId 策略ID。
                     * 
                     */
                    int64_t GetRolePolicyId() const;

                    /**
                     * 设置策略ID。
                     * @param _rolePolicyId 策略ID。
                     * 
                     */
                    void SetRolePolicyId(const int64_t& _rolePolicyId);

                    /**
                     * 判断参数 RolePolicyId 是否已赋值
                     * @return RolePolicyId 是否已赋值
                     * 
                     */
                    bool RolePolicyIdHasBeenSet() const;

                    /**
                     * 获取权限策略名称
                     * @return RolePolicyName 权限策略名称
                     * 
                     */
                    std::string GetRolePolicyName() const;

                    /**
                     * 设置权限策略名称
                     * @param _rolePolicyName 权限策略名称
                     * 
                     */
                    void SetRolePolicyName(const std::string& _rolePolicyName);

                    /**
                     * 判断参数 RolePolicyName 是否已赋值
                     * @return RolePolicyName 是否已赋值
                     * 
                     */
                    bool RolePolicyNameHasBeenSet() const;

                    /**
                     * 获取权限策略类型
                     * @return RolePolicyType 权限策略类型
                     * 
                     */
                    std::string GetRolePolicyType() const;

                    /**
                     * 设置权限策略类型
                     * @param _rolePolicyType 权限策略类型
                     * 
                     */
                    void SetRolePolicyType(const std::string& _rolePolicyType);

                    /**
                     * 判断参数 RolePolicyType 是否已赋值
                     * @return RolePolicyType 是否已赋值
                     * 
                     */
                    bool RolePolicyTypeHasBeenSet() const;

                    /**
                     * 获取自定义策略内容。仅自定义策略返回该参数。
                     * @return RolePolicyDocument 自定义策略内容。仅自定义策略返回该参数。
                     * 
                     */
                    std::string GetRolePolicyDocument() const;

                    /**
                     * 设置自定义策略内容。仅自定义策略返回该参数。
                     * @param _rolePolicyDocument 自定义策略内容。仅自定义策略返回该参数。
                     * 
                     */
                    void SetRolePolicyDocument(const std::string& _rolePolicyDocument);

                    /**
                     * 判断参数 RolePolicyDocument 是否已赋值
                     * @return RolePolicyDocument 是否已赋值
                     * 
                     */
                    bool RolePolicyDocumentHasBeenSet() const;

                    /**
                     * 获取权限策略被添加到权限配置的时间。
                     * @return AddTime 权限策略被添加到权限配置的时间。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置权限策略被添加到权限配置的时间。
                     * @param _addTime 权限策略被添加到权限配置的时间。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * 策略ID。
                     */
                    int64_t m_rolePolicyId;
                    bool m_rolePolicyIdHasBeenSet;

                    /**
                     * 权限策略名称
                     */
                    std::string m_rolePolicyName;
                    bool m_rolePolicyNameHasBeenSet;

                    /**
                     * 权限策略类型
                     */
                    std::string m_rolePolicyType;
                    bool m_rolePolicyTypeHasBeenSet;

                    /**
                     * 自定义策略内容。仅自定义策略返回该参数。
                     */
                    std::string m_rolePolicyDocument;
                    bool m_rolePolicyDocumentHasBeenSet;

                    /**
                     * 权限策略被添加到权限配置的时间。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ROLEPOLICIE_H_
