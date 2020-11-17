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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_PUSHMMSCONTENTREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_PUSHMMSCONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * PushMmsContent请求参数结构体
                */
                class PushMmsContentRequest : public AbstractModel
                {
                public:
                    PushMmsContentRequest();
                    ~PushMmsContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param License 商户证书
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取素材样例id
                     * @return InstanceId 素材样例id
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置素材样例id
                     * @param InstanceId 素材样例id
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Tel 手机号
                     */
                    std::string GetTel() const;

                    /**
                     * 设置手机号
                     * @param Tel 手机号
                     */
                    void SetTel(const std::string& _tel);

                    /**
                     * 判断参数 Tel 是否已赋值
                     * @return Tel 是否已赋值
                     */
                    bool TelHasBeenSet() const;

                    /**
                     * 获取附带数据字段
                     * @return Session 附带数据字段
                     */
                    std::string GetSession() const;

                    /**
                     * 设置附带数据字段
                     * @param Session 附带数据字段
                     */
                    void SetSession(const std::string& _session);

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     */
                    bool SessionHasBeenSet() const;

                    /**
                     * 获取动态参数key(即申请样例时设置的u_或p_开头的动态参数,要求序号有序)
                     * @return DynamicParaKey 动态参数key(即申请样例时设置的u_或p_开头的动态参数,要求序号有序)
                     */
                    std::vector<std::string> GetDynamicParaKey() const;

                    /**
                     * 设置动态参数key(即申请样例时设置的u_或p_开头的动态参数,要求序号有序)
                     * @param DynamicParaKey 动态参数key(即申请样例时设置的u_或p_开头的动态参数,要求序号有序)
                     */
                    void SetDynamicParaKey(const std::vector<std::string>& _dynamicParaKey);

                    /**
                     * 判断参数 DynamicParaKey 是否已赋值
                     * @return DynamicParaKey 是否已赋值
                     */
                    bool DynamicParaKeyHasBeenSet() const;

                    /**
                     * 获取动态参数值,和DynamicParaKey对应
                     * @return DynamicParaValue 动态参数值,和DynamicParaKey对应
                     */
                    std::vector<std::string> GetDynamicParaValue() const;

                    /**
                     * 设置动态参数值,和DynamicParaKey对应
                     * @param DynamicParaValue 动态参数值,和DynamicParaKey对应
                     */
                    void SetDynamicParaValue(const std::vector<std::string>& _dynamicParaValue);

                    /**
                     * 判断参数 DynamicParaValue 是否已赋值
                     * @return DynamicParaValue 是否已赋值
                     */
                    bool DynamicParaValueHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 素材样例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_tel;
                    bool m_telHasBeenSet;

                    /**
                     * 附带数据字段
                     */
                    std::string m_session;
                    bool m_sessionHasBeenSet;

                    /**
                     * 动态参数key(即申请样例时设置的u_或p_开头的动态参数,要求序号有序)
                     */
                    std::vector<std::string> m_dynamicParaKey;
                    bool m_dynamicParaKeyHasBeenSet;

                    /**
                     * 动态参数值,和DynamicParaKey对应
                     */
                    std::vector<std::string> m_dynamicParaValue;
                    bool m_dynamicParaValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_PUSHMMSCONTENTREQUEST_H_
