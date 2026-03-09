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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDAPPLICATIONREQUEST_H_

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
                * AddApplication请求参数结构体
                */
                class AddApplicationRequest : public AbstractModel
                {
                public:
                    AddApplicationRequest();
                    ~AddApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新建应用的应用名
                     * @return MpApplicationName 新建应用的应用名
                     * 
                     */
                    std::string GetMpApplicationName() const;

                    /**
                     * 设置新建应用的应用名
                     * @param _mpApplicationName 新建应用的应用名
                     * 
                     */
                    void SetMpApplicationName(const std::string& _mpApplicationName);

                    /**
                     * 判断参数 MpApplicationName 是否已赋值
                     * @return MpApplicationName 是否已赋值
                     * 
                     */
                    bool MpApplicationNameHasBeenSet() const;

                    /**
                     * 获取新建设备的备注
                     * @return Remark 新建设备的备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置新建设备的备注
                     * @param _remark 新建设备的备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取新建应用的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @return MpApplicationKey 新建应用的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * 
                     */
                    std::string GetMpApplicationKey() const;

                    /**
                     * 设置新建应用的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * @param _mpApplicationKey 新建应用的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     * 
                     */
                    void SetMpApplicationKey(const std::string& _mpApplicationKey);

                    /**
                     * 判断参数 MpApplicationKey 是否已赋值
                     * @return MpApplicationKey 是否已赋值
                     * 
                     */
                    bool MpApplicationKeyHasBeenSet() const;

                    /**
                     * 获取接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @return AccessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    int64_t GetAccessScope() const;

                    /**
                     * 设置接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * @param _accessScope 接入环境。0：公有云网关；1：自有网关；2：公有云网关和自有网关。不填默认公有云网关。 具体含义： 公有云网关：即该设备只能接入公有云网关（就近接入） 自有网关：即该设备只能接入已经注册上线的自有网关（就近接入或固定ip接入） 公有云网关和自有网关：即该设备同时可以接入公有云网关和已经注册上线的自有网关（就近接入或固定ip接入）
                     * 
                     */
                    void SetAccessScope(const int64_t& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                private:

                    /**
                     * 新建应用的应用名
                     */
                    std::string m_mpApplicationName;
                    bool m_mpApplicationNameHasBeenSet;

                    /**
                     * 新建设备的备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 新建应用的base64密钥字符串，非必选，如果不填写则由系统自动生成
                     */
                    std::string m_mpApplicationKey;
                    bool m_mpApplicationKeyHasBeenSet;

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

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDAPPLICATIONREQUEST_H_
