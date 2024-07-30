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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERWORKLOADGROUP_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERWORKLOADGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 用户绑定资源组信息
                */
                class UserWorkloadGroup : public AbstractModel
                {
                public:
                    UserWorkloadGroup();
                    ~UserWorkloadGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取test
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName test
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置test
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName test
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取normal
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkloadGroupName normal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkloadGroupName() const;

                    /**
                     * 设置normal
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workloadGroupName normal
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkloadGroupName(const std::string& _workloadGroupName);

                    /**
                     * 判断参数 WorkloadGroupName 是否已赋值
                     * @return WorkloadGroupName 是否已赋值
                     * 
                     */
                    bool WorkloadGroupNameHasBeenSet() const;

                private:

                    /**
                     * test
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * normal
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workloadGroupName;
                    bool m_workloadGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_USERWORKLOADGROUP_H_
