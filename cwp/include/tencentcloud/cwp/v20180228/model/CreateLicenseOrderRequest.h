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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
#include <tencentcloud/cwp/v20180228/model/OrderModifyObject.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateLicenseOrder请求参数结构体
                */
                class CreateLicenseOrderRequest : public AbstractModel
                {
                public:
                    CreateLicenseOrderRequest();
                    ~CreateLicenseOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签数组, 空则表示不需要绑定标签
                     * @return Tags 标签数组, 空则表示不需要绑定标签
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签数组, 空则表示不需要绑定标签
                     * @param _tags 标签数组, 空则表示不需要绑定标签
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
默认为0
                     * @return LicenseType 授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
默认为0
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
默认为0
                     * @param _licenseType 授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
默认为0
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取授权数量 , 需要购买的数量.
默认为1
                     * @return LicenseNum 授权数量 , 需要购买的数量.
默认为1
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置授权数量 , 需要购买的数量.
默认为1
                     * @param _licenseNum 授权数量 , 需要购买的数量.
默认为1
                     * 
                     */
                    void SetLicenseNum(const uint64_t& _licenseNum);

                    /**
                     * 判断参数 LicenseNum 是否已赋值
                     * @return LicenseNum 是否已赋值
                     * 
                     */
                    bool LicenseNumHasBeenSet() const;

                    /**
                     * 获取购买订单地域,这里仅支持 1 广州,9 新加坡. 推荐选择广州. 新加坡地域为白名单用户购买.
默认为1
                     * @return RegionId 购买订单地域,这里仅支持 1 广州,9 新加坡. 推荐选择广州. 新加坡地域为白名单用户购买.
默认为1
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置购买订单地域,这里仅支持 1 广州,9 新加坡. 推荐选择广州. 新加坡地域为白名单用户购买.
默认为1
                     * @param _regionId 购买订单地域,这里仅支持 1 广州,9 新加坡. 推荐选择广州. 新加坡地域为白名单用户购买.
默认为1
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取项目ID .
默认为0
                     * @return ProjectId 项目ID .
默认为0
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID .
默认为0
                     * @param _projectId 项目ID .
默认为0
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取购买时间长度,默认1 , 可选值为1,2,3,4,5,6,7,8,9,10,11,12,24,36
该参数仅包年包月生效
                     * @return TimeSpan 购买时间长度,默认1 , 可选值为1,2,3,4,5,6,7,8,9,10,11,12,24,36
该参数仅包年包月生效
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时间长度,默认1 , 可选值为1,2,3,4,5,6,7,8,9,10,11,12,24,36
该参数仅包年包月生效
                     * @param _timeSpan 购买时间长度,默认1 , 可选值为1,2,3,4,5,6,7,8,9,10,11,12,24,36
该参数仅包年包月生效
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取是否自动续费, 默认不自动续费.
该参数仅包年包月生效
                     * @return AutoRenewFlag 是否自动续费, 默认不自动续费.
该参数仅包年包月生效
                     * 
                     */
                    bool GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费, 默认不自动续费.
该参数仅包年包月生效
                     * @param _autoRenewFlag 是否自动续费, 默认不自动续费.
该参数仅包年包月生效
                     * 
                     */
                    void SetAutoRenewFlag(const bool& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取该字段作废
                     * @return AutoProtectOpenConfig 该字段作废
                     * 
                     */
                    std::string GetAutoProtectOpenConfig() const;

                    /**
                     * 设置该字段作废
                     * @param _autoProtectOpenConfig 该字段作废
                     * 
                     */
                    void SetAutoProtectOpenConfig(const std::string& _autoProtectOpenConfig);

                    /**
                     * 判断参数 AutoProtectOpenConfig 是否已赋值
                     * @return AutoProtectOpenConfig 是否已赋值
                     * 
                     */
                    bool AutoProtectOpenConfigHasBeenSet() const;

                    /**
                     * 获取变配参数
                     * @return ModifyConfig 变配参数
                     * 
                     */
                    OrderModifyObject GetModifyConfig() const;

                    /**
                     * 设置变配参数
                     * @param _modifyConfig 变配参数
                     * 
                     */
                    void SetModifyConfig(const OrderModifyObject& _modifyConfig);

                    /**
                     * 判断参数 ModifyConfig 是否已赋值
                     * @return ModifyConfig 是否已赋值
                     * 
                     */
                    bool ModifyConfigHasBeenSet() const;

                private:

                    /**
                     * 标签数组, 空则表示不需要绑定标签
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 授权类型, 0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
默认为0
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 授权数量 , 需要购买的数量.
默认为1
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * 购买订单地域,这里仅支持 1 广州,9 新加坡. 推荐选择广州. 新加坡地域为白名单用户购买.
默认为1
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 项目ID .
默认为0
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 购买时间长度,默认1 , 可选值为1,2,3,4,5,6,7,8,9,10,11,12,24,36
该参数仅包年包月生效
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 是否自动续费, 默认不自动续费.
该参数仅包年包月生效
                     */
                    bool m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 该字段作废
                     */
                    std::string m_autoProtectOpenConfig;
                    bool m_autoProtectOpenConfigHasBeenSet;

                    /**
                     * 变配参数
                     */
                    OrderModifyObject m_modifyConfig;
                    bool m_modifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERREQUEST_H_
