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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetApplication返回参数结构体
                */
                class GetApplicationResponse : public AbstractModel
                {
                public:
                    GetApplicationResponse();
                    ~GetApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return MpApplicationId 应用ID
                     * 
                     */
                    std::string GetMpApplicationId() const;

                    /**
                     * 判断参数 MpApplicationId 是否已赋值
                     * @return MpApplicationId 是否已赋值
                     * 
                     */
                    bool MpApplicationIdHasBeenSet() const;

                    /**
                     * 获取经过加密算法加密后的base64格式密钥
                     * @return MpApplicationKey 经过加密算法加密后的base64格式密钥
                     * 
                     */
                    std::string GetMpApplicationKey() const;

                    /**
                     * 判断参数 MpApplicationKey 是否已赋值
                     * @return MpApplicationKey 是否已赋值
                     * 
                     */
                    bool MpApplicationKeyHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return MpApplicationName 应用名
                     * 
                     */
                    std::string GetMpApplicationName() const;

                    /**
                     * 判断参数 MpApplicationName 是否已赋值
                     * @return MpApplicationName 是否已赋值
                     * 
                     */
                    bool MpApplicationNameHasBeenSet() const;

                    /**
                     * 获取设备的备注
                     * @return Remark 设备的备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @return AccessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_mpApplicationId;
                    bool m_mpApplicationIdHasBeenSet;

                    /**
                     * 经过加密算法加密后的base64格式密钥
                     */
                    std::string m_mpApplicationKey;
                    bool m_mpApplicationKeyHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_mpApplicationName;
                    bool m_mpApplicationNameHasBeenSet;

                    /**
                     * 设备的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     */
                    int64_t m_accessScope;
                    bool m_accessScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETAPPLICATIONRESPONSE_H_
