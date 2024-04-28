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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateWhitelist请求参数结构体
                */
                class CreateWhitelistRequest : public AbstractModel
                {
                public:
                    CreateWhitelistRequest();
                    ~CreateWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID：taw-123
                     * @return InstanceID 实例ID：taw-123
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID：taw-123
                     * @param _instanceID 实例ID：taw-123
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取备注（暂未作字节数限制）
                     * @return Remark 备注（暂未作字节数限制）
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注（暂未作字节数限制）
                     * @param _remark 备注（暂未作字节数限制）
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取uin：业务方标识
                     * @return WhitelistUin uin：业务方标识
                     * 
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置uin：业务方标识
                     * @param _whitelistUin uin：业务方标识
                     * 
                     */
                    void SetWhitelistUin(const std::string& _whitelistUin);

                    /**
                     * 判断参数 WhitelistUin 是否已赋值
                     * @return WhitelistUin 是否已赋值
                     * 
                     */
                    bool WhitelistUinHasBeenSet() const;

                    /**
                     * 获取业务方标识
                     * @return Aid 业务方标识
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置业务方标识
                     * @param _aid 业务方标识
                     * 
                     */
                    void SetAid(const std::string& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     * 
                     */
                    bool AidHasBeenSet() const;

                private:

                    /**
                     * 实例ID：taw-123
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 备注（暂未作字节数限制）
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * uin：业务方标识
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * 业务方标识
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_
