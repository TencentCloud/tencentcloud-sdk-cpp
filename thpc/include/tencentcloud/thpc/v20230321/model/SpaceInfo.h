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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINFO_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/Tag.h>
#include <tencentcloud/thpc/v20230321/model/Placement.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述工作空间的信息
                */
                class SpaceInfo : public AbstractModel
                {
                public:
                    SpaceInfo();
                    ~SpaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间ID
                     * @return SpaceId 工作空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _spaceId 工作空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间类型
                     * @return SpaceFamily 工作空间类型
                     * 
                     */
                    std::string GetSpaceFamily() const;

                    /**
                     * 设置工作空间类型
                     * @param _spaceFamily 工作空间类型
                     * 
                     */
                    void SetSpaceFamily(const std::string& _spaceFamily);

                    /**
                     * 判断参数 SpaceFamily 是否已赋值
                     * @return SpaceFamily 是否已赋值
                     * 
                     */
                    bool SpaceFamilyHasBeenSet() const;

                    /**
                     * 获取工作空间规格
                     * @return SpaceType 工作空间规格
                     * 
                     */
                    std::string GetSpaceType() const;

                    /**
                     * 设置工作空间规格
                     * @param _spaceType 工作空间规格
                     * 
                     */
                    void SetSpaceType(const std::string& _spaceType);

                    /**
                     * 判断参数 SpaceType 是否已赋值
                     * @return SpaceType 是否已赋值
                     * 
                     */
                    bool SpaceTypeHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return SpaceName 工作空间名称
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置工作空间名称
                     * @param _spaceName 工作空间名称
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取工作空间状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>ONLINE：表示运行中<br></li><li>ARREARS：表示隔离中<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * @return SpaceState 工作空间状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>ONLINE：表示运行中<br></li><li>ARREARS：表示隔离中<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * 
                     */
                    std::string GetSpaceState() const;

                    /**
                     * 设置工作空间状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>ONLINE：表示运行中<br></li><li>ARREARS：表示隔离中<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * @param _spaceState 工作空间状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>ONLINE：表示运行中<br></li><li>ARREARS：表示隔离中<br></li><li>TERMINATING：表示销毁中。<br></li>
                     * 
                     */
                    void SetSpaceState(const std::string& _spaceState);

                    /**
                     * 判断参数 SpaceState 是否已赋值
                     * @return SpaceState 是否已赋值
                     * 
                     */
                    bool SpaceStateHasBeenSet() const;

                    /**
                     * 获取工作空间计费模式
                     * @return SpaceChargeType 工作空间计费模式
                     * 
                     */
                    std::string GetSpaceChargeType() const;

                    /**
                     * 设置工作空间计费模式
                     * @param _spaceChargeType 工作空间计费模式
                     * 
                     */
                    void SetSpaceChargeType(const std::string& _spaceChargeType);

                    /**
                     * 判断参数 SpaceChargeType 是否已赋值
                     * @return SpaceChargeType 是否已赋值
                     * 
                     */
                    bool SpaceChargeTypeHasBeenSet() const;

                    /**
                     * 获取工作空间对应资源ID
                     * @return ResourceId 工作空间对应资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置工作空间对应资源ID
                     * @param _resourceId 工作空间对应资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自动续费标识
                     * @return RenewFlag 自动续费标识
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识
                     * @param _renewFlag 自动续费标识
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取工作空间关联的工作列表
                     * @return Tags 工作空间关联的工作列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置工作空间关联的工作列表
                     * @param _tags 工作空间关联的工作列表
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpiredTime 到期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置到期时间
                     * @param _expiredTime 到期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取工作空间所在位置
                     * @return Placement 工作空间所在位置
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置工作空间所在位置
                     * @param _placement 工作空间所在位置
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取工作空间的最新操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperation 工作空间的最新操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置工作空间的最新操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperation 工作空间的最新操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取工作空间的最新操作状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestOperationState 工作空间的最新操作状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置工作空间的最新操作状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestOperationState 工作空间的最新操作状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 工作空间类型
                     */
                    std::string m_spaceFamily;
                    bool m_spaceFamilyHasBeenSet;

                    /**
                     * 工作空间规格
                     */
                    std::string m_spaceType;
                    bool m_spaceTypeHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 工作空间状态。取值范围：<br><li>PENDING：表示创建中<br></li><li>LAUNCH_FAILED：表示创建失败<br></li><li>ONLINE：表示运行中<br></li><li>ARREARS：表示隔离中<br></li><li>TERMINATING：表示销毁中。<br></li>
                     */
                    std::string m_spaceState;
                    bool m_spaceStateHasBeenSet;

                    /**
                     * 工作空间计费模式
                     */
                    std::string m_spaceChargeType;
                    bool m_spaceChargeTypeHasBeenSet;

                    /**
                     * 工作空间对应资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自动续费标识
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 工作空间关联的工作列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 工作空间所在位置
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 工作空间的最新操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 工作空间的最新操作状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_SPACEINFO_H_
