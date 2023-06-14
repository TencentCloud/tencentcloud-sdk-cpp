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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_SCENEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_SCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 场景信息
                */
                class SceneInfo : public AbstractModel
                {
                public:
                    SceneInfo();
                    ~SceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语言代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocaleCode 语言代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocaleCode() const;

                    /**
                     * 设置语言代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localeCode 语言代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocaleCode(const std::string& _localeCode);

                    /**
                     * 判断参数 LocaleCode 是否已赋值
                     * @return LocaleCode 是否已赋值
                     * 
                     */
                    bool LocaleCodeHasBeenSet() const;

                    /**
                     * 获取地区代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionCode 地区代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地区代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionCode 地区代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserClientIp 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserClientIp() const;

                    /**
                     * 设置用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userClientIp 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserClientIp(const std::string& _userClientIp);

                    /**
                     * 判断参数 UserClientIp 是否已赋值
                     * @return UserClientIp 是否已赋值
                     * 
                     */
                    bool UserClientIpHasBeenSet() const;

                private:

                    /**
                     * 语言代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localeCode;
                    bool m_localeCodeHasBeenSet;

                    /**
                     * 地区代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * 用户IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userClientIp;
                    bool m_userClientIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_SCENEINFO_H_
