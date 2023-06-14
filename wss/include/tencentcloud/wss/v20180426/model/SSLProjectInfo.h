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

#ifndef TENCENTCLOUD_WSS_V20180426_MODEL_SSLPROJECTINFO_H_
#define TENCENTCLOUD_WSS_V20180426_MODEL_SSLPROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            namespace Model
            {
                /**
                * 获取证书列表接口（SSLProjectInfo）出参键为CertificateSet下的元素ProjectIno详情
                */
                class SSLProjectInfo : public AbstractModel
                {
                public:
                    SSLProjectInfo();
                    ~SSLProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目所属的 uin（默认项目为0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 项目所属的 uin（默认项目为0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置项目所属的 uin（默认项目为0）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 项目所属的 uin（默认项目为0）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取创建项目的 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 创建项目的 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreatorUin() const;

                    /**
                     * 设置创建项目的 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 创建项目的 uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const int64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取项目创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 项目创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置项目创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 项目创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Info 项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _info 项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目所属的 uin（默认项目为0）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 创建项目的 uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 项目创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_MODEL_SSLPROJECTINFO_H_
