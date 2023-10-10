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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理Web站点虚拟目录
                */
                class AssetWebLocationPath : public AbstractModel
                {
                public:
                    AssetWebLocationPath();
                    ~AssetWebLocationPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取虚拟路径
                     * @return VirtualPath 虚拟路径
                     * 
                     */
                    std::string GetVirtualPath() const;

                    /**
                     * 设置虚拟路径
                     * @param _virtualPath 虚拟路径
                     * 
                     */
                    void SetVirtualPath(const std::string& _virtualPath);

                    /**
                     * 判断参数 VirtualPath 是否已赋值
                     * @return VirtualPath 是否已赋值
                     * 
                     */
                    bool VirtualPathHasBeenSet() const;

                    /**
                     * 获取物理路径
                     * @return RealPath 物理路径
                     * 
                     */
                    std::string GetRealPath() const;

                    /**
                     * 设置物理路径
                     * @param _realPath 物理路径
                     * 
                     */
                    void SetRealPath(const std::string& _realPath);

                    /**
                     * 判断参数 RealPath 是否已赋值
                     * @return RealPath 是否已赋值
                     * 
                     */
                    bool RealPathHasBeenSet() const;

                    /**
                     * 获取文件所有者
                     * @return User 文件所有者
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置文件所有者
                     * @param _user 文件所有者
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取文件所属组
                     * @return Group 文件所属组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置文件所属组
                     * @param _group 文件所属组
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取文件权限
                     * @return Permission 文件权限
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置文件权限
                     * @param _permission 文件权限
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * 虚拟路径
                     */
                    std::string m_virtualPath;
                    bool m_virtualPathHasBeenSet;

                    /**
                     * 物理路径
                     */
                    std::string m_realPath;
                    bool m_realPathHasBeenSet;

                    /**
                     * 文件所有者
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 文件所属组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 文件权限
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETWEBLOCATIONPATH_H_
