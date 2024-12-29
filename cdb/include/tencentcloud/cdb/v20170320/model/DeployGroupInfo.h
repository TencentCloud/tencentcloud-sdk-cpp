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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 置放群组信息
                */
                class DeployGroupInfo : public AbstractModel
                {
                public:
                    DeployGroupInfo();
                    ~DeployGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置放群组 ID。
                     * @return DeployGroupId 置放群组 ID。
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置置放群组 ID。
                     * @param _deployGroupId 置放群组 ID。
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取置放群组名称。
                     * @return DeployGroupName 置放群组名称。
                     * 
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置置放群组名称。
                     * @param _deployGroupName 置放群组名称。
                     * 
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     * 
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取置放群组实例配额，表示一个置放群组中可容纳的最大实例数目。
                     * @return Quota 置放群组实例配额，表示一个置放群组中可容纳的最大实例数目。
                     * 
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置置放群组实例配额，表示一个置放群组中可容纳的最大实例数目。
                     * @param _quota 置放群组实例配额，表示一个置放群组中可容纳的最大实例数目。
                     * 
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                    /**
                     * 获取置放群组亲和性策略，目前仅支持策略1，即在物理机纬度打散实例的分布。
                     * @return Affinity 置放群组亲和性策略，目前仅支持策略1，即在物理机纬度打散实例的分布。
                     * 
                     */
                    std::string GetAffinity() const;

                    /**
                     * 设置置放群组亲和性策略，目前仅支持策略1，即在物理机纬度打散实例的分布。
                     * @param _affinity 置放群组亲和性策略，目前仅支持策略1，即在物理机纬度打散实例的分布。
                     * 
                     */
                    void SetAffinity(const std::string& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取置放群组亲和性策略1中，同台物理机上同个置放群组实例的限制个数。
                     * @return LimitNum 置放群组亲和性策略1中，同台物理机上同个置放群组实例的限制个数。
                     * 
                     */
                    int64_t GetLimitNum() const;

                    /**
                     * 设置置放群组亲和性策略1中，同台物理机上同个置放群组实例的限制个数。
                     * @param _limitNum 置放群组亲和性策略1中，同台物理机上同个置放群组实例的限制个数。
                     * 
                     */
                    void SetLimitNum(const int64_t& _limitNum);

                    /**
                     * 判断参数 LimitNum 是否已赋值
                     * @return LimitNum 是否已赋值
                     * 
                     */
                    bool LimitNumHasBeenSet() const;

                    /**
                     * 获取置放群组详细信息。
                     * @return Description 置放群组详细信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置置放群组详细信息。
                     * @param _description 置放群组详细信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取置放群组物理机型属性。
                     * @return DevClass 置放群组物理机型属性。
                     * 
                     */
                    std::string GetDevClass() const;

                    /**
                     * 设置置放群组物理机型属性。
                     * @param _devClass 置放群组物理机型属性。
                     * 
                     */
                    void SetDevClass(const std::string& _devClass);

                    /**
                     * 判断参数 DevClass 是否已赋值
                     * @return DevClass 是否已赋值
                     * 
                     */
                    bool DevClassHasBeenSet() const;

                private:

                    /**
                     * 置放群组 ID。
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 置放群组名称。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 置放群组实例配额，表示一个置放群组中可容纳的最大实例数目。
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                    /**
                     * 置放群组亲和性策略，目前仅支持策略1，即在物理机纬度打散实例的分布。
                     */
                    std::string m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * 置放群组亲和性策略1中，同台物理机上同个置放群组实例的限制个数。
                     */
                    int64_t m_limitNum;
                    bool m_limitNumHasBeenSet;

                    /**
                     * 置放群组详细信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 置放群组物理机型属性。
                     */
                    std::string m_devClass;
                    bool m_devClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
