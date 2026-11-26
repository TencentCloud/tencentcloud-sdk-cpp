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
                     * 获取<p>实例ID：taw-123</p>
                     * @return InstanceID <p>实例ID：taw-123</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID：taw-123</p>
                     * @param _instanceID <p>实例ID：taw-123</p>
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
                     * 获取<p>备注（暂未作字节数限制）</p>
                     * @return Remark <p>备注（暂未作字节数限制）</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注（暂未作字节数限制）</p>
                     * @param _remark <p>备注（暂未作字节数限制）</p>
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
                     * 获取<p>uin：业务方标识</p>
                     * @return WhitelistUin <p>uin：业务方标识</p>
                     * 
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置<p>uin：业务方标识</p>
                     * @param _whitelistUin <p>uin：业务方标识</p>
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
                     * 获取<p>业务方标识</p>
                     * @return Aid <p>业务方标识</p>
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置<p>业务方标识</p>
                     * @param _aid <p>业务方标识</p>
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
                     * <p>实例ID：taw-123</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>备注（暂未作字节数限制）</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>uin：业务方标识</p>
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * <p>业务方标识</p>
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_
