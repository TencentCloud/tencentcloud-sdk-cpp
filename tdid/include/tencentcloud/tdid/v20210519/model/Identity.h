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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_IDENTITY_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_IDENTITY_H_

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
                * did详情
                */
                class Identity : public AbstractModel
                {
                public:
                    Identity();
                    ~Identity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账户标识符
                     * @return AccountIdentifier 账户标识符
                     * 
                     */
                    std::string GetAccountIdentifier() const;

                    /**
                     * 设置账户标识符
                     * @param _accountIdentifier 账户标识符
                     * 
                     */
                    void SetAccountIdentifier(const std::string& _accountIdentifier);

                    /**
                     * 判断参数 AccountIdentifier 是否已赋值
                     * @return AccountIdentifier 是否已赋值
                     * 
                     */
                    bool AccountIdentifierHasBeenSet() const;

                    /**
                     * 获取链ID
                     * @return ChainID 链ID
                     * 
                     */
                    std::string GetChainID() const;

                    /**
                     * 设置链ID
                     * @param _chainID 链ID
                     * 
                     */
                    void SetChainID(const std::string& _chainID);

                    /**
                     * 判断参数 ChainID 是否已赋值
                     * @return ChainID 是否已赋值
                     * 
                     */
                    bool ChainIDHasBeenSet() const;

                    /**
                     * 获取完整tdid
                     * @return Did 完整tdid
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置完整tdid
                     * @param _did 完整tdid
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取群组名称
                     * @return GroupName 群组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置群组名称
                     * @param _groupName 群组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 账户标识符
                     */
                    std::string m_accountIdentifier;
                    bool m_accountIdentifierHasBeenSet;

                    /**
                     * 链ID
                     */
                    std::string m_chainID;
                    bool m_chainIDHasBeenSet;

                    /**
                     * 完整tdid
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 群组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_IDENTITY_H_
