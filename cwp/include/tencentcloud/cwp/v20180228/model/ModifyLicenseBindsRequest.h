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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyLicenseBinds请求参数结构体
                */
                class ModifyLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyLicenseBindsRequest();
                    ~ModifyLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取授权类型
                     * @return LicenseType 授权类型
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型
                     * @param _licenseType 授权类型
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取是否全部机器(当全部机器数大于当前订单可用授权数时,多余机器会被跳过)
                     * @return IsAll 是否全部机器(当全部机器数大于当前订单可用授权数时,多余机器会被跳过)
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置是否全部机器(当全部机器数大于当前订单可用授权数时,多余机器会被跳过)
                     * @param _isAll 是否全部机器(当全部机器数大于当前订单可用授权数时,多余机器会被跳过)
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取需要绑定的机器quuid列表, 当IsAll = false 时必填,反之忽略该参数. 最大长度=2000
                     * @return QuuidList 需要绑定的机器quuid列表, 当IsAll = false 时必填,反之忽略该参数. 最大长度=2000
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置需要绑定的机器quuid列表, 当IsAll = false 时必填,反之忽略该参数. 最大长度=2000
                     * @param _quuidList 需要绑定的机器quuid列表, 当IsAll = false 时必填,反之忽略该参数. 最大长度=2000
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 授权类型
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 是否全部机器(当全部机器数大于当前订单可用授权数时,多余机器会被跳过)
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 需要绑定的机器quuid列表, 当IsAll = false 时必填,反之忽略该参数. 最大长度=2000
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_
