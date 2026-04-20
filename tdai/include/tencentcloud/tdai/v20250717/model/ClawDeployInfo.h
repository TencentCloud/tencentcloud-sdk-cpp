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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWDEPLOYINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWDEPLOYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * databaseClaw实例部署详情
                */
                class ClawDeployInfo : public AbstractModel
                {
                public:
                    ClawDeployInfo();
                    ~ClawDeployInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>无</p>
                     * @return UserVpcId <p>无</p>
                     * 
                     */
                    std::string GetUserVpcId() const;

                    /**
                     * 设置<p>无</p>
                     * @param _userVpcId <p>无</p>
                     * 
                     */
                    void SetUserVpcId(const std::string& _userVpcId);

                    /**
                     * 判断参数 UserVpcId 是否已赋值
                     * @return UserVpcId 是否已赋值
                     * 
                     */
                    bool UserVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return UserSubnetId <p>无</p>
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置<p>无</p>
                     * @param _userSubnetId <p>无</p>
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>无</p>
                     * @return UserVpcRegion <p>无</p>
                     * 
                     */
                    std::string GetUserVpcRegion() const;

                    /**
                     * 设置<p>无</p>
                     * @param _userVpcRegion <p>无</p>
                     * 
                     */
                    void SetUserVpcRegion(const std::string& _userVpcRegion);

                    /**
                     * 判断参数 UserVpcRegion 是否已赋值
                     * @return UserVpcRegion 是否已赋值
                     * 
                     */
                    bool UserVpcRegionHasBeenSet() const;

                private:

                    /**
                     * <p>无</p>
                     */
                    std::string m_userVpcId;
                    bool m_userVpcIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * <p>无</p>
                     */
                    std::string m_userVpcRegion;
                    bool m_userVpcRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CLAWDEPLOYINFO_H_
