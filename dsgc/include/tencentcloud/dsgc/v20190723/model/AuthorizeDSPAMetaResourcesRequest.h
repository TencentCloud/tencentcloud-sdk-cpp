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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_AUTHORIZEDSPAMETARESOURCESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_AUTHORIZEDSPAMETARESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaResourceAccount.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * AuthorizeDSPAMetaResources请求参数结构体
                */
                class AuthorizeDSPAMetaResourcesRequest : public AbstractModel
                {
                public:
                    AuthorizeDSPAMetaResourcesRequest();
                    ~AuthorizeDSPAMetaResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取授权方式，可选：automatic(一键自动授权) 、 account(指定用户名授权)。
                     * @return AuthType 授权方式，可选：automatic(一键自动授权) 、 account(指定用户名授权)。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置授权方式，可选：automatic(一键自动授权) 、 account(指定用户名授权)。
                     * @param _authType 授权方式，可选：automatic(一键自动授权) 、 account(指定用户名授权)。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取资源类型。
                     * @return MetaType 资源类型。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置资源类型。
                     * @param _metaType 资源类型。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取用户授权的账户信息，如果是一键自动授权模式，则不需要填写账户名与密码。
                     * @return ResourcesAccount 用户授权的账户信息，如果是一键自动授权模式，则不需要填写账户名与密码。
                     * 
                     */
                    std::vector<DspaResourceAccount> GetResourcesAccount() const;

                    /**
                     * 设置用户授权的账户信息，如果是一键自动授权模式，则不需要填写账户名与密码。
                     * @param _resourcesAccount 用户授权的账户信息，如果是一键自动授权模式，则不需要填写账户名与密码。
                     * 
                     */
                    void SetResourcesAccount(const std::vector<DspaResourceAccount>& _resourcesAccount);

                    /**
                     * 判断参数 ResourcesAccount 是否已赋值
                     * @return ResourcesAccount 是否已赋值
                     * 
                     */
                    bool ResourcesAccountHasBeenSet() const;

                    /**
                     * 获取创建默认主模板扫描任务
                     * @return CreateDefaultTask 创建默认主模板扫描任务
                     * 
                     */
                    bool GetCreateDefaultTask() const;

                    /**
                     * 设置创建默认主模板扫描任务
                     * @param _createDefaultTask 创建默认主模板扫描任务
                     * 
                     */
                    void SetCreateDefaultTask(const bool& _createDefaultTask);

                    /**
                     * 判断参数 CreateDefaultTask 是否已赋值
                     * @return CreateDefaultTask 是否已赋值
                     * 
                     */
                    bool CreateDefaultTaskHasBeenSet() const;

                    /**
                     * 获取授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * @return AuthRange 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * 
                     */
                    std::string GetAuthRange() const;

                    /**
                     * 设置授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * @param _authRange 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     * 
                     */
                    void SetAuthRange(const std::string& _authRange);

                    /**
                     * 判断参数 AuthRange 是否已赋值
                     * @return AuthRange 是否已赋值
                     * 
                     */
                    bool AuthRangeHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 授权方式，可选：automatic(一键自动授权) 、 account(指定用户名授权)。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 资源类型。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 用户授权的账户信息，如果是一键自动授权模式，则不需要填写账户名与密码。
                     */
                    std::vector<DspaResourceAccount> m_resourcesAccount;
                    bool m_resourcesAccountHasBeenSet;

                    /**
                     * 创建默认主模板扫描任务
                     */
                    bool m_createDefaultTask;
                    bool m_createDefaultTaskHasBeenSet;

                    /**
                     * 授权范围（all:授权整个数据源 manual:手动指定数据库）
                     */
                    std::string m_authRange;
                    bool m_authRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_AUTHORIZEDSPAMETARESOURCESREQUEST_H_
