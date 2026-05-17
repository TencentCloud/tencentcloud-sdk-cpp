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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSPERMISSIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSPERMISSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos权限信息
                */
                class CosPermissionInfo : public AbstractModel
                {
                public:
                    CosPermissionInfo();
                    ~CosPermissionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限来源
                     * @return PermissionSource 权限来源
                     * 
                     */
                    std::string GetPermissionSource() const;

                    /**
                     * 设置权限来源
                     * @param _permissionSource 权限来源
                     * 
                     */
                    void SetPermissionSource(const std::string& _permissionSource);

                    /**
                     * 判断参数 PermissionSource 是否已赋值
                     * @return PermissionSource 是否已赋值
                     * 
                     */
                    bool PermissionSourceHasBeenSet() const;

                    /**
                     * 获取权限内容
                     * @return PermissionContent 权限内容
                     * 
                     */
                    std::string GetPermissionContent() const;

                    /**
                     * 设置权限内容
                     * @param _permissionContent 权限内容
                     * 
                     */
                    void SetPermissionContent(const std::string& _permissionContent);

                    /**
                     * 判断参数 PermissionContent 是否已赋值
                     * @return PermissionContent 是否已赋值
                     * 
                     */
                    bool PermissionContentHasBeenSet() const;

                    /**
                     * 获取授权资源
                     * @return GrantResource 授权资源
                     * 
                     */
                    std::string GetGrantResource() const;

                    /**
                     * 设置授权资源
                     * @param _grantResource 授权资源
                     * 
                     */
                    void SetGrantResource(const std::string& _grantResource);

                    /**
                     * 判断参数 GrantResource 是否已赋值
                     * @return GrantResource 是否已赋值
                     * 
                     */
                    bool GrantResourceHasBeenSet() const;

                    /**
                     * 获取授权动作
                     * @return GrantAction 授权动作
                     * 
                     */
                    std::string GetGrantAction() const;

                    /**
                     * 设置授权动作
                     * @param _grantAction 授权动作
                     * 
                     */
                    void SetGrantAction(const std::string& _grantAction);

                    /**
                     * 判断参数 GrantAction 是否已赋值
                     * @return GrantAction 是否已赋值
                     * 
                     */
                    bool GrantActionHasBeenSet() const;

                    /**
                     * 获取授权条件
                     * @return GrantCondition 授权条件
                     * 
                     */
                    std::string GetGrantCondition() const;

                    /**
                     * 设置授权条件
                     * @param _grantCondition 授权条件
                     * 
                     */
                    void SetGrantCondition(const std::string& _grantCondition);

                    /**
                     * 判断参数 GrantCondition 是否已赋值
                     * @return GrantCondition 是否已赋值
                     * 
                     */
                    bool GrantConditionHasBeenSet() const;

                private:

                    /**
                     * 权限来源
                     */
                    std::string m_permissionSource;
                    bool m_permissionSourceHasBeenSet;

                    /**
                     * 权限内容
                     */
                    std::string m_permissionContent;
                    bool m_permissionContentHasBeenSet;

                    /**
                     * 授权资源
                     */
                    std::string m_grantResource;
                    bool m_grantResourceHasBeenSet;

                    /**
                     * 授权动作
                     */
                    std::string m_grantAction;
                    bool m_grantActionHasBeenSet;

                    /**
                     * 授权条件
                     */
                    std::string m_grantCondition;
                    bool m_grantConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSPERMISSIONINFO_H_
