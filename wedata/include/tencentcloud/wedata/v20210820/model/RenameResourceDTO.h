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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMERESOURCEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMERESOURCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资管管理-重命名资源文件返回信息
                */
                class RenameResourceDTO : public AbstractModel
                {
                public:
                    RenameResourceDTO();
                    ~RenameResourceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否重命名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenameSuccess 是否重命名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRenameSuccess() const;

                    /**
                     * 设置是否重命名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renameSuccess 是否重命名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenameSuccess(const bool& _renameSuccess);

                    /**
                     * 判断参数 RenameSuccess 是否已赋值
                     * @return RenameSuccess 是否已赋值
                     * 
                     */
                    bool RenameSuccessHasBeenSet() const;

                    /**
                     * 获取更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUser 更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUser 更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateUserId 更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateUserId() const;

                    /**
                     * 设置更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateUserId 更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateUserId(const std::string& _updateUserId);

                    /**
                     * 判断参数 UpdateUserId 是否已赋值
                     * @return UpdateUserId 是否已赋值
                     * 
                     */
                    bool UpdateUserIdHasBeenSet() const;

                    /**
                     * 获取更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullPath 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullPath 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                private:

                    /**
                     * 是否重命名成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_renameSuccess;
                    bool m_renameSuccessHasBeenSet;

                    /**
                     * 更新用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * 更新用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateUserId;
                    bool m_updateUserIdHasBeenSet;

                    /**
                     * 更新日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RENAMERESOURCEDTO_H_
