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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/FwCidrInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyNatFwReSelect请求参数结构体
                */
                class ModifyNatFwReSelectRequest : public AbstractModel
                {
                public:
                    ModifyNatFwReSelectRequest();
                    ~ModifyNatFwReSelectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模式 1：接入模式；0：新增模式
                     * @return Mode 模式 1：接入模式；0：新增模式
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置模式 1：接入模式；0：新增模式
                     * @param _mode 模式 1：接入模式；0：新增模式
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取防火墙实例id
                     * @return CfwInstance 防火墙实例id
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置防火墙实例id
                     * @param _cfwInstance 防火墙实例id
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。
                     * @return NatGwList 接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。
                     * 
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。
                     * @param _natGwList 接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。
                     * 
                     */
                    void SetNatGwList(const std::vector<std::string>& _natGwList);

                    /**
                     * 判断参数 NatGwList 是否已赋值
                     * @return NatGwList 是否已赋值
                     * 
                     */
                    bool NatGwListHasBeenSet() const;

                    /**
                     * 获取新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。
                     * @return VpcList 新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。
                     * @param _vpcList 新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。
                     * 
                     */
                    void SetVpcList(const std::vector<std::string>& _vpcList);

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取指定防火墙使用网段信息
                     * @return FwCidrInfo 指定防火墙使用网段信息
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置指定防火墙使用网段信息
                     * @param _fwCidrInfo 指定防火墙使用网段信息
                     * 
                     */
                    void SetFwCidrInfo(const FwCidrInfo& _fwCidrInfo);

                    /**
                     * 判断参数 FwCidrInfo 是否已赋值
                     * @return FwCidrInfo 是否已赋值
                     * 
                     */
                    bool FwCidrInfoHasBeenSet() const;

                private:

                    /**
                     * 模式 1：接入模式；0：新增模式
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 防火墙实例id
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * 接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

                    /**
                     * 新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 指定防火墙使用网段信息
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_
