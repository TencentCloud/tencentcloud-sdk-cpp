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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwDeploy.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * vpc 防火墙下单防火墙实例结构体
                */
                class VpcFwInstance : public AbstractModel
                {
                public:
                    VpcFwInstance();
                    ~VpcFwInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙实例名称
                     * @return Name 防火墙实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置防火墙实例名称
                     * @param _name 防火墙实例名称
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
                     * 获取私有网络模式下接入的VpcId列表；仅私有网络模式使用
                     * @return VpcIds 私有网络模式下接入的VpcId列表；仅私有网络模式使用
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置私有网络模式下接入的VpcId列表；仅私有网络模式使用
                     * @param _vpcIds 私有网络模式下接入的VpcId列表；仅私有网络模式使用
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取部署地域信息
                     * @return FwDeploy 部署地域信息
                     * 
                     */
                    FwDeploy GetFwDeploy() const;

                    /**
                     * 设置部署地域信息
                     * @param _fwDeploy 部署地域信息
                     * 
                     */
                    void SetFwDeploy(const FwDeploy& _fwDeploy);

                    /**
                     * 判断参数 FwDeploy 是否已赋值
                     * @return FwDeploy 是否已赋值
                     * 
                     */
                    bool FwDeployHasBeenSet() const;

                    /**
                     * 获取防火墙实例ID (编辑场景传)
                     * @return FwInsId 防火墙实例ID (编辑场景传)
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置防火墙实例ID (编辑场景传)
                     * @param _fwInsId 防火墙实例ID (编辑场景传)
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 私有网络模式下接入的VpcId列表；仅私有网络模式使用
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 部署地域信息
                     */
                    FwDeploy m_fwDeploy;
                    bool m_fwDeployHasBeenSet;

                    /**
                     * 防火墙实例ID (编辑场景传)
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_VPCFWINSTANCE_H_
