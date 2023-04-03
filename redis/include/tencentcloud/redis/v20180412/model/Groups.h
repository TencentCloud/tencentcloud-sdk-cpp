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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/Instances.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 复制组信息
                */
                class Groups : public AbstractModel
                {
                public:
                    Groups();
                    ~Groups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户AppID
                     * @return AppId 用户AppID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppID
                     * @param AppId 用户AppID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取地域ID 。
- 1：广州 
- 4：上海 
- 5：中国香港 
- 6：多伦多 
- 7：上海金融 
- 8：北京 
- 9：新加坡
- 11：深圳金融
- 15：美西（硅谷）
- 16：成都 
- 17：德国 
- 18：韩国 
- 19：重庆 
- 21：印度 
- 22：美东（弗吉尼亚）
- 23：泰国 
- 24：俄罗斯 
- 25：日本
                     * @return RegionId 地域ID 。
- 1：广州 
- 4：上海 
- 5：中国香港 
- 6：多伦多 
- 7：上海金融 
- 8：北京 
- 9：新加坡
- 11：深圳金融
- 15：美西（硅谷）
- 16：成都 
- 17：德国 
- 18：韩国 
- 19：重庆 
- 21：印度 
- 22：美东（弗吉尼亚）
- 23：泰国 
- 24：俄罗斯 
- 25：日本
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID 。
- 1：广州 
- 4：上海 
- 5：中国香港 
- 6：多伦多 
- 7：上海金融 
- 8：北京 
- 9：新加坡
- 11：深圳金融
- 15：美西（硅谷）
- 16：成都 
- 17：德国 
- 18：韩国 
- 19：重庆 
- 21：印度 
- 22：美东（弗吉尼亚）
- 23：泰国 
- 24：俄罗斯 
- 25：日本
                     * @param RegionId 地域ID 。
- 1：广州 
- 4：上海 
- 5：中国香港 
- 6：多伦多 
- 7：上海金融 
- 8：北京 
- 9：新加坡
- 11：深圳金融
- 15：美西（硅谷）
- 16：成都 
- 17：德国 
- 18：韩国 
- 19：重庆 
- 21：印度 
- 22：美东（弗吉尼亚）
- 23：泰国 
- 24：俄罗斯 
- 25：日本
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取复制组 ID。
                     * @return GroupId 复制组 ID。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置复制组 ID。
                     * @param GroupId 复制组 ID。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取复制组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 复制组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置复制组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 复制组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取复制组状态。
- 37：绑定复制组中。
- 38：复制组重连中。
- 51：解绑复制组中。
- 52：复制组实例切主中。
- 53：角色变更中。
                     * @return Status 复制组状态。
- 37：绑定复制组中。
- 38：复制组重连中。
- 51：解绑复制组中。
- 52：复制组实例切主中。
- 53：角色变更中。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置复制组状态。
- 37：绑定复制组中。
- 38：复制组重连中。
- 51：解绑复制组中。
- 52：复制组实例切主中。
- 53：角色变更中。
                     * @param Status 复制组状态。
- 37：绑定复制组中。
- 38：复制组重连中。
- 51：解绑复制组中。
- 52：复制组实例切主中。
- 53：角色变更中。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取复制组数量。
                     * @return InstanceCount 复制组数量。
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置复制组数量。
                     * @param InstanceCount 复制组数量。
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取复制组中的实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instances 复制组中的实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Instances> GetInstances() const;

                    /**
                     * 设置复制组中的实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Instances 复制组中的实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstances(const std::vector<Instances>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取备注信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 用户AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域ID 。
- 1：广州 
- 4：上海 
- 5：中国香港 
- 6：多伦多 
- 7：上海金融 
- 8：北京 
- 9：新加坡
- 11：深圳金融
- 15：美西（硅谷）
- 16：成都 
- 17：德国 
- 18：韩国 
- 19：重庆 
- 21：印度 
- 22：美东（弗吉尼亚）
- 23：泰国 
- 24：俄罗斯 
- 25：日本
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 复制组 ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 复制组名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 复制组状态。
- 37：绑定复制组中。
- 38：复制组重连中。
- 51：解绑复制组中。
- 52：复制组实例切主中。
- 53：角色变更中。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 复制组数量。
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 复制组中的实例信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Instances> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 备注信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_GROUPS_H_
