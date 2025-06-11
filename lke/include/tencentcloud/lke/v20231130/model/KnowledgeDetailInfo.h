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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAILINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeBaseInfo.h>
#include <tencentcloud/lke/v20231130/model/AppBaseInfo.h>
#include <tencentcloud/lke/v20231130/model/UserBaseInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识库详情信息
                */
                class KnowledgeDetailInfo : public AbstractModel
                {
                public:
                    KnowledgeDetailInfo();
                    ~KnowledgeDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Knowledge 知识库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KnowledgeBaseInfo GetKnowledge() const;

                    /**
                     * 设置知识库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _knowledge 知识库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKnowledge(const KnowledgeBaseInfo& _knowledge);

                    /**
                     * 判断参数 Knowledge 是否已赋值
                     * @return Knowledge 是否已赋值
                     * 
                     */
                    bool KnowledgeHasBeenSet() const;

                    /**
                     * 获取应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppList 应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AppBaseInfo> GetAppList() const;

                    /**
                     * 设置应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appList 应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppList(const std::vector<AppBaseInfo>& _appList);

                    /**
                     * 判断参数 AppList 是否已赋值
                     * @return AppList 是否已赋值
                     * 
                     */
                    bool AppListHasBeenSet() const;

                    /**
                     * 获取用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserBaseInfo GetUser() const;

                    /**
                     * 设置用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUser(const UserBaseInfo& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 知识库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KnowledgeBaseInfo m_knowledge;
                    bool m_knowledgeHasBeenSet;

                    /**
                     * 应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AppBaseInfo> m_appList;
                    bool m_appListHasBeenSet;

                    /**
                     * 用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserBaseInfo m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEDETAILINFO_H_
