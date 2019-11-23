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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateServerlessGroup请求参数结构体
                */
                class CreateServerlessGroupRequest : public AbstractModel
                {
                public:
                    CreateServerlessGroupRequest();
                    ~CreateServerlessGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组所属应用ID
                     * @return ApplicationId 分组所属应用ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置分组所属应用ID
                     * @param ApplicationId 分组所属应用ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @return GroupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     * @param GroupName 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取程序包Id
                     * @return PkgId 程序包Id
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置程序包Id
                     * @param PkgId 程序包Id
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取VpcConfig对象
                     * @return VpcConfig VpcConfig对象
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置VpcConfig对象
                     * @param VpcConfig VpcConfig对象
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     */
                    bool VpcConfigHasBeenSet() const;

                private:

                    /**
                     * 分组所属应用ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 分组名称字段，长度1~60，字母或下划线开头，可包含字母数字下划线
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 程序包Id
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * VpcConfig对象
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATESERVERLESSGROUPREQUEST_H_
