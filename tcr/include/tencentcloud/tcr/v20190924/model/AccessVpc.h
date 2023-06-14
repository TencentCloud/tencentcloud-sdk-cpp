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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_ACCESSVPC_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_ACCESSVPC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 内网接入信息
                */
                class AccessVpc : public AbstractModel
                {
                public:
                    AccessVpc();
                    ~AccessVpc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vpc的Id
                     * @return VpcId Vpc的Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc的Id
                     * @param _vpcId Vpc的Id
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
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取内网接入状态
                     * @return Status 内网接入状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置内网接入状态
                     * @param _status 内网接入状态
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
                     * 获取内网接入Ip
                     * @return AccessIp 内网接入Ip
                     * 
                     */
                    std::string GetAccessIp() const;

                    /**
                     * 设置内网接入Ip
                     * @param _accessIp 内网接入Ip
                     * 
                     */
                    void SetAccessIp(const std::string& _accessIp);

                    /**
                     * 判断参数 AccessIp 是否已赋值
                     * @return AccessIp 是否已赋值
                     * 
                     */
                    bool AccessIpHasBeenSet() const;

                private:

                    /**
                     * Vpc的Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网接入状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 内网接入Ip
                     */
                    std::string m_accessIp;
                    bool m_accessIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_ACCESSVPC_H_
