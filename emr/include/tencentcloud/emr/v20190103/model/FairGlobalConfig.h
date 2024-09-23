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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 资源调度-公平调度器的全局配置
                */
                class FairGlobalConfig : public AbstractModel
                {
                public:
                    FairGlobalConfig();
                    ~FairGlobalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应与页面的<p>程序上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserMaxAppsDefault 对应与页面的<p>程序上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserMaxAppsDefault() const;

                    /**
                     * 设置对应与页面的<p>程序上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userMaxAppsDefault 对应与页面的<p>程序上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserMaxAppsDefault(const int64_t& _userMaxAppsDefault);

                    /**
                     * 判断参数 UserMaxAppsDefault 是否已赋值
                     * @return UserMaxAppsDefault 是否已赋值
                     * 
                     */
                    bool UserMaxAppsDefaultHasBeenSet() const;

                private:

                    /**
                     * 对应与页面的<p>程序上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userMaxAppsDefault;
                    bool m_userMaxAppsDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_FAIRGLOBALCONFIG_H_
