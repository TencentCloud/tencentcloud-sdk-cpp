/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>模式 1：接入模式；0：新增模式</p>
                     * @return Mode <p>模式 1：接入模式；0：新增模式</p>
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置<p>模式 1：接入模式；0：新增模式</p>
                     * @param _mode <p>模式 1：接入模式；0：新增模式</p>
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
                     * 获取<p>防火墙实例id</p>
                     * @return CfwInstance <p>防火墙实例id</p>
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置<p>防火墙实例id</p>
                     * @param _cfwInstance <p>防火墙实例id</p>
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
                     * 获取<p>接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。</p>
                     * @return NatGwList <p>接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。</p>
                     * 
                     */
                    std::vector<std::string> GetNatGwList() const;

                    /**
                     * 设置<p>接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。</p>
                     * @param _natGwList <p>接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。</p>
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
                     * 获取<p>新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。</p>
                     * @return VpcList <p>新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。</p>
                     * 
                     */
                    std::vector<std::string> GetVpcList() const;

                    /**
                     * 设置<p>新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。</p>
                     * @param _vpcList <p>新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。</p>
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
                     * 获取<p>指定防火墙使用网段信息</p>
                     * @return FwCidrInfo <p>指定防火墙使用网段信息</p>
                     * 
                     */
                    FwCidrInfo GetFwCidrInfo() const;

                    /**
                     * 设置<p>指定防火墙使用网段信息</p>
                     * @param _fwCidrInfo <p>指定防火墙使用网段信息</p>
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
                     * <p>模式 1：接入模式；0：新增模式</p>
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>防火墙实例id</p>
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * <p>接入模式重新接入的nat网关列表，其中NatGwList和VpcList只能传递一个。</p>
                     */
                    std::vector<std::string> m_natGwList;
                    bool m_natGwListHasBeenSet;

                    /**
                     * <p>新增模式重新接入的vpc列表，其中NatGwList和NatgwList只能传递一个。</p>
                     */
                    std::vector<std::string> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * <p>指定防火墙使用网段信息</p>
                     */
                    FwCidrInfo m_fwCidrInfo;
                    bool m_fwCidrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWRESELECTREQUEST_H_
