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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTORGROUP_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTORGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 探测组
                */
                class DetectorGroup : public AbstractModel
                {
                public:
                    DetectorGroup();
                    ~DetectorGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线路组id GroupLineId
                     * @return Gid 线路组id GroupLineId
                     * 
                     */
                    uint64_t GetGid() const;

                    /**
                     * 设置线路组id GroupLineId
                     * @param _gid 线路组id GroupLineId
                     * 
                     */
                    void SetGid(const uint64_t& _gid);

                    /**
                     * 判断参数 Gid 是否已赋值
                     * @return Gid 是否已赋值
                     * 
                     */
                    bool GidHasBeenSet() const;

                    /**
                     * 获取bgp, international, isp
                     * @return GroupType bgp, international, isp
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置bgp, international, isp
                     * @param _groupType bgp, international, isp
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取组名
                     * @return GroupName 组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置组名
                     * @param _groupName 组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取ipv4, ipv6
                     * @return InternetFamily ipv4, ipv6
                     * 
                     */
                    std::string GetInternetFamily() const;

                    /**
                     * 设置ipv4, ipv6
                     * @param _internetFamily ipv4, ipv6
                     * 
                     */
                    void SetInternetFamily(const std::string& _internetFamily);

                    /**
                     * 判断参数 InternetFamily 是否已赋值
                     * @return InternetFamily 是否已赋值
                     * 
                     */
                    bool InternetFamilyHasBeenSet() const;

                    /**
                     * 获取支持的套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageSet 支持的套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPackageSet() const;

                    /**
                     * 设置支持的套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageSet 支持的套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageSet(const std::vector<std::string>& _packageSet);

                    /**
                     * 判断参数 PackageSet 是否已赋值
                     * @return PackageSet 是否已赋值
                     * 
                     */
                    bool PackageSetHasBeenSet() const;

                private:

                    /**
                     * 线路组id GroupLineId
                     */
                    uint64_t m_gid;
                    bool m_gidHasBeenSet;

                    /**
                     * bgp, international, isp
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * ipv4, ipv6
                     */
                    std::string m_internetFamily;
                    bool m_internetFamilyHasBeenSet;

                    /**
                     * 支持的套餐类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_packageSet;
                    bool m_packageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DETECTORGROUP_H_
