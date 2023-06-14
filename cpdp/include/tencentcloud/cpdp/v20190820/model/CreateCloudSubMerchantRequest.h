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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateCloudSubMerchant请求参数结构体
                */
                class CreateCloudSubMerchantRequest : public AbstractModel
                {
                public:
                    CreateCloudSubMerchantRequest();
                    ~CreateCloudSubMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取米大师分配的支付主MidasAppId，根应用Id。
                     * @return MidasAppId 米大师分配的支付主MidasAppId，根应用Id。
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置米大师分配的支付主MidasAppId，根应用Id。
                     * @param _midasAppId 米大师分配的支付主MidasAppId，根应用Id。
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取父应用Id。
                     * @return ParentAppId 父应用Id。
                     * 
                     */
                    std::string GetParentAppId() const;

                    /**
                     * 设置父应用Id。
                     * @param _parentAppId 父应用Id。
                     * 
                     */
                    void SetParentAppId(const std::string& _parentAppId);

                    /**
                     * 判断参数 ParentAppId 是否已赋值
                     * @return ParentAppId 是否已赋值
                     * 
                     */
                    bool ParentAppIdHasBeenSet() const;

                    /**
                     * 获取子商户名。
                     * @return SubMchName 子商户名。
                     * 
                     */
                    std::string GetSubMchName() const;

                    /**
                     * 设置子商户名。
                     * @param _subMchName 子商户名。
                     * 
                     */
                    void SetSubMchName(const std::string& _subMchName);

                    /**
                     * 判断参数 SubMchName 是否已赋值
                     * @return SubMchName 是否已赋值
                     * 
                     */
                    bool SubMchNameHasBeenSet() const;

                    /**
                     * 获取子商户描述。
                     * @return SubMchDescription 子商户描述。
                     * 
                     */
                    std::string GetSubMchDescription() const;

                    /**
                     * 设置子商户描述。
                     * @param _subMchDescription 子商户描述。
                     * 
                     */
                    void SetSubMchDescription(const std::string& _subMchDescription);

                    /**
                     * 判断参数 SubMchDescription 是否已赋值
                     * @return SubMchDescription 是否已赋值
                     * 
                     */
                    bool SubMchDescriptionHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return MidasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _midasEnvironment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取子应用Id，为空则自动创建子应用id。
                     * @return SubAppId 子应用Id，为空则自动创建子应用id。
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置子应用Id，为空则自动创建子应用id。
                     * @param _subAppId 子应用Id，为空则自动创建子应用id。
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取子商户名缩写。
                     * @return SubMchShortName 子商户名缩写。
                     * 
                     */
                    std::string GetSubMchShortName() const;

                    /**
                     * 设置子商户名缩写。
                     * @param _subMchShortName 子商户名缩写。
                     * 
                     */
                    void SetSubMchShortName(const std::string& _subMchShortName);

                    /**
                     * 判断参数 SubMchShortName 是否已赋值
                     * @return SubMchShortName 是否已赋值
                     * 
                     */
                    bool SubMchShortNameHasBeenSet() const;

                    /**
                     * 获取业务平台自定义的子商户Id，唯一。
                     * @return OutSubMerchantId 业务平台自定义的子商户Id，唯一。
                     * 
                     */
                    std::string GetOutSubMerchantId() const;

                    /**
                     * 设置业务平台自定义的子商户Id，唯一。
                     * @param _outSubMerchantId 业务平台自定义的子商户Id，唯一。
                     * 
                     */
                    void SetOutSubMerchantId(const std::string& _outSubMerchantId);

                    /**
                     * 判断参数 OutSubMerchantId 是否已赋值
                     * @return OutSubMerchantId 是否已赋值
                     * 
                     */
                    bool OutSubMerchantIdHasBeenSet() const;

                private:

                    /**
                     * 米大师分配的支付主MidasAppId，根应用Id。
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 父应用Id。
                     */
                    std::string m_parentAppId;
                    bool m_parentAppIdHasBeenSet;

                    /**
                     * 子商户名。
                     */
                    std::string m_subMchName;
                    bool m_subMchNameHasBeenSet;

                    /**
                     * 子商户描述。
                     */
                    std::string m_subMchDescription;
                    bool m_subMchDescriptionHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 子应用Id，为空则自动创建子应用id。
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子商户名缩写。
                     */
                    std::string m_subMchShortName;
                    bool m_subMchShortNameHasBeenSet;

                    /**
                     * 业务平台自定义的子商户Id，唯一。
                     */
                    std::string m_outSubMerchantId;
                    bool m_outSubMerchantIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATECLOUDSUBMERCHANTREQUEST_H_
