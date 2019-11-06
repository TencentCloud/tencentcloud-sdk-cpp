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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 置放群组信息
                */
                class DeployGroupInfo : public AbstractModel
                {
                public:
                    DeployGroupInfo();
                    ~DeployGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置放群组 ID。
                     * @return DeployGroupId 置放群组 ID。
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置置放群组 ID。
                     * @param DeployGroupId 置放群组 ID。
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取置放群组名称。
                     * @return DeployGroupName 置放群组名称。
                     */
                    std::string GetDeployGroupName() const;

                    /**
                     * 设置置放群组名称。
                     * @param DeployGroupName 置放群组名称。
                     */
                    void SetDeployGroupName(const std::string& _deployGroupName);

                    /**
                     * 判断参数 DeployGroupName 是否已赋值
                     * @return DeployGroupName 是否已赋值
                     */
                    bool DeployGroupNameHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param CreateTime 创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取置放群组描述。
                     * @return Description 置放群组描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置置放群组描述。
                     * @param Description 置放群组描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取置放群组实例配额。
                     * @return Quota 置放群组实例配额。
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置置放群组实例配额。
                     * @param Quota 置放群组实例配额。
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * 置放群组 ID。
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * 置放群组名称。
                     */
                    std::string m_deployGroupName;
                    bool m_deployGroupNameHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 置放群组描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 置放群组实例配额。
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEPLOYGROUPINFO_H_
