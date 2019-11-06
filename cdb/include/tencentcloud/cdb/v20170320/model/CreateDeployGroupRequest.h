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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDeployGroup请求参数结构体
                */
                class CreateDeployGroupRequest : public AbstractModel
                {
                public:
                    CreateDeployGroupRequest();
                    ~CreateDeployGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取置放群组名称，最长不能超过60个字符。
                     * @return DeployGroupName 置放群组名称，最长不能超过60个字符。
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置置放群组名称，最长不能超过60个字符。
                     * @param DeployGroupName 置放群组名称，最长不能超过60个字符。
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取置放群组描述，最长不能超过200个字符。
                     * @return Description 置放群组描述，最长不能超过200个字符。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置置放群组描述，最长不能超过200个字符。
                     * @param Description 置放群组描述，最长不能超过200个字符。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 置放群组名称，最长不能超过60个字符。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 置放群组描述，最长不能超过200个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDEPLOYGROUPREQUEST_H_
