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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPBLACKLIST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPBLACKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例应用黑名单
                */
                class AndroidInstanceAppBlacklist : public AbstractModel
                {
                public:
                    AndroidInstanceAppBlacklist();
                    ~AndroidInstanceAppBlacklist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安卓实例 ID
                     * @return AndroidInstanceId 安卓实例 ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置安卓实例 ID
                     * @param _androidInstanceId 安卓实例 ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                    /**
                     * 获取应用黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppBlacklist 应用黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAppBlacklist() const;

                    /**
                     * 设置应用黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appBlacklist 应用黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppBlacklist(const std::vector<std::string>& _appBlacklist);

                    /**
                     * 判断参数 AppBlacklist 是否已赋值
                     * @return AppBlacklist 是否已赋值
                     * 
                     */
                    bool AppBlacklistHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                    /**
                     * 应用黑名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_appBlacklist;
                    bool m_appBlacklistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPBLACKLIST_H_
