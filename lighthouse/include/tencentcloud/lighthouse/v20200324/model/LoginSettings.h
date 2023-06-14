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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINSETTINGS_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了实例登录相关配置与信息。
                */
                class LoginSettings : public AbstractModel
                {
                public:
                    LoginSettings();
                    ~LoginSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取密钥 ID 列表。关联密钥后，就可以通过对应的私钥来访问实例。注意：此字段可能返回 []，表示取不到有效值。
                     * @return KeyIds 密钥 ID 列表。关联密钥后，就可以通过对应的私钥来访问实例。注意：此字段可能返回 []，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置密钥 ID 列表。关联密钥后，就可以通过对应的私钥来访问实例。注意：此字段可能返回 []，表示取不到有效值。
                     * @param _keyIds 密钥 ID 列表。关联密钥后，就可以通过对应的私钥来访问实例。注意：此字段可能返回 []，表示取不到有效值。
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                private:

                    /**
                     * 密钥 ID 列表。关联密钥后，就可以通过对应的私钥来访问实例。注意：此字段可能返回 []，表示取不到有效值。
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_LOGINSETTINGS_H_
