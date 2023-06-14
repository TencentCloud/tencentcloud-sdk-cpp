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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_ENVBASEINFO_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_ENVBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 环境基础信息
                */
                class EnvBaseInfo : public AbstractModel
                {
                public:
                    EnvBaseInfo();
                    ~EnvBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取套餐类型：Trial ｜ Standard ｜ Professional ｜ Enterprise
                     * @return PackageType 套餐类型：Trial ｜ Standard ｜ Professional ｜ Enterprise
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置套餐类型：Trial ｜ Standard ｜ Professional ｜ Enterprise
                     * @param _packageType 套餐类型：Trial ｜ Standard ｜ Professional ｜ Enterprise
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取VPC Id
                     * @return VpcId VPC Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC Id
                     * @param _vpcId VPC Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取环境创建时间
                     * @return CreateTime 环境创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置环境创建时间
                     * @param _createTime 环境创建时间
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
                     * 获取环境别名
                     * @return Alias 环境别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置环境别名
                     * @param _alias 环境别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取环境状态
                     * @return Status 环境状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置环境状态
                     * @param _status 环境状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取环境地域
                     * @return Region 环境地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置环境地域
                     * @param _region 环境地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取环境类型 tcbr ｜ run
                     * @return EnvType 环境类型 tcbr ｜ run
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型 tcbr ｜ run
                     * @param _envType 环境类型 tcbr ｜ run
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetIds 子网id
                     * 
                     */
                    std::string GetSubnetIds() const;

                    /**
                     * 设置子网id
                     * @param _subnetIds 子网id
                     * 
                     */
                    void SetSubnetIds(const std::string& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 套餐类型：Trial ｜ Standard ｜ Professional ｜ Enterprise
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * VPC Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 环境创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 环境别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 环境状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环境地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 环境类型 tcbr ｜ run
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_ENVBASEINFO_H_
