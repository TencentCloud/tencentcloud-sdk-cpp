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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
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
                     * 获取<p>截止时间</p>
                     * @return Ttl <p>截止时间</p>
                     * 
                     */
                    std::string GetTtl() const;

                    /**
                     * 设置<p>截止时间</p>
                     * @param _ttl <p>截止时间</p>
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
                     * 获取<p>白名单自增ID</p>
                     * @return ID <p>白名单自增ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>白名单自增ID</p>
                     * @param _iD <p>白名单自增ID</p>
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
                     * 获取<p>业务唯一标识</p>
                     * @return WhitelistUin <p>业务唯一标识</p>
                     * 
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置<p>业务唯一标识</p>
                     * @param _whitelistUin <p>业务唯一标识</p>
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
                     * 获取<p>创建者ID</p>
                     * @return CreateUser <p>创建者ID</p>
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置<p>创建者ID</p>
                     * @param _createUser <p>创建者ID</p>
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
                     * 获取<p>aid标识</p>
                     * @return Aid <p>aid标识</p>
                     * 
                     */
                    std::string GetAid() const;

                    /**
                     * 设置<p>aid标识</p>
                     * @param _aid <p>aid标识</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>白名单创建时刻。由原始time.Time同源生成带偏移RFC3339，旧CreateTime原值及十二小时显示格式保持；缺失原始时刻时省略本成员。</p>
                     * @return CreateDatetime <p>白名单创建时刻。由原始time.Time同源生成带偏移RFC3339，旧CreateTime原值及十二小时显示格式保持；缺失原始时刻时省略本成员。</p>
                     * 
                     */
                    std::string GetCreateDatetime() const;

                    /**
                     * 设置<p>白名单创建时刻。由原始time.Time同源生成带偏移RFC3339，旧CreateTime原值及十二小时显示格式保持；缺失原始时刻时省略本成员。</p>
                     * @param _createDatetime <p>白名单创建时刻。由原始time.Time同源生成带偏移RFC3339，旧CreateTime原值及十二小时显示格式保持；缺失原始时刻时省略本成员。</p>
                     * 
                     */
                    void SetCreateDatetime(const std::string& _createDatetime);

                    /**
                     * 判断参数 CreateDatetime 是否已赋值
                     * @return CreateDatetime 是否已赋值
                     * 
                     */
                    bool CreateDatetimeHasBeenSet() const;

                private:

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>截止时间</p>
                     */
                    std::string m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * <p>白名单自增ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>业务唯一标识</p>
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * <p>创建者ID</p>
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * <p>aid标识</p>
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>白名单创建时刻。由原始time.Time同源生成带偏移RFC3339，旧CreateTime原值及十二小时显示格式保持；缺失原始时刻时省略本成员。</p>
                     */
                    std::string m_createDatetime;
                    bool m_createDatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_WHITELIST_H_
