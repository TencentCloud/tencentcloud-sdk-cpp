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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETSECURITYANALYSISSWITCHREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETSECURITYANALYSISSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetInstance.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAssetSecurityAnalysisSwitch请求参数结构体
                */
                class ModifyDspmAssetSecurityAnalysisSwitchRequest : public AbstractModel
                {
                public:
                    ModifyDspmAssetSecurityAnalysisSwitchRequest();
                    ~ModifyDspmAssetSecurityAnalysisSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例信息
                     * @return Instances 实例信息
                     * 
                     */
                    std::vector<DspmAssetInstance> GetInstances() const;

                    /**
                     * 设置实例信息
                     * @param _instances 实例信息
                     * 
                     */
                    void SetInstances(const std::vector<DspmAssetInstance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取开关。1-打开 0-关闭
                     * @return Enable 开关。1-打开 0-关闭
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开关。1-打开 0-关闭
                     * @param _enable 开关。1-打开 0-关闭
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 实例信息
                     */
                    std::vector<DspmAssetInstance> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 开关。1-打开 0-关闭
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETSECURITYANALYSISSWITCHREQUEST_H_
