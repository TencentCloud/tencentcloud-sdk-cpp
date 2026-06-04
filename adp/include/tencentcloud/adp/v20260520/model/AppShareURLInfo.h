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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppShareAccessControl.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 分享链接信息(详情查询返回，用户不可修改部分；access_control 用户可修改部分由 ModifyApp 承载)
                */
                class AppShareURLInfo : public AbstractModel
                {
                public:
                    AppShareURLInfo();
                    ~AppShareURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前生效的访问控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessControl 当前生效的访问控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppShareAccessControl GetAccessControl() const;

                    /**
                     * 设置当前生效的访问控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessControl 当前生效的访问控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessControl(const AppShareAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取分享URL
                     * @return ShareUrl 分享URL
                     * 
                     */
                    std::string GetShareUrl() const;

                    /**
                     * 设置分享URL
                     * @param _shareUrl 分享URL
                     * 
                     */
                    void SetShareUrl(const std::string& _shareUrl);

                    /**
                     * 判断参数 ShareUrl 是否已赋值
                     * @return ShareUrl 是否已赋值
                     * 
                     */
                    bool ShareUrlHasBeenSet() const;

                private:

                    /**
                     * 当前生效的访问控制配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppShareAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * 分享URL
                     */
                    std::string m_shareUrl;
                    bool m_shareUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREURLINFO_H_
