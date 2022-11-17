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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 部署合约
                */
                class Contract : public AbstractModel
                {
                public:
                    Contract();
                    ~Contract() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名
                     * @return ApplyName 应用名
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置应用名
                     * @param ApplyName 应用名
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取合约状态 true:已启用 false:未启用
                     * @return Enable 合约状态 true:已启用 false:未启用
                     */
                    bool GetEnable() const;

                    /**
                     * 设置合约状态 true:已启用 false:未启用
                     * @param Enable 合约状态 true:已启用 false:未启用
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取合约CNS地址
                     * @return Hash 合约CNS地址
                     */
                    std::string GetHash() const;

                    /**
                     * 设置合约CNS地址
                     * @param Hash 合约CNS地址
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取合约CNS地址脱敏
                     * @return HashShow 合约CNS地址脱敏
                     */
                    std::string GetHashShow() const;

                    /**
                     * 设置合约CNS地址脱敏
                     * @param HashShow 合约CNS地址脱敏
                     */
                    void SetHashShow(const std::string& _hashShow);

                    /**
                     * 判断参数 HashShow 是否已赋值
                     * @return HashShow 是否已赋值
                     */
                    bool HashShowHasBeenSet() const;

                    /**
                     * 获取部署机构DID
                     * @return WeId 部署机构DID
                     */
                    std::string GetWeId() const;

                    /**
                     * 设置部署机构DID
                     * @param WeId 部署机构DID
                     */
                    void SetWeId(const std::string& _weId);

                    /**
                     * 判断参数 WeId 是否已赋值
                     * @return WeId 是否已赋值
                     */
                    bool WeIdHasBeenSet() const;

                    /**
                     * 获取部署机构名称
                     * @return DeployName 部署机构名称
                     */
                    std::string GetDeployName() const;

                    /**
                     * 设置部署机构名称
                     * @param DeployName 部署机构名称
                     */
                    void SetDeployName(const std::string& _deployName);

                    /**
                     * 判断参数 DeployName 是否已赋值
                     * @return DeployName 是否已赋值
                     */
                    bool DeployNameHasBeenSet() const;

                    /**
                     * 获取部署群组
                     * @return GroupId 部署群组
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署群组
                     * @param GroupId 部署群组
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署时间
                     * @return CreateTime 部署时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署时间
                     * @param CreateTime 部署时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 应用名
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * 合约状态 true:已启用 false:未启用
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 合约CNS地址
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * 合约CNS地址脱敏
                     */
                    std::string m_hashShow;
                    bool m_hashShowHasBeenSet;

                    /**
                     * 部署机构DID
                     */
                    std::string m_weId;
                    bool m_weIdHasBeenSet;

                    /**
                     * 部署机构名称
                     */
                    std::string m_deployName;
                    bool m_deployNameHasBeenSet;

                    /**
                     * 部署群组
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CONTRACT_H_
