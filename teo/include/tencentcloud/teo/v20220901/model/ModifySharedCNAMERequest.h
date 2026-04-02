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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPSSLSetting.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySharedCNAME请求参数结构体
                */
                class ModifySharedCNAMERequest : public AbstractModel
                {
                public:
                    ModifySharedCNAMERequest();
                    ~ModifySharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取共享 CNAME 所属站点 ID。
                     * @return ZoneId 共享 CNAME 所属站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置共享 CNAME 所属站点 ID。
                     * @param _zoneId 共享 CNAME 所属站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取共享 CNAME。
                     * @return SharedCNAME 共享 CNAME。
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置共享 CNAME。
                     * @param _sharedCNAME 共享 CNAME。
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取请输入调整后的描述。
                     * @return Description 请输入调整后的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置请输入调整后的描述。
                     * @param _description 请输入调整后的描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取设置IP SSL 类型的共享CNAME 的 IP SSL 信息。
                     * @return IPSSLSetting 设置IP SSL 类型的共享CNAME 的 IP SSL 信息。
                     * 
                     */
                    IPSSLSetting GetIPSSLSetting() const;

                    /**
                     * 设置设置IP SSL 类型的共享CNAME 的 IP SSL 信息。
                     * @param _iPSSLSetting 设置IP SSL 类型的共享CNAME 的 IP SSL 信息。
                     * 
                     */
                    void SetIPSSLSetting(const IPSSLSetting& _iPSSLSetting);

                    /**
                     * 判断参数 IPSSLSetting 是否已赋值
                     * @return IPSSLSetting 是否已赋值
                     * 
                     */
                    bool IPSSLSettingHasBeenSet() const;

                private:

                    /**
                     * 共享 CNAME 所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 共享 CNAME。
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * 请输入调整后的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 设置IP SSL 类型的共享CNAME 的 IP SSL 信息。
                     */
                    IPSSLSetting m_iPSSLSetting;
                    bool m_iPSSLSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSHAREDCNAMEREQUEST_H_
