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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 白名单
                */
                class Whitelist : public AbstractModel
                {
                public:
                    Whitelist();
                    ~Whitelist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取截止时间
                     * @return Ttl 截止时间
                     * 
                     */
                    std::string GetTtl() const;

                    /**
                     * 设置截止时间
                     * @param _ttl 截止时间
                     * 
                     */
                    void SetTtl(const std::string& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取白名单自增ID
                     * @return ID 白名单自增ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置白名单自增ID
                     * @param _iD 白名单自增ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取业务唯一标识
                     * @return WhitelistUin 业务唯一标识
                     * 
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置业务唯一标识
                     * @param _whitelistUin 业务唯一标识
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
                     * 获取创建者ID
                     * @return CreateUser 创建者ID
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置创建者ID
                     * @param _createUser 创建者ID
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取aid标识
                     * @return Aid aid标识
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置aid标识
                     * @param _aid aid标识
                     * 
                     */
                    void SetAid(const std::string& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     * 
                     */
                    bool AidHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 截止时间
                     */
                    std::string m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 白名单自增ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 业务唯一标识
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * 创建者ID
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * aid标识
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_
