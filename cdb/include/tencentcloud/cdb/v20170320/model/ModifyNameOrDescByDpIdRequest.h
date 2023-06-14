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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_

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
                * ModifyNameOrDescByDpId请求参数结构体
                */
                class ModifyNameOrDescByDpIdRequest : public AbstractModel
                {
                public:
                    ModifyNameOrDescByDpIdRequest();
                    ~ModifyNameOrDescByDpIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取置放群组 ID。
                     * @return DeployGroupId 置放群组 ID。
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置置放群组 ID。
                     * @param _deployGroupId 置放群组 ID。
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取置放群组名称，最长不能超过60个字符。置放群组名和置放群组描述不能都为空。
                     * @return DeployGroupName 置放群组名称，最长不能超过60个字符。置放群组名和置放群组描述不能都为空。
                     * 
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置置放群组名称，最长不能超过60个字符。置放群组名和置放群组描述不能都为空。
                     * @param _deployGroupName 置放群组名称，最长不能超过60个字符。置放群组名和置放群组描述不能都为空。
                     * 
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     * 
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取置放群组描述，最长不能超过200个字符。置放群组名和置放群组描述不能都为空。
                     * @return Description 置放群组描述，最长不能超过200个字符。置放群组名和置放群组描述不能都为空。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置置放群组描述，最长不能超过200个字符。置放群组名和置放群组描述不能都为空。
                     * @param _description 置放群组描述，最长不能超过200个字符。置放群组名和置放群组描述不能都为空。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 置放群组 ID。
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 置放群组名称，最长不能超过60个字符。置放群组名和置放群组描述不能都为空。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 置放群组描述，最长不能超过200个字符。置放群组名和置放群组描述不能都为空。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYNAMEORDESCBYDPIDREQUEST_H_
